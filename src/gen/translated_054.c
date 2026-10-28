#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_006d2b30 */
GEN_FRAME uint GEN_THISCALL F_006d2b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x67);
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3 GEN_EDX_ARG,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92a4));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x72dbe0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3 GEN_EDX_ARG,0,param_1);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_006d2c00 */
GEN_FRAME uint F_006d2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x4f6));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d2c50 */
GEN_FRAME uint F_006d2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (((byte)(uVar2 - 1) < 8) && ((byte)(uVar4 - 1) < 6)) {
    uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0x364 + ((uVar4 - 1 & 0xff) + (uVar2 - 1 & 0xff) * 0xc) * 4)));
  }
  else {
    uVar5 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar5);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d2ce0 */
GEN_FRAME uint F_006d2ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = (char)uVar3 - 1;
  if (bVar2 < 8) {
    uVar5 = *(undefined4 *)(iVar1 + 0x380 + (uint)bVar2 * 0x30);
  }
  else {
    uVar5 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar5);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d2d60 */
GEN_FRAME uint F_006d2d60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  puVar1 = (uint *)(iVar2 + 0x38);
  *puVar1 = *puVar1 | 4;
  *(char *)(iVar2 + 0x500) = (char)uVar3;
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d2dc0 */
GEN_FRAME uint F_006d2dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(undefined4 *)(*piVar2 + 0x4fc) = 7;
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d2e10 */
GEN_FRAME uint GEN_THISCALL F_006d2e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2e10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getKillBNPCNum",uVar2,&(*(uint *)&gen_args[1]),1,1);
  if (uVar2 != 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
  uVar2 = (*(uint *)&gen_args[1]);
  if (uVar3 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
  }
  F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  return uVar2;
}

/* ref: FUN_006d2e90 */
GEN_FRAME uint GEN_THISCALL F_006d2e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((int)this + 0x380);
  do {
    if (param_1 == *(*(int * PTR32 *)(gen_frame + 0x18))) {
      (*(int *)(gen_frame + 0x10)) = uVar3 + 1;
      uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
      uVar2 = F_00a02570(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getDropItemNum",uVar2,&(*(int *)(gen_frame + 0x10)),1,1);
      if (uVar2 == 0) {
        iVar1 = *(int *)((int)this + 0xf8);
        uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
        if (uVar2 != 0) {
          (*(uint *)(gen_frame + 0xc)) = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
        }
        F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc));
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 0xc;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_006d2f40 */
GEN_FRAME uint GEN_THISCALL F_006d2f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2f40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getKillNum",uVar2,&(*(uint *)&gen_args[1]),1,1);
  if (uVar2 != 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
  uVar2 = (*(uint *)&gen_args[1]);
  if (uVar3 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
  }
  F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  return uVar2;
}

/* ref: FUN_006d2fc0 */
GEN_FRAME uint GEN_THISCALL F_006d2fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  
  uVar6 = 0;
  uVar1 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getGameSequence",uVar1,1);
  if (uVar1 == 0) {
    iVar4 = *(int *)((int)this + 0xf8);
    uVar1 = F_00b9a9b0(*(undefined4 *)(iVar4 + 8),0xffffffff);
    if (uVar1 != 0) {
      uVar6 = F_00b9ab70(*(undefined4 *)(iVar4 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar4 + 8),0xfffffffe);
  }
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  else if (3 < (int)uVar6) {
    uVar6 = 3;
  }
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  if (1 < (int)uVar6) {
    piVar3 = (int *)((int)this + param_1 * 0x30 + 0x368);
    iVar2 = (uVar6 - 2 >> 1) + 1;
    local_8 = iVar2 * 2;
    do {
      iVar4 = iVar4 + piVar3[-1];
      iVar5 = iVar5 + *piVar3;
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (local_8 < (int)uVar6) {
    iVar2 = *((int *)GEN_TOP(((int)this + (local_8 + param_1 * 0xc) * 4 + 0x364)));
  }
  return iVar5 + iVar4 + iVar2;
}

/* ref: FUN_006d30a0 */
GEN_FRAME uint GEN_THISCALL F_006d30a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d30a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getTargetKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3120 */
GEN_FRAME uint GEN_THISCALL F_006d3120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d31a0 */
GEN_FRAME uint GEN_THISCALL F_006d31a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)((int)this + 0x1dc);
  uVar3 = 0;
  if (bVar1 == 0) {
    bVar1 = 1;
  }
  else if (3 < bVar1) {
    bVar1 = 3;
  }
  uVar5 = (uint)bVar1;
  iVar6 = 0;
  iVar7 = 0;
  if (1 < uVar5) {
    piVar4 = (int *)((int)this + (uint)(byte)param_1 * 0x30 + 0x368);
    iVar2 = (uVar5 - 2 >> 1) + 1;
    uVar3 = iVar2 * 2;
    do {
      iVar6 = iVar6 + piVar4[-1];
      iVar7 = iVar7 + *piVar4;
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  if (uVar5 <= uVar3) {
    return iVar7 + iVar6;
  }
  return iVar7 + iVar6 + *((int *)GEN_TOP(((int)this + (uVar3 + (uint)(byte)param_1 * 0xc) * 4 + 0x364)));
}

/* ref: FUN_006d3240 */
GEN_NOFRAME uint GEN_THISCALL F_006d3240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d3240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getEventSuccessNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d32b0 */
GEN_NOFRAME uint GEN_THISCALL F_006d32b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d32b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getEventItemNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3320 */
GEN_FRAME uint GEN_THISCALL F_006d3320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getDetectNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d33a0 */
GEN_NOFRAME uint GEN_THISCALL F_006d33a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d33a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getRoundPointNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3410 */
GEN_NOFRAME uint GEN_THISCALL F_006d3410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d3410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getRoundTargetNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3480 */
GEN_FRAME uint GEN_THISCALL F_006d3480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3500 */
GEN_FRAME uint GEN_THISCALL F_006d3500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getEventItemNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3580 */
GEN_FRAME uint GEN_THISCALL F_006d3580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3580u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getEventItemTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3600 */
GEN_FRAME uint GEN_THISCALL F_006d3600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3600u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3680 */
GEN_FRAME uint GEN_THISCALL F_006d3680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getKillTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3700 */
GEN_FRAME byte GEN_THISCALL F_006d3700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3700u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  char cVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  cVar3 = '\0';
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"getBossEntryIndex",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    cVar3 = '\0';
    if (uVar2 != 0) {
      uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
      cVar3 = (char)uVar2;
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return cVar3 - 1;
}

/* ref: FUN_006d3780 */
GEN_NOFRAME uint GEN_THISCALL F_006d3780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d3780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getKillNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d37f0 */
GEN_NOFRAME uint GEN_THISCALL F_006d37f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d37f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getTargetKillNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3860 */
GEN_NOFRAME uint GEN_THISCALL F_006d3860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d3860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c GEN_EDX_FWD);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"getEventItemNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d38d0 */
GEN_FRAME uint GEN_THISCALL F_006d38d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d38d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((byte)param_1 < 4) {
    return *(uint *)((int)this + (uint)(byte)param_1 * 4 + 0x360);
  }
  if ((byte)param_1 < 8) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x3d4) + (uint)(byte)((byte)param_1 - 4) * 4)));
  }
  return 0;
}

/* ref: FUN_006d3910 */
GEN_FRAME uint GEN_STDCALL F_006d3910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d3910u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = (uint)(*param_1 != 0);
  if (param_1[1] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 1;
    uVar2 = uVar2 + 1;
  }
  if (param_1[2] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 2;
    uVar2 = uVar2 + 1;
  }
  if (param_1[3] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 3;
    uVar2 = uVar2 + 1;
  }
  uVar1 = (param_2 & 0xffff) + (param_3 & 0xffff);
  uVar1 = uVar1 * 0x800 ^ uVar1;
  uVar2 = param_1[((uVar1 >> 8 ^ uVar1) % 1000) % uVar2];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006d39e0 */
GEN_FRAME byte GEN_THISCALL F_006d39e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d39e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x360);
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 4);
  uVar3 = 0;
  uVar1 = *(int *)((int)this + 0x3d8) - *(int *)((int)this + 0x3d4) >> 2;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3d4);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_006d3a40 */
GEN_FRAME byte GEN_THISCALL F_006d3a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *(byte *)(in_ecx + 0x1de);
  case 1: ;
    return *(byte *)(in_ecx + 0x1df);
  case 2: ;
    return *(byte *)(in_ecx + 0x1e0);
  case 3: ;
    return *(byte *)(in_ecx + 0x1e1);
  case 4: ;
    return *(byte *)(in_ecx + 0x1e2);
  case 5: ;
    return *(byte *)(in_ecx + 0x1e3);
  case 6: ;
    return *(byte *)(in_ecx + 0x1e4);
  case 7: ;
    return *(byte *)(in_ecx + 0x1e5);
  default: ;
    return 0;
  }
}

/* ref: FUN_006d3ad0 */
GEN_FRAME uint GEN_THISCALL F_006d3ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d3ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  uVar4 = *(int *)((int)this + 0x370) - 1;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    bVar1 = *(byte *)((int)this + 0x380);
    puVar10 = *(undefined1 * PTR32 *)((int)this + 0x2f8);
    *(uint *)(puVar10 + 0x60) = *(byte *)((int)this + 0x1e6) & 0x3f;
    *(uint *)(puVar10 + 100) = (uint)bVar1;
    *puVar10 = 1;
    *(undefined4 *)(puVar10 + 4) = 1;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0x18fc5;
    uVar14 = REFG(undefined4, 0x108cc50);
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    F_0042cc20(((undefined1 *)(gen_frame + 0x264)) GEN_EDX_ARG,uVar4,uVar14);
    F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x264)));
    F_0042c880(((undefined1 *)(gen_frame + 0x264)) GEN_EDX_ARG);
    bVar1 = *(byte *)((int)this + 0x1e6);
    uVar2 = *(undefined1 *)((int)this + 0x1e7);
    iVar7 = *(int *)((int)this + 0x2f8);
    *(undefined1 *)(iVar7 + 0x140) = 1;
    *(undefined4 *)(iVar7 + 0x144) = 2;
    *(uint *)(iVar7 + 0x1a0) = (uint)CONCAT11(bVar1 >> 6,uVar2);
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0x18fc8;
    uVar14 = REFG(undefined4, 0x108cc50);
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    F_0042cc20(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG,uVar4,uVar14);
    F_0042ccf0((undefined *)(iVar7 + 0x148) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x210)));
    F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
    uVar4 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x2f8)) / 0x140;
    if (2 < uVar4) {
      iVar7 = uVar4 - 2;
      iVar8 = 0x280;
      do {
        *((undefined1 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x2f8)))) = 0;
        iVar8 = iVar8 + 0x140;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      uVar4 = 0;
    }
    break;
  case 1: ;
    uVar4 = 0;
    uVar9 = 0;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)this + 0x360);
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
    do {
      iVar7 = *(*(int * PTR32 *)(gen_frame + 0x8));
      bVar1 = *(byte *)((int)this + uVar4 + 0x37c);
      if ((iVar7 != 0) && (bVar1 != 0)) {
        puVar10 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2f8) + (int)(*(int * PTR32 *)(gen_frame + 0x10)))));
        bVar3 = F_006d3a40(this GEN_EDX_ARG,uVar4);
        *(uint *)(puVar10 + 0x60) = (uint)bVar3;
        *puVar10 = 1;
        *(undefined4 *)(puVar10 + 4) = 1;
        *(uint *)(puVar10 + 100) = (uint)bVar1;
        uVar14 = REFG(undefined4, 0x108cc50);
        uVar9 = F_00463610(1,iVar7,0);
        F_0042cc20(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,uVar9,uVar14);
        F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
        uVar9 = (*(uint *)(gen_frame + 0xc)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 0x140);
        (*(uint *)(gen_frame + 0xc)) = uVar9;
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar4 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x2f8)) / 0x140;
    if (uVar9 < uVar4) {
      iVar8 = uVar9 * 0x140;
      iVar7 = uVar4 - uVar9;
      do {
        *((undefined1 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x2f8)))) = 0;
        iVar8 = iVar8 + 0x140;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      uVar4 = 0;
    }
    break;
  case 2: ;
    bVar1 = *(byte *)((int)this + 0x1e6);
    bVar3 = *(byte *)((int)this + 0x380);
    puVar10 = *(undefined1 * PTR32 *)((int)this + 0x2f8);
    *puVar10 = 1;
    *(undefined4 *)(puVar10 + 4) = 1;
    *(uint *)(puVar10 + 0x60) = bVar1 & 0x3f;
    *(uint *)(puVar10 + 100) = (uint)bVar3;
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0x18fc5;
    uVar14 = REFG(undefined4, 0x108cc50);
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    F_0042cc20(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG,uVar4,uVar14);
    F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x6c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x6c)) GEN_EDX_ARG);
    uVar9 = 1;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)this + 0x360);
    (*(uint *)(gen_frame + 0xc)) = 1;
    uVar4 = 0;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x140;
    do {
      iVar7 = *(*(int * PTR32 *)(gen_frame + 0x10));
      bVar1 = *(byte *)((int)this + uVar4 + 0x37c);
      if ((iVar7 != 0) && (bVar1 != 0)) {
        puVar10 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x2f8) + (int)(*(int * PTR32 *)(gen_frame + 0x8)))));
        bVar3 = F_006d3a40(this GEN_EDX_ARG,uVar4);
        *puVar10 = 1;
        *(undefined4 *)(puVar10 + 4) = 1;
        *(uint *)(puVar10 + 0x60) = (uint)bVar3;
        *(uint *)(puVar10 + 100) = (uint)bVar1;
        uVar14 = REFG(undefined4, 0x108cc50);
        uVar9 = F_00463610(1,iVar7,0);
        F_0042cc20(((undefined1 *)(gen_frame + 0x168)) GEN_EDX_ARG,uVar9,uVar14);
        F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x168)));
        F_0042c880(((undefined1 *)(gen_frame + 0x168)) GEN_EDX_ARG);
        uVar9 = (*(uint *)(gen_frame + 0xc)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0x140);
        (*(uint *)(gen_frame + 0xc)) = uVar9;
      }
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar4 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x2f8)) / 0x140;
    if (uVar9 < uVar4) {
      iVar8 = uVar9 * 0x140;
      iVar7 = uVar4 - uVar9;
      do {
        *((undefined1 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x2f8)))) = 0;
        iVar8 = iVar8 + 0x140;
        iVar7 = iVar7 - 1;
        uVar4 = 0;
      } while (iVar7 != 0);
    }
    break;
  case 3: ;
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    bVar1 = *(byte *)((int)this + 0x380);
    puVar10 = *(undefined1 * PTR32 *)((int)this + 0x2f8);
    bVar3 = *(byte *)((int)this + 0x1e6);
    *puVar10 = 1;
    *(undefined4 *)(puVar10 + 4) = 1;
    *(uint *)(puVar10 + 0x60) = bVar3 & 0x3f;
    *(uint *)(puVar10 + 100) = (uint)bVar1;
    if (*(char *)((int)this + 0x381) == '\x01') {
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0x18fc7;
      uVar14 = REFG(undefined4, 0x108cc50);
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
      uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
      F_0042cc20(((undefined1 *)(gen_frame + 0x1bc)) GEN_EDX_ARG,uVar4,uVar14);
      F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1bc)));
      puVar10 = ((undefined1 *)(gen_frame + 0x1bc));
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0x18fc6;
      uVar14 = REFG(undefined4, 0x108cc50);
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
      uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
      F_0042cc20(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG,uVar4,uVar14);
      F_0042ccf0(puVar10 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114)));
      puVar10 = ((undefined1 *)(gen_frame + 0x114));
    }
    F_0042c880(puVar10 GEN_EDX_ARG);
    bVar1 = *(byte *)((int)this + 0x1e6);
    uVar2 = *(undefined1 *)((int)this + 0x1e7);
    iVar7 = *(int *)((int)this + 0x2f8);
    *(undefined1 *)(iVar7 + 0x140) = 1;
    *(undefined4 *)(iVar7 + 0x144) = 2;
    *(uint *)(iVar7 + 0x1a0) = (uint)CONCAT11(bVar1 >> 6,uVar2);
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0x18fc8;
    uVar14 = REFG(undefined4, 0x108cc50);
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x18))(piVar5 GEN_EDX_ARG)));
    uVar4 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar11,uVar12,uVar13);
    F_0042cc20(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar4,uVar14);
    F_0042ccf0((undefined *)(iVar7 + 0x148) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    F_0042c880(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    uVar4 = (*(int *)((int)this + 0x2fc) - *(int *)((int)this + 0x2f8)) / 0x140;
    if (2 < uVar4) {
      iVar8 = 0x280;
      iVar7 = uVar4 - 2;
      do {
        *((undefined1 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x2f8)))) = 0;
        iVar8 = iVar8 + 0x140;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      uVar4 = 0;
    }
  }
  F_00a69750(&REFG(undefined4, 0x14b119c) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006d40d0 */
GEN_FRAME uint F_006d40d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d40d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  undefined4 uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (uVar2 - 1 < 8) {
    puVar5 = ((uint *)GEN_TOP((((uVar2 - 1) * 3 + 0x36) * 0x10 + iVar1)));
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar2 = puVar5[7];
      break;
    case 1: ;
      uVar2 = (uint)(ushort)puVar5[9];
      break;
    case 2: ;
      uVar2 = *puVar5;
      break;
    case 3: ;
      uVar2 = puVar5[8];
      break;
    case 4: ;
      uVar2 = (uint)*(byte *)((int)puVar5 + 0x26);
      break;
    case 5: ;
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
      if (5 < uVar2 - 1) goto switchD_006d4133_default;
      uVar2 = puVar5[uVar2];
      uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      break;
    case 6: ;
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
      if (7 < uVar2 - 1) goto switchD_006d4133_default;
      uVar2 = (uint)*(byte *)(uVar2 + 0x27 + (int)puVar5);
      uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      break;
    default: ;
      goto switchD_006d4133_default;
    }
    F_00b9ae00(uVar6,uVar2);
    F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 1;
  }
switchD_006d4133_default: ;
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf155 */
GEN_NOFRAME uint GEN_THISCALL F_006d41f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d41f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c GEN_EDX_FWD);
  F_00a024d0(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,"OnSynchronize",uVar1,uVar2);
  uVar1 = F_0042a990(this + 0x16c GEN_EDX_ARG);
  F_00ba0eb0(*(undefined4 *)(this + 0xf8),uVar1);
  uVar1 = F_00ba12d0(this + 0x4f0 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006d4240 */
GEN_FRAME ushort F_006d4240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d4240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (ushort)(byte)param_6 + (short)param_1;
  if ((char)param_2 != '\0') {
    uVar2 = F_00ab3300(0x13);
    uVar1 = uVar1 + *(short *)(uVar2 + 4);
  }
  if ((char)param_3 != '\0') {
    uVar2 = F_00ab3300(0x14);
    uVar1 = uVar1 + *(short *)(uVar2 + 4);
  }
  if (param_4 == 0x10) {
    if ((char)param_5 != '\x01') {
      return uVar1;
    }
  }
  else if (param_4 == 0x11) {
    if ((char)param_5 != '\x02') {
      return uVar1;
    }
  }
  else {
    if (param_4 != 0x12) {
      return uVar1;
    }
    if ((char)param_5 != '\x03') {
      return uVar1;
    }
  }
  uVar2 = F_00ab3300(0x15);
  return uVar1 + *(short *)(uVar2 + 4);
}

/* ref: FUN_006d42d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006d42d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d42d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  ushort * local_c;
  
  F_006c42a0(this GEN_EDX_FWD);
  *(uint *)this = param_2;
  local_c = (ushort *)(param_1 + 0x18);
  puVar1 = (uint *)(param_1 + 8);
  param_2 = 0;
  do {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      if (*(int *)((int)this + 0x2a8) != 0) {
        puVar6 = (uint *)((int)this + 0x68);
        uVar5 = 0;
        do {
          if (*(char *)((int)puVar6 - 2) == '\0') {
            uVar3 = *puVar6;
            if ((puVar6[3] & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = (undefined *)F_00a3a860(puVar6 - 2 GEN_EDX_ARG);
            uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
          }
          if (uVar3 == uVar4) {
            uVar4 = F_00a3a8a0(puVar6 - 2 GEN_EDX_ARG);
            F_00a35f80(puVar6 - 2 GEN_EDX_ARG,uVar4 + 1);
            goto LAB_006d4427;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 0x2a;
        } while (uVar5 < *(uint *)((int)this + 0x2a8));
      }
      uVar5 = 0;
      if (param_5 != 0) {
        do {
          if (*(uint *)(param_4 + uVar5 * 4) == uVar4) {
            pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2a8) * 0xa8 + 8 + (int)this)));
            puVar6 = *(uint * PTR32 *)(param_3 + uVar5 * 4);
            F_0042e430(pvVar2 GEN_EDX_ARG,(*puVar6 & 0xffffff) + (int)puVar6);
            F_00a35f80((undefined *)((int)pvVar2 + 0x58) GEN_EDX_ARG,(uint)*local_c);
            F_00a35ee0((int)pvVar2 + 0x58 GEN_EDX_ARG,uVar4,1);
            if (*(char *)(param_2 + 0x21 + param_1) == '\0') {
              *(byte *)((int)pvVar2 + 0x6c) = *(byte *)((int)pvVar2 + 0x6c) & 0xfe;
            }
            else {
              *(byte *)((int)pvVar2 + 0x6c) = *(byte *)((int)pvVar2 + 0x6c) | 1;
            }
            *(bool *)((int)pvVar2 + 0xa0) = 1 < *((uint *)GEN_TOP((*(int *)(param_3 + uVar5 * 4) + 0x28)));
            *(byte *)((int)pvVar2 + 0x99) = ~*(byte *)((int)pvVar2 + 0x6c) & 1;
            *(int *)((int)this + 0x2a8) = *(int *)((int)this + 0x2a8) + 1;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_5);
      }
    }
LAB_006d4427: ;
    local_c = local_c + 1;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
    if (3 < param_2) {
      param_1 = 0;
      if (*(int *)((int)this + 0x2a8) != 0) {
        pvVar2 = (undefined *)((int)this + 0x60);
        do {
          uVar4 = F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,pvVar2,0,1);
          if ((*(byte *)((int)pvVar2 + 0x14) & 1) == 0) {
            uVar5 = *(uint *)((int)pvVar2 + 0x44);
            uVar4 = uVar4 - uVar5;
            if (*(char *)((int)pvVar2 + 0x48) == '\0') {
              uVar4 = uVar4 + uVar5;
            }
            else if (uVar4 <= uVar5) {
              uVar4 = uVar5;
            }
          }
          uVar5 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
          if (uVar5 < uVar4) {
            uVar4 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
          }
          *(uint *)((int)pvVar2 + 0x4c) = uVar4;
          param_1 = param_1 + 1;
          pvVar2 = (undefined *)((int)pvVar2 + 0xa8);
        } while (param_1 < *(uint *)((int)this + 0x2a8));
      }
      return 0;
    }
  } while( true );
}

/* ref: Client::Game::Event::OpeningEventHandler::vf13 */
GEN_FRAME byte GEN_THISCALL F_006d44c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d44c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pOVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     ((iVar3 = REFG(int * PTR32, 0x1379694)[0x5d], iVar3 == 0 ||
      (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD), uVar4 != 1)))) {
    iVar3 = 0;
  }
  pOVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pOVar2 & 0xffffff);
  uVar4 = F_0042a990(iVar3 + 8 GEN_EDX_ARG);
  uVar5 = F_0042a990(this + 0x16c GEN_EDX_ARG);
  uVar4 = F_00a028c0(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,"OnPreWithinRange",uVar5,uVar4,uVar1,1);
  if (uVar4 == 0) {
    F_00a01d80(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  }
  return (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_006d4550 */
GEN_FRAME uint F_006d4550(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d45a0 */
GEN_FRAME uint F_006d45a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d45a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x1d8));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf13 */
GEN_FRAME byte GEN_THISCALL F_006d45f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d45f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if ((((*(char *)(param_1 + 0x11) == ')') && (REFG(int, 0x1379694) != 0)) &&
      (*(char *)(REFG(int, 0x1379694) + 0x188) != '\x02')) && (REFG(char, 0x14a7381) == '\0')) {
    bVar1 = F_006c4c80(REFG(int, 0x1379694),(uint)*(ushort *)(param_1 + 0x86));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006d4630 */
GEN_FRAME uint F_006d4630(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)*(byte *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d4680 */
GEN_FRAME uint F_006d4680(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  if (*piVar2 != 0) {
    uVar3 = **(undefined4 * PTR32 *)(*piVar2 + 0x1d4);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d46e0 */
GEN_FRAME uint F_006d46e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d46e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar2 = F_00ab3e50(uVar2);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(uVar2 + 0xc);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d4760 */
GEN_FRAME uint F_006d4760(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4760u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1dc));
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf154 */
GEN_FRAME uint GEN_THISCALL F_006d47c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d47c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar1 = param_1 & 0xff;
  uVar4 = 0;
  uVar3 = (uint)(byte)param_2;
  uVar2 = F_0042a990(this + 0x16c GEN_EDX_FWD);
  uVar3 = F_00a02640(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,"OnSequence",uVar2,uVar1,uVar3,uVar4);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)param_2);
  if ((byte)param_2 == 0xfe) {
    F_00ab6670(1);
    if (((byte)this[0x1e7] & 0x80) == 0) {
      F_006c6500(5);
      F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x83,0,0);
    }
    uVar3 = F_00a6ddf0(&REFG(undefined, 0x14ab380) GEN_EDX_ARG);
  }
  else if ((byte)param_2 < 0xfe) {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"OnSequence%03d",(uint)(byte)param_2);
    uVar3 = F_0042a990(this + 0x16c GEN_EDX_ARG);
    uVar3 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),uVar3,0);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_006d48b0 */
GEN_FRAME uint F_006d48b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d48b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ab6ad0(uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d48f0 */
GEN_FRAME uint GEN_THISCALL F_006d48f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d48f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  REFG(undefined4, 0x13238f8) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0;
  if (param_4 != 0) {
    do {
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x48));
      piVar4 = *(int * PTR32 *)(param_3 + (*(uint *)(gen_frame + 0x40)) * 4);
      if (*(short *)((int)piVar4 + 10) == 0xd) {
        uVar3 = 0;
        piVar4 = piVar4 + 0x3e;
        iVar5 = 0x10;
        do {
          if (*piVar4 != 0) {
            ((int *)(gen_frame + 0x0))[(int)(uVar3)] = *piVar4;
            uVar3 = uVar3 + 1;
          }
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 - 1;
        } while (iVar5 != 0);
        uVar6 = 0;
        (*(uint *)(gen_frame + 0x44)) = uVar3;
        if (uVar3 != 0) {
          do {
            piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar6)];
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4 GEN_EDX_FWD,param_1,param_2,1,0);
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
            if ((((char)uVar3 != '\0') && (((uint)piVar4[0xe] >> 1 & 1) != 0)) &&
               (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,param_2), (char)uVar3 != '\0')) {
              uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4 GEN_EDX_ARG,param_1,param_2,1,0);
              if ((uVar3 == 0) || (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,uVar3), bVar2 != 0)) {
                (&REFG(undefined4, 0x1323878))[(int)(REFG(undefined4, 0x13238f8))] = piVar4;
                REFG(undefined4, 0x13238f8) = REFG(undefined4, 0x13238f8) + 1;
              }
              else if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x720) == 0) {
                *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x720) = uVar3;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (*(uint *)(gen_frame + 0x44)));
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        if ((((char)uVar3 != '\0') && (((uint)piVar4[0xe] >> 1 & 1) != 0)) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,param_2), (char)uVar3 != '\0')) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4 GEN_EDX_ARG,param_1,param_2,1,0);
          if ((uVar3 == 0) || (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,uVar3), bVar2 != 0)) {
            (&REFG(undefined4, 0x1323878))[(int)(REFG(undefined4, 0x13238f8))] = piVar4;
            REFG(undefined4, 0x13238f8) = REFG(undefined4, 0x13238f8) + 1;
          }
          else if (*(int *)((int)pvVar1 + 0x720) == 0) {
            *(uint *)((int)pvVar1 + 0x720) = uVar3;
          }
        }
      }
      uVar3 = REFG(undefined4, 0x13238f8);
    } while ((REFG(undefined4, 0x13238f8) != 0x20) && (uVar6 = (*(uint *)(gen_frame + 0x40)) + 1, (*(uint *)(gen_frame + 0x40)) = uVar6, uVar6 < param_4));
  }
  REFG(undefined4, 0x13238f8) = uVar3;
  return uVar3;
}

/* ref: FUN_006d4a90 */
GEN_FRAME byte GEN_THISCALL F_006d4a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d4a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((((REFG(int, 0x13238f8) == 0) && (*(int *)((int)this + 0x238) == 0)) &&
      (*(int *)((int)this + 0x224) == 0)) && (*(int *)((int)this + 0x738) == 0)) {
    uVar2 = F_00a51200(0x42,0,0,0,0);
    if ((char)uVar2 != '\0') {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x210))(param_1 GEN_EDX_ARG,param_2,param_2,0x14,0);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1bc))(param_1 GEN_EDX_ARG,param_2,param_2,0x14,0);
      iVar1 = param_1[2];
      uVar4 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
      *(int *)((int)this + 0x240) = (int)uVar4;
      *(int *)((int)this + 0x238) = iVar1;
      *(char *)((int)this + 0x250) = (char)uVar3;
      *(int *)((int)this + 0x244) = (int)((ulonglong)uVar4 >> 0x20);
      *(undefined1 *)((int)this + 0x248) = 0x14;
      *(undefined4 *)((int)this + 0x24c) = 0;
      *(uint *)((int)this + 0x254) = uVar2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006d4b60 */
GEN_FRAME uint GEN_STDCALL F_006d4b60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short sVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  uVar2 = param_1 >> 0x10;
  sVar1 = (short)(param_1 >> 0x10);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    puVar3 = (undefined4 *)F_00ab3d50(10);
    uVar2 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xd8))
                        (piVar4 GEN_EDX_ARG,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,
                         (int)*(char *)(puVar3 + 1));
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),REFG(undefined1, 0x14b4ee1));
    if (((REFG(undefined1, 0x14b4ee1) & 4) != 0) && ((REFG(undefined1, 0x14b4ee1) & 0x10) == 0)) {
      uVar2 = F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x2c,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006d4be0 */
GEN_NOFRAME uint GEN_STDCALL F_006d4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d4be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  (*(undefined1 *)(gen_frame + 0x40)) = 0;
  (*(undefined2 *)(gen_frame + 0x42)) = 0;
  if ((char)param_4 == '\0') {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
  }
  (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)param_5;
  uVar1 = F_00aa0000(param_1 GEN_EDX_ARG,param_2,param_3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf113 */
GEN_NOFRAME uint GEN_THISCALL F_006d4c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d4c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  float * pfVar10;
  float * pfVar11;
  float fVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar7 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar6);
  iVar4 = *piVar7;
  uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),2);
  (*(uint *)(gen_frame + 0x50)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar4 + 0x60);
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)0x0;
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  pfVar10 = (*(float * PTR32 *)(gen_frame + 0x54));
  if ((2 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3), pfVar10 = (*(float * PTR32 *)(gen_frame + 0x54)), bVar5 == 0)) {
    uVar8 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
    puVar9 = (undefined4 *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),3,uVar8);
    (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)*puVar9;
    pfVar10 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar4 + 4) GEN_EDX_ARG);
    pfVar11 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x54))[1]))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar11 - (float10)*pfVar10);
    fVar12 = pfVar11[1];
    fVar1 = pfVar10[1];
    (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar12 - (float10)fVar1);
    fVar2 = pfVar11[2];
    fVar3 = pfVar10[2];
    (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar11 - (float10)*pfVar10);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar12 - (float10)fVar1);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar12 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x5c)) = fVar12;
    pfVar10 = &(*(float *)(gen_frame + 0x5c));
  }
  uVar8 = (*(uint *)(gen_frame + 0x58));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x58)) = uVar8 & 0xffffff00;
  if (((3 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,4), bVar5 == 0)) &&
     (uVar8 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4), uVar8 != 0)) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x58)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x58)), 1, 3),1);
  }
  (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x54)) + 0)) = 1;
  (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x54)), 1, 3),1)));
  if (((4 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,5), bVar5 == 0)) &&
     (uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),5), pfVar11 = (*(float * PTR32 *)(gen_frame + 0x54)), uVar6 != 0)) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x54)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)((uint)pfVar11 & 0xffffff00);
  }
  F_006d4be0((*(undefined4 *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x50)),pfVar10,(*(float * PTR32 *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x58)));
  F_00a02240(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf129 */
GEN_NOFRAME uint GEN_THISCALL F_006d4e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d4e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(void * PTR32, 0x1375b90) != (undefined *)0x0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1375b90) + 0x220))) == '\0')) {
    F_00b6b010(REFG(void * PTR32, 0x1375b90) GEN_EDX_ARG);
    F_009d53f0(REFG(void * PTR32, 0x1487c90) GEN_EDX_ARG,1);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      uVar8 = 0x11;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
      pvVar4 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar8);
      if (pvVar4 != (undefined *)0x0) {
        F_00776f30(pvVar4 GEN_EDX_ARG,1);
      }
    }
  }
  uVar3 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar3);
  pvVar4 = *(undefined * PTR32 *)(*piVar2 + 0x60);
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,2);
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(-fVar7));
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  (*(float *)(gen_frame + 0x48)) = (float)fVar7;
  uVar3 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4);
  puVar5 = (undefined4 *)F_00a5feb0(pvVar4 GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x30)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0x34)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x38)) = puVar5[2];
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4c)) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)((int)pvVar4 + 0xb0))));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  uVar6 = F_006ca070(&(*(undefined4 *)(gen_frame + 0x30)),fVar1,0,(*(float *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x20)));
  if ((char)uVar6 != '\0') {
    F_006c5980(pvVar4,((undefined1 *)(gen_frame + 0x20)),uVar3);
  }
  F_00a02240(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d4f80 */
GEN_NOFRAME uint F_006d4f80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6d4f80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  uVar1 = F_006ca070(param_2,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x0)));
  (*(char *)(gen_frame + 0x1f)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = CONCAT31((int3)(uVar1 >> 8),(*(char *)(gen_frame + 0x1f)));
  }
  return uVar1;
}

/* ref: FUN_006d4fe0 */
GEN_FRAME uint GEN_THISCALL F_006d4fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x18] = param_2;
  in_ecx[0x17] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b95d8));
  return (uint)in_ecx;
}

/* ref: FUN_006d5020 */
GEN_NOFRAME uint GEN_THISCALL F_006d5020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d5050 */
GEN_FRAME uint GEN_THISCALL F_006d5050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[0x18] = param_2;
  in_ecx[0x17] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b95e4));
  return (uint)in_ecx;
}

/* ref: FUN_006d5090 */
GEN_NOFRAME uint GEN_THISCALL F_006d5090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d50c0 */
GEN_FRAME uint GEN_THISCALL F_006d50c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d50c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b95f0));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236e8),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729310(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236e8),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d5160 */
GEN_NOFRAME uint GEN_THISCALL F_006d5160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d5190 */
GEN_FRAME uint GEN_THISCALL F_006d5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b95fc));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236ec),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729390(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236ec),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d5230 */
GEN_NOFRAME uint GEN_THISCALL F_006d5230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d5260 */
GEN_FRAME uint GEN_THISCALL F_006d5260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9608));
  *(undefined4 *)((int)this + 100) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f0),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729410(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f0),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d5300 */
GEN_NOFRAME uint GEN_THISCALL F_006d5300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d5330 */
GEN_FRAME uint GEN_THISCALL F_006d5330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9614));
  *(undefined4 *)((int)this + 0x60) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f4),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729490(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f4),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d53d0 */
GEN_FRAME uint GEN_THISCALL F_006d53d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d53d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9620));
  *(undefined4 *)((int)this + 0x60) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f8),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729510(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236f8),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d5470 */
GEN_FRAME uint GEN_THISCALL F_006d5470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b962c));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236fc),this);
  F_0042e430((undefined *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8 GEN_EDX_ARG);
  F_00729f10(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13236fc),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_006d5510 */
GEN_NOFRAME uint GEN_THISCALL F_006d5510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_006d5560 */
GEN_FRAME uint F_006d5560(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar2,0);
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d55c0 */
GEN_FRAME uint GEN_THISCALL F_006d55c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d55c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1,(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_006d55e0 */
GEN_FRAME uint GEN_THISCALL F_006d55e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d55e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006cd980((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1,(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_006d5600 */
GEN_FRAME byte GEN_STDCALL F_006d5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d5600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  ushort * puVar2;
  
  if ((ushort)param_1 != 0) {
    puVar2 = &REFG(undefined2, 0x10b6134);
    do {
      if ((ushort)param_1 == *puVar2) {
        bVar1 = F_006ce120(param_2);
        if (bVar1 != 0) {
          return 1;
        }
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x10b613a);
    if ((199 < (ushort)param_1 >> 3) ||
       ((*((byte *)GEN_TOP((((ushort)param_1 >> 3) + 0x12ea + param_2))) &
        (byte)(0x80 >> ((byte)(ushort)param_1 & 7))) == 0)) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_006d5670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d5670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  short sVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  
  sVar1 = *(short *)(in_ecx + 0x260);
  if (sVar1 != 0) {
    uVar2 = F_00a4ffd0();
    iVar4 = 0;
    psVar3 = (short *)(uVar2 + 0x13b8);
    do {
      if (*psVar3 == sVar1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 8;
    } while (iVar4 < 0x1e);
  }
  return 1;
}

/* ref: FUN_006d56b0 */
GEN_FRAME uint F_006d56b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d56b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  iVar3 = *piVar2;
  if (*(uint *)(iVar3 + 0x5a4) < (uint)(*(int *)(iVar3 + 0x578) - *(int *)(iVar3 + 0x574) >> 2)) {
    iVar3 = *(int *)(iVar3 + 0x574) + *(uint *)(iVar3 + 0x5a4) * 4;
  }
  else {
    iVar3 = 0;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,(uint)(iVar3 != 0));
  F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d5730 */
GEN_FRAME uint F_006d5730(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(byte *)(gen_frame + 0x3b)) = 0;
  (*(byte *)(gen_frame + 0x3a)) = 0;
  F_006ce250(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x30)),&(*(uint *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x28)),&(*(byte *)(gen_frame + 0x3b)),&(*(byte *)(gen_frame + 0x3a)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x34)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x30)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x2c)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x28)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(*(byte *)(gen_frame + 0x3b)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(*(byte *)(gen_frame + 0x3a)));
  F_00a02240(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 6;
}

/* ref: FUN_006d5800 */
GEN_FRAME uint F_006d5800(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  short * psVar6;
  
  F_00a02210(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = *(int *)(iVar1 + 0x578) - *(int *)(iVar1 + 0x574) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    psVar6 = *(short * PTR32 *)(iVar1 + 0x574);
    while (*psVar6 != (short)uVar2) {
      uVar5 = uVar5 + 1;
      psVar6 = psVar6 + 2;
      if (uVar4 <= uVar5) {
        F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
        return 0;
      }
    }
    *(uint *)(iVar1 + 0x5a4) = uVar5;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d5890 */
GEN_FRAME uint F_006d5890(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar1 = (*(uint *)(gen_frame + 0x28));
  this = (undefined *)*puVar2;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar1 & 0xffffff00;
  F_006ce560(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x28)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)));
  F_00a02240(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d58f0 */
GEN_FRAME uint GEN_THISCALL F_006d58f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d58f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 == 0) {
    pbVar4 = *(byte * PTR32 *)(*param_1 + 4);
    bVar1 = *pbVar4;
    *(byte *)((int)this + 0x145) = bVar1;
    *(byte *)((int)this + 0x147) = pbVar4[0x24];
    if (*(char *)((int)this + 0x146) == '\x02') {
      uVar5 = F_00ab2de0((uint)bVar1);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)(uVar5 + 8);
    }
    else {
      uVar5 = F_00ab2de0((uint)*(byte *)((int)this + 0x145));
      *(undefined4 *)((int)this + 300) = *(undefined4 *)(uVar5 + 4);
    }
    *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
    bVar1 = *(byte *)((int)this + 0x1c);
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if ((bVar1 & 1) == 0) {
      *(byte *)((int)this + 0x1c) = bVar1 | 1;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x23c))(this GEN_EDX_ARG);
    }
  }
  else {
    uVar5 = param_3 - 1;
    if (uVar5 == 0) {
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          puVar2 = *(undefined4 * PTR32 *)(param_1[uVar5] + 4);
          iVar6 = *((char *)GEN_TOP((*(int *)((int)this + 0x10c) + uVar5))) * 0x74;
          *((undefined4 *)GEN_TOP((iVar6 + 0x68 + *(int *)((int)this + 0x10c)))) = *puVar2;
          iVar3 = *(int *)((int)this + 0x10c);
          *(undefined4 *)(iVar6 + 8 + iVar3) = *puVar2;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar6 + 0xc + iVar3) = puVar2[1];
        } while (uVar5 < param_2);
      }
      uVar5 = F_006cea30(this GEN_EDX_ARG);
      return uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_006d59d0 */
GEN_FRAME uint GEN_THISCALL F_006d59d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d59d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_006ce820(this GEN_EDX_FWD);
  uVar1 = F_00463610(0,uVar1,6);
  uVar1 = F_0042e430(param_1 GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_006d5a00 */
GEN_FRAME uint GEN_THISCALL F_006d5a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x110);
  if (iVar4 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x118);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,iVar4);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x110);
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + param_1 * 4 + 0x110) = 0;
    }
  }
  if (*(int *)((int)this + param_1 * 4 + 0x118) == 0) {
    if (param_1 == 0) {
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xc);
      *(uint *)((int)this + 0x118) = uVar2;
    }
    else if (param_1 == 1) {
      *(char *)((int)this + 0x14a) = *(char *)((int)this + 0x14a) + '\x01';
      if (100 < *(byte *)((int)this + 0x14a)) {
        *(undefined1 *)((int)this + 0x14a) = 0;
      }
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xb);
      *(uint *)((int)this + 0x11c) = uVar2;
    }
  }
  puVar3 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3 GEN_EDX_ARG,param_2,param_1);
    puVar3[8] = ((code *)REFP(0x6d58f0));
    puVar3[5] = param_2;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4))
    ;
    puVar3[6] = this;
    puVar3[9] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x110) = puVar3;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x110) GEN_EDX_ARG,iVar4,
                   *(undefined4 *)(param_3 + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x118);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + param_1 * 4 + 0x110));
  return uVar2;
}

/* ref: Client::Game::Event::QuestEventHandler::vf51 */
GEN_FRAME uint GEN_THISCALL F_006d5b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d5b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c8))(this GEN_EDX_FWD);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1f8))(this GEN_EDX_ARG);
  uVar4 = F_00a679e0(&REFG(undefined, 0x14ac288) GEN_EDX_ARG);
  iVar2 = REFG(int, 0x1379694);
  if (uVar4 == 1) {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
  }
  REFG(undefined4, 0x14b0ee0) = 1;
  if (*(char *)(param_1 + 0x41) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x4c);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x44);
  }
  uVar5 = *(int *)(param_1 + 0x4c) - uVar4;
  uVar6 = param_2 - param_3;
  uVar7 = param_3;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar4 = uVar5 + uVar4;
      uVar7 = param_3 + uVar6;
    }
    else {
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      uVar7 = param_3;
      if (param_3 < uVar6) {
        uVar7 = uVar6;
      }
    }
  }
  if ((uVar7 < uVar4) && (uVar4 = 0, REFG(int, 0x1379694) != 0)) {
    (*(byte *)(gen_frame + 0xb)) = 0;
    (*(byte *)(gen_frame + 0xa)) = 0;
    bVar3 = F_006c0260(this GEN_EDX_ARG,REFG(int, 0x1379694),param_4);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      uVar4 = F_006d0d30(this GEN_EDX_ARG,iVar2,param_4,&(*(byte *)(gen_frame + 0xb)),&(*(byte *)(gen_frame + 0xa)));
      if (uVar7 < (*(byte *)(gen_frame + 0xa))) {
        uVar4 = *(uint *)(param_1 + 0x54);
        if (((*(byte *)(param_1 + 0x14) & 1) != 0) && (uVar4 < 1000000)) {
          uVar4 = uVar4 + 1000000;
        }
        (*(uint *)(gen_frame + 0x10)) = (uint)(*(byte *)(gen_frame + 0xa));
        (*(uint *)(gen_frame + 0x14)) = uVar4;
        pcVar1 = *(gen_code32 *)(*(int *)this + 0x74);
        (*(uint *)(gen_frame + 0xc)) = (uint)(*(byte *)(gen_frame + 0xb));
        uVar4 = (*pcVar1)(this,param_4,&(*(uint *)(gen_frame + 0xc)),3);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006d5c50 */
GEN_FRAME uint GEN_THISCALL F_006d5c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  int * piVar2;
  uint * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  
  puVar6 = *(uint * PTR32 *)(*param_1 + 4);
  *(undefined4 *)((int)this + 0x108) = 0;
  *(char *)((int)this + 0x1bf1) = (char)puVar6[0x2a];
  *(uint *)((int)this + 0x1bf4) = puVar6[1];
  F_0042e430((undefined *)((int)this + 0x10c) GEN_EDX_FWD,(*puVar6 & 0xffffff) + (int)puVar6);
  param_1 = (int *)0x0;
  puVar3 = (uint *)((int)this + 0x1dc);
  puVar6 = puVar6 + 3;
  do {
    if (puVar6[-1] == 0) break;
    puVar3[-0x1f] = puVar6[-1];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (*puVar6 == 0) break;
    *puVar3 = *puVar6;
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[1] == 0) break;
    puVar3[0x1f] = puVar6[1];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[2] == 0) break;
    puVar3[0x3e] = puVar6[2];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[3] == 0) break;
    puVar3[0x5d] = puVar6[3];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    param_1 = (int *)((int)param_1 + 5);
    puVar6 = puVar6 + 5;
    puVar3 = puVar3 + 0x9b;
  } while ((int)param_1 < 0x28);
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1c00);
  if (puVar4 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x1c00) = 0;
  }
  puVar4 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x108);
    F_00cb4700(puVar4 GEN_EDX_ARG,uVar1,0);
    puVar4[8] = ((code *)REFP(0x6d0e60));
    puVar4[5] = uVar1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
    puVar4[6] = this;
    puVar4[9] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c04) = puVar4;
  uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x19);
  iVar7 = 0;
  *(uint *)((int)this + 0x1c0c) = uVar5;
  if (0 < *(int *)((int)this + 0x108)) {
    param_1 = (int *)((int)this + 0x160);
    do {
      uVar5 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x1c04) GEN_EDX_ARG,iVar7,*param_1);
      param_1 = param_1 + 0x1f;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 0x108));
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c0c);
  if (piVar2 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1c04));
  }
  return uVar5;
}

/* ref: Client::Game::Event::ShopEventHandler::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006d5df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d5df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = (undefined4 *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[8] = ((code *)REFP(0x6d5c50));
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
    this_00[6] = this;
    this_00[9] = 0;
  }
  *(undefined4 * PTR32 *)(this + 0x1c00) = this_00;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0x1a);
  *(uint *)(this + 0x1c08) = uVar2;
  uVar2 = F_00cb4540(*(undefined * PTR32 *)(this + 0x1c00) GEN_EDX_ARG,0,*(undefined4 *)(this + 8));
  piVar1 = *(int * PTR32 *)(this + 0x1c08);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x1c00));
  }
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar2;
}

/* ref: FUN_006d5e90 */
GEN_FRAME byte F_006d5e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if ((((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
      (*(short *)(REFG(int, 0x1488760) + 0x54) == 0x28)) &&
     ((*(int *)(REFG(int, 0x1488760) + 0x104) == param_1 &&
      (puVar1 = (undefined4 *)(REFG(int, 0x1488760) + 0x100), *(int *)(REFG(int, 0x1488760) + 0x100) == param_2))))
  {
    *(undefined4 *)(REFG(int, 0x1488760) + 0x104) = param_3;
    *puVar1 = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_006d5ef0 */
GEN_FRAME uint F_006d5ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x1488760) != 0) {
    F_0071ff70(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 * 0xa8 + 0x1538 + REFG(int, 0x1488760));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x0))[8];
    (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x0))[9];
    (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x0))[10];
    (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x0))[0xb];
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d5f60 */
GEN_FRAME unsigned int GEN_THISCALL F_006d5f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) == '\0') && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0x28)) &&
       (REFG(int, 0x13241b4) == 0)) && ((REFG(int, 0x13241c4) == 0 && (REFG(int, 0x13241a4) == 0)))) &&
     (pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2])), pvVar2 != (undefined *)0x0)) {
    pvVar2 = (undefined *)F_00a37da0(pvVar2 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
    uVar3 = F_0071d3a0(pvVar2 GEN_EDX_ARG);
    if (((char)uVar3 == '\0') && (uVar3 = F_00a37c50(pvVar2 GEN_EDX_ARG), uVar3 == 0)) {
      uVar3 = F_0046e5e0(pvVar2 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x104))) = (*(undefined4 *)&gen_args[2]);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) = (*(undefined4 *)&gen_args[1]);
      uVar3 = F_00a3a8a0(pvVar2 GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))) = uVar3;
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc)));
      if (iVar1 < 2000000) {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bec))) = 1;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf0))) = (undefined1)(*(int *)&gen_args[3]);
        (*(int *)&gen_args[3]) = iVar1;
        if (1000000 < iVar1) {
          (*(int *)&gen_args[3]) = iVar1 - 1000000;
        }
        F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)&gen_args[3]),1,0);
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf0))) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_006d6060 */
GEN_FRAME byte GEN_THISCALL F_006d6060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xfc) == 4) {
    uVar2 = F_00a51200(0x42,0,0,0,0);
    if ((char)uVar2 != '\0') {
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1a,1);
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1b,1);
      return 1;
    }
  }
  else if (*(int *)((int)this + 0xfc) == 0) {
    bVar1 = F_006c2930(param_2);
    *(byte *)((int)this + 0x108) = bVar1;
    if (bVar1 != 0) {
      bVar1 = F_006d4a90(param_1 GEN_EDX_ARG,this,param_2);
      if (bVar1 != 0) {
        F_00aaa5b0(param_2 GEN_EDX_ARG,6);
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1a,1);
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1b,1);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006d6110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6d6110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 GVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x114) - *(int *)(this + 0x110) == 1) {
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    GVar1 = this[0x1c];
    uVar2 = (uint)(byte)GVar1;
    if (((byte)GVar1 & 1) == 0) {
      this[0x1c] = (undefined1)((byte)GVar1 | 1);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x23c))
                        (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  else {
    this[0x128] = (undefined1)0x0;
    uVar2 = F_006d1aa0(this GEN_EDX_ARG);
    this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf7 */
GEN_FRAME byte GEN_THISCALL F_006d6150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined * pBVar2;
  
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) != (*(undefined * PTR32 *)&gen_args[0])[0x500]) {
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x4e8))) != 5) {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x4e8))) == 9) {
      uVar1 = 0;
      pBVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x37c;
      while (*(int *)pBVar2 != *(int *)((*(int *)&gen_args[1]) + 0x80)) {
        uVar1 = uVar1 + 1;
        pBVar2 = pBVar2 + 0x30;
        if (7 < uVar1) {
          return 0;
        }
      }
      if ((char)uVar1 != '\0') {
        return 0;
      }
    }
    return 1;
  }
  uVar1 = 0;
  pBVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x37c;
  while (*(int *)pBVar2 != *(int *)((*(int *)&gen_args[1]) + 0x80)) {
    uVar1 = uVar1 + 1;
    pBVar2 = pBVar2 + 0x30;
    if (7 < uVar1) {
      return 0;
    }
  }
  if (((byte)uVar1 < 8) && (uVar1 = F_006d31a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,uVar1), uVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf122 */
GEN_FRAME uint GEN_THISCALL F_006d61e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d61e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pBVar4;
  int * piVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x4e8))) {
  case 2: ;
    local_c = 0;
    piVar5 = (int *)((int)param_1 + 0xc);
    param_1 = this + 0x380;
    while (local_8 < param_2) {
      iVar1 = *(int *)param_1;
      uVar2 = F_006d2e90(this GEN_EDX_FWD,iVar1);
      if (uVar2 != 0) {
        local_8 = local_8 + 1;
        piVar5[-3] = iVar1;
        piVar5[-2] = uVar2;
        *piVar5 = *(int *)(this + 8);
        piVar5 = piVar5 + 4;
      }
      param_1 = param_1 + 0x30;
      local_c = local_c + 1;
      if (7 < local_c) {
        return local_8;
      }
    }
    break;
  case 3: ;
  case 4: ;
  case 8: ;
    break;
  case 5: ;
  case 9: ;
    if (this[0x4f8] != (undefined1)0x0) {
      *(int *)param_1 = *(int *)(this + 0x380);
      *(int *)((int)param_1 + 4) = 1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 6: ;
    if ((this[0x4f6] == (undefined1)0x1) && (uVar2 = F_006d3240(this GEN_EDX_ARG), uVar2 != 0)) {
      iVar1 = *(int *)(this + 0x380);
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)param_1 = iVar1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 7: ;
    if ((this[0x4f8] != (undefined1)0x0) && (uVar2 = F_006d32b0(this GEN_EDX_ARG), 0 < (int)uVar2)) {
      iVar1 = *(int *)(this + 0x380);
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)param_1 = iVar1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 10: ;
    param_2 = 0;
    piVar5 = (int *)((int)param_1 + 0xc);
    param_1 = this + 0x380;
    do {
      iVar1 = *(int *)param_1;
      if (0 < iVar1) {
        uVar2 = F_006d3500(this GEN_EDX_ARG,param_2);
        uVar3 = F_006d3580(this GEN_EDX_ARG,param_2);
        if (((0 < (int)uVar3) && (0 < (int)uVar2)) && ((int)uVar2 < (int)uVar3)) {
          local_8 = local_8 + 1;
          piVar5[-3] = iVar1;
          piVar5[-2] = uVar2;
          *piVar5 = *(int *)(this + 8);
          piVar5 = piVar5 + 4;
        }
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 1;
    } while (param_2 < 8);
    return local_8;
  case 0xb: ;
    uVar2 = F_006d3860(this GEN_EDX_ARG);
    if (0 < (int)uVar2) {
      uVar3 = 0;
      pBVar4 = this + 0x380;
      while (*(int *)pBVar4 < 1) {
        uVar3 = uVar3 + 1;
        pBVar4 = pBVar4 + 0x30;
        if (7 < uVar3) {
          return 0;
        }
      }
      *(int *)param_1 = *(int *)pBVar4;
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      local_8 = 1;
    }
    break;
  default: ;
    goto switchD_006d6202_default;
  }
switchD_006d6202_default: ;
  return local_8;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf122 */
GEN_FRAME uint GEN_THISCALL F_006d6410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 GVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xc);
  do {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      GVar1 = this[0x1de];
      break;
    case 1: ;
      GVar1 = this[0x1df];
      break;
    case 2: ;
      GVar1 = this[0x1e0];
      break;
    case 3: ;
      GVar1 = this[0x1e1];
      break;
    case 4: ;
      GVar1 = this[0x1e2];
      break;
    case 5: ;
      GVar1 = this[0x1e3];
      break;
    case 6: ;
      GVar1 = this[0x1e4];
      break;
    case 7: ;
      GVar1 = this[0x1e5];
      break;
    default: ;
      goto switchD_006d642b_default;
    }
    if (GVar1 != (undefined1)0x0) {
      if ((byte)uVar2 < 4) {
        uVar3 = *((undefined4 *)GEN_TOP((this + (uVar2 & 0xff) * 4 + 0x360)));
      }
      else if ((byte)uVar2 < 8) {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x3d4) + (uVar2 - 4 & 0xff) * 4)));
      }
      else {
        uVar3 = 0;
      }
      local_8 = local_8 + 1;
      puVar4[-3] = uVar3;
      puVar4[-2] = (uint)(byte)GVar1;
      *puVar4 = *(undefined4 *)(this + 8);
      puVar4 = puVar4 + 4;
    }
switchD_006d642b_default: ;
    uVar2 = uVar2 + 1;
    if (7 < uVar2) {
      return local_8;
    }
  } while( true );
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf29 */
GEN_FRAME uint GEN_THISCALL F_006d64f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d64f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (((char)param_1 == '\0') && ((char)param_3 == '\x04')) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_FWD,0x46,0,0);
    F_006d3ad0(this GEN_EDX_ARG);
  }
  uVar1 = F_006d25b0((undefined *)this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf155 */
GEN_NOFRAME uint GEN_THISCALL F_006d6540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d6540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c GEN_EDX_FWD);
  F_00a024d0(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,"OnSynchronize",uVar1,uVar2);
  uVar1 = F_006d3ad0(this GEN_EDX_ARG);
  REFG(undefined4, 0x14a458f) = 1;
  return uVar1;
}

/* ref: FUN_006d6580 */
GEN_FRAME uint F_006d6580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x6d6580u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[14];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  float fVar2;
  double dVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  uint * puVar9;
  uint uVar10;
  float * pfVar11;
  ushort * puVar12;
  int iVar13;
  int * piVar14;
  undefined * this;
  undefined3 extraout_var = 0;
  uint * puVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  undefined4 uVar22;
  
  puVar9 = (uint *)F_00ab3330((*(uint *)&gen_args[0]) & 0xffff);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar9;
  if (puVar9 == (uint *)0x0) {
    return 0;
  }
  sVar1 = *(short *)((int)puVar9 + 0x4a);
  bVar20 = sVar1 == 2;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) = bVar20;
  (*(uint *)(gen_frame + 0x28)) = CONCAT13(bVar20,(undefined3)(*(uint *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  if (((bVar20) && ((char)(*(undefined4 *)&gen_args[11]) != '\0')) && (bVar6 = F_006c40f0((*(undefined4 *)&gen_args[11])), bVar6 != 0)) {
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)(char)bVar6);
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(int)(char)bVar6 + (float10)*(double *)&REFG(undefined, 0x1088118)) /
                      (float10)*(double *)&REFG(undefined, 0x1088118))));
  }
  uVar18 = ((*(uint *)&gen_args[1]) & 0xffff) + ((*(uint *)&gen_args[0]) & 0xffff);
  uVar19 = 0;
  uVar7 = F_006d4240((*(int *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),puVar9[10],(*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[13]));
  (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)uVar7);
  uVar10 = F_00ab3300(0x48);
  fVar2 = *(float *)(uVar10 + 4);
  puVar15 = puVar9 + 0x14;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  if ((ushort)(*(undefined4 *)&gen_args[2]) < (ushort)*puVar15) {
    puVar15 = &(*(undefined4 *)&gen_args[2]);
  }
  uVar7 = (ushort)*puVar15;
  fVar16 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff) + (uint)uVar7);
  (*(float *)(gen_frame + 0x10)) = 1.4013e-45;
  (*(float *)(gen_frame + 0x20)) = fVar16;
  pfVar11 = &(*(float *)(gen_frame + 0x20));
  if ((int)gen_fl2bits(fVar2) <= (int)gen_fl2bits(fVar16)) {
    pfVar11 = &(*(float *)(gen_frame + 0x24));
  }
  if ((int)gen_fl2bits(*pfVar11) < 2) {
    pfVar11 = &(*(float *)(gen_frame + 0x10));
  }
  (*(float *)(gen_frame + 0x24)) = gen_bits2f((uint)*(ushort *)pfVar11);
  uVar5 = (ushort)puVar9[6];
  if (uVar5 != 0) {
    if ((char)(*(undefined4 *)&gen_args[9]) != '\0') {
      uVar5 = uVar5 >> 1;
    }
    *(*(uint * PTR32 *)&gen_args[5]) = (uint)uVar5;
    (*(uint * PTR32 *)&gen_args[5])[7] = 0;
    if ((char)(*(uint *)&gen_args[12]) != '\0') {
      dVar4 = (GEN_X87MATH((((double)GEN_TOD((((*(uint *)&gen_args[12]) & 0xff) * (uint)uVar5))) * *(double *)&REFG(undefined, 0x10b9638)),0xe));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x10)) = gen_bits2f(gen_x87_cw | 0xc00);
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(dVar4);
      (*(uint * PTR32 *)&gen_args[5])[7] = (*(uint * PTR32 *)&gen_args[5])[7] + (*(uint *)(gen_frame + 0x8));
    }
    goto LAB_006d67f7;
  }
  if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) == '\0') {
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar7;
    fVar21 = F_006c41b0((*(uint *)(gen_frame + 0xc)),GEN_TOF(gen_bits2f(puVar9[2])));
    (*(float *)(gen_frame + 0x20)) = (float)fVar21;
    fVar21 = F_006c41b0((uint)gen_fl2bits((*(float *)(gen_frame + 0x24))),GEN_TOF(gen_bits2f(puVar9[2])));
    (*(float *)(gen_frame + 0x24)) = (float)fVar21;
    if ((char)(*(undefined4 *)&gen_args[9]) != '\0') {
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)REFG(double, 0x1088108));
      fVar21 = (float10)REFG(double, 0x1088108) * (float10)(float)fVar21;
      goto LAB_006d676c;
    }
  }
  else {
    (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar9[2]);
    puVar12 = (ushort *)F_00ab2fc0((uint)uVar7);
    uVar7 = *puVar12;
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)uVar7);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)uVar7 * (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(puVar9[2]);
    puVar12 = (ushort *)F_00ab2fc0((uint)gen_fl2bits((*(float *)(gen_frame + 0x24))) & 0xffff);
    fVar21 = (float10)(*(float *)(gen_frame + 0x10));
    uVar7 = *puVar12;
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)uVar7);
    fVar2 = (float)((float10)uVar7 * fVar21);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar21 = (float10)fVar2 * (float10)(*(float *)(gen_frame + 0x18));
LAB_006d676c: ;
    (*(float *)(gen_frame + 0x24)) = (float)fVar21;
  }
  if ((double)(*(float *)(gen_frame + 0x24)) < (double)(*(float *)(gen_frame + 0x20))) {
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x20));
  }
  dVar4 = (GEN_X87MATH(((double)(*(float *)(gen_frame + 0x20))),0xe));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
  (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
  *(*(uint * PTR32 *)&gen_args[5]) = (*(uint *)(gen_frame + 0x8));
  dVar4 = (GEN_X87MATH(((double)((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20))) - (float10)REFG(double, 0x1091858))))),0xe));
  (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
  (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
  (*(uint * PTR32 *)&gen_args[5])[7] = (*(uint *)(gen_frame + 0x8));
LAB_006d67f7: ;
  puVar9 = (*(uint * PTR32 *)&gen_args[5]);
  *((undefined1 *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[5]) + 0x13))) = (undefined1)(*(uint *)&gen_args[10]);
  if (sVar1 != 3) {
    uVar10 = (*(uint * PTR32 *)(gen_frame + 0x1c))[0x14];
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)(ushort)uVar10);
    (*(uint *)(gen_frame + 0x28)) = (uint)(ushort)uVar10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff;
    uVar10 = F_00ab3300(0x18);
    uVar18 = uVar18 * 0x800 ^ uVar18;
    uVar17 = 100 - *(ushort *)(uVar10 + 4);
    uVar19 = uVar18 >> 8 ^ uVar18;
    iVar13 = ((int)(short)(*(ushort *)(uVar10 + 4) + 0x65) - (int)(short)uVar17) * (uVar19 & 0xffff)
    ;
    (*(uint *)(gen_frame + 0xc)) = ((int)(iVar13 + (iVar13 >> 0x1f & 0xffffU)) >> 0x10) + (uVar17 & 0xffff) & 0xffff;
    uVar10 = (*(uint * PTR32 *)(gen_frame + 0x1c))[3];
    uVar18 = 0;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(uint *)(gen_frame + 0xc)) / (float10)*(double *)&REFG(undefined, 0x1088118));
    if (uVar10 == 0) {
      uVar10 = F_00ab3300(0x16);
      fVar21 = (float10)((float)GEN_TOF(((float10)*(int *)(uVar10 + 4) * (float10)*(double *)&REFG(undefined, 0x10928e8))));
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x20)) * ((float10)((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) & 0xffff) * fVar21)
                     )));
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar16 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x20)) * ((float10)((*(uint *)(gen_frame + 0x28)) & 0xffff) * fVar21)) *
                      (float10)(*(float *)(gen_frame + 0x18)))));
      (*(float *)(gen_frame + 0x20)) = fVar16;
      if ((double)fVar16 < (double)fVar2) {
        (*(float *)(gen_frame + 0x20)) = fVar2;
      }
      dVar4 = (GEN_X87MATH(((double)fVar2),0xe));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
      puVar9[1] = (*(uint *)(gen_frame + 0x8));
      dVar4 = (GEN_X87MATH(((double)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar2)),0xe));
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
      puVar9[8] = (*(uint *)(gen_frame + 0x8));
    }
    else {
      fVar21 = (float10)(int)uVar10;
      if ((int)uVar10 < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      dVar4 = (GEN_X87MATH(((double)((float)GEN_TOF((fVar21 * (float10)(float)((float10)(*(uint *)(gen_frame + 0xc)) / (float10)*(double *) &REFG(undefined, 0x1088118))))) ),0xe));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
      puVar9[1] = (*(uint *)(gen_frame + 0x8));
      puVar9[8] = 0;
      if ((char)(*(uint *)&gen_args[12]) != '\0') {
        iVar13 = ((*(uint *)&gen_args[12]) & 0xff) * (*(uint *)(gen_frame + 0x8));
        dVar4 = (double)iVar13;
        if (iVar13 < 0) {
          dVar4 = dVar4 + *(double *)&REFG(double, 0x10b8de8);
        }
        dVar4 = (GEN_X87MATH((dVar4 * *(double *)&REFG(undefined, 0x10b9638)),0xe));
        (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(dVar4);
        puVar9[8] = puVar9[8] + (*(uint *)(gen_frame + 0x8));
      }
    }
  }
  puVar9[2] = 0;
  *(undefined2 *)(puVar9 + 3) = 0;
  *(undefined1 *)((int)puVar9 + 0x12) = 0;
  uVar10 = F_00ab34b0((*(uint * PTR32 *)(gen_frame + 0x1c))[4]);
  uVar18 = uVar18 << 0xb ^ uVar18;
  uVar18 = (uVar19 >> 0xb ^ uVar18) >> 8 ^ uVar19 ^ uVar18;
  uVar19 = 0;
  iVar13 = 0;
  do {
    uVar19 = uVar19 + *(byte *)(uVar10 + 0x20 + iVar13);
    if (uVar18 % 100 < uVar19) {
      iVar13 = *(int *)(uVar10 + iVar13 * 4);
      if (iVar13 != 0) {
        piVar14 = (int *)F_00ab34e0(iVar13);
        uVar7 = (ushort)(0 < *piVar14);
        if (0 < piVar14[1]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[2]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[3]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[4]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[5]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[6]) {
          uVar7 = uVar7 + 1;
        }
        if (0 < piVar14[7]) {
          uVar7 = uVar7 + 1;
        }
        if (uVar7 != 0) {
          uVar18 = uVar18 ^ uVar18 >> 0x13;
          iVar13 = (int)((uVar18 & 0xffff) * (int)(short)uVar7) >> 0x10;
          puVar9[2] = piVar14[iVar13];
          *(undefined2 *)(puVar9 + 3) = *(undefined2 *)((int)piVar14 + iVar13 * 2 + 0x20);
          *(undefined1 *)((int)puVar9 + 0x12) = *(undefined1 *)(iVar13 + 0x30 + (int)piVar14);
        }
      }
      break;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  puVar15 = (*(uint * PTR32 *)(gen_frame + 0x1c));
  sVar8 = 0;
  uVar7 = 0;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    if ((*(uint * PTR32 *)(gen_frame + 0x1c))[0xc] == 0) {
      sVar8 = (short)((uVar18 >> 0x13 ^ uVar18 & 0xffff) % 3) + 1;
    }
    else {
      sVar8 = (short)(*(uint * PTR32 *)(gen_frame + 0x1c))[0xc];
    }
    uVar7 = ((ushort)(*(uint * PTR32 *)(gen_frame + 0x1c))[0x14] >> 2) + 1;
  }
  *(short *)((int)puVar9 + 0xe) = sVar8;
  dVar4 = (GEN_X87MATH(((double)(float)((float10)uVar7 * (float10)(*(float *)(gen_frame + 0x18)))),0xe));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
  (*(uint *)(gen_frame + 0x28)) = CONCAT22(gen_x87_cw,(undefined2)(*(uint *)(gen_frame + 0x28)));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (short)(int)TRUNC(dVar4);
  *(short *)(puVar9 + 4) = (short)(*(uint *)(gen_frame + 0xc));
  if (sVar1 == 3) {
    uVar10 = (*(uint *)&gen_args[4]) & 0xff;
    if (uVar10 == 1) {
      puVar9[5] = 0x14;
    }
    else if (uVar10 == 2) {
      puVar9[5] = 0x15;
    }
    else if (uVar10 == 3) {
      puVar9[5] = 0x16;
    }
    else {
      puVar9[5] = 0;
    }
    if (puVar9[5] != 0) {
      uVar10 = (*(uint * PTR32 *)(gen_frame + 0x1c))[0x14];
      uVar18 = F_00ab3300(0x17);
      fVar21 = (float10)((float)GEN_TOF(((float10)*(int *)(uVar18 + 4) * (float10)*(double *)&REFG(undefined, 0x10928e8))));
      fVar2 = (float)((float10)(ushort)uVar10 * fVar21);
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar16 = ((float)GEN_TOF(((float10)((uint)(ushort)uVar10 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff) *
                      fVar21)));
      (*(float *)(gen_frame + 0x14)) = fVar16;
      if ((double)fVar16 < (double)fVar2) {
        (*(float *)(gen_frame + 0x14)) = fVar2;
      }
      dVar4 = (GEN_X87MATH(((double)fVar2),0xe));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
      puVar9[6] = (*(uint *)(gen_frame + 0x8));
      dVar4 = (GEN_X87MATH(((double)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar2)),0xe));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)dVar4);
      puVar9[0xc] = (*(uint *)(gen_frame + 0x8));
    }
  }
  uVar10 = (*(uint *)&gen_args[10]);
  (*(float *)(gen_frame + 0x18)) = 0.0;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    iVar13 = (*(int *)&gen_args[6]);
    if ((char)(*(undefined4 *)&gen_args[7]) != '\0') {
      iVar13 = (*(int *)&gen_args[6]) + 1;
    }
    if ((char)(*(undefined4 *)&gen_args[8]) != '\0') {
      iVar13 = iVar13 + 1;
    }
    if (iVar13 != 0) {
      iVar13 = (uint)(ushort)puVar9[4] * iVar13;
      fVar21 = (float10)iVar13;
      if (iVar13 < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      dVar4 = (GEN_X87MATH(((double)(float)(fVar21 * (float10)REFG(double, 0x1094800))),0xe));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)TRUNC(dVar4) & 0xffff);
    }
    if ((char)(*(uint *)&gen_args[12]) != '\0') {
      dVar4 = (GEN_X87MATH((((double)GEN_TOD((((*(uint *)&gen_args[12]) & 0xff) * (uint)(ushort)puVar9[4]))) * *(double *)&REFG(undefined, 0x10b9638)),0xe));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (short)(int)TRUNC(dVar4);
      uVar7 = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0)) + (short)(*(uint *)(gen_frame + 0xc));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0)) = uVar7;
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)uVar7);
    }
  }
  *(ushort *)((int)puVar9 + 0x2a) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0));
  if (((*(uint *)&gen_args[10]) != 0) &&
     (((uVar18 = F_00ab21d0((uint)*(byte *)((int)puVar15 + 0x55)), uVar18 == 0 || (0x1c < uVar10))
      || (*(char *)(uVar18 + 4 + uVar10) == '\0')))) {
    *puVar9 = 0;
    puVar9[7] = 0;
  }
  piVar14 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  F_0042aca0(puVar9 + 0x27 GEN_EDX_ARG);
  F_0042aca0(puVar9 + 0xe GEN_EDX_ARG);
  uVar10 = F_00ab3390((uint)*(byte *)((int)puVar15 + 0x56));
  uVar10 = *(uint *)(uVar10 + 4);
  uVar19 = F_00ab3390((uint)*(byte *)((int)puVar15 + 0x57));
  uVar18 = puVar15[0xe];
  (*(float *)(gen_frame + 0x10)) = *(float *)(uVar19 + 4);
  uVar18 = F_00ab32a0(uVar18);
  uVar18 = *(uint *)(uVar18 + 4);
  uVar19 = puVar15[0x14];
  *(ushort *)(puVar9 + 0xd) = (ushort)uVar19;
  uVar19 = (uint)(ushort)uVar19;
  uVar22 = 0x23;
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar14 + 0x18))(piVar14 GEN_EDX_ARG)));
  uVar19 = F_00461bb0(this GEN_EDX_ARG,uVar22,uVar19);
  F_0042e430(puVar9 + 0xe GEN_EDX_ARG,uVar19);
  F_0042e430(puVar9 + 0x27 GEN_EDX_ARG,(*puVar15 & 0xffffff) + (int)puVar15);
  puVar9[0x23] = uVar18;
  uVar18 = puVar15[0x11];
  puVar9[0x26] = (uint)gen_fl2bits((*(float *)(gen_frame + 0x10)));
  puVar9[0x24] = uVar18;
  puVar9[0x25] = uVar10;
  bVar6 = F_0042b6a0(&REFG(undefined, 0x1489e08) GEN_EDX_ARG,&REFG(undefined, 0x10b3a7a));
  if (bVar6 != 0) {
    F_00ab0230(0x18f58,&REFG(undefined, 0x1489e08));
  }
  bVar6 = F_0042b6a0(&REFG(undefined, 0x1489e60) GEN_EDX_ARG,&REFG(undefined, 0x10b3a7b));
  uVar10 = CONCAT31(extraout_var,bVar6);
  if (bVar6 != 0) {
    uVar10 = F_00ab9240(0x18f5f,1,&REFG(undefined, 0x1489e60));
  }
  return uVar10;
}

/* ref: FUN_006d6e70 */
GEN_FRAME uint GEN_THISCALL F_006d6e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d6e70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x308))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30c))) = 0;
    return 0;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x308))) = (*(int *)&gen_args[1]);
  uVar1 = F_006cd980((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),1,0);
  return uVar1;
}

/* ref: FUN_006d6eb0 */
GEN_FRAME uint GEN_THISCALL F_006d6eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d6eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * piVar1;
  undefined * in_EAX = 0;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        in_EAX = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x254))(piVar1 GEN_EDX_FWD)));
        if (in_EAX != (undefined *)0x0) {
          uVar2 = F_00ba1550(in_EAX GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar2;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return (uint)in_EAX;
}

/* ref: FUN_006d6f00 */
GEN_FRAME uint GEN_THISCALL F_006d6f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x88);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x8c)) {
    do {
      if (*(int *)((int)*puVar1 + 8) == param_1) {
        in_EAX = F_00b8b430((undefined *)*puVar1 GEN_EDX_FWD,param_2);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x8c));
  }
  return in_EAX;
}

/* ref: FUN_006d6f50 */
GEN_FRAME uint GEN_THISCALL F_006d6f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar4 == *(int * PTR32 *)((int)this + 0x8c)) {
    return in_EAX;
  }
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x1d4) + 2)));
      in_EAX = (uint)uVar1;
      if (((uVar1 == 0x8001) || (uVar1 == 0x8002)) || (uVar1 == 0x8007)) {
        uVar3 = (uint)CONCAT11((char)(uVar1 >> 8),(char)param_1);
        if (*(char *)(iVar2 + 0x322) == (char)param_1) {
          return uVar3;
        }
        *(char *)(iVar2 + 0x322) = (char)param_1;
        F_00a69750(&REFG(undefined4, 0x14b119c) GEN_EDX_FWD);
        return uVar3;
      }
    }
    piVar4 = piVar4 + 1;
    if (piVar4 == *(int * PTR32 *)((int)this + 0x8c)) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_006d6fd0 */
GEN_NOFRAME uint GEN_THISCALL F_006d6fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d6fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)((int)this + 0x88);
  do {
    if (puVar3 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x1d4) + 2)));
      if (sVar1 == -0x7fff) {
        return uVar2;
      }
      if (sVar1 == -0x7ffe) {
        return uVar2;
      }
      if (sVar1 == -0x7ff9) {
        return uVar2;
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

/* ref: FUN_006d7020 */
GEN_NOFRAME uint GEN_THISCALL F_006d7020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (*((short *)GEN_TOP((*(int *)(uVar1 + 0x1d4) + 2))) == -0x7ffd)) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d7060 */
GEN_FRAME uint GEN_THISCALL F_006d7060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (**(uint * PTR32 *)(uVar1 + 0x1d4) == ((ushort)param_1 | 0x801a0000))) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d70a0 */
GEN_FRAME byte GEN_THISCALL F_006d70a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d70a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(REFG(int, 0x1379694) + 0xe4);
  *param_2 = 0;
  piVar4 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar4 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar2 = (int *)*piVar4;
      if ((piVar2 != (int *)0x0) &&
         ((uVar1 == *(uint *)piVar2[0x75] || (*(uint *)piVar2[0x75] >> 0x10 == 0x801a)))) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_FWD);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        uVar3 = *param_2;
        if (uVar3 < 5) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1e8))(piVar2 GEN_EDX_ARG,uVar3 * 0x10 + param_1,5 - uVar3);
          *param_2 = *param_2 + uVar3;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return 1;
}

/* ref: FUN_006d7160 */
GEN_NOFRAME byte GEN_THISCALL F_006d7160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d7160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x88); piVar1 != *(int * PTR32 *)((int)this + 0x8c);
      piVar1 = piVar1 + 1) {
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (*((short *)GEN_TOP((*(int *)(iVar2 + 0x1d4) + 2))) == -0x7ffd)) goto LAB_006d7195;
  }
  iVar2 = 0;
LAB_006d7195: ;
  return iVar2 != 0;
}

/* ref: FUN_006d71a0 */
GEN_FRAME uint GEN_THISCALL F_006d71a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  if ((short)param_1 != 0) {
    for (psVar1 = *(short * PTR32 *)((int)this + 0x7ac); psVar1 != *(short * PTR32 *)((int)this + 0x7b0);
        psVar1 = psVar1 + 8) {
      if (*psVar1 == (short)param_1) {
        return (uint)psVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_006d71e0 */
GEN_NOFRAME byte GEN_THISCALL F_006d71e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d71e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)(in_ecx + 0x7ac);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)(in_ecx + 0x7b0)) {
      return 1;
    }
    if ((*psVar1 != 0) && ((char)psVar1[6] == '\0')) break;
    psVar1 = psVar1 + 8;
  }
  return 0;
}

/* ref: FUN_006d7210 */
GEN_FRAME uint GEN_THISCALL F_006d7210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  undefined1 * puVar2;
  int * piVar3;
  uint uVar4;
  byte bVar5;
  code * pcVar6;
  uint uVar7;
  undefined4 * puVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  puVar2 = F_00c48350(((char *)(gen_frame + 0x0)),0,0x158);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x30);
  for (puVar8 = *(undefined4 * PTR32 *)((int)this + 0x2c); puVar8 != puVar1; puVar8 = puVar8 + 0x22) {
    puVar2 = (undefined1 *)puVar8[5];
    if ((puVar2 == &REFG(undefined, 0x4)) || (puVar2 == &REFG(undefined, 0x5))) {
      piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,puVar8[3]);
LAB_006d72a9: ;
      puVar2 = (undefined1 *)0x0;
      if (piVar3 != (int *)0x0) {
        if (puVar8[5] == 7) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,1,0);
        }
        puVar2 = (undefined1 *)(uint)*(ushort *)(piVar3 + 0x22);
        ((char *)(gen_frame + 0x0))[(int)((int)puVar2)] = '\x01';
      }
    }
    else if (((puVar2 == (undefined1 *)0x2) || (puVar2 == (undefined1 *)0x3)) ||
            (puVar2 == (undefined1 *)0x1)) {
      puVar2 = (undefined1 *)*puVar8;
      if (puVar2 != (undefined1 *)0xe0000000) {
        piVar3 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,puVar2,puVar8[1]);
        goto LAB_006d72a9;
      }
    }
    else if (puVar2 == (undefined1 *)0x7) {
      piVar3 = (int *)F_00b79f80(&REFG(undefined, 0x14c5798) GEN_EDX_ARG,puVar8[4]);
      goto LAB_006d72a9;
    }
  }
  if ((param_1 & 0x3fc) != 0) {
    uVar7 = 0;
    do {
      if ((((((char *)(gen_frame + 0x0))[(int)(uVar7)] == '\0') && ((uVar7 < 200 || (0xf3 < uVar7)))) && (uVar7 < 0x158)) &&
         (piVar3 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar7)])), piVar3 != (int *)0x0)) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
        bVar5 = (byte)param_1;
        if (uVar4 == 1) {
          if ((*(byte *)((int)piVar3 + 0x2dd2) & 0x10) == 0) {
            bVar9 = (bVar5 & 0x20) == 0x20;
          }
          else {
            bVar9 = (bVar5 & 0x40) == 0x40;
          }
LAB_006d734c: ;
          if (bVar9) goto LAB_006d7353;
LAB_006d73d0: ;
          pcVar6 = *(gen_code32 *)(*piVar3 + 0x24);
        }
        else {
          if (uVar4 == 2) {
            bVar9 = (bVar5 & 0x10) == 0x10;
            goto LAB_006d734c;
          }
          if (uVar4 == 3) {
            bVar9 = (bVar5 & 4) == 4;
            goto LAB_006d734c;
          }
          if (uVar4 == 4) {
            bVar9 = (param_1 & 0x200) == 0x200;
            goto LAB_006d734c;
          }
          if (uVar4 == 5) {
            bVar9 = (param_1 & 0x100) == 0x100;
            goto LAB_006d734c;
          }
          if (uVar4 == 6) {
            bVar9 = (bVar5 & 0x80) == 0x80;
            goto LAB_006d734c;
          }
          if (uVar4 == 7) {
            bVar9 = (bVar5 & 8) == 8;
            goto LAB_006d734c;
          }
          if ((uVar4 != 0xb) && (uVar4 != 9)) goto LAB_006d73d0;
LAB_006d7353: ;
          pcVar6 = *(gen_code32 *)(*piVar3 + 0x28);
        }
        puVar2 = ((undefined1 *)GEN_TOP((*pcVar6)(piVar3,1,0)));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x158);
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return (uint)puVar2;
}

/* ref: FUN_006d7400 */
GEN_NOFRAME uint GEN_THISCALL F_006d7400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d7400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (piVar1[5] == 2) break;
    piVar1 = piVar1 + 0x22;
  }
  if (*piVar1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,*piVar1,piVar1[1]);
  return uVar2;
}

/* ref: FUN_006d7440 */
GEN_NOFRAME byte GEN_THISCALL F_006d7440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6d7440u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  int * piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  piVar5 = *(int * PTR32 *)(param_1 + 0x3c);
  (*(int *)(gen_frame + 0x18)) = param_1;
  while( true ) {
    if (piVar5 == *(int * PTR32 *)(param_1 + 0x40)) {
      return 0;
    }
    if (*piVar5 == param_3) break;
    piVar5 = piVar5 + 5;
  }
  pfVar4 = (float *)F_00a5feb0(param_2 GEN_EDX_FWD);
  fVar1 = gen_bits2f(piVar5[1]);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = gen_bits2f(piVar5[2]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = gen_bits2f(piVar5[3]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x1c)) = *pfVar4;
  fVar6 = (float10)*pfVar4;
  (*(float *)(gen_frame + 0x1c)) = pfVar4[1];
  fVar7 = (float10)pfVar4[1];
  (*(float *)(gen_frame + 0x1c)) = pfVar4[2];
  fVar8 = (float10)pfVar4[2];
  fVar9 = (float10)param_5;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar1 - fVar6))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - fVar7) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar3 - fVar8))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + fVar6);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 + (float10)fVar2);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar8 + (float10)fVar3);
  F_006c5980(param_2,&(*(float *)(gen_frame + 0x0)),param_4);
  return 1;
}

/* ref: FUN_006d7550 */
GEN_FRAME uint GEN_THISCALL F_006d7550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  ushort uVar1;
  int * piVar2;
  byte bVar3;
  byte bVar4;
  int * piVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_10;
  int local_c;
  
  uVar7 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  uVar1 = *(ushort *)(param_2 + 0x22);
  bVar3 = F_00ae0dd0((uint)uVar1);
  piVar5 = *(int * PTR32 *)((int)this + 0x2c);
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  do {
    if (piVar5 == piVar2) {
      *param_1 = *(undefined4 *)((int)this + 0x30);
      return (uint)param_1;
    }
    if ((piVar5[5] != 7) && (bVar4 = F_00ae0dd0(piVar5[2]), bVar3 == bVar4)) {
      if (bVar3 == 0) {
        local_10 = (int)uVar7;
        if (*piVar5 != local_10) goto LAB_006d75c3;
        local_c = (int)((ulonglong)uVar7 >> 0x20);
        bVar6 = piVar5[1] == local_c;
      }
      else {
        bVar6 = piVar5[2] == (uint)uVar1;
      }
      if (bVar6) {
        *param_1 = piVar5;
        return (uint)param_1;
      }
    }
LAB_006d75c3: ;
    piVar5 = piVar5 + 0x22;
  } while( true );
}

/* ref: FUN_006d75f0 */
GEN_FRAME uint GEN_THISCALL F_006d75f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d75f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x40)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 5;
  }
  return (uint)piVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf68 */
GEN_NOFRAME uint GEN_THISCALL F_006d7620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  undefined * this_00;
  uint * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  F_00a02210(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  uVar4 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),2);
  puVar6 = *((uint * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x3c)));
  do {
    if (puVar6 == *((uint * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x40)))) {
LAB_006d77ef: ;
      F_00a02240(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
      return 0;
    }
    if (*puVar6 == uVar4) {
      fVar1 = gen_bits2f(puVar6[3]);
      fVar2 = gen_bits2f(puVar6[1]);
      (*(float *)(gen_frame + 0x64)) = gen_bits2f(puVar6[2]);
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(float *)(gen_frame + 0x60)) = fVar2;
      (*(float *)(gen_frame + 0x68)) = fVar1;
      (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b9308)));
      fVar1 = gen_bits2f(puVar6[4]);
      (*(float *)(gen_frame + 0x78)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x7c)) = fVar2;
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      fVar1 = (float)fVar7;
      (*(float *)(gen_frame + 0x7c)) = fVar1;
      ((float *)(gen_frame + 0x80))[0] = fVar1;
      ((float *)(gen_frame + 0x80))[2] = ((float)GEN_TOF(-(float10)fVar2));
      ((float *)(gen_frame + 0x80))[1] = 0.0;
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0x94)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = 0;
      (*(undefined4 *)(gen_frame + 0xb0)) = 0;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0;
      pfVar5 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0x80)));
      (*(float *)(gen_frame + 0x40)) = *pfVar5;
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x44)) = fVar1;
      fVar2 = pfVar5[2];
      (*(float *)(gen_frame + 0x48)) = fVar2;
      fVar3 = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x50)) = fVar3;
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x68)));
      (*(float *)(gen_frame + 0x58)) = fVar2;
      (*(float *)(gen_frame + 0x20)) = fVar3;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar2;
      if (REFG(int, 0x1375bbc) != 1) {
        F_00b70d10(&REFG(undefined4, 0x1375b90) GEN_EDX_ARG,1);
      }
      if (REFG(int, 0x1375bbc) == -1) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))]));
      }
      F_00b718e0(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x60)));
      goto LAB_006d77ef;
    }
    puVar6 = puVar6 + 5;
  } while( true );
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf121 */
GEN_FRAME uint GEN_THISCALL F_006d7810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7810u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)) GEN_EDX_FWD,param_2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (3 < (int)uVar4) {
    fVar5 = F_00a01dd0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    param_2 = (uint)gen_fl2bits((float)fVar5);
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
      param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    }
    else if (!GEN_ISNAN(gen_bits2f(param_2)) && !(0.0 < gen_bits2f(param_2))) goto LAB_006d78bf;
  }
  F_006d7440(*(undefined4 *)(param_1 + 4) GEN_EDX_ARG,uVar1,uVar2,(*(uint *)(gen_frame + 0x28)),GEN_TOF(gen_bits2f(param_2)));
LAB_006d78bf: ;
  F_00a02240(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf128 */
GEN_NOFRAME uint GEN_THISCALL F_006d78e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  float * pfVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar4);
  piVar5 = *(int * PTR32 *)(*piVar5 + 0x60);
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,2);
  (*(float *)(gen_frame + 0x9c)) = ((float)GEN_TOF(-fVar7));
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  (*(float *)(gen_frame + 0x7c)) = (float)fVar7;
  uVar4 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x9c)) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  (*(float *)(gen_frame + 0x9c)) = (float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f(piVar5[0x2c]))));
  pfVar6 = (float *)F_00a5feb0(piVar5 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x60)) = *pfVar6;
  (*(float *)(gen_frame + 0x64)) = pfVar6[1];
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x7c));
  (*(float *)(gen_frame + 0x68)) = pfVar6[2];
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  fVar7 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x9c)))));
  fVar1 = (float)fVar7;
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar1;
  fVar7 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x9c)))));
  fVar2 = (float)fVar7;
  (*(float *)(gen_frame + 0x98)) = fVar2;
  ((float *)(gen_frame + 0xa0))[1] = 0.0;
  ((float *)(gen_frame + 0xa0))[0] = fVar2;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  ((float *)(gen_frame + 0xa0))[2] = ((float)GEN_TOF(-(float10)fVar1));
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  pfVar6 = (float *)F_004ee670(((float *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0xa0)));
  fVar1 = *pfVar6;
  (*(float *)(gen_frame + 0x80)) = fVar1;
  (*(float *)(gen_frame + 0x88)) = pfVar6[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar6[2] + (float10)(*(float *)(gen_frame + 0x68)));
  uVar4 = F_006ca070(&(*(float *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0x9c)),0,(*(float *)(gen_frame + 0x7c)),((float *)(gen_frame + 0x40)));
  if ((char)uVar4 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5 GEN_EDX_ARG,((float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x84)) = 0.0;
    ((float *)(gen_frame + 0x40))[0] = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x28)));
    pfVar6 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG);
    fVar1 = *pfVar6;
    iVar3 = *piVar5;
    (*(float *)(gen_frame + 0x80)) = fVar1;
    (*(float *)(gen_frame + 0x84)) = pfVar6[1];
    (*(float *)(gen_frame + 0x88)) = pfVar6[2];
    fVar7 = ((float10)GEN_TOD(atan2((float10)fVar1,(float10)pfVar6[2])));
    (*(float *)(gen_frame + 0x94)) = (float)fVar7;
    ((code *)*(gen_code32 *)(iVar3 + 0x48))(piVar5,(undefined4)gen_fl2bits((float)fVar7));
    F_006c5980(piVar5,&(*(float *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x58)));
  }
  F_00a02240(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006d7b90 */
GEN_FRAME uint GEN_THISCALL F_006d7b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6d7b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 4)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x10))
                      ((int *)*puVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    return uVar2;
  }
  return (uint)puVar1;
}

/* ref: Client::Game::Event::CreateAppearanceTask::vf1 */
GEN_FRAME uint GEN_THISCALL F_006d7bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 * puVar6;
  uint uVar7;
  undefined * pCVar8;
  
  if ((this[0xbd] == (undefined1)0x0) && (this[0xbc] != (undefined1)0x0)) {
    puVar2 = (undefined4 *)F_00ab37e0(*(undefined4 *)(this + 0x98));
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *(undefined4 *)(this + 0xa0) = *puVar2;
    *(undefined4 *)(this + 0xa4) = puVar2[1];
    *(undefined4 *)(this + 0xa8) = puVar2[2];
    uVar5 = puVar2[3];
    this[0xbd] = (undefined1)0x1;
    *(undefined4 *)(this + 0xb0) = uVar5;
  }
  piVar3 = *(int * PTR32 *)(this + 0x90);
  if (piVar3 == (int *)0x0) {
    uVar7 = 0;
    uVar5 = 0;
    if (*(int *)(this + 0x9c) == 3) {
      uVar7 = F_00ae3f10(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,0xffffffff);
      piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,uVar7);
      if ((piVar3 != (int *)0x0) &&
         (bVar1 = F_00aaa870(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x94)), bVar1 != 0)) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG);
      }
      *(int * PTR32 *)(this + 0x90) = piVar3;
      uVar5 = 4;
    }
    else if (*(int *)(this + 0x9c) == 7) {
      uVar7 = F_00ae3140(&REFG(undefined, 0x14c0920) GEN_EDX_ARG);
      piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920) GEN_EDX_ARG,uVar7);
      if (piVar3 != (int *)0x0) {
        F_00ae1e60(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x94),0,0,0);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG);
      }
      *(int * PTR32 *)(this + 0x90) = piVar3;
      uVar5 = 5;
    }
    piVar3 = *(int * PTR32 *)(this + 0x90);
    (*(undefined8 *)(gen_frame + 0x4)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x4)));
    if (piVar3 != (int *)0x0) {
      if (this[0xbc] == (undefined1)0x0) {
        F_006d4f80(piVar3,this + 0xa0,*(float *)(this + 0xb0),*(undefined4 *)(this + 0xb4),
                     *(float *)(this + 0xb8));
        piVar3 = *(int * PTR32 *)(this + 0x90);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3 GEN_EDX_ARG,this + 0xa0);
        piVar3 = *(int * PTR32 *)(this + 0x90);
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x48))();
      F_0071edf0(&(*(undefined8 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      (*(undefined8 *)(gen_frame + 0x4)) = ((gen_lcode *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x90))))(*(undefined4 * PTR32 *)(this + 0x90));
      (*(uint *)(gen_frame + 0xc)) = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x90) + 0x88)));
      (*(uint *)(gen_frame + 0x10)) = uVar7;
      (*(undefined4 *)(gen_frame + 0x18)) = uVar5;
      puVar6 = &(*(undefined8 *)(gen_frame + 0x4));
      pCVar8 = this + 8;
      for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 - 1) {
        *(undefined4 *)pCVar8 = *(undefined4 *)puVar6;
        puVar6 = (undefined8 *)((int)puVar6 + 4);
        pCVar8 = pCVar8 + 4;
      }
    }
  }
  else {
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x7c))(piVar3 GEN_EDX_ARG);
    (*(undefined8 *)(gen_frame + 0x4)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x4)));
    if (((char)uVar7 != '\0') &&
       (piVar3 = *(int * PTR32 *)(this + 0x90), (*(undefined8 *)(gen_frame + 0x4)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4)) + 4)),(undefined4)(*(undefined8 *)(gen_frame + 0x4))),
       (*(byte *)((int)piVar3 + 0x8e) & 0x80) == 0)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG);
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x90);
  if (piVar3 != (int *)0x0) {
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG);
    if ((char)uVar7 != '\0') {
      uVar7 = F_00a5f8a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG);
      if (uVar7 == 0) {
        return 1;
      }
      return (uint)(*(char *)(uVar7 + 0x65) == '\x03');
    }
  }
  return 0;
}

/* ref: Client::Game::Event::SetPositionTask::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006d7df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code * pcVar4;
  byte bVar5;
  int * piVar6;
  undefined4 * puVar7;
  
  uVar3 = *(uint *)(this + 0x10);
  if (uVar3 != 0xffffffff) {
    bVar5 = F_00ae0dd0(uVar3);
    if (bVar5 != 0) {
      if (uVar3 < 0x158) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar3)]));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
      }
      goto LAB_006d7e61;
    }
  }
  if (*(int *)(this + 8) == -0x20000000) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(int *)(this + 8),*(undefined4 *)(this + 0xc));
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar6;
LAB_006d7e61: ;
  if ((this[0x3c] == (undefined1)0x0) && ((*(int * PTR32 *)(gen_frame + 0x1c)) != (int *)0x0)) {
    if (this[0x3d] == (undefined1)0x0) {
      F_006d4f80((*(int * PTR32 *)(gen_frame + 0x1c)),this + 0x20,*(float *)(this + 0x30),*(undefined4 *)(this + 0x34),
                   *(float *)(this + 0x38));
      this[0x3c] = (undefined1)0x1;
    }
    else {
      puVar7 = (undefined4 *)F_00ab37e0(*(undefined4 *)(this + 0x14));
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        pcVar4 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x3c);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
        (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
        (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
        (*pcVar4)((*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x48))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,puVar7[3]);
        this[0x3c] = (undefined1)0x1;
        return 0;
      }
    }
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf1 */
GEN_FRAME uint GEN_THISCALL F_006d7f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3 GEN_EDX_ARG,0,0x1e,1);
    *(undefined4 *)(this + 4) = 1;
  }
  else if (iVar1 == 1) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3 GEN_EDX_ARG);
      if ((uVar4 & 8) == 0) {
        *(undefined4 *)(this + 4) = 2;
        return 0;
      }
    }
  }
  else if (iVar1 == 2) {
    F_005d5550(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG);
    *(undefined4 *)(this + 4) = 3;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar3 != (int *)0x0) {
      uVar5 = 1;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
      this_00 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar5);
      if (this_00 != (undefined *)0x0) {
        F_008f2a30(this_00 GEN_EDX_ARG,1,((code *)REFP(0x7286f0)),this,((code *)REFP(0x6bc0f0)),0);
        return 0;
      }
    }
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      F_005d5560(&REFG(undefined, 0x1379c6c) GEN_EDX_ARG);
      *(undefined4 *)(this + 4) = 5;
      return 0;
    }
    if (iVar1 == 5) {
      bVar2 = F_005e1600();
      if (bVar2 != 0) {
        bVar2 = F_005d99e0();
        piVar3 = REFG(int * PTR32, 0x1379694);
        if ((bVar2 != 0) && (REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG);
          if ((char)uVar4 != '\0') {
            uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG);
            if ((char)uVar4 != '\0') {
              piVar3 = (int *)F_006d7400(param_1 GEN_EDX_ARG);
              if (piVar3 == (int *)0x0) {
LAB_006d80b4: ;
                piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
                ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3 GEN_EDX_ARG,0,0x1e,1);
                *(undefined4 *)(this + 4) = 6;
                return 0;
              }
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG);
              if ((char)uVar4 != '\0') {
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG);
                if ((char)uVar4 != '\0') goto LAB_006d80b4;
              }
            }
          }
        }
      }
    }
    else if (iVar1 == 6) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      if (piVar3 != (int *)0x0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3 GEN_EDX_ARG);
        if ((uVar4 & 8) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_006d8130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 2) != 0) {
    return 1;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 0xc))((int *)*puVar2 GEN_EDX_FWD);
      if ((char)uVar1 != '\0') {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf114 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006d8180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10)));
  if (piVar4 != *(int * PTR32 *)(this + 0x10)) {
    do {
      *(byte *)(piVar4[3] + 0x8f) = *(byte *)(piVar4[3] + 0x8f) | 4;
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
    } while (piVar4 != *(int * PTR32 *)(this + 0x10));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf120 */
GEN_NOFRAME uint GEN_THISCALL F_006d81e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d81e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)(this + 0x10);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar4 = (int *)piVar5[3];
      *(byte *)((int)piVar4 + 0x8f) = *(byte *)((int)piVar4 + 0x8f) | 8;
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x10));
  }
  return (uint)piVar4;
}

/* ref: Client::Game::Event::EventHandler::vf121 */
GEN_NOFRAME uint GEN_THISCALL F_006d8240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)(this + 0x10);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar4 = (int *)F_00a5f290((undefined *)piVar5[3] GEN_EDX_FWD);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x8a) == '\x03')) {
        *(byte *)(piVar4 + 0xb75) = *(byte *)(piVar4 + 0xb75) | 0x40;
      }
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x10));
  }
  return (uint)piVar4;
}

/* ref: Client::Game::Event::EventHandler::vf126 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006d82c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10)));
  if (piVar4 != *(int * PTR32 *)(this + 0x10)) {
    do {
      *(byte *)(piVar4[3] + 0x8f) = *(byte *)(piVar4[3] + 0x8f) | 0x20;
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
    } while (piVar4 != *(int * PTR32 *)(this + 0x10));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_006d8320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) == 0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2 GEN_EDX_FWD);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  return 1;
}

/* ref: FUN_006d8360 */
GEN_FRAME uint GEN_THISCALL F_006d8360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10)));
  iVar5 = 0;
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x10)) {
      return 0;
    }
    if (iVar5 == param_1) break;
    iVar5 = iVar5 + 1;
    if (*(char *)((int)puVar2 + 0x11) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x11);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x11);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return puVar2[3];
}

/* ref: Client::Game::Event::ArrayEventHandler::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_006d83d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d83d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  
  if (((byte)this[0x1c] & 1) == 0) {
    return 0;
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar3 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3 GEN_EDX_FWD);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  uVar1 = 0;
  pAVar4 = this + 0xf8;
  while ((*(int *)pAVar4 == 0 ||
         (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 8))))(*(int * PTR32 *)pAVar4 GEN_EDX_ARG), (char)uVar2 != '\0'))) {
    uVar1 = uVar1 + 1;
    pAVar4 = pAVar4 + 4;
    if (0xf < uVar1) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_006d8440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * pAVar3;
  uint uVar4;
  
  bVar1 = F_006d8130((undefined *)this GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 1;
  }
  uVar4 = 0;
  pAVar3 = this + 0xf8;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0xc))))(*(int * PTR32 *)pAVar3 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (uVar4 < 0x10);
  return 0;
}

/* ref: FUN_006d8490 */
GEN_FRAME byte GEN_THISCALL F_006d8490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)&gen_args[1]) == REFG(int, 0x1379694)) && ((REFG(undefined1, 0x14b4ec0) & 0x20) != 0)) {
    if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x265))) == '\0') &&
       ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x266))) == '\0' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x267))) == '\0')))) {
LAB_006d84ee: ;
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)));
      uVar3 = F_00a4ffd0();
      bVar2 = F_006d5600((uint)uVar1,uVar3);
      return bVar2;
    }
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),REFG(char, 0x14ab29a));
    if (REFG(char, 0x14ab29a) != '\0') {
      bVar2 = F_00a68920(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(int *)&gen_args[1]));
      if (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) <= bVar2) goto LAB_006d84ee;
    }
  }
  return 0;
}

/* ref: FUN_006d8510 */
GEN_FRAME uint GEN_THISCALL F_006d8510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d8510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  psVar3 = *(short * PTR32 *)((int)this + 0x534);
  if ((psVar3 == (short *)0x0) || (*psVar3 != (short)param_3)) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10)));
    iVar2 = param_2 * 0x14;
    puVar4 = *(undefined4 * PTR32 *)(iVar1 + iVar2);
    if (puVar4 != *(undefined4 * PTR32 *)(iVar1 + 4 + iVar2)) {
      do {
        for (psVar3 = (short *)*puVar4; psVar3 != (short *)puVar4[1]; psVar3 = psVar3 + 0x5c) {
          if (*psVar3 == (short)param_3) {
            *(short * PTR32 *)((int)this + 0x534) = psVar3;
            return (uint)psVar3;
          }
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10))) + 4 + iVar2))));
    }
    psVar3 = (short *)0x0;
  }
  return (uint)psVar3;
}

/* ref: FUN_006d85b0 */
GEN_FRAME uint GEN_THISCALL F_006d85b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d85b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 4);
  *(undefined4 *)((int)this + 600) = *puVar3;
  *(undefined4 *)((int)this + 0x25c) = puVar3[1];
  *(undefined4 *)((int)this + 0x260) = puVar3[2];
  *(undefined4 *)((int)this + 0x264) = puVar3[3];
  if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0')) &&
     (*(char *)((int)this + 0x267) == '\0')) {
    uVar4 = 0x24d;
  }
  else {
    uVar4 = 0x243;
  }
  uVar2 = F_00ab0230(uVar4,(int)this + 0x1d4);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x570);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0xe8);
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
      return uVar2;
    }
    while (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3 GEN_EDX_ARG), (char)uVar2 != '\0') {
      puVar3 = puVar3 + 1;
      if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
        return uVar2;
      }
    }
  }
  F_00735ca0(this GEN_EDX_ARG,this);
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x23c))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006d86b0 */
GEN_NOFRAME uint GEN_THISCALL F_006d86b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d86b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x9c);
  *(uint *)((int)this + 0x56c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6d85b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  F_00cb4540(this_00 GEN_EDX_ARG,0,*(undefined4 *)((int)this + 8));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006d8740 */
GEN_FRAME uint GEN_STDCALL F_006d8740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d8740u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ushort * puVar7;
  
  uVar5 = F_00a4ffd0();
  (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
  puVar7 = (ushort *)(uVar5 + 0x168c);
  (*(int *)(gen_frame + 0x14)) = 0x10;
  do {
    if (puVar7[-2] == (ushort)param_1) {
      uVar5 = (uint)puVar7[1];
      if ((byte)puVar7[-1] == 0xff) {
        uVar1 = *puVar7;
        uVar2 = puVar7[2];
        (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(uVar1 & 8) != 0);
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(*puVar7 & 0x40) != 0);
        uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)(byte)uVar2,0);
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(*puVar7 & 0x20) != 0);
        uVar4 = (undefined1)(*puVar7 >> 7);
        uVar3 = (*(uint *)(gen_frame + 0x18)) >> 8;
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffffff00;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),uVar4) & 0xffffff0f;
        if (param_2 == 2) {
          (*(uint *)(gen_frame + 0x18)) = CONCAT31((int3)uVar3,uVar4) & 0xffffff07;
        }
        uVar5 = F_006d6580(param_1,uVar5,uVar6 & 0xffff,(*(uint *)(gen_frame + 0x0)),(uint)REFG(undefined1, 0x14ab29a),param_3,
                             (uint)((byte)uVar1 & 7),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(uint)(byte)uVar2,
                             (*(uint *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x10)));
      }
    }
    puVar7 = puVar7 + 8;
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) - 1;
  } while ((*(int *)(gen_frame + 0x14)) != 0);
  return uVar5;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf130 */
GEN_NOFRAME uint GEN_THISCALL F_006d8840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d8840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    psVar2 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
    while( true ) {
      if (psVar2 == *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0)) {
        return 1;
      }
      if ((*psVar2 != 0) && ((char)psVar2[6] == '\0')) break;
      psVar2 = psVar2 + 8;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf25 */
GEN_FRAME uint GEN_THISCALL F_006d8880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d8880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = *(uint *)(param_2 + 8);
  if ((int)uVar3 < 0) {
    *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b0))) = uVar3;
    ((char *)(gen_frame + 0x20))[0] = -1;
    ((char *)(gen_frame + 0x20))[1] = -1;
    ((char *)(gen_frame + 0x20))[2] = -1;
    ((char *)(gen_frame + 0x20))[3] = -1;
    ((char *)(gen_frame + 0x20))[4] = -1;
    ((char *)(gen_frame + 0x20))[5] = -1;
    ((char *)(gen_frame + 0x20))[6] = -1;
    ((char *)(gen_frame + 0x20))[7] = -1;
    uVar3 = 0;
    ((int *)(gen_frame + 0x0))[0] = 0;
    ((int *)(gen_frame + 0x0))[1] = 0;
    ((int *)(gen_frame + 0x0))[2] = 0;
    ((int *)(gen_frame + 0x0))[3] = 0;
    ((int *)(gen_frame + 0x0))[4] = 0;
    ((int *)(gen_frame + 0x0))[5] = 0;
    ((int *)(gen_frame + 0x0))[6] = 0;
    ((int *)(gen_frame + 0x0))[7] = 0;
    cVar2 = '\0';
    puVar5 = (undefined1 *)(param_2 + 0x1a);
    iVar6 = 0;
    do {
      iVar7 = *(int *)(puVar5 - 10);
      if (0 < iVar7) {
        ((int *)(gen_frame + 0x0))[(int)(iVar6)] = iVar7;
        ((char *)(gen_frame + 0x20))[(int)(iVar6)] = cVar2;
        iVar6 = iVar6 + 1;
      }
      *((int *)GEN_TOP((uVar3 + 100 + *(int *)(this + 0x10c)))) = iVar7;
      *((undefined1 *)GEN_TOP((uVar3 + 0x72 + *(int *)(this + 0x10c)))) = *puVar5;
      *((undefined1 *)GEN_TOP((uVar3 + 0x73 + *(int *)(this + 0x10c)))) = puVar5[1];
      *((undefined1 *)GEN_TOP((uVar3 + 0x74 + *(int *)(this + 0x10c)))) = puVar5[2];
      *((undefined1 *)GEN_TOP((uVar3 + 0x75 + *(int *)(this + 0x10c)))) = puVar5[3];
      cVar2 = cVar2 + '\x01';
      *((undefined1 *)GEN_TOP((uVar3 + 0x76 + *(int *)(this + 0x10c)))) = puVar5[4];
      *((undefined1 *)GEN_TOP((uVar3 + 0x77 + *(int *)(this + 0x10c)))) = puVar5[5];
      *((undefined2 *)GEN_TOP((uVar3 + 0x70 + *(int *)(this + 0x10c)))) = *(undefined2 *)(puVar5 - 6);
      *((undefined1 *)GEN_TOP((uVar3 + 0x78 + *(int *)(this + 0x10c)))) = puVar5[-1];
      uVar3 = uVar3 + 0x74;
      puVar5 = puVar5 + 0x10;
    } while (uVar3 < 0x3a0);
    **(undefined1 * PTR32 *)(this + 0x10c) = (char)(*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 0));
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 1))) = (char)SUB41((*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 0)),1);
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 2))) = ((char *)(gen_frame + 0x20))[2];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 3))) = ((char *)(gen_frame + 0x20))[3];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 4))) = (char)(*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 4));
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 5))) = (char)SUB41((*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 4)),1);
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 6))) = ((char *)(gen_frame + 0x20))[6];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 7))) = ((char *)(gen_frame + 0x20))[7];
    if (*(int *)(this + 0x114) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x11c);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)(this + 0x114));
      }
      puVar4 = *(undefined4 * PTR32 *)(this + 0x114);
      if (puVar4 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
        *(undefined4 *)(this + 0x114) = 0;
      }
    }
    if (*(int *)(this + 0x11c) == 0) {
      this[0x14a] = (undefined1)((char)this[0x14a] + '\x01');
      if (100 < (byte)this[0x14a]) {
        this[0x14a] = (undefined1)0x0;
      }
      uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xb);
      *(uint *)(this + 0x11c) = uVar3;
    }
    puVar4 = (undefined4 *)F_00406b90(0x28,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar4 GEN_EDX_ARG,iVar6,1);
      puVar4[8] = ((code *)REFP(0x6d58f0));
      puVar4[5] = iVar6;
      *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
      puVar4[6] = this;
      puVar4[9] = 0;
    }
    *(undefined4 * PTR32 *)(this + 0x114) = puVar4;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        F_00cb4540(*(undefined * PTR32 *)(this + 0x114) GEN_EDX_ARG,iVar7,((int *)(gen_frame + 0x0))[(int)(iVar7)]);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x11c) + 0x48))))
                      (*(int * PTR32 *)(this + 0x11c) GEN_EDX_ARG,*(undefined4 *)(this + 0x114));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf112 */
GEN_FRAME uint GEN_THISCALL F_006d8ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2 GEN_EDX_FWD);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if (((uVar1 == 6) && (param_1[0x20] == *(int *)(this + 0x138))) &&
       (this[0x146] == (undefined1)0x3)) {
      return 0xee10;
    }
  }
  return 0;
}

/* ref: FUN_006d8b60 */
GEN_FRAME uint GEN_THISCALL F_006d8b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int * piVar17;
  uint uVar18;
  uint uVar19;
  
  uVar14 = F_00a4ffd0();
  cVar11 = REFG(char, 0x14ab29a);
  uVar5 = *(ushort *)((int)this + 0x2f0);
  cVar1 = *(char *)((int)this + 0x2f8);
  bVar13 = *(byte *)((int)this + 800);
  uVar19 = *(uint *)((int)this + 0x2f4);
  uVar6 = *(ushort *)((int)this + 0x2e8);
  cVar2 = *(char *)((int)this + 0x2fa);
  bVar3 = *(byte *)((int)this + 0x2f9);
  uVar15 = *(uint *)((int)this + 0x2fc);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),REFG(char, 0x14ab29a));
  cVar4 = *(char *)((int)this + 0x2f2);
  bVar12 = F_00a68920(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
  uVar7 = *(ushort *)((int)this + 0x312);
  uVar8 = *(ushort *)((int)this + 0x314);
  sVar9 = *(short *)((int)this + 0x310);
  uVar18 = (uint)(*(ushort *)((int)this + 0x1d4) >> 3);
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (((uVar18 < 200) &&
      ((*(byte *)(uVar18 + 0x12ea + uVar14) &
       (byte)(0x80 >> ((byte)*(ushort *)((int)this + 0x1d4) & 7))) != 0)) && ((bVar13 & 1) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = 0x400;
  }
  if (uVar19 != 0) {
    if (cVar4 == '\x03') {
      if (uVar19 != REFG(undefined1, 0x14ab14e)) goto LAB_006d8c6f;
    }
    else if ((cVar4 != '\x04') || (uVar19 == REFG(undefined1, 0x14ab14e))) {
LAB_006d8c6f: ;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x20;
    }
  }
  if ((cVar2 != '\0') && (cVar2 != *(char *)(uVar14 + 0x375))) {
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x10;
  }
  if ((cVar1 != '\0') || (bVar3 != 0)) {
    if ((cVar11 == '\0') || ((cVar1 != '\0' && (cVar1 != cVar11)))) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x40;
    }
    if (((bVar3 != 0) && (cVar11 != '\0')) && (bVar12 < bVar3)) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x80;
    }
  }
  if ((uVar15 != 0) && (((&REFG(undefined1, 0x14b4ec0))[(int)(uVar15 >> 3)] & (byte)(1 << ((byte)uVar15 & 7))) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 8;
  }
  bVar13 = F_006bff20(this GEN_EDX_ARG,uVar14);
  uVar19 = (*(uint *)(gen_frame + 0x10));
  if (bVar13 == 0) {
    uVar19 = (*(uint *)(gen_frame + 0x10)) | 0x100;
  }
  bVar13 = F_006c0040(this GEN_EDX_ARG,uVar14);
  if (bVar13 != 0) {
    uVar19 = uVar19 | 0x200;
  }
  bVar13 = F_006c0160(this GEN_EDX_ARG,uVar14);
  if (bVar13 == 0) {
    uVar19 = uVar19 | 0x2000;
  }
  if (sVar9 != 0) {
    uVar15 = 0;
    do {
      if ((&REFG(undefined2, 0x1379ca0))[(int)(uVar15 * 2)] == sVar9) {
        uVar10 = *(ushort *)(uVar15 * 4 + 0x1379ca2);
        if ((uVar7 <= uVar10) && (uVar10 < uVar8)) goto LAB_006d8d4f;
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 2);
    uVar19 = uVar19 | 0x10000;
  }
LAB_006d8d4f: ;
  if ((0x1c < REFG(undefined1, 0x14ab0d4)) ||
     ((*((uint *)GEN_TOP(((int)this + (uint)(REFG(undefined1, 0x14ab0d4) >> 5) * 4 + 0x2e4))) & 1 << (REFG(undefined1, 0x14ab0d4) & 0x1f)) ==
      0)) {
    uVar19 = uVar19 | 1;
  }
  uVar15 = 0;
  do {
    if (((*((uint *)GEN_TOP(((int)this + (uVar15 >> 5) * 4 + 0x2e4))) & 1 << ((byte)uVar15 & 0x1f)) != 0) &&
       (uVar18 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar15,0), uVar6 <= (ushort)uVar18)) goto LAB_006d8db3;
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x1d);
  uVar19 = uVar19 | 2;
LAB_006d8db3: ;
  iVar16 = 0;
  piVar17 = (int *)((int)this + 0x2ec);
  do {
    if (*piVar17 != 0) {
      uVar15 = 0;
      goto LAB_006d8dde;
    }
    piVar17 = piVar17 - 1;
    iVar16 = iVar16 - 1;
  } while (-1 < iVar16);
LAB_006d8e14: ;
  uVar15 = 0;
  do {
    if (*(uint *)((int)&REFG(undefined4, 0x10b6d3c) + uVar15) == (*(ushort *)((int)this + 0x1d4) | 0x10000)) {
      bVar13 = F_006c05a0(uVar14,(uint)*(ushort *)((int)this + 0x1d4));
      if (bVar13 != 0) {
        uVar19 = uVar19 | 0x200;
      }
      return uVar19;
    }
    uVar15 = uVar15 + 4;
  } while (uVar15 < 0x24);
  return uVar19;
  while (uVar15 = uVar15 + 1, uVar15 < 0x1d) {
LAB_006d8dde: ;
    if (((*((uint *)GEN_TOP(((int)this + (uVar15 >> 5) * 4 + 0x2ec))) & 1 << ((byte)uVar15 & 0x1f)) != 0) &&
       (uVar18 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar15,0), uVar5 <= (ushort)uVar18)) goto LAB_006d8e14;
  }
  uVar19 = uVar19 | 4;
  goto LAB_006d8e14;
}

/* ref: FUN_006d8e70 */
GEN_FRAME uint GEN_THISCALL F_006d8e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d8e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  short sVar1;
  ushort uVar2;
  undefined * this_00;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x189))) != '\0') && (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x189))) != 'Z')) {
    return 0;
  }
  cVar3 = *(char *)((*(int *)&gen_args[6]) + 1);
  if ((cVar3 == '\n') || (cVar3 == '\v')) {
    (*(uint *)&gen_args[3]) = 5000000;
  }
  else if (cVar3 == '\x0f') {
    (*(uint *)&gen_args[3]) = 0x4c9960;
  }
  else if (((char)(*(uint *)&gen_args[2]) == '\x01') && ((*(uint *)&gen_args[3]) == 0)) {
    (*(uint *)&gen_args[3]) = 0x4c7250;
  }
  uVar4 = F_006d8b60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]));
  sVar1 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar5 = F_00a4ffd0();
  iVar9 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar1) {
      if (-1 < iVar9) {
        cVar3 = *(char *)(iVar6 + 6);
        goto LAB_006d8f05;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar9 < 0x1e);
  cVar3 = '\0';
LAB_006d8f05: ;
  uVar5 = 0;
  if (cVar3 == -1) {
    uVar2 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e8)));
    uVar7 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)REFG(undefined1, 0x14ab0d4),0);
    if ((ushort)uVar7 < uVar2) {
      uVar5 = 2;
    }
  }
  if ((*(byte *)((*(int *)&gen_args[6]) + 0x10) & 4) != 0) {
    iVar6 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if (iVar6 != 0) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      if (uVar7 == 1) {
        uVar7 = F_0042a990(iVar6 + 8 GEN_EDX_ARG);
        uVar8 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
        (*(uint *)&gen_args[3]) = F_00a029f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"IsQualified",uVar8,uVar7,(*(uint *)&gen_args[2]) & 0xff
                               ,(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(uint)*(byte *)((*(int *)&gen_args[6]) + 1),2);
        if ((*(uint *)&gen_args[3]) == 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
          (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff;
          F_00727410(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[3]));
          F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3);
          return (*(uint *)&gen_args[3]) | uVar5 | uVar4;
        }
      }
    }
  }
  return uVar5 | uVar4;
}

/* ref: FUN_006d9070 */
GEN_FRAME uint GEN_THISCALL F_006d9070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 800);
  if ((bVar1 & 8) == 0) {
    uVar2 = F_006d8b60(this GEN_EDX_FWD,param_1);
    if (uVar2 == 0) {
      return ((bVar1 & 1) != 0) + 1;
    }
    if ((((*(byte *)((int)this + 800) & 2) != 0) && ((uVar2 & 0x500) == 0)) && ((uVar2 & 0x70) == 0)
       ) {
      return 0xb;
    }
  }
  return 0;
}

/* ref: FUN_006d90d0 */
GEN_FRAME uint GEN_THISCALL F_006d90d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d90d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *(int *)((int)this + 0x318);
  iVar3 = *(int *)((int)this + 0x31c);
  if ((*(byte *)(param_6 + 0x10) & 2) != 0) {
    iVar8 = param_1[0x5d];
    if (iVar8 == 0) {
      return 0;
    }
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    if (uVar6 != 1) {
      return 0;
    }
    uVar6 = F_0042a990(iVar8 + 8 GEN_EDX_ARG);
    uVar7 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
    uVar6 = F_00a02930(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"IsAnnounce",uVar7,uVar6,param_2 & 0xff,
                         param_3,param_4,1);
    if (uVar6 != 0) {
      return 0;
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
    (*(char *)(gen_frame + 0xb)) = '\0';
    bVar4 = F_00a01d80(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)));
    if ((bVar4 != 0) && ((*(char *)(gen_frame + 0xb)) == '\0')) {
      return 0;
    }
  }
  bVar4 = *(byte *)((int)this + 800);
  sVar1 = *(short *)((int)this + 0x1d4);
  uVar6 = F_00a4ffd0();
  iVar9 = 0;
  iVar8 = uVar6 + 0x13b4;
  do {
    if (*(short *)(iVar8 + 4) == sVar1) {
      if (-1 < iVar9) {
        cVar5 = *(char *)(iVar8 + 6);
        goto LAB_006d91a1;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar9 < 0x1e);
  cVar5 = '\0';
LAB_006d91a1: ;
  if ((bVar4 >> 3 & 1) == 0) {
    if (cVar5 != '\0') goto LAB_006d91c5;
    if ((iVar2 != 0) && (iVar2 == param_3)) {
      uVar6 = F_006d9070(this GEN_EDX_ARG,param_1);
      return uVar6;
    }
  }
  else if (cVar5 != '\0') {
LAB_006d91c5: ;
    if (cVar5 == -1) {
      uVar6 = F_006d8e70(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
      if (uVar6 != 0) {
        return (uint)(param_3 == iVar3) * 2 + 0xd;
      }
      return (uint)(param_3 == iVar3) * 2 + 3;
    }
    uVar6 = F_006d8e70(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
    if (uVar6 != 0) {
      return ((char)param_2 == '\x02') + 0xd;
    }
    return ((char)param_2 == '\x02') + 3;
  }
  return 0;
}

/* ref: FUN_006d9290 */
GEN_FRAME byte GEN_THISCALL F_006d9290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x74);
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar7[3] + 4))((int *)piVar7[3] GEN_EDX_FWD);
      if (((char)uVar5 == '\x02') &&
         ((((char)param_2 == '\0' ||
           (uVar5 = F_00a5f290((undefined *)piVar7[3] GEN_EDX_ARG), *(char *)(uVar5 + 0x188) != '\x02')) &&
          (iVar3 = *(int *)(piVar7[3] + 0x84), iVar3 != -0x20000000)))) {
        if (iVar3 == iVar2) {
          return 1;
        }
        iVar8 = 0;
        if (REFG(undefined1, 0x1338ad4) != 0) {
          do {
            piVar6 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,iVar8);
            if ((piVar6 != (int *)0x0) && (*piVar6 == iVar3)) {
              return 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)REFG(undefined1, 0x1338ad4));
        }
      }
      if (*(char *)((int)piVar7 + 0x11) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x11);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_006d9390 */
GEN_FRAME uint F_006d9390(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  this = (undefined *)*puVar4;
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar3);
  iVar1 = *piVar5;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (2 < (int)uVar3) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  }
  bVar2 = F_006d9290(this GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x60),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  F_00a01ea0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d9430 */
GEN_FRAME byte GEN_THISCALL F_006d9430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = param_1[0x1e];
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if (uVar4 == 1) {
    if ((byte)(*(char *)((int)this + 0x44) - 10U) < 2) {
      iVar5 = *(int *)((int)this + 0x48);
      goto LAB_006d9466;
    }
  }
  else if (iVar5 != 0) {
LAB_006d9466: ;
    piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
    if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
      do {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar6[3] + 4))((int *)piVar6[3] GEN_EDX_ARG);
        if ((char)uVar4 == '\x02') {
          uVar4 = F_00a5f290((undefined *)piVar6[3] GEN_EDX_ARG);
          if ((*(int *)(uVar4 + 0x2ef8) != 0) && (iVar5 == *(int *)(uVar4 + 0x2ef8))) {
            return 1;
          }
        }
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x11);
              piVar3 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != *(int * PTR32 *)((int)this + 0x10));
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_006d94f0 */
GEN_FRAME uint F_006d94f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d94f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar2);
  bVar1 = F_006d9430(this GEN_EDX_ARG,*(undefined4 *)(*piVar4 + 4));
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006d9570 */
GEN_FRAME unsigned int F_006d9570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    F_006d5f60(REFG(void * PTR32, 0x1488760) GEN_EDX_ARG,param_1,param_2,param_3);
  }
  return;
}

/* ref: FUN_006d9590 */
GEN_FRAME unsigned int GEN_THISCALL F_006d9590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d9590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    F_006d5f60(REFG(void * PTR32, 0x1488760) GEN_EDX_FWD,param_1,param_2,(uint)((byte)param_3 & 1));
  }
  return;
}

/* ref: FUN_006d95c0 */
GEN_FRAME uint GEN_THISCALL F_006d95c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d95c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * this_00;
  int * piVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(ushort *)((int)this + 0x1d4);
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,(uint)REFG(undefined1, 0x14ab0d4),0);
  (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
  uVar4 = F_00a4ffd0();
  iVar7 = 0;
  iVar5 = uVar4 + 0x1684;
  do {
    if (*(ushort *)(iVar5 + 4) == uVar1) {
      (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(iVar5 + 10);
      break;
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar7 < 0x10);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined2 *)(gen_frame + 0x4c)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  F_006d6580((uint)uVar1,(*(uint *)(gen_frame + 0x10)),uVar3 & 0xffff,(*(uint *)(gen_frame + 0xc)),(uint)REFG(undefined1, 0x14ab29a),&(*(undefined4 *)(gen_frame + 0x18)),0,0,0,0,0
               ,0,0,0);
  uVar2 = (*(undefined4 *)(gen_frame + 0x20));
  if (*(int *)((int)this + 100) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00 GEN_EDX_ARG,1,0);
      this_00[5] = 1;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dc20));
    }
    *(undefined4 * PTR32 *)((int)this + 100) = this_00;
    F_00cb4540(this_00 GEN_EDX_ARG,0,uVar2);
    piVar6 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,9);
    *(int * PTR32 *)((int)this + 0x68) = piVar6;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6 GEN_EDX_ARG,*(undefined4 *)((int)this + 100));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)) GEN_EDX_ARG);
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)uVar8;
}

/* ref: FUN_006d9790 */
GEN_FRAME byte GEN_THISCALL F_006d9790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x348);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)*puVar1;
  while( true ) {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) == puVar1) {
      return 1;
    }
    if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x26) == '\0') break;
    F_00731c40(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_FWD);
  }
  return 0;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf130 */
GEN_NOFRAME uint GEN_THISCALL F_006d97d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d97d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    psVar2 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
    while( true ) {
      if (psVar2 == *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0)) {
        return 1;
      }
      if ((*psVar2 != 0) && ((char)psVar2[6] == '\0')) break;
      psVar2 = psVar2 + 8;
    }
  }
  return 0;
}

/* ref: FUN_006d9810 */
GEN_FRAME uint GEN_THISCALL F_006d9810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  int * piVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3 GEN_EDX_ARG);
    }
    if (param_2 == 0x121) {
      bVar2 = F_006d6060(this GEN_EDX_ARG,param_1,iVar1);
      return CONCAT31(extraout_var,bVar2);
    }
    if (param_2 == 299) {
      in_EAX = F_00a51200(0x42,1,0,0,0);
      if ((char)in_EAX != '\0') {
        uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x1a,1);
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
    else {
      if (param_2 == 0x128) {
        uVar4 = F_006c2860(param_1,iVar1);
        return uVar4;
      }
      if (param_2 == 0x129) {
        uVar4 = F_006c2890(param_1,iVar1);
        return uVar4;
      }
      in_EAX = param_2;
      if (param_2 == 0x120) {
        bVar2 = F_006c28c0(this GEN_EDX_ARG,param_1,iVar1);
        return CONCAT31(extraout_var_00,bVar2);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006d98f0 */
GEN_FRAME uint GEN_THISCALL F_006d98f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x244);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)((int)this + 0x248)) {
      return 0;
    }
    if (*psVar1 == (short)param_1) break;
    psVar1 = psVar1 + 0x3a;
  }
  return *(uint *)(psVar1 + param_2 * 2 + 10);
}

/* ref: FUN_006d9930 */
GEN_FRAME uint F_006d9930(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  short * psVar5;
  undefined4 uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  psVar5 = *(short * PTR32 *)(iVar1 + 0x244);
  do {
    if (psVar5 == *(short * PTR32 *)(iVar1 + 0x248)) {
      uVar6 = 0;
LAB_006d9996: ;
      F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar6);
      F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return 1;
    }
    if (*psVar5 == (short)uVar2) {
      uVar6 = *(undefined4 *)(psVar5 + uVar4 * 2 + 8);
      goto LAB_006d9996;
    }
    psVar5 = psVar5 + 0x3a;
  } while( true );
}

/* ref: FUN_006d99c0 */
GEN_FRAME byte GEN_THISCALL F_006d99c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d99c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar5[4];
      if ((*(short *)((int)piVar2 + 10) == (short)param_1) &&
         (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_FWD), (char)uVar4 == '\0')) {
        return 0;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 1;
}

/* ref: FUN_006d9a40 */
GEN_FRAME byte GEN_THISCALL F_006d9a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar5[4];
      if ((*(short *)((int)piVar2 + 10) == (short)param_1) &&
         (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x208))(piVar2 GEN_EDX_FWD), (char)uVar4 == '\0')) {
        return 0;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 1;
}

/* ref: FUN_006d9ad0 */
GEN_FRAME uint GEN_THISCALL F_006d9ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((**(int * PTR32 *)(uVar1 + 0x1d4) == param_1) && (*(int *)(uVar1 + 0x1d8) == param_2)) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d9b20 */
GEN_FRAME uint GEN_THISCALL F_006d9b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9b60 */
GEN_FRAME uint GEN_THISCALL F_006d9b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9ba0 */
GEN_FRAME uint GEN_THISCALL F_006d9ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (*(int *)(*puVar1 + 0x1d8) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9bd0 */
GEN_FRAME uint GEN_THISCALL F_006d9bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (*(int *)(*puVar1 + 0x1d8) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9c00 */
GEN_FRAME uint GEN_THISCALL F_006d9c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d9c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * this_00;
  int * in_EAX = 0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
    do {
      this_00 = (int *)*puVar1;
      if (((this_00 != (int *)0x0) &&
          (in_EAX = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*this_00 + 8))(this_00 GEN_EDX_FWD))), (char)in_EAX != '\0')) &&
         (in_EAX = (int *)this_00[0x75], *in_EAX == param_1)) {
        in_EAX = (int *)F_006c4da0(this_00 GEN_EDX_ARG,param_2,param_3,param_4,param_5);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x30));
  }
  return (uint)in_EAX;
}

/* ref: FUN_006d9c60 */
GEN_NOFRAME byte GEN_THISCALL F_006d9c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar1 = (int *)*piVar3;
      if ((piVar1 != (int *)0x0) &&
         (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD), (char)uVar2 == '\0')) {
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x30));
  }
  return *(int *)((int)this + 0x5c) == 0;
}

/* ref: FUN_006d9cd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006d9cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined1 * puVar1;
  
  puVar1 = *(undefined1 * PTR32 *)(in_ecx + 0x2f8);
  if (puVar1 != *(undefined1 * PTR32 *)(in_ecx + 0x2fc)) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x140;
    } while (puVar1 != *(undefined1 * PTR32 *)(in_ecx + 0x2fc));
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_006d9d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2 GEN_EDX_FWD);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    if ((*(int *)(this + 0x4b8) != 0) &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x4b8) + 8))))(*(int * PTR32 *)(this + 0x4b8) GEN_EDX_ARG),
       (char)uVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_006d9d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_006d8130((undefined *)this GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 1;
  }
  if ((*(int *)(this + 0x4b8) != 0) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x4b8) + 0xc))))(*(int * PTR32 *)(this + 0x4b8) GEN_EDX_ARG),
     (char)uVar2 != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf144 */
GEN_FRAME uint GEN_THISCALL F_006d9d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  if ((char)param_1 == '\0') {
    bVar1 = F_006d8320((undefined *)this GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a51200(0x4c,5,0,0,0);
      return uVar2;
    }
  }
  else {
    bVar1 = F_00737c30(this GEN_EDX_ARG,this);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    this[0x318] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: FUN_006d9dd0 */
GEN_FRAME uint GEN_THISCALL F_006d9dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d9dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006d9c00((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006d9de0 */
GEN_NOFRAME uint GEN_THISCALL F_006d9de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8)));
}

/* ref: FUN_006d9e20 */
GEN_NOFRAME byte GEN_THISCALL F_006d9e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x18)));
  }
  if (*(int *)((int)this + 0x238) != 0) {
    return *(byte *)((int)this + 0x248);
  }
  return 0;
}

/* ref: FUN_006d9e70 */
GEN_NOFRAME ulonglong GEN_THISCALL F_006d9e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = 0xe0000000;
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
    uVar1 = *(undefined4 *)(iVar4 + 0x10);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
  }
  if (*(int *)((int)this + 0x238) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x240);
    uVar3 = *(undefined4 *)((int)this + 0x244);
  }
  return CONCAT44(uVar3,uVar1);
}

/* ref: FUN_006d9ec0 */
GEN_NOFRAME uint GEN_THISCALL F_006d9ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x20))) >> 1 & 1;
}

/* ref: FUN_006d9f00 */
GEN_NOFRAME uint GEN_THISCALL F_006d9f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    if (*(int *)((int)this + 0x238) == 0) goto LAB_006d9f43;
    iVar2 = (int)this + 0x230;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
  }
  in_EAX = 0;
  if (iVar2 != 0) {
    return *(byte *)(iVar2 + 0x20) & 1;
  }
LAB_006d9f43: ;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006d9f90 */
GEN_NOFRAME uint GEN_THISCALL F_006d9f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x24)));
}

/* ref: FUN_006d9fd0 */
GEN_NOFRAME uint GEN_THISCALL F_006d9fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6d9fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x28)));
}

/* ref: FUN_006da050 */
GEN_FRAME uint GEN_THISCALL F_006da050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6da050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006da0a0 */
GEN_FRAME unsigned int GEN_THISCALL F_006da0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6e4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6e4)) {
    do {
      if (((*(byte *)(piVar2 + 0x1f) & 1) == 0) &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD,piVar2[0x1d]), (char)uVar1 != '\0')) {
        *(byte *)(piVar2 + 0x1f) = *(byte *)(piVar2 + 0x1f) | 2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6e4));
  }
  return 0;
}

/* ref: FUN_006da0f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006da0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6f0)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6f0)) {
    do {
      if (((char)piVar2[6] == '\0') &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD,piVar2[4]), (char)uVar1 != '\0')) {
        *(undefined1 *)((int)piVar2 + 0x19) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6f0));
  }
  return 0;
}

/* ref: FUN_006da140 */
GEN_FRAME byte GEN_THISCALL F_006da140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6da140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x700)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x700)) {
      return 0;
    }
    if (puVar2[4] == param_1) break;
    if (*(char *)((int)puVar2 + 0x19) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x19);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x19);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x19);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x19);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006da1b0 */
GEN_NOFRAME byte GEN_THISCALL F_006da1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0x210) != 0) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 8))))(*(int * PTR32 *)((int)this + 0x210) GEN_EDX_FWD),
     (char)uVar1 == '\0')) {
    return 0;
  }
  if (REFG(int, 0x1379694) != 0) {
    if (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0) {
      return 1;
    }
    piVar2 = (int *)F_006da050(this GEN_EDX_ARG,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if ((piVar2 != (int *)0x0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG), (char)uVar1 != '\0'))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006da210 */
GEN_NOFRAME byte GEN_THISCALL F_006da210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(short *)((int)this + 0x20c) == 0) || (REFG(int, 0x1379694) == 0)) {
    return 0;
  }
  piVar2 = (int *)0x0;
  if (*(int *)(REFG(int, 0x1379694) + 0xe4) != 0) {
    piVar2 = (int *)F_006da050(this GEN_EDX_FWD,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      if ((char)uVar1 != '\0') goto LAB_006da255;
    }
    return 0;
  }
LAB_006da255: ;
  if ((*(int *)((int)this + 0x210) == 0) &&
     ((piVar2 == (int *)0x0 || (((uint)piVar2[0xe] >> 0xf & 1) == 0)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006da290 */
GEN_NOFRAME byte GEN_THISCALL F_006da290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_006d9a40(this GEN_EDX_FWD,1);
  return bVar1;
}

/* ref: FUN_006da2a0 */
GEN_NOFRAME byte GEN_THISCALL F_006da2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          return 0;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return *(int *)((int)this + 0xb8) == 0;
}

/* ref: FUN_006da2e0 */
GEN_FRAME uint GEN_THISCALL F_006da2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6da2e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  piVar8 = (int *)*piVar5;
  if (piVar8 != piVar5) {
    do {
      piVar5 = ((int *)GEN_TOP(((int)piVar3 + (-(uint)((*(uint *)&gen_args[1]) < (uint)piVar8[8]) - piVar8[9]))));
      if ((piVar5 < (int *)piVar8[0xb]) ||
         ((piVar5 <= (int *)piVar8[0xb] && ((*(uint *)&gen_args[1]) - piVar8[8] < (uint)piVar8[10])))) {
        if (*(char *)((int)piVar8 + 0x31) == '\0') {
          piVar7 = (int *)piVar8[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar5 = (int *)*piVar7;
            while (piVar8 = piVar7, cVar2 == '\0') {
              cVar2 = *(char *)(*piVar5 + 0x31);
              piVar7 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar2 = *(char *)(piVar8[1] + 0x31);
            piVar4 = (int *)piVar8[1];
            piVar7 = piVar8;
            while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' && (piVar7 == (int *)piVar5[2]))
                  ) {
              cVar2 = *(char *)(piVar5[1] + 0x31);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
            }
          }
        }
      }
      else {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar8[4] + 0x94))((int *)piVar8[4] GEN_EDX_FWD,piVar8[6]);
        if ((char)uVar6 == '\0') {
          piVar7 = piVar8;
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar7 = piVar4, cVar2 == '\0' && (piVar5 == (int *)piVar7[2]))) {
                cVar2 = *(char *)(piVar7[1] + 0x31);
                piVar4 = (int *)piVar7[1];
                piVar5 = piVar7;
              }
            }
          }
          piVar5 = (int *)F_00743b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]),piVar8);
          piVar8 = piVar7;
        }
        else {
          puVar1 = (uint *)(piVar8 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 + piVar8[10];
          piVar8[9] = piVar8[9] + piVar8[0xb] + (uint)CARRY4(uVar6,piVar8[10]);
          piVar5 = (int *)(piVar8[0xb] + piVar8[9] + (uint)CARRY4(piVar8[10],piVar8[8]));
          if ((piVar5 <= piVar3) &&
             ((piVar3 != piVar5 || ((uint)(piVar8[10] + piVar8[8]) < (*(uint *)&gen_args[1]))))) {
            piVar8[8] = (*(uint *)&gen_args[1]);
            piVar8[9] = (int)piVar3;
          }
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (piVar8 = piVar7, cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar7 = piVar8;
              while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' &&
                     (piVar7 == (int *)piVar5[2]))) {
                cVar2 = *(char *)(piVar5[1] + 0x31);
                piVar4 = (int *)piVar5[1];
                piVar7 = piVar5;
              }
            }
          }
        }
      }
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4))));
  }
  return (uint)piVar5;
}

/* ref: FUN_006da470 */
GEN_NOFRAME uint GEN_THISCALL F_006da470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = *(int *)((int)this + 0x738);
  while (iVar4 != 0) {
    uVar3 = *(uint *)((int)this + 0x734);
    if (*(int * PTR32 *)((int)this + 0x728) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int * PTR32 *)((int)this + 0x728);
    }
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4)));
    in_EAX = F_00536d10(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x10),
                          *(undefined4 *)(iVar4 + 0x14),(uint)*(byte *)(iVar4 + 0x18),
                          *(undefined4 *)(iVar4 + 0x1c),(uint)*(byte *)(iVar4 + 0x20));
    if (*(int *)((int)this + 0x738) == 0) break;
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x72c) + *(int *)((int)this + 0x734) * 4)));
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,0);
    *(int *)((int)this + 0x734) = *(int *)((int)this + 0x734) + 1;
    in_EAX = *(uint *)((int)this + 0x734);
    if (*(uint *)((int)this + 0x730) <= in_EAX) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    piVar1 = (int *)((int)this + 0x738);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    iVar4 = *(int *)((int)this + 0x738);
  }
  if ((*(int *)((int)this + 0x740) != -0x20000000) || (*(int *)((int)this + 0x744) != 0)) {
    uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    in_EAX = (uint)uVar5;
    if ((in_EAX == *(uint *)((int)this + 0x740)) &&
       ((int)(uVar5 >> 0x20) == *(int *)((int)this + 0x744))) {
      in_EAX = F_00547460(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,1);
    }
  }
  *(undefined4 *)((int)this + 0x740) = 0xe0000000;
  *(undefined4 *)((int)this + 0x744) = 0;
  return in_EAX;
}

/* ref: FUN_006da580 */
GEN_FRAME uint F_006da580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = F_00ab21d0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + uVar2) != '\0') {
        if (0x1c < uVar2) {
                    
          F_00c457e7("invalid bitset<N> position");
        }
        param_2[uVar2 >> 5] = param_2[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1d);
  }
  return uVar1;
}

/* ref: FUN_006da5e0 */
GEN_FRAME uint GEN_THISCALL F_006da5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x4c);
  uVar3 = *(undefined4 *)((int)this + 0x50);
  piVar5 = (int *)F_00a411a0(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,this,(uint)*(byte *)((int)this + 0x48),
                               (uint)*(byte *)((int)this + 0x49));
  piVar7 = piVar5;
  if (piVar2 != piVar5) {
    if (*(char *)((int)this + 6) == '\0') {
      uVar6 = *(uint *)((int)this + 8);
      if ((*(byte *)((int)this + 0x14) & 1) != 0) {
        uVar6 = uVar6 + 1000000;
      }
    }
    else {
      this_00 = (undefined *)F_00a3a860(this GEN_EDX_ARG);
      uVar6 = F_0046e5e0(this_00 GEN_EDX_ARG);
    }
    uVar6 = F_00ab24a0(uVar6);
    piVar7 = (int *)0x0;
    if (uVar6 != 0) {
      *(uint *)((int)this + 0x54) = (uint)*(ushort *)(uVar6 + 0x7c);
      uVar6 = *(uint *)(uVar6 + 0x28);
      *(int * PTR32 *)((int)this + 0x4c) = piVar5;
      *(bool *)((int)this + 0x58) = 1 < uVar6;
      if ((*(byte *)((int)this + 0x14) & 1) == 0) {
        piVar5 = *(int * PTR32 *)((int)this + 0x44);
      }
      *(int * PTR32 *)((int)this + 0x50) = piVar5;
      piVar7 = *(int * PTR32 *)((int)this + 0x60);
      piVar5 = (int *)*piVar7;
      if (piVar5 != piVar7) {
        do {
          piVar8 = piVar5;
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            piVar8 = (int *)piVar5[2];
            if (*(char *)((int)piVar8 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x15);
              piVar7 = (int *)*piVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar7 + 0x15);
                piVar8 = piVar7;
                piVar7 = (int *)*piVar7;
              }
            }
            else {
              cVar1 = *(char *)(piVar5[1] + 0x15);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
              while ((piVar8 = piVar4, cVar1 == '\0' && (piVar7 == (int *)piVar8[2]))) {
                cVar1 = *(char *)(piVar8[1] + 0x15);
                piVar4 = (int *)piVar8[1];
                piVar7 = piVar8;
              }
            }
          }
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[3] + 4))
                                    ((int *)piVar5[3] GEN_EDX_ARG,this,piVar2,uVar3,piVar5[4])));
          piVar5 = piVar8;
        } while (piVar8 != *(int * PTR32 *)((int)this + 0x60));
      }
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_006da6f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006da6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6da6f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  F_006d7550((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x58) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x5c) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x60) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    *(float *)((*(int *)&gen_args[1]) + 100) = (*(float *)&gen_args[3]);
  }
  return 0;
}

/* ref: FUN_006da730 */
GEN_FRAME uint GEN_THISCALL F_006da730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6da730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x50)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar1 + 0x10))
                      ((int *)*puVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    return uVar2;
  }
  return (uint)puVar1;
}

/* ref: FUN_006da750 */
GEN_FRAME uint GEN_THISCALL F_006da750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6da750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_006d7550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)this + 0x30)) {
    if ((char)param_3 != '\0') {
      uVar3 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
      *(undefined8 *)((int)pvVar1 + 0x70) = uVar3;
      *(uint *)((int)pvVar1 + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    }
    *(char *)((int)pvVar1 + 0x7c) = (char)param_3;
    uVar5 = 0;
    uVar4 = 0xffffffff;
    uVar3 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    uVar2 = F_00aa7a30(param_1 GEN_EDX_ARG,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20),uVar4,uVar5);
  }
  return uVar2;
}

/* ref: FUN_006da7c0 */
GEN_FRAME uint GEN_THISCALL F_006da7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6da7c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  F_00aa3410((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,0xffffffff);
  F_006d7550((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[1]),pvVar1);
  if ((*(undefined * PTR32 *)&gen_args[1]) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x7c))) = 0;
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006da800 */
GEN_FRAME uint GEN_THISCALL F_006da800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6da800u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint in_EAX = 0;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if ((*(uint *)&gen_args[2]) < 7) {
    F_006d7550((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
    in_EAX = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      *(undefined1 *)((*(uint *)&gen_args[2]) + 0x7e + uVar1) = (undefined1)(*(undefined4 *)&gen_args[3]);
    }
  }
  return in_EAX;
}

/* ref: FUN_006da840 */
GEN_FRAME byte GEN_THISCALL F_006da840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6da840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar1 = (int *)F_006d7550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(undefined4, 0x1379694));
  if (*piVar1 == *(int *)((int)this + 0x30)) {
    return 0;
  }
  return *(char *)(*piVar1 + 0x7e) == '\0';
}

/* ref: FUN_006da870 */
GEN_NOFRAME uint GEN_STDCALL F_006da870(unsigned int gen_a0)
{
  GEN_ENTER(0x6da870u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined * this;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  this = REFG(void * PTR32, 0x1488344);
  piVar6 = (int *)param_1[5];
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar6;
  if ((piVar6 == (int *)0x2) || (piVar6 == (int *)0x8)) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        (*(int *)(gen_frame + 0x0)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x4)) = param_1[0x17];
        (*(undefined4 *)(gen_frame + 0x8)) = param_1[0x18];
        F_00a9fa00(piVar5 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
        F_00aa0560(piVar5 GEN_EDX_ARG,param_1[0x1a]);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,1,0);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,2,0);
        F_00aa3410(piVar5 GEN_EDX_ARG,0xffffffff);
        F_00aa2cc0(piVar5 GEN_EDX_ARG,0);
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)))));
        F_00aa0980(piVar5 GEN_EDX_ARG,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
        piVar5[0xbb2] = GEN_FLT_TO(piVar5[0xbb2], REFG(float, 0x10b9490));
        *(undefined1 *)((int)piVar5 + 0x2ea7) = 1;
        F_00aa0600(piVar5 GEN_EDX_ARG,0);
        F_00aa6f20(piVar5 GEN_EDX_ARG,(uint)*(byte *)((int)param_1 + 0x7d),0);
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x8) {
          F_00aa4310(piVar5 GEN_EDX_ARG);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5 GEN_EDX_ARG,0);
          *(byte *)((int)piVar5 + 0x2dd3) = *(byte *)((int)piVar5 + 0x2dd3) & 0xfb;
        }
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 6;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5 + 0x5ac;
        do {
          iVar2 = *(*(int * PTR32 *)(gen_frame + 0x24));
          iVar3 = (*(int * PTR32 *)(gen_frame + 0x24))[1];
          (*(int *)(gen_frame + 0x1c)) = iVar3;
          (*(int *)(gen_frame + 0x18)) = iVar2;
          if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar6 = (*(int * PTR32 *)(gen_frame + 0x20)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
            F_00aa80c0(piVar5 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x20)),iVar2,iVar3);
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
          (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar6 + 1U);
        } while ((int)piVar6 + 1U < 3);
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        piVar8 = piVar5 + 0xb64;
        do {
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          if (*piVar8 != *(*(int * PTR32 *)(gen_frame + 0x24))) {
            F_00aa2260(piVar5 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar8 = piVar8 + 1;
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        } while (piVar6 < &REFG(undefined, 0xa));
      }
    }
  }
  else if (piVar6 == (int *)0x3) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(gen_code32 *)(*piVar5 + 0x3c);
        (*(int *)(gen_frame + 0x10)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x14)) = param_1[0x17];
        (*(int *)(gen_frame + 0x18)) = param_1[0x18];
        (*pcVar1)(piVar5,&(*(int *)(gen_frame + 0x10)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5 GEN_EDX_ARG,param_1[0x19]);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,1,0);
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5 GEN_EDX_ARG,2,0)));
        if ((*(char *)((int)param_1 + 0x83) != '\0') &&
           (piVar6 = (int *)(uint)*(ushort *)((int)piVar5 + 0x18a), (int *)param_1[0x1b] != piVar6))
        {
          uVar7 = F_00ae2030(piVar5 GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0x1b));
          return uVar7;
        }
      }
    }
  }
  else if (piVar6 == (int *)0x1) {
    (*(char *)(gen_frame + 0x2f)) = REFG(char, 0x14a737d);
    (*(char *)(gen_frame + 0x2e)) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x7a8)));
    uVar7 = F_006d9fd0(REFG(void * PTR32, 0x1488344) GEN_EDX_ARG);
    (*(bool *)(gen_frame + 0x2d)) = uVar7 == 0x3d;
    uVar7 = F_006d9f90(this GEN_EDX_ARG);
    piVar6 = REFG(int * PTR32, 0x1379694);
    (*(bool *)(gen_frame + 0x2c)) = uVar7 == 0xf;
    if (((*(char *)((int)param_1 + 0x7e) != '\0') && (F_00a9fa00(REFG(int * PTR32, 0x1379694) GEN_EDX_ARG), (*(char *)(gen_frame + 0x2f)) == '\0'))
       && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      F_00a9f980(piVar6 GEN_EDX_ARG,GEN_TOF(gen_bits2f(param_1[0x16])),GEN_TOF(gen_bits2f(param_1[0x17])),GEN_TOF(gen_bits2f(param_1[0x18])),GEN_TOF(gen_bits2f(piVar6[0x2c])),0);
    }
    if (((*(char *)((int)param_1 + 0x7f) != '\0') && ((*(char *)(gen_frame + 0x2f)) == '\0')) && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6 GEN_EDX_ARG,param_1[0x19]);
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      F_00aa0560(piVar6 GEN_EDX_ARG,param_1[0x1a]);
    }
    if (((*(char *)((int)param_1 + 0x82) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa2cc0(piVar6 GEN_EDX_ARG,0);
    }
    if (((*(char *)((int)param_1 + 0x81) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa3410(piVar6 GEN_EDX_ARG,0xffffffff);
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      (*(int * PTR32 *)(gen_frame + 0x20)) = param_1 + 6;
      (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0x5ac;
      do {
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x20));
        iVar3 = (*(int * PTR32 *)(gen_frame + 0x20))[1];
        (*(int *)(gen_frame + 0x1c)) = iVar3;
        (*(int *)(gen_frame + 0x18)) = iVar2;
        if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar5 = (*(int * PTR32 *)(gen_frame + 0x24)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
          F_00aa80c0(piVar6 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x24)),iVar2,iVar3);
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x20)) + 2;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 3);
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0xb64;
      do {
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        if (*(*(int * PTR32 *)(gen_frame + 0x28)) != *(*(int * PTR32 *)(gen_frame + 0x24))) {
          F_00aa2260(piVar6 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 10);
    }
    F_00a7ef20(&REFG(undefined1, 0x14ab058) GEN_EDX_ARG,(uint)*(byte *)((int)param_1 + 0x7d),0,0);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x108bec8);
    *(undefined1 *)(piVar6 + 0xbaf) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar4))));
    F_00aa0980(piVar6 GEN_EDX_ARG,(float)((float10)1 - fVar4),0);
    pcVar1 = *(gen_code32 *)(*piVar6 + 0x24);
    piVar6[0xbb2] = GEN_FLT_TO(piVar6[0xbb2], REFG(float, 0x10b9490));
    *(undefined1 *)((int)piVar6 + 0x2ea7) = 1;
    (*pcVar1)(piVar6,1,0);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6 GEN_EDX_ARG,2,0);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6 GEN_EDX_ARG,0);
    uVar7 = F_00aa0600(piVar6 GEN_EDX_ARG,0);
    return uVar7;
  }
  return (uint)piVar6;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf124 */
GEN_FRAME uint GEN_THISCALL F_006dad20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)) GEN_EDX_FWD,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(*piVar4 + 4);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,3);
  pvVar1 = *(undefined * PTR32 *)(this + 4);
  if (uVar3 < 7) {
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)((int)pvVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7e + uVar3) = bVar2;
    }
  }
  if (uVar3 == 0) {
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)((int)pvVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7f) = bVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf119 */
GEN_FRAME uint GEN_THISCALL F_006dadd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dadd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_2);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),1,uVar4);
  uVar1 = *(undefined4 *)(*piVar5 + 0x60);
  uVar4 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (uVar4 == 1) {
LAB_006daeff: ;
    fVar7 = (float10)0;
    fVar8 = fVar7;
  }
  else {
    bVar3 = F_00a01f20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    if (bVar3 != 0) goto LAB_006daeff;
    bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    if (bVar3 == 0) {
      uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
      piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),2,uVar4);
      iVar2 = *piVar5;
      uVar4 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      if (2 < (int)uVar6) {
        bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
        if (bVar3 != 0) {
          uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x10)),3);
          param_2 = CONCAT31((int3)uVar4,uVar6 != 0);
        }
      }
      if (iVar2 != 0) {
        F_006da750(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,uVar1,*(undefined4 *)(iVar2 + 4),param_2);
        F_00a02240(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        return 0;
      }
      goto LAB_006daf1a;
    }
    fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    fVar8 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    fVar7 = (float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1080228) * (float10)(*(float *)(gen_frame + 0x28))) /
                            (float10)*(double *)&REFG(undefined, 0x1080220))));
    fVar8 = ((float10)(float)fVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
            (float10)*(double *)&REFG(undefined, 0x1080220);
  }
  F_00aa5250(uVar1 GEN_EDX_ARG,(float)fVar7,(float)fVar8,(float)(float10)0,0xffffffff,0);
LAB_006daf1a: ;
  F_00a02240(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006daf30 */
GEN_FRAME uint GEN_THISCALL F_006daf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6daf30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  undefined * pvVar1;
  int * piVar2;
  undefined * in_ecx;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  this_00 = REFG(int * PTR32, 0x1379694);
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x400) == 0) {
    F_006d7550((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[1]),REFG(int * PTR32, 0x1379694));
    in_ecx = (*(undefined * PTR32 *)&gen_args[1]);
    if ((*(undefined * PTR32 *)&gen_args[1]) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x84))) = 0;
    }
  }
  else {
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x13,1);
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x54))(this_00 GEN_EDX_ARG,1);
    pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
    F_006d7550((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[1]),this_00);
    if ((*(undefined * PTR32 *)&gen_args[1]) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x84))) = 1;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    in_ecx = (undefined *)0x0;
    if (piVar2 != (int *)0x0) {
      in_ecx = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2 GEN_EDX_ARG)));
      F_0043d840(in_ecx GEN_EDX_ARG);
    }
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 2) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    in_ecx = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2 GEN_EDX_ARG,0,0x1e,1)));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))) = 1;
  }
  if (this_00 != (int *)0x0) {
    in_ecx = (undefined *)F_00aa0f60(this_00 GEN_EDX_ARG,1);
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_006db050 */
GEN_FRAME uint F_006db050(unsigned int gen_a0)
{
  GEN_ENTER(0x6db050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    if (*(int *)(REFG(int, 0x1488344) + 0x238) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(REFG(int, 0x1488344) + 0x248);
    }
  }
  else {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar3 + 8);
    }
    bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar1 * 4))) + 0x18)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::Event::LuaActorModule::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_006db0f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6db0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar6 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar2 = (undefined4 *)piVar6[6];
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
        piVar6[6] = 0;
      }
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)(this + 0x30));
  }
  uVar5 = F_00743730(this + 0x2c GEN_EDX_ARG);
  this[0x24] = (undefined1)0x0;
  return uVar5;
}

/* ref: FUN_006db170 */
GEN_FRAME uint GEN_THISCALL F_006db170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db170u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_007325b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_006db1ab;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_006db1ab: ;
  if (*ppvVar3 != pvVar1) {
    return *(uint *)((int)*ppvVar3 + 0x18);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf6 */
GEN_FRAME byte GEN_THISCALL F_006db1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf8 */
GEN_FRAME byte GEN_THISCALL F_006db230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x2;
  *(uint *)(this + 0x48) = (uint)(byte)param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf10 */
GEN_FRAME byte GEN_THISCALL F_006db290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x3;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf12 */
GEN_FRAME byte GEN_THISCALL F_006db2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x4;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf14 */
GEN_FRAME byte GEN_THISCALL F_006db350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xa;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf16 */
GEN_FRAME byte GEN_THISCALL F_006db3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xb;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf18 */
GEN_FRAME byte GEN_THISCALL F_006db430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xf;
  *(uint *)(this + 0x48) = (uint)(ushort)param_1;
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf20 */
GEN_FRAME byte GEN_THISCALL F_006db490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x12;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf21 */
GEN_FRAME byte GEN_THISCALL F_006db4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x13;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf22 */
GEN_FRAME byte GEN_THISCALL F_006db550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x7;
  *(uint *)(this + 0x48) = (uint)(byte)param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf23 */
GEN_FRAME byte GEN_THISCALL F_006db5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x8;
  *(undefined4 *)(this + 0x48) = param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf140 */
GEN_NOFRAME uint GEN_THISCALL F_006db620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6db620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  this[0x5c] = (undefined1)((byte)this[0x5c] & 0xfb);
  *(undefined4 *)(this + 0x60) = 0;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x2c))) = 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))
                    (this GEN_EDX_ARG,*(undefined4 *)(this + 0x58),(uint)*(ushort *)(this + 0x54),&REFG(undefined4, 0x1488348),
                     (uint)REFG(undefined1, 0x1488342));
  return uVar1;
}

/* ref: Client::Game::Event::EventHandler::vf49 */
GEN_FRAME uint GEN_THISCALL F_006db690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6db690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  ushort uVar5;
  
  pvVar1 = *(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0xf0);
  uVar4 = (*(uint *)&gen_args[2]) ^ (*(uint *)&gen_args[3]);
  (*(uint *)&gen_args[2]) = uVar4 & (*(uint *)&gen_args[3]) & 0xffff;
  (*(uint *)&gen_args[3]) = ~(*(uint *)&gen_args[3]) & uVar4 & 0xffff;
  uVar4 = 0;
  do {
    uVar5 = 1 << ((byte)uVar4 & 0x1f);
    bVar2 = F_005dbc90(pvVar1 GEN_EDX_FWD,uVar4);
    if (bVar2 != 0) {
      if ((uVar5 & (ushort)(*(uint *)&gen_args[2])) == 0) {
        if ((uVar5 & (ushort)(*(uint *)&gen_args[3])) != 0) {
          uVar3 = F_005e35d0(pvVar1 GEN_EDX_ARG,uVar4);
          if ((char)uVar3 != '\0') {
            F_005e3530(pvVar1 GEN_EDX_ARG,uVar4);
          }
        }
      }
      else {
        uVar3 = F_005e35d0(pvVar1 GEN_EDX_ARG,uVar4);
        if ((char)uVar3 == '\0') {
          F_005eb180(pvVar1 GEN_EDX_ARG,uVar4,0);
        }
      }
    }
    uVar3 = (*(uint *)&gen_args[1]);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  bVar2 = F_00ae20f0((*(uint *)&gen_args[1]) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (((*(undefined * PTR32 *)&gen_args[0])[0x44] != (undefined1)0x0) && ((bVar2 == 1 || (bVar2 == 2)))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),uVar3);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x83) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf6 */
GEN_FRAME uint GEN_THISCALL F_006db760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_006db1d0((undefined *)this GEN_EDX_FWD,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_006db770 */
GEN_FRAME uint GEN_THISCALL F_006db770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  int * piVar2;
  bool bVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * this_00;
  int iVar6;
  int * piVar7;
  
  uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,9);
  *(uint *)((int)this + 0x56c) = uVar5;
  if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0')) &&
     (*(char *)((int)this + 0x267) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar6 = *(int *)((int)this + 0x550);
  if (bVar3) {
    iVar6 = iVar6 + 3;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,iVar6,(param_1 & 0xff) << 8 | param_2 & 0xff);
    this_00[5] = iVar6;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x72dc20));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x54c)));
  iVar6 = 0;
  if (piVar7 != *(int * PTR32 *)((int)this + 0x54c)) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570) GEN_EDX_ARG,iVar6,piVar7[0x79]);
      iVar6 = iVar6 + 1;
      if (*(char *)((int)piVar7 + 0x2cd) == '\0') {
        piVar2 = (int *)piVar7[2];
        if (*(char *)((int)piVar2 + 0x2cd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x2cd);
          piVar7 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x2cd);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x2cd);
          piVar4 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x2cd);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x54c));
  }
  if (((*(char *)((int)this + 0x265) != '\0') || (*(char *)((int)this + 0x266) != '\0')) ||
     (*(char *)((int)this + 0x267) != '\0')) {
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570) GEN_EDX_ARG,iVar6,0x14);
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570) GEN_EDX_ARG,iVar6 + 1,0x15);
    F_00cb4540(*(undefined * PTR32 *)((int)this + 0x570) GEN_EDX_ARG,iVar6 + 2,0x16);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x570));
  return uVar5;
}

/* ref: FUN_006db910 */
GEN_FRAME uint GEN_THISCALL F_006db910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6db910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  undefined * puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar4 = F_00b9a750(*(undefined4 *)((int)this_00 + 8));
  if ((char)(*(int * PTR32 *)&gen_args[1]) == '\0') {
    (*(uint *)(gen_frame + 0x8)) = uVar4;
    uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118 GEN_EDX_ARG);
    puVar3 = REFG(undefined * PTR32, 0x1323718);
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar4;
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar5 == 0) {
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar4);
      F_00b9b150(*(undefined4 *)((int)this_00 + 8),0,0);
      iVar6 = (*(uint *)(gen_frame + 0x8)) + 2;
      F_00a01c40(this_00 GEN_EDX_ARG,iVar6,"className",(*(int * PTR32 *)&gen_args[1]));
      F_00a01c80(this_00 GEN_EDX_ARG,iVar6,"referenceCount",0);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
      piVar2 = (int *)*piVar1;
      (*(uint *)(gen_frame + 0x8)) = (uint)piVar2;
      if (piVar2 != piVar1) {
        do {
          uVar7 = *(undefined4 *)((*(uint *)(gen_frame + 0x8)) + 0xc);
          uVar4 = F_0042a990((*(uint *)(gen_frame + 0x8)) + 0x10 GEN_EDX_ARG);
          F_00a01c80(this_00 GEN_EDX_ARG,iVar6,uVar4,uVar7);
          F_00732c70(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
        } while ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
      }
      F_00b9bc00(*(undefined4 *)((int)this_00 + 8),(*(int * PTR32 *)&gen_args[1]));
      F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar6);
      if (puVar3 != (undefined *)0x0) {
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
        F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
        F_00b9ae60(*(undefined4 *)((int)this_00 + 8),puVar3);
        F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        F_00b9b290(*(undefined4 *)((int)this_00 + 8),iVar6,"__index");
        F_00b9a910(*(undefined4 *)((int)this_00 + 8),iVar6);
        F_00b9b3d0(*(undefined4 *)((int)this_00 + 8),iVar6);
        F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
        uVar4 = F_00a01ad0(this_00 GEN_EDX_ARG,puVar3);
        return uVar4;
      }
      F_00b9b290(*(undefined4 *)((int)this_00 + 8),0xfffffffe,"__index");
      F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      uVar4 = F_00b9b2f0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
      return uVar4;
    }
  }
  else {
    uVar5 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118 GEN_EDX_ARG);
    F_00b9ae60(*(undefined4 *)((int)this_00 + 8),uVar5);
    F_00b9b0d0(*(undefined4 *)((int)this_00 + 8),0xffffd8ee);
    uVar5 = F_00b9a940(*(undefined4 *)((int)this_00 + 8),0xffffffff);
    if (uVar5 == 0) {
      uVar4 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
      return uVar4;
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
    if ((*(int * PTR32 *)&gen_args[1]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
      do {
        uVar7 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
        uVar5 = F_0042a990((int)(*(int * PTR32 *)&gen_args[1]) + 0x10 GEN_EDX_ARG);
        F_00a01c80(this_00 GEN_EDX_ARG,uVar4 + 1,uVar5,uVar7);
        F_00732c70(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      } while ((*(int * PTR32 *)&gen_args[1]) != (int *)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    }
  }
  uVar4 = F_00b9a760(*(undefined4 *)((int)this_00 + 8),0xfffffffe);
  return uVar4;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf6 */
GEN_FRAME uint GEN_THISCALL F_006dbb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x1a,1);
  iVar2 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1379694));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x7e] = (undefined1)0x0;
    }
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x7f] = (undefined1)0x0;
    }
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x80] = (undefined1)0x0;
    }
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x81] = (undefined1)0x0;
    }
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8))[0x82] = (undefined1)0x0;
    }
  }
  F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x18,0,0);
  bVar3 = F_006db1d0((undefined *)this GEN_EDX_ARG,param_1);
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_006dbc50 */
GEN_FRAME uint GEN_THISCALL F_006dbc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbc50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  uint in_EAX = 0;
  
  iVar4 = (*(uint *)&gen_args[1]);
  iVar3 = REFG(int, 0x1379694);
  if (((*(uint *)&gen_args[1]) != 0) && (REFG(int, 0x1379694) != 0)) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,REFG(int, 0x1379694),iVar4,(*(uint *)&gen_args[1]),uVar1);
    if (in_EAX == 0xf) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(pvVar2 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar3);
      if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar2 + 0x30)) {
        *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(pvVar2 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar3);
      in_EAX = (*(uint *)&gen_args[1]);
      if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar2 + 0x30)) {
        *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_006dbcd0 */
GEN_FRAME uint GEN_THISCALL F_006dbcd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dbcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    F_006d7550(pvVar1 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),REFG(int, 0x1379694));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x7e) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x7f) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x81) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x82) = 0;
    }
  }
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xe1 | 1;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x186) = 0;
  *(undefined4 *)((int)this + 0x18a) = 0;
  *(undefined4 *)((int)this + 0x18e) = 0;
  *(undefined1 *)((int)this + 0x192) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x196) = 0;
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf125 */
GEN_FRAME unsigned int GEN_THISCALL F_006dbdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dbdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  short sVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  sVar2 = *(short *)(this + 0x1d4);
  uVar7 = F_00a4ffd0();
  iVar8 = uVar7 + 0x13b4;
  iVar9 = 0;
  do {
    if (*(short *)(iVar8 + 4) == sVar2) {
      if (-1 < iVar9) {
        uVar6 = *(undefined1 *)(iVar8 + 6);
        goto LAB_006dbe01;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar9 < 0x1e);
  uVar6 = 0;
LAB_006dbe01: ;
  (*(undefined1 *)(gen_frame + 0xb)) = uVar6;
  uVar7 = 0;
  F_00744460(this + 0x328 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)(this + 0x32c)) {
    *(undefined4 *)(this + 0x38) = 0;
    return 0;
  }
  puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x14)));
  while (puVar3 != *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x14)) {
    uVar7 = uVar7 | 1 << (*(byte *)((int)puVar3 + 0x11) & 0x1f);
    if (*(char *)((int)puVar3 + 0x25) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x25);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x25);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  *(uint *)(this + 0x38) = uVar7;
  return 0;
}

/* ref: FUN_006dbea0 */
GEN_FRAME unsigned int GEN_THISCALL F_006dbea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dbea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  bool bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    (*(char *)(gen_frame + 0xb)) = '\0';
    (*(char *)(gen_frame + 0xa)) = '\0';
    piVar3 = (int *)F_00744460(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    if (*piVar3 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
      piVar3 = *(int * PTR32 *)(*piVar3 + 0x14);
      piVar1 = (int *)*piVar3;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
      if (piVar1 != piVar3) {
        uVar5 = piVar1[3];
        bVar2 = false;
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
        do {
          if (((*(int * PTR32 *)(gen_frame + 0x4)) == piVar3) || (uVar4 = (*(int * PTR32 *)(gen_frame + 0x4))[3], uVar5 != uVar4)) {
            if (bVar2) {
              (*(char *)(gen_frame + 0xb)) = '\x01';
            }
            else if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
              (*(char *)(gen_frame + 0xa)) = '\x01';
            }
            if (((*(int * PTR32 *)(gen_frame + 0x4)) == piVar3) || (((*(char *)(gen_frame + 0xb)) != '\0' && ((*(char *)(gen_frame + 0xa)) != '\0')))) {
              if ((*(char *)(gen_frame + 0xb)) != '\0') {
                F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,5,0,0);
              }
              if ((*(char *)(gen_frame + 0xa)) == '\0') {
                return;
              }
              F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,6,0,0);
              return;
            }
            uVar4 = (*(int * PTR32 *)(gen_frame + 0x4))[3];
            bVar2 = false;
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
            uVar5 = uVar4;
          }
          if (*(byte *)((*(int * PTR32 *)(gen_frame + 0x4)) + 4) < 0x18) {
            if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 0x11) == '\b') {
              bVar2 = true;
            }
            if (((1999999 < uVar4) && (uVar4 < 0x1e8f21)) &&
               (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 0x11) == '\x01')) {
              (*(uint *)&gen_args[1]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[1]));
            }
          }
          F_00731b70(&(*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        } while( true );
      }
    }
  }
  return;
}

/* ref: FUN_006dbfa0 */
GEN_FRAME byte GEN_THISCALL F_006dbfa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dbfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 * puVar7;
  int * piVar8;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  F_007444d0((undefined *)((int)this + 0x328) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) == *(int * PTR32 *)((int)this + 0x32c)) {
    return 0;
  }
  piVar2 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[5];
  piVar8 = (int *)*piVar2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
  if (piVar8 != piVar2) {
    do {
      puVar5 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10)));
      while (puVar5 != *(undefined4 * PTR32 *)((int)this + 0x10)) {
        if (*(int *)(puVar5[3] + 0x80) == piVar8[3]) {
          return 1;
        }
        if (*(char *)((int)puVar5 + 0x11) == '\0') {
          puVar3 = (undefined4 *)puVar5[2];
          if (*(char *)((int)puVar3 + 0x11) == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar5 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar3 + 0x11);
              puVar5 = puVar3;
              puVar3 = (undefined4 *)*puVar3;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar5[1] + 0x11);
            puVar7 = (undefined4 *)puVar5[1];
            puVar3 = puVar5;
            while ((puVar5 = puVar7, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar5[2]))) {
              cVar1 = *(char *)((int)puVar5[1] + 0x11);
              puVar7 = (undefined4 *)puVar5[1];
              puVar3 = puVar5;
            }
          }
        }
      }
      if (*(char *)((int)piVar8 + 0x25) == '\0') {
        piVar4 = (int *)piVar8[2];
        if (*(char *)((int)piVar4 + 0x25) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x25);
          piVar8 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x25);
            piVar8 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0x25);
          piVar6 = (int *)piVar8[1];
          piVar4 = piVar8;
          while ((piVar8 = piVar6, cVar1 == '\0' && (piVar4 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0x25);
            piVar6 = (int *)piVar8[1];
            piVar4 = piVar8;
          }
        }
      }
    } while (piVar8 != piVar2);
  }
  return 0;
}

/* ref: FUN_006dc0c0 */
GEN_FRAME byte GEN_THISCALL F_006dc0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc0c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0x80);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff;
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(int)&(*(uint *)&gen_args[1]) + 3);
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)));
    while (puVar3 != *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)) {
      if (puVar3[3] == iVar2) {
        return 1;
      }
      if (*(char *)((int)puVar3 + 0x25) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x25) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x25);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x25);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc160 */
GEN_FRAME byte GEN_THISCALL F_006dc160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6dc160u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int * piVar12;
  bool bVar13;
  
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x318)));
  sVar3 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar8 = F_00a4ffd0();
  iVar11 = 0;
  iVar9 = uVar8 + 0x13b4;
  do {
    if (*(short *)(iVar9 + 4) == sVar3) {
      if (-1 < iVar11) {
        (*(byte *)(gen_frame + 0xb)) = *(byte *)(iVar9 + 6);
        goto LAB_006dc199;
      }
      break;
    }
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 0x10;
  } while (iVar11 < 0x1e);
  (*(byte *)(gen_frame + 0xb)) = 0;
LAB_006dc199: ;
  (*(bool *)(gen_frame + 0x9)) = **((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0';
  (*(byte *)(gen_frame + 0xa)) = (*(byte *)(gen_frame + 0xb));
  if (((char)(*(uint *)&gen_args[6]) == '\n') || ((char)(*(uint *)&gen_args[6]) == '\v')) {
    (*(int *)&gen_args[3]) = 5000000;
  }
  else if ((char)(*(uint *)&gen_args[6]) == '\x0f') {
    (*(int *)&gen_args[3]) = 0x4c9960;
  }
  else if (((byte)(*(undefined4 *)&gen_args[2]) == 1) && ((*(int *)&gen_args[3]) == 0)) {
    (*(int *)&gen_args[3]) = 0x4c7250;
  }
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(byte *)(gen_frame + 0xa)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    return 0;
  }
  F_0073c6c0((*(int * PTR32 *)(gen_frame + 0x4)) + 4 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[3]));
  piVar12 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
    do {
      if (*(char *)((int)piVar12 + 0x11) != (char)(*(uint *)&gen_args[6])) goto LAB_006dc344;
      cVar2 = (char)piVar12[5];
      iVar9 = piVar12[6];
      cVar1 = (char)piVar12[7];
      if (cVar2 == '\0') {
LAB_006dc2a8: ;
        if ((*(int * PTR32 *)&gen_args[7]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[7]) = (int)(piVar12 + 4);
        }
        if ((*(byte *)(gen_frame + 0xb)) == 0) {
          uVar8 = F_006d8b60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]));
          if (iVar4 != (*(int *)&gen_args[3])) {
            return uVar8 == 0;
          }
          if ((uVar8 != 0) &&
             ((((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 800))) & 2) == 0 || ((uVar8 & 0x500) != 0)) ||
              ((uVar8 & 0x70) != 0)))) {
            return 0;
          }
          return 1;
        }
        if ((*(byte *)(piVar12 + 8) & 1) == 0) {
          return 1;
        }
        iVar9 = (*(int * PTR32 *)&gen_args[1])[0x5d];
        if (((iVar9 != 0) && (uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG), uVar8 == 1)) &&
           ((*(bool *)(gen_frame + 0x9)) != false)) {
          uVar8 = F_0042a990(iVar9 + 8 GEN_EDX_ARG);
          uVar10 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
          uVar8 = F_00a029f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"IsAcceptEvent",uVar10,uVar8,
                               (uint)(byte)(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]),(*(int *)&gen_args[4]),(*(int *)&gen_args[5]),(*(uint *)&gen_args[6]) & 0xff,1);
          if (uVar8 == 0) {
            this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
            (*(byte *)(gen_frame + 0xa)) = 0;
            bVar7 = F_00a01d80(this_00 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xa)));
            if (bVar7 != 0) {
              return (*(byte *)(gen_frame + 0xa));
            }
          }
        }
      }
      else {
        if (cVar2 != '\x01') {
          if (cVar2 == '\x02') {
            iVar11 = *(int *)&REFG(undefined2, 0x1379c78);
            if (cVar1 == '\x03') {
joined_r0x006dc278: ;
              if (iVar9 != iVar11) goto LAB_006dc344;
            }
            else if (cVar1 == '\x04') {
              bVar13 = iVar9 == *(int *)&REFG(undefined2, 0x1379c78);
              goto LAB_006dc2a2;
            }
          }
          else if (cVar2 == '\x03') {
            iVar11 = (*(int *)&gen_args[4]);
            if (cVar1 == '\x03') goto joined_r0x006dc278;
            if (cVar1 == '\x04') {
              bVar13 = iVar9 == (*(int *)&gen_args[4]);
              goto LAB_006dc2a2;
            }
          }
          goto LAB_006dc2a8;
        }
        if (cVar1 != '\x03') {
          if (cVar1 == '\x04') {
            bVar13 = iVar9 == (*(int *)&gen_args[5]);
LAB_006dc2a2: ;
            if (bVar13) goto LAB_006dc344;
          }
          goto LAB_006dc2a8;
        }
        if (iVar9 == (*(int *)&gen_args[5])) goto LAB_006dc2a8;
      }
LAB_006dc344: ;
      if (*(char *)((int)piVar12 + 0x25) == '\0') {
        piVar5 = (int *)piVar12[2];
        if (*(char *)((int)piVar5 + 0x25) == '\0') {
          cVar2 = *(char *)(*piVar5 + 0x25);
          piVar12 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar5 + 0x25);
            piVar12 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar2 = *(char *)(piVar12[1] + 0x25);
          piVar6 = (int *)piVar12[1];
          piVar5 = piVar12;
          while ((piVar12 = piVar6, cVar2 == '\0' && (piVar5 == (int *)piVar12[2]))) {
            cVar2 = *(char *)(piVar12[1] + 0x25);
            piVar6 = (int *)piVar12[1];
            piVar5 = piVar12;
          }
        }
      }
    } while (piVar12 != (*(int * PTR32 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_006dc410 */
GEN_FRAME byte GEN_THISCALL F_006dc410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  iVar8 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar5)));
  iVar2 = piVar3[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(piVar3);
  cVar7 = (char)(*(undefined4 *)&gen_args[3]);
  if ((cVar7 == '\n') || (cVar7 == '\v')) {
    iVar8 = 5000000;
  }
  else if (cVar7 == '\x0f') {
    iVar8 = 0x4c9960;
  }
  else if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar4 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar8,iVar2,uVar6,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return bVar4;
}

/* ref: FUN_006dc4a0 */
GEN_FRAME byte GEN_THISCALL F_006dc4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6dc4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  char cVar1;
  short sVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((char)(*(undefined4 *)&gen_args[2]) == '\x01') && ((*(int *)&gen_args[3]) == 0)) {
    (*(int *)&gen_args[3]) = 0x4c7250;
  }
  sVar2 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar9 = F_00a4ffd0();
  iVar11 = 0;
  iVar10 = uVar9 + 0x13b4;
  do {
    if (*(short *)(iVar10 + 4) == sVar2) {
      if (-1 < iVar11) {
        uVar7 = *(undefined1 *)(iVar10 + 6);
        goto LAB_006dc4eb;
      }
      break;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 0x10;
  } while (iVar11 < 0x1e);
  uVar7 = 0;
LAB_006dc4eb: ;
  (*(undefined1 *)(gen_frame + 0x1b)) = uVar7;
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)),&(*(undefined1 *)(gen_frame + 0x1b)));
  if ((*(int *)(gen_frame + 0x10)) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    this_00 = (undefined *)((*(int *)(gen_frame + 0x10)) + 0x10);
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = 0;
    F_0073c6c0(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)&gen_args[3]));
    uVar5 = (*(undefined4 *)&gen_args[5]);
    uVar4 = (*(undefined4 *)&gen_args[4]);
    piVar12 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x8))) {
      do {
        bVar8 = F_006dc160((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(int *)&gen_args[3]),uVar4,uVar5,
                             (uint)*(byte *)((int)piVar12 + 0x11),&(*(int *)(gen_frame + 0x10)));
        if (bVar8 != 0) {
          if ((*(int *)(gen_frame + 0x14)) == 0) {
            (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x10));
          }
          if (*(byte *)(piVar12 + 4) < 0x18) goto LAB_006dc5e1;
        }
        if (*(char *)((int)piVar12 + 0x25) == '\0') {
          piVar3 = (int *)piVar12[2];
          if (*(char *)((int)piVar3 + 0x25) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x25);
            piVar12 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x25);
              piVar12 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar12[1] + 0x25);
            piVar6 = (int *)piVar12[1];
            piVar3 = piVar12;
            while ((piVar12 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar12[2]))) {
              cVar1 = *(char *)(piVar12[1] + 0x25);
              piVar6 = (int *)piVar12[1];
              piVar3 = piVar12;
            }
          }
        }
      } while (piVar12 != (*(int * PTR32 *)(gen_frame + 0x8)));
      if ((*(int *)(gen_frame + 0x14)) != 0) {
LAB_006dc5e1: ;
        if ((*(int * PTR32 *)&gen_args[6]) != (int *)0x0) {
          *(*(int * PTR32 *)&gen_args[6]) = (*(int *)(gen_frame + 0x10));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc600 */
GEN_FRAME byte GEN_STDCALL F_006dc600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_2 + 0xc);
  if (*(char *)(param_2 + 4) != '\x04') {
    return 1;
  }
  bVar2 = F_006da140(REFG(void * PTR32, 0x1488344) GEN_EDX_ARG,*(undefined4 *)(param_2 + 8));
  if (cVar1 == '\x03') {
    if (bVar2 != 0) {
      return 1;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return 1;
    }
    if (bVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dc640 */
GEN_FRAME byte GEN_THISCALL F_006dc640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dc640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  iVar5 = param_2[0x20];
  iVar1 = param_2[0x1e];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar3);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0xa8))(param_2 GEN_EDX_ARG);
  if (((char)uVar3 == '\x01') && (iVar5 == 0)) {
    iVar5 = 0x4c7250;
  }
  bVar2 = F_006dc4a0(this GEN_EDX_ARG,param_1,(*(undefined4 *)(gen_frame + 0x8)),iVar5,iVar1,uVar4,param_3);
  return bVar2;
}

/* ref: FUN_006dc6b0 */
GEN_FRAME byte GEN_THISCALL F_006dc6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dc6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_006d8b60(this GEN_EDX_FWD,param_1);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1;
  }
  return uVar1 == 0;
}

/* ref: FUN_006dc6d0 */
GEN_FRAME byte GEN_THISCALL F_006dc6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6dc6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  uint * param_7 = (uint *)(uintptr_t)gen_a7;
  char cVar1;
  uint uVar2;
  int iVar3;
  
  cVar1 = param_6[1];
  if ((cVar1 == '\n') || (cVar1 == '\v')) {
    iVar3 = 5000000;
  }
  else if (cVar1 == '\x0f') {
    iVar3 = 0x4c9960;
  }
  else {
    iVar3 = (*(int *)&gen_a3);
    if (((char)param_2 == '\x01') && ((*(int *)&gen_a3) == 0)) {
      iVar3 = 0x4c7250;
    }
  }
  uVar2 = F_006d8e70(this GEN_EDX_FWD,param_1,param_2,iVar3,param_4,param_5,param_6);
  if (param_7 != (uint *)0x0) {
    *param_7 = uVar2;
  }
  if ((((uVar2 != 0) && ((char)param_2 != '\a')) && (iVar3 != *(int *)((int)this + 0x31c))) &&
     (*param_6 == -1)) {
    return 1;
  }
  return uVar2 == 0;
}

/* ref: FUN_006dc760 */
GEN_FRAME byte GEN_THISCALL F_006dc760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc760u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  iVar2 = *(*(int * PTR32 *)&gen_args[2]);
  iVar8 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar6)));
  iVar3 = piVar4[0x1e];
  uVar7 = ((code *)*(gen_code32 *)(iVar2 + 0xa8))(piVar4);
  cVar1 = *(char *)((*(int *)&gen_args[3]) + 1);
  if ((cVar1 == '\n') || (cVar1 == '\v')) {
    iVar8 = 5000000;
  }
  else if (cVar1 == '\x0f') {
    iVar8 = 0x4c9960;
  }
  else if (((char)uVar6 == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar5 = F_006dc6d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar8,iVar3,uVar7,(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  return bVar5;
}

/* ref: FUN_006dc7f0 */
GEN_FRAME byte GEN_THISCALL F_006dc7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dc7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  iVar1 = *(*(int * PTR32 *)&gen_args[2]);
  iVar9 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar7)));
  iVar2 = piVar3[0x1e];
  uVar8 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(piVar3);
  uVar4 = (*(undefined4 *)&gen_args[3]);
  cVar5 = (char)(*(undefined4 *)&gen_args[3]);
  if ((cVar5 == '\n') || (cVar5 == '\v')) {
    iVar9 = 5000000;
  }
  else if (cVar5 == '\x0f') {
    iVar9 = 0x4c9960;
  }
  else if (((char)uVar7 == '\x01') && (iVar9 == 0)) {
    iVar9 = 0x4c7250;
  }
  (*(undefined4 *)&gen_args[3]) = 0;
  bVar6 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar9,iVar2,uVar8,uVar4,&(*(undefined4 *)&gen_args[3]));
  if (bVar6 != 0) {
    bVar6 = F_006dc6d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar9,iVar2,uVar8,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    if (bVar6 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dc8b0 */
GEN_FRAME uint GEN_THISCALL F_006dc8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dc8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x324);
  if ((*(int *)(iVar1 + 4) != 0) && (*(char *)(iVar1 + 0xc) != '\0')) {
    uVar2 = F_006d9070(this GEN_EDX_FWD,param_1);
    if (uVar2 != 0) {
      if (1 < *(byte *)(iVar1 + 0xc)) {
        return *(int *)(iVar1 + 4) + uVar2;
      }
      if ((uVar2 == 1) || (uVar2 == 2)) {
        return *(uint *)(iVar1 + 4);
      }
    }
  }
  return 0;
}

/* ref: FUN_006dc900 */
GEN_FRAME byte GEN_THISCALL F_006dc900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dc900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0xff;
  piVar1 = (int *)F_007444d0((undefined *)((int)this + 0x328) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  return *piVar1 == *(int *)((int)this + 0x32c);
}

/* ref: FUN_006dc940 */
GEN_FRAME byte GEN_THISCALL F_006dc940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dc940u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_007444d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x328))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x32c)))) {
    return 0;
  }
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14)) {
      return 0;
    }
    if (*(char *)((int)puVar2 + 0x11) == (char)(*(undefined4 *)&gen_args[1])) break;
    if (*(char *)((int)puVar2 + 0x25) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x25);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x25);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x25);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x25);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006dc9e0 */
GEN_FRAME uint GEN_THISCALL F_006dc9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6dc9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x324)));
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 1) != 0) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar5 + 8))((int *)*puVar5 GEN_EDX_FWD);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    if (((**((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') && (*puVar1 != 0)) && ((char)puVar1[3] != '\0')) {
      cVar4 = (char)(*(undefined4 *)&gen_args[2]);
      iVar6 = (*(int *)&gen_args[3]);
      if (cVar4 == '\x01') {
        if ((*(int *)&gen_args[3]) == 0) {
          iVar6 = 0x4c7250;
        }
      }
      else {
        if (cVar4 == '\0') {
          return 0;
        }
        if (cVar4 == '\a') {
          return 0;
        }
      }
      (*(int *)&gen_args[3]) = 0;
      bVar2 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),&(*(int *)&gen_args[3]));
      if (((bVar2 != 0) && ((*(int *)&gen_args[3]) != 0)) &&
         (uVar3 = F_006d90d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(int *)&gen_args[3])), uVar3 != 0)) {
        if (1 < (byte)puVar1[3]) {
          return *puVar1 + uVar3;
        }
        if ((uVar3 == 1) || (uVar3 == 2)) {
          return *puVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dcaf0 */
GEN_FRAME uint GEN_THISCALL F_006dcaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6dcaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x324)));
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 1) != 0) {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8)));
    if (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec)))) {
      do {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*puVar5 + 8))((int *)*puVar5 GEN_EDX_FWD);
        if ((char)uVar4 == '\0') {
          return 0;
        }
        puVar5 = puVar5 + 1;
      } while (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))));
    }
    uVar2 = (*(undefined4 *)&gen_args[5]);
    if (((**((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') && (*(int *)(iVar1 + 4) != 0)) &&
       (*(char *)(iVar1 + 0xc) != '\0')) {
      iVar6 = (*(int *)&gen_args[3]);
      if (((char)(*(undefined4 *)&gen_args[2]) == '\x01') && ((*(int *)&gen_args[3]) == 0)) {
        iVar6 = 0x4c7250;
      }
      (*(int *)&gen_args[3]) = 0;
      bVar3 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),&(*(int *)&gen_args[3]));
      if (((*(int *)&gen_args[3]) != 0) && ((*(int * PTR32 *)&gen_args[6]) != (int *)0x0)) {
        *(*(int * PTR32 *)&gen_args[6]) = (*(int *)&gen_args[3]);
      }
      if (((bVar3 != 0) && ((*(int *)&gen_args[3]) != 0)) &&
         (uVar4 = F_006d90d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar6,(*(undefined4 *)&gen_args[4]),uVar2,(*(int *)&gen_args[3])), uVar4 != 0)) {
        if (1 < *(byte *)(iVar1 + 0xc)) {
          return *(int *)(iVar1 + 4) + uVar4;
        }
        if ((uVar4 == 1) || (uVar4 == 2)) {
          return *(uint *)(iVar1 + 4);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006dcc00 */
GEN_FRAME byte GEN_THISCALL F_006dcc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dcc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_006d9290(this GEN_EDX_FWD,param_1,param_3);
  if (bVar1 != 0) {
    bVar1 = F_006d9430(this GEN_EDX_ARG,param_2);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006dcc40 */
GEN_FRAME uint F_006dcc40(unsigned int gen_a0)
{
  GEN_ENTER(0x6dcc40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 uVar7;
  
  F_00a01860(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar5 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  this = (undefined *)*puVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  iVar1 = *piVar6;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3,uVar4);
  iVar2 = *piVar6;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (3 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  uVar7 = *(undefined4 *)(iVar2 + 4);
  bVar3 = F_006d9290(this GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x60),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  if (bVar3 != 0) {
    bVar3 = F_006d9430(this GEN_EDX_ARG,uVar7);
    if (bVar3 != 0) {
      uVar7 = 1;
      goto LAB_006dccef;
    }
  }
  uVar7 = 0;
LAB_006dccef: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar7);
  F_00a01890(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf137 */
GEN_FRAME uint GEN_THISCALL F_006dcd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dcd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(uint *)(this + 0x38) >> 0x12 & 1) == 0) {
    return (*(uint *)(this + 0x38) >> 0x1a) << 8;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
  iVar1 = param_2[0x1e];
  iVar5 = param_2[0x20];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar3);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0xa8))(param_2 GEN_EDX_ARG);
  if (((char)uVar3 == '\x01') && (iVar5 == 0)) {
    iVar5 = 0x4c7250;
  }
  bVar2 = F_006dc160(this GEN_EDX_ARG,param_1,(*(undefined4 *)(gen_frame + 0x8)),iVar5,iVar1,uVar4,0x12,0);
  if (bVar2 != 0) {
    bVar2 = F_006bfe00(this GEN_EDX_ARG,param_1,param_2,param_3);
    if (bVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf136 */
GEN_FRAME byte GEN_THISCALL F_006dcdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  sVar1 = *(short *)(this + 0x1d4);
  uVar4 = F_00a4ffd0();
  iVar6 = 0;
  iVar5 = uVar4 + 0x13b4;
  do {
    if (*(short *)(iVar5 + 4) == sVar1) {
      if (-1 < iVar6) {
        cVar2 = *(char *)(iVar5 + 6);
        goto LAB_006dcde1;
      }
      break;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar6 < 0x1e);
  cVar2 = '\0';
LAB_006dcde1: ;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  if (((cVar2 != '\0') && (bVar3 = F_006dc7f0(this GEN_EDX_ARG,param_1,param_2,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x8))), bVar3 == 0))
     && (((uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xd800) == 0)) {
    *(undefined2 *)(this + 0x36c) = 0x8001;
    return 0;
  }
  return 0;
}

/* ref: FUN_006dce40 */
GEN_FRAME uint GEN_THISCALL F_006dce40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dce40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  iVar7 = *(*(int * PTR32 *)&gen_args[2]);
  iVar6 = (*(int * PTR32 *)&gen_args[2])[0x20];
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3),(char)uVar3)));
  (*(int *)(gen_frame + 0x8)) = piVar1[0x1e];
  uVar3 = ((code *)*(gen_code32 *)(iVar7 + 0xa8))(piVar1);
  bVar2 = (byte)(*(uint *)&gen_args[3]);
  if (9 < bVar2) {
    if (bVar2 < 0xc) {
      iVar6 = 5000000;
      (*(int *)(gen_frame + 0x8)) = (*(uint *)&gen_args[4]);
    }
    else {
      if (bVar2 != 0xf) goto LAB_006dce9a;
      iVar6 = 0x4c9960;
    }
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[2]), 1, 3) << 8)));
  }
LAB_006dce9a: ;
  (*(int *)(gen_frame + 0x4)) = 0;
  bVar2 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]),iVar6,(*(int *)(gen_frame + 0x8)),uVar3,(*(uint *)&gen_args[3]),&(*(int *)(gen_frame + 0x4)));
  if ((bVar2 != 0) && ((*(byte *)((*(int *)(gen_frame + 0x4)) + 0x10) & 0x40) != 0)) {
    iVar7 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if ((iVar7 == 0) || (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG), uVar3 != 1)) {
      iVar7 = 0;
    }
    if ((iVar7 != 0) && (piVar1[0x5d] != 0)) {
      uVar3 = F_0042a990(piVar1[0x5d] + 8 GEN_EDX_ARG);
      uVar4 = F_0042a990(iVar7 + 8 GEN_EDX_ARG);
      uVar5 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
      (*(uint *)&gen_args[4]) = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"GetConditionId",uVar5,uVar4,uVar3,
                             (*(uint *)&gen_args[3]) & 0xff,(*(uint *)&gen_args[4]),1);
      if (((*(uint *)&gen_args[4]) == 0) &&
         (bVar2 = F_00727410(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,&(*(uint *)&gen_args[4])), bVar2 != 0)) {
        return (*(uint *)&gen_args[4]);
      }
    }
  }
  return 0x10;
}

/* ref: Client::Game::Event::QuestEventHandler::vf132 */
GEN_FRAME uint GEN_THISCALL F_006dcf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006dce40(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf131 */
GEN_FRAME byte GEN_THISCALL F_006dcf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dcf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006dce40(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1 == 0x11;
}

/* ref: Client::Game::Event::ShopEventHandler::vf6 */
GEN_FRAME uint GEN_THISCALL F_006dcfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dcfb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar2);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_006dd010 */
GEN_FRAME uint GEN_THISCALL F_006dd010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dd010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x23c) = *(undefined4 *)(*param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x1dc) = 0;
  }
  uVar2 = F_006d95c0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006dd050 */
GEN_NOFRAME uint GEN_THISCALL F_006dd050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  if (*(int *)((int)this + 0x1d8) == 0) {
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,0x3c);
    *(uint *)((int)this + 0x1d8) = uVar1;
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b923c));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6dd010));
  }
  *(undefined4 * PTR32 *)((int)this + 0x1dc) = this_00;
  F_00cb4540(this_00 GEN_EDX_ARG,0,(uint)*(ushort *)((int)this + 0x1d4));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1dc));
  return uVar1;
}

/* ref: FUN_006dd0e0 */
GEN_FRAME byte GEN_THISCALL F_006dd0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd0e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x348)));
}

/* ref: FUN_006dd110 */
GEN_FRAME uint GEN_THISCALL F_006dd110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10;
}

/* ref: FUN_006dd140 */
GEN_FRAME byte GEN_THISCALL F_006dd140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd140u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  uint uVar2;
  undefined4 * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  F_0072dd60(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[1]) & 0xffff;
  F_00744670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x344))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  uVar2 = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x18);
  if (uVar2 != 0) {
    ((uint *)(gen_frame + 0x14))[0] = uVar2;
    ((uint *)(gen_frame + 0x14))[1] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x28);
    ((undefined1 *)(gen_frame + 0x74))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x31);
  }
  uVar2 = (uint)(uVar2 != 0);
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x1c) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x1c);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2a);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x32);
    uVar2 = uVar2 + 1;
  }
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x20) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x20);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2c);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x33);
    uVar2 = uVar2 + 1;
  }
  if (*(uint *)((*(int *)(gen_frame + 0xc)) + 0x24) != 0) {
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d)] = *(uint *)((*(int *)(gen_frame + 0xc)) + 0x24);
    ((uint *)(gen_frame + 0x14))[(int)(uVar2 * 0x1d + 1)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2e);
    ((undefined1 *)(gen_frame + 0x74))[(int)(uVar2 * 0x74)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x34);
    uVar2 = uVar2 + 1;
  }
  ((undefined1 *)(gen_frame + 0x10))[0] = (char)uVar2;
  bVar1 = F_00ba01b0(((undefined1 *)(gen_frame + 0x10)));
  iVar3 = 4;
  this_00 = &(*(uint *)&gen_args[1]);
  do {
    this_00 = this_00 - 0x1d;
    F_0042c880(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf126 */
GEN_FRAME unsigned int GEN_THISCALL F_006dd280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (REFG(int, 0x1379694) != 0) {
    F_006d82c0((undefined *)this GEN_EDX_FWD);
    uVar7 = F_00a4ffd0();
    piVar2 = *(int * PTR32 *)(this + 0x348);
    piVar3 = (int *)*piVar2;
    (*(int *)(gen_frame + 0x8)) = (int)piVar3;
    if (piVar3 != piVar2) {
      do {
        iVar5 = (*(int *)(gen_frame + 0x8));
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x8)) + 0xc);
        uVar8 = F_00ab37e0(*(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x38));
        iVar4 = *(int *)(iVar5 + 0x94);
        F_00a84160(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,iVar4);
        F_00a6a890(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,*(undefined4 *)(iVar5 + 0x94),(uint)uVar1,iVar5 + 0x40);
        if (*(byte *)(uVar7 + iVar4 * 0x10 + 0x168a) < 10) {
          bVar6 = F_006dd140(this GEN_EDX_ARG,(uint)uVar1);
          uVar9 = 0xecef;
          if (bVar6 != 0) goto LAB_006dd320;
        }
        else {
LAB_006dd320: ;
          uVar9 = 0xece5;
        }
        F_00a83fa0(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,*(undefined4 *)(iVar5 + 0x94),*(undefined4 *)(iVar5 + 0x38),uVar9
                     ,uVar8,1);
        F_00731c40(&(*(int *)(gen_frame + 0x8)) GEN_EDX_ARG);
      } while ((*(int *)(gen_frame + 0x8)) != *(int *)(this + 0x348));
    }
  }
  return;
}

/* ref: FUN_006dd370 */
GEN_FRAME uint GEN_THISCALL F_006dd370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if ((((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
         (*(char *)(param_1 + 0x188) != '\x02')) && (iVar2 = *(int *)((int)this + 0xfc), iVar2 != 2)
        ) && ((iVar2 != 3 && (iVar2 != 6)))) {
      return 0;
    }
  }
  return 0x468;
}

/* ref: FUN_006dd3f0 */
GEN_FRAME uint GEN_THISCALL F_006dd3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
        (*(char *)(param_1 + 0x188) != '\x02')) &&
       ((*(int *)((int)this + 0xfc) == 1 || (*(int *)((int)this + 0xfc) == 5)))) {
      return 0;
    }
  }
  return 0x468;
}

/* ref: FUN_006dd460 */
GEN_FRAME uint GEN_THISCALL F_006dd460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    if (((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8))) == 0x150001) &&
        (*(char *)(param_1 + 0x188) != '\x02')) && (*(int *)((int)this + 0xfc) == 4)) {
      return (*(char *)((int)this + 0x109) != '\0') - 1 & 0x468;
    }
  }
  return 0x468;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf34 */
GEN_FRAME uint GEN_THISCALL F_006dd4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dd4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  undefined1 GVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  int * local_8;
  
  piVar7 = *(int * PTR32 *)(this + 0x100);
  piVar9 = (int *)*piVar7;
  uVar10 = 0;
  local_8 = piVar9;
  if (piVar9 != piVar7) {
    do {
      iVar11 = piVar9[4];
      if (iVar11 != piVar9[5]) {
        do {
          if (uVar10 < param_2) {
            puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + uVar10 * 4) + 4)));
            puVar12 = puVar3;
            puVar13 = (undefined4 *)(iVar11 + 0x70);
            for (iVar8 = 0x34; iVar8 != 0; iVar8 = iVar8 - 1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            uVar10 = uVar10 + 1;
            uVar6 = F_00ab6240(*(undefined4 *)(iVar11 + 4),0,puVar3);
            piVar7 = (int *)F_0042e430((undefined *)(iVar11 + 0x1c) GEN_EDX_ARG,uVar6);
            piVar9 = local_8;
          }
          iVar11 = iVar11 + 0x140;
        } while (iVar11 != piVar9[5]);
      }
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar7 = (int *)piVar9[2];
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0x21);
          piVar9 = piVar7;
          piVar7 = (int *)*piVar7;
          while (local_8 = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0x21);
            piVar9 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar5 = (int *)piVar9[1];
          piVar4 = piVar9;
          while ((piVar7 = piVar5, piVar9 = piVar7, local_8 = piVar7, cVar1 == '\0' &&
                 (piVar4 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x21);
            piVar5 = (int *)piVar7[1];
            piVar4 = piVar7;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)(this + 0x100));
  }
  this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
  GVar2 = this[0x1c];
  uVar10 = CONCAT31((int3)((uint)((int)(uintptr_t)piVar7) >> 8),GVar2);
  if (((byte)GVar2 & 1) == 0) {
    this[0x1c] = (undefined1)((byte)GVar2 | 1);
    uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x23c))(this GEN_EDX_ARG);
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 100);
  if (puVar3 != (undefined4 *)0x0) {
    uVar10 = ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 100) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  return uVar10;
}

/* ref: FUN_006dd600 */
GEN_FRAME uint GEN_THISCALL F_006dd600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dd600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint * puVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined * PTR32 * ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint * local_c;
  byte local_5;
  
  *(undefined * PTR32 *)&REFG(undefined, 0x13241e0) = this;
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar8 = (uint)(byte)(*(char *)((int)this + 0x104) + 4);
  puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar8 * 8) | uVar8 * 8 + 4,0,0);
  if (puVar6 == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    local_c = puVar6 + 1;
    *puVar6 = uVar8;
    puVar6 = local_c;
    uVar3 = uVar8;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
    }
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x100)));
  local_5 = 0;
  if (piVar9 != *(int * PTR32 *)((int)this + 0x100)) {
    do {
      puVar6 = (uint *)F_00ab3f70((uint)*(byte *)(piVar9 + 3));
      uVar7 = (uint)local_5;
      uVar3 = *puVar6;
      F_005a2710(local_c + uVar7 * 2 + 8 GEN_EDX_ARG,6);
      local_5 = local_5 + 1;
      (local_c + uVar7 * 2 + 8)[1] = (uVar3 & 0xffffff) + (int)puVar6;
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar4 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x21);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)this + 0x100));
  }
  uVar15 = 4;
  uVar14 = 0;
  uVar13 = 0;
  ppuVar12 = &REFG(undefined * PTR32, 0x13241dc);
  uVar11 = 0xc;
  puVar6 = local_c;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5 GEN_EDX_ARG)));
  uVar8 = F_008668b0(this_00 GEN_EDX_ARG,uVar11,uVar8,puVar6,ppuVar12,uVar13,uVar14,uVar15);
  REFG(undefined4, 0x13241e4) = uVar8;
  if (local_c != (uint *)0x0) {
    uVar8 = local_c[-1];
    puVar6 = local_c + uVar8 * 2;
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      puVar6 = puVar6 - 2;
      F_005a2670(puVar6 GEN_EDX_ARG);
    }
    uVar10 = F_00406b30(local_c - 1);
    uVar8 = (uint)uVar10;
  }
  return uVar8;
}

/* ref: FUN_006dd780 */
GEN_FRAME unsigned int GEN_THISCALL F_006dd780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd780u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (*(int *)&gen_args[1]);
  iVar3 = REFG(int, 0x1379694);
  if (((*(int *)&gen_args[1]) != 0) && (REFG(int, 0x1379694) != 0)) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,REFG(int, 0x1379694),iVar4,(*(int *)&gen_args[1]),uVar1);
    if (uVar5 == 0xf) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(pvVar2 GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar3);
      if ((*(int *)&gen_args[1]) != *(int *)((int)pvVar2 + 0x30)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x7e) = 0;
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      F_006d7550(pvVar2 GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar3);
      if ((*(int *)&gen_args[1]) != *(int *)((int)pvVar2 + 0x30)) {
        *(undefined1 *)((*(int *)&gen_args[1]) + 0x7f) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_006dd800 */
GEN_FRAME ushort GEN_THISCALL F_006dd800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dd800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short * psVar8;
  short * psVar9;
  uint uVar10;
  ushort * puVar11;
  int local_14;
  int local_c;
  
  uVar4 = F_00a4ffd0();
  local_14 = *(int *)((int)this + 0x248);
  if (local_14 != *(int *)((int)this + 0x244)) {
    psVar8 = (short *)(local_14 - 0x6a);
    do {
      uVar1 = psVar8[-5];
      if ((char)psVar8[9] == '\0') {
        uVar10 = 0;
        local_c = 0;
        if ((char)psVar8[-4] == '\x01') {
          puVar11 = (ushort *)(psVar8 - 3);
          do {
            uVar2 = *puVar11;
            if (uVar2 != 0) {
              if ((199 < uVar2 >> 3) ||
                 ((*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar2 & 7))) ==
                  0)) goto LAB_006dd988;
              local_c = local_c + 1;
            }
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar10 < 3);
          if (local_c != 0) goto LAB_006dd8e5;
        }
        else if ((char)psVar8[-4] == '\x02') {
          puVar11 = (ushort *)(psVar8 - 3);
          do {
            uVar2 = *puVar11;
            if (((uVar2 != 0) && (uVar2 >> 3 < 200)) &&
               ((*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar2 & 7))) != 0)
               ) goto LAB_006dd8e5;
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar10 < 3);
        }
      }
      else {
LAB_006dd8e5: ;
        if (*(char *)((int)psVar8 + 0x13) != '\0') {
          return uVar1;
        }
        uVar10 = 0;
        local_c = 0;
        psVar9 = psVar8;
        if ((char)psVar8[3] == '\x01') {
          do {
            sVar3 = *psVar9;
            if (sVar3 != 0) {
              uVar5 = F_00a4ffd0();
              iVar7 = 0;
              iVar6 = uVar5 + 0x13b4;
              while (*(short *)(iVar6 + 4) != sVar3) {
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x10;
                if (0x1d < iVar7) goto LAB_006dd988;
              }
              if (((iVar7 < 0) || (*(byte *)(iVar6 + 6) == 0)) ||
                 (*(byte *)(iVar6 + 6) < *(byte *)((int)psVar8 + uVar10 + 7))) goto LAB_006dd988;
              local_c = local_c + 1;
            }
            uVar10 = uVar10 + 1;
            psVar9 = psVar9 + 1;
          } while (uVar10 < 3);
          if (local_c != 0) {
            return uVar1;
          }
        }
        else if ((char)psVar8[3] == '\x02') {
          do {
            sVar3 = *psVar9;
            if (sVar3 != 0) {
              uVar5 = F_00a4ffd0();
              iVar7 = 0;
              iVar6 = uVar5 + 0x13b4;
              do {
                if (*(short *)(iVar6 + 4) == sVar3) {
                  if (((-1 < iVar7) && (*(byte *)(iVar6 + 6) != 0)) &&
                     (*(byte *)((int)psVar8 + uVar10 + 7) <= *(byte *)(iVar6 + 6))) {
                    return uVar1;
                  }
                  break;
                }
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 0x10;
              } while (iVar7 < 0x1e);
            }
            uVar10 = uVar10 + 1;
            psVar9 = psVar9 + 1;
          } while (uVar10 < 3);
        }
      }
LAB_006dd988: ;
      local_14 = local_14 - 0x74;
      psVar8 = psVar8 - 0x3a;
    } while (local_14 != *(int *)((int)this + 0x244));
  }
  return 0;
}

/* ref: FUN_006dd9f0 */
GEN_FRAME uint F_006dd9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6dd9f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,2);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2,uVar2);
  uVar1 = F_006dd800(this GEN_EDX_ARG,*(undefined4 *)(*piVar4 + 0x60));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006dda70 */
GEN_FRAME uint GEN_THISCALL F_006dda70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dda70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) < 0x140002) {
    if ((*(uint *)&gen_args[1]) == 0x140001) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
    }
    if ((*(uint *)&gen_args[1]) == 0xa0001) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    }
    if ((*(uint *)&gen_args[1]) == 0xe0000) {
      return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
    }
  }
  else if ((*(uint *)&gen_args[1]) == 0x150001) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  }
  F_00743680(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandlerModule::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_006ddaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ddaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  *(undefined4 *)&REFG(undefined, 0x1324140) = 0;
  REFG(undefined4, 0x1324144) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324148) = 0;
  REFG(undefined4, 0x132412c) = 0;
  REFG(undefined4, 0x1324130) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324134) = 0;
  REFG(undefined4, 0x13241d0) = 0;
  REFG(undefined4, 0x13241d4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241d8) = 0;
  REFG(undefined4, 0x132410c) = 0;
  REFG(undefined4, 0x1324110) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324114) = 0;
  REFG(undefined4, 0x132411c) = 0;
  REFG(undefined4, 0x1324120) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324124) = 0;
  REFG(undefined4, 0x1324160) = 0;
  REFG(undefined4, 0x1324164) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324168) = 0;
  REFG(undefined4, 0x1324170) = 0;
  REFG(undefined4, 0x1324174) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324178) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324180) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324184) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324188) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324190) = 0;
  REFG(undefined4, 0x1324194) = 0;
  *(undefined4 *)&REFG(undefined, 0x1324198) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241a0) = 0;
  REFG(undefined4, 0x13241a4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241a8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241b0) = 0;
  REFG(undefined4, 0x13241b4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241b8) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
  REFG(undefined4, 0x13241c4) = 0;
  *(undefined4 *)&REFG(undefined, 0x13241c8) = 0;
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar6 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar2 = (undefined4 *)piVar6[4];
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
        piVar6[4] = 0;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)(this + 0x30));
  }
  uVar5 = F_00743620(this + 0x2c GEN_EDX_ARG);
  this[0x24] = (undefined1)0x0;
  return uVar5;
}

/* ref: FUN_006ddc40 */
GEN_FRAME uint GEN_THISCALL F_006ddc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ddc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006dda70(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_006ddc50 */
GEN_FRAME unsigned int GEN_THISCALL F_006ddc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4] GEN_EDX_FWD);
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4] GEN_EDX_ARG);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddd00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006ddd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ddd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4] GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddd80 */
GEN_FRAME unsigned int GEN_THISCALL F_006ddd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4] GEN_EDX_FWD);
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4] GEN_EDX_ARG);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006dde30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006dde30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dde30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4] GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddeb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006ddeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ddeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4] GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddf30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006ddf30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ddf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4] GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006ddfb0 */
GEN_FRAME unsigned int GEN_THISCALL F_006ddfb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ddfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar6 * 2)) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4] GEN_EDX_FWD);
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4] GEN_EDX_ARG);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_2);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de060 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006de060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6de060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4] GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de0e0 */
GEN_FRAME uint GEN_THISCALL F_006de0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x30);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x22c))((int *)piVar4[4] GEN_EDX_FWD);
      if ((param_1 & 1) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if ((param_1 & 2) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if ((param_1 & 4) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if ((param_1 & 8) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if ((param_1 & 0x10) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 500))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if ((param_1 & 0x20) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar4 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar2 = (int *)piVar4[1];
            piVar3 = piVar4;
          }
        }
      }
      piVar3 = this;
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar3;
}

/* ref: FUN_006de200 */
GEN_FRAME unsigned int GEN_THISCALL F_006de200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6de200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      sVar2 = *(short *)(piVar5[4] + 10);
      uVar6 = 0;
      if (param_3 != 0) {
        do {
          if (sVar2 == *(short *)(param_2 + uVar6 * 2)) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x22c))((int *)piVar5[4] GEN_EDX_FWD);
            if (((byte)param_1 & 1) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4] GEN_EDX_ARG);
            }
            if (((byte)param_1 & 2) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4] GEN_EDX_ARG);
            }
            if (((byte)param_1 & 4) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f0))((int *)piVar5[4] GEN_EDX_ARG);
            }
            if (((byte)param_1 & 8) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f8))((int *)piVar5[4] GEN_EDX_ARG);
            }
            if (((byte)param_1 & 0x10) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 500))((int *)piVar5[4] GEN_EDX_ARG);
            }
            if (((byte)param_1 & 0x20) != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4] GEN_EDX_ARG);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < param_3);
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar3 = (int *)piVar5[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar4 = (int *)piVar5[1];
          piVar3 = piVar5;
          while ((piVar5 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de320 */
GEN_FRAME uint GEN_THISCALL F_006de320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  short sVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x30);
  piVar6 = (int *)*piVar5;
  if (piVar6 != piVar5) {
    do {
      piVar5 = (int *)piVar6[4];
      sVar2 = *(short *)((int)piVar5 + 10);
      uVar7 = 0;
      if (param_2 != 0) {
        do {
          if (sVar2 == *(short *)(param_1 + uVar7 * 2)) {
            piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar6[4] + 4))((int *)piVar6[4] GEN_EDX_FWD)));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar5 = (int *)*piVar3;
          while (piVar6 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar3 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar5 = piVar4, piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar5[2])))
          {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar4 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar5;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf49 */
GEN_FRAME uint GEN_THISCALL F_006de3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6de3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((this[0x510] != (undefined1)0x0) ||
     ((this[0x511] != (undefined1)0x0 && ((short)param_3 != 0)))) {
    *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  }
  uVar1 = F_006db690((undefined *)this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_006de3f0 */
GEN_FRAME byte F_006de3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6de3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  
  if ((REFG(int, 0x1379694) != 0) && (*(uint *)(REFG(int, 0x1379694) + 0xe4) >> 0x10 == 0x8002)) {
    this = (undefined *)F_006da050(REFG(void * PTR32, 0x1488344) GEN_EDX_ARG,*(uint *)(REFG(int, 0x1379694) + 0xe4));
    if (this != (undefined *)0x0) {
      bVar1 = F_006d39e0(this GEN_EDX_ARG,param_1);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_006de430 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006de430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6de430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  
  if ((*(char *)((int)this + 100) != '\0') &&
     (piVar4 = *(int * PTR32 *)((int)this + 0x2c), *(int * PTR32 *)((int)this + 0x30) != piVar4)) {
    piVar3 = piVar4 + 1;
    do {
      piVar1 = (int *)*piVar4;
      if ((piVar1 == (int *)0x0) || (piVar1[0x10] != 0)) {
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
        puVar2 = (undefined4 *)*piVar4;
        if (puVar2 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
          *piVar4 = 0;
        }
        F_00c46e20(piVar4,piVar3,(*(int *)((int)this + 0x30) - (int)((int)(uintptr_t)piVar3) >> 2) * 4);
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) - 4;
      }
    } while (*(int * PTR32 *)((int)this + 0x30) != piVar4);
  }
  return;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf14 */
GEN_FRAME uint GEN_THISCALL F_006de4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_006db350((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = F_00ab1c90((uint)*(ushort *)(param_1 + 0x86));
  if (uVar1 != 0) {
    this[0x1d4] = *(undefined *)(uVar1 + 0x2e);
  }
  return uVar1;
}

/* ref: FUN_006de4e0 */
GEN_FRAME uint GEN_THISCALL F_006de4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    in_EAX = F_006de0e0(this GEN_EDX_FWD,0xffff);
  }
  return in_EAX;
}

/* ref: FUN_006de500 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006de500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar4[4];
      if (*(short *)((int)piVar2 + 10) == 0x1d) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2 GEN_EDX_FWD);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1c8))((int *)piVar4[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e0))((int *)piVar4[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f0))((int *)piVar4[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1f8))((int *)piVar4[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 500))((int *)piVar4[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar4[4] + 0x1e4))((int *)piVar4[4] GEN_EDX_ARG);
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 0;
}

/* ref: FUN_006de5d0 */
GEN_NOFRAME uint GEN_THISCALL F_006de5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x30);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar2 = (int *)piVar5[4];
      if (*(short *)((int)piVar2 + 10) == 1) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2 GEN_EDX_FWD);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1c8))((int *)piVar5[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e0))((int *)piVar5[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f0))((int *)piVar5[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1f8))((int *)piVar5[4] GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 500))((int *)piVar5[4] GEN_EDX_ARG);
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 0x1e4))((int *)piVar5[4] GEN_EDX_ARG)));
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return (uint)piVar4;
}

/* ref: FUN_006de6a0 */
GEN_NOFRAME uint GEN_THISCALL F_006de6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006de6b0 */
GEN_NOFRAME uint GEN_THISCALL F_006de6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6de6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006de6c0 */
GEN_FRAME uint GEN_THISCALL F_006de6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00a9f620(param_1 GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_006de0e0(this GEN_EDX_ARG,0xffff);
  }
  return uVar2;
}

/* ref: FUN_006de6f0 */
GEN_FRAME uint GEN_THISCALL F_006de6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de6f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)&gen_args[1]) = F_005f3270(0x31,(*(uint *)&gen_args[1]),0);
  uVar1 = 0;
  if ((*(uint *)&gen_args[1]) != 0) {
    F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    uVar1 = F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_006de750 */
GEN_NOFRAME uint GEN_THISCALL F_006de750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6de750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = -0x20000000;
  if (*(int *)((int)this + 0x224) != 0) {
    uVar3 = *(uint *)((int)this + 0x220);
    iVar2 = 0;
    if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar2 + 8);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar3 * 4)));
    iVar2 = *(int *)(iVar1 + 0x10);
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
  }
  if (*(int *)((int)this + 0x238) != 0) {
    iVar2 = *(int *)((int)this + 0x240);
    uVar4 = *(undefined4 *)((int)this + 0x244);
  }
  if (iVar2 != -0x20000000) {
    uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,iVar2,uVar4);
    return uVar3;
  }
  return 0;
}

/* ref: FUN_006de7c0 */
GEN_NOFRAME uint GEN_THISCALL F_006de7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6de7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(uint *)((int)this + 0x224) < 2) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x214))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)((int)this + 0x220) + 1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 0x24)));
}

/* ref: FUN_006de820 */
GEN_FRAME uint GEN_THISCALL F_006de820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  (*(int *)(gen_frame + 0x8)) = param_1;
  F_00749220((undefined *)((int)this + 0x6d0) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)((int)this + 0x6d4)) {
    do {
      if (piVar5[4] != param_1) {
        return uVar4;
      }
      if ((param_2 == 0) || (piVar5[6] == param_2)) {
        uVar6 = F_00427d90();
        uVar4 = uVar4 + 1;
        *(ulonglong *)(piVar5 + 8) = uVar6;
        if (param_2 != 0) {
          return uVar4;
        }
      }
      if (*(char *)((int)piVar5 + 0x31) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x31) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x31);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x31);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x31);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x6d4));
  }
  return uVar4;
}

/* ref: FUN_006de8d0 */
GEN_FRAME uint GEN_THISCALL F_006de8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6de8d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[1]);
  F_00749220(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x4)));
  iVar4 = (*(int *)&gen_args[2]);
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    do {
      if (piVar6[4] != (*(int *)&gen_args[1])) {
        return (*(uint *)(gen_frame + 0x8));
      }
      piVar7 = piVar6;
      if ((iVar4 == 0) || (piVar6[6] == iVar4)) {
        if (*(char *)((int)piVar6 + 0x31) == '\0') {
          piVar7 = (int *)piVar6[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar3 = (int *)*piVar7;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar3 + 0x31);
              piVar7 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar2 = *(char *)(piVar6[1] + 0x31);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
            while ((piVar7 = piVar5, cVar2 == '\0' && (piVar3 == (int *)piVar7[2]))) {
              cVar2 = *(char *)(piVar7[1] + 0x31);
              piVar5 = (int *)piVar7[1];
              piVar3 = piVar7;
            }
          }
        }
        F_00743b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_ARG,&(*(int *)&gen_args[2]),piVar6);
        uVar1 = (*(uint *)(gen_frame + 0x8)) + 1;
        (*(uint *)(gen_frame + 0x8)) = uVar1;
        if (iVar4 != 0) {
          return uVar1;
        }
      }
      else if (*(char *)((int)piVar6 + 0x31) == '\0') {
        piVar7 = (int *)piVar6[2];
        if (*(char *)((int)piVar7 + 0x31) == '\0') {
          cVar2 = *(char *)(*piVar7 + 0x31);
          piVar6 = (int *)*piVar7;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*piVar6 + 0x31);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar2 = *(char *)(piVar6[1] + 0x31);
          piVar3 = (int *)piVar6[1];
          while ((piVar7 = piVar3, cVar2 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar2 = *(char *)(piVar7[1] + 0x31);
            piVar3 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
      piVar6 = piVar7;
    } while (piVar7 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4))));
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_006de9f0 */
GEN_FRAME uint GEN_THISCALL F_006de9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6de9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  uVar1 = F_006dda70(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006dea30 */
GEN_FRAME uint GEN_THISCALL F_006dea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dea30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  F_00aa4270(param_1 GEN_EDX_FWD,param_2,0,0);
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_3;
  uVar1 = *(undefined4 *)((int)this + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined4 *)((int)this + 0x6f0) GEN_EDX_ARG,uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006dea80 */
GEN_FRAME uint GEN_THISCALL F_006dea80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6dea80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  F_00aa0000(param_1 GEN_EDX_FWD,param_2,param_3,0,0,0);
  uVar1 = *(undefined4 *)((int)this + 0x6f0);
  (*(undefined4 *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = param_5;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined *)((int)this + 0x6f0) GEN_EDX_ARG,uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006deae0 */
GEN_FRAME byte GEN_THISCALL F_006deae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6deae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(int * PTR32 *)&gen_args[1]) = (int *)F_005f3270(0x31,(*(int * PTR32 *)&gen_args[1]),0);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0;
  }
  F_00745670(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70c))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x8))) {
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x4));
    do {
      if ((piVar4[4] == (*(int *)&gen_args[2])) && ((char)piVar4[5] == (char)(*(undefined4 *)&gen_args[3]))) {
        F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
        F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)(gen_frame + 0x4)),(*(int * PTR32 *)(gen_frame + 0x8)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x90))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0);
        F_00744150(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),piVar4);
        return 1;
      }
      if (*(char *)((int)piVar4 + 0x1d) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x1d);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x1d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x1d);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: FUN_006debf0 */
GEN_FRAME uint GEN_THISCALL F_006debf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6debf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  (*(char *)(gen_frame + 0x1b)) = *(char *)((int)this + 0x71c);
  piVar3 = *(int * PTR32 *)((int)this + 0x710);
  piVar5 = (int *)*piVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (piVar5 != piVar3) {
    do {
      if (piVar5[4] == param_1) {
        F_0073d9b0((undefined *)((int)this + 0x6fc) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),piVar5 + 3);
        F_00745550((undefined *)((int)this + 0x6fc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
        if ((*(char *)(gen_frame + 0x1b)) == '\0') {
          piVar3 = (int *)piVar5[3];
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3 GEN_EDX_ARG,0);
        }
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x1d) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x1d);
            piVar3 = (int *)*piVar4;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x1d);
              piVar4 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x1d);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
            while ((piVar4 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x1d);
              piVar2 = (int *)piVar4[1];
              piVar3 = piVar4;
            }
          }
        }
        piVar3 = (int *)F_00744150((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x70c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),piVar5);
        this = (*(undefined * PTR32 *)(gen_frame + 0x14));
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x1d) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x1d);
          piVar3 = (int *)*piVar4;
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x1d);
            piVar4 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x1d);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar3 = piVar2, piVar5 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x1d);
            piVar2 = (int *)piVar3[1];
            piVar4 = piVar3;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x710));
  }
  return (uint)piVar3;
}

/* ref: FUN_006ded20 */
GEN_FRAME uint GEN_THISCALL F_006ded20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ded20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[2]) != 0) {
    F_007491b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[2]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268)))) {
      *(*(undefined2 * PTR32 *)&gen_args[1]) = *(undefined2 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      return (uint)(*(undefined2 * PTR32 *)&gen_args[1]);
    }
  }
  *(*(undefined2 * PTR32 *)&gen_args[1]) = 1;
  return (uint)(*(undefined2 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006ded70 */
GEN_FRAME uint GEN_THISCALL F_006ded70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6ded70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1 GEN_EDX_ARG,param_2,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_006dedc0 */
GEN_NOFRAME uint GEN_THISCALL F_006dedc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dedc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x6f0);
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      if (((((char)piVar3[6] == '\0') && (*(char *)((int)piVar3 + 0x19) == '\0')) &&
          (piVar2 = (int *)F_00aa0790(piVar3[2] GEN_EDX_FWD), (char)piVar2 == '\0')) &&
         (piVar2 = (int *)F_00aa02d0((undefined *)piVar3[2] GEN_EDX_ARG,piVar3[3],0), (char)piVar2 == '\0')) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar3[4] + 4))
                                  ((int *)piVar3[4] GEN_EDX_ARG,piVar3[2],piVar3[3],piVar3[5])));
        *(undefined1 *)(piVar3 + 6) = 1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x6f0));
  }
  iVar1 = *(int *)((int)this + 0x6f4);
  while ((iVar1 != 0 &&
         ((piVar2 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x6f0))), (char)piVar2[6] != '\0' ||
          (*(char *)((int)piVar2 + 0x19) != '\0'))))) {
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6f0)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x6f0)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      uVar4 = F_00429760(piVar2,0x1c,800);
      piVar2 = (int *)uVar4;
      *(int *)((int)this + 0x6f4) = *(int *)((int)this + 0x6f4) - 1;
    }
    iVar1 = *(int *)((int)this + 0x6f4);
  }
  return (uint)piVar2;
}

/* ref: FUN_006dee90 */
GEN_FRAME unsigned int GEN_THISCALL F_006dee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6dee90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  iVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
  if (((int)(*(int * PTR32 *)&gen_args[2]) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a4))) != (uint)((*(uint *)&gen_args[1]) < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0)))))
     || (999 < (*(uint *)&gen_args[1]) - *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0))))) {
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)))));
    if ((*(int * PTR32 *)&gen_args[2]) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790)))) {
      do {
        F_006da5e0(((undefined *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x18))) GEN_EDX_FWD);
        F_00724e40(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      } while ((*(int * PTR32 *)&gen_args[2]) != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x790))));
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a0))) = (*(uint *)&gen_args[1]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a4))) = iVar1;
  }
  return 0;
}

/* ref: FUN_006def00 */
GEN_NOFRAME uint GEN_THISCALL F_006def00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6def00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: FUN_006def40 */
GEN_NOFRAME byte GEN_THISCALL F_006def40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6def40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  
  uVar6 = 0;
  piVar7 = (int *)((int)this + 0x74c);
  do {
    if (*piVar7 != 0) {
      return 0;
    }
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 1;
  } while (uVar6 < 0x10);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x348)));
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 1;
    }
    if (*(char *)(puVar3 + 0x26) == '\0') break;
    if (*(char *)((int)puVar3 + 0x9d) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x9d) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x9d);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x9d);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x9d);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x9d);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006defd0 */
GEN_FRAME unsigned int GEN_THISCALL F_006defd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6defd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  F_006de200(this GEN_EDX_FWD,param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  return;
}

/* ref: FUN_006deff0 */
GEN_NOFRAME uint GEN_THISCALL F_006deff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6deff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006df000 */
GEN_NOFRAME uint GEN_THISCALL F_006df000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006df010 */
GEN_NOFRAME uint GEN_THISCALL F_006df010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006df020 */
GEN_NOFRAME uint GEN_THISCALL F_006df020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6df020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006de0e0(this GEN_EDX_FWD,0xffff);
  return uVar1;
}

/* ref: FUN_006df030 */
GEN_NOFRAME uint GEN_THISCALL F_006df030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float * pfVar3;
  undefined * pvVar4;
  float10 fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  fVar7 = *(float *)((int)param_1 + 0xb0);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(float *)(gen_frame + 0x5c)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar7)));
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar7)));
  fVar7 = (float)fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar7;
  ((float *)(gen_frame + 0x60))[0] = fVar7;
  ((float *)(gen_frame + 0x60))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0x60))[1] = 0.0;
  (*(float *)(gen_frame + 0x80)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x88)) = fVar7;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  pfVar3 = (float *)F_004ee670(((float *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)((float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x24)) = pfVar3[1];
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  pfVar3 = (float *)F_00a5feb0(param_2 GEN_EDX_ARG);
  fVar7 = *pfVar3;
  fVar1 = pfVar3[2];
  pfVar3 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar2 = *pfVar3;
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  (*(float *)(gen_frame + 0x8)) = pfVar3[2];
  fVar7 = (float)((float10)fVar7 - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar7;
  fVar2 = (float)((float10)0 - (float10)0);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar1 = (float)((float10)fVar1 - (float10)pfVar3[2]);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = fVar7;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  F_0046f390(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG);
  fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x28)) +
                 ((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x44)) * (float10)(*(float *)(gen_frame + 0x24))))));
  (*(float *)(gen_frame + 0x54)) = fVar7;
  if (((float10)REFG(float, 0x1088068) < (float10)fVar7) && ((char)param_3 != '\0')) {
    pvVar4 = (undefined *)F_006d7550((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x5c)),param_1);
    if ((*(float *)(gen_frame + 0x5c)) == *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x30)) goto LAB_006df29f;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    *(undefined8 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x70) = uVar6;
    *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    *(undefined1 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x7c) = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2,0xffffffff,0);
  }
  else {
    fVar7 = F_00aae7a0(&(*(float *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x54)) = fVar7;
    F_00aa0000(param_1 GEN_EDX_ARG,0x30f,&(*(float *)(gen_frame + 0x54)),0,0,0);
    F_006d7550((*(undefined * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x5c)),param_1);
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x50));
    if ((*(float *)(gen_frame + 0x5c)) == *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x30)) goto LAB_006df29f;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
    *(undefined8 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x70) = uVar6;
    *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x78) = (uint)*(ushort *)(param_2 + 0x22);
    *(undefined1 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 0x7c) = 1;
    uVar9 = 0;
    uVar8 = 0xffffffff;
    uVar6 = ((gen_lcode *)*(gen_code32 *)*param_2)(param_2);
  }
  pvVar4 = (undefined *)F_00aa7a30(param_1 GEN_EDX_ARG,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar8,uVar9);
LAB_006df29f: ;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0) GEN_EDX_ARG);
  return (uint)pvVar4;
}

/* ref: FUN_006df2c0 */
GEN_FRAME uint GEN_THISCALL F_006df2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = *(int *)((int)this + 0x30);
  uVar2 = *(uint *)((int)this + 0x6c) & 0x400;
  bVar4 = uVar2 == 0x400;
  for (iVar3 = *(int *)((int)this + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x88) {
    uVar2 = *(uint *)(iVar3 + 0x14);
    if (((uVar2 == 4) || (uVar2 == 5)) || (uVar2 == 6)) {
      uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920) GEN_EDX_FWD,*(undefined4 *)(iVar3 + 0xc));
    }
    else if (bVar4) {
      uVar2 = F_006da870(iVar3);
    }
  }
  return uVar2;
}

/* ref: FUN_006df330 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006df330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x30);
  for (iVar2 = *(int *)((int)this + 0x2c); iVar2 != iVar1; iVar2 = iVar2 + 0x88) {
    F_006da870(iVar2);
  }
  return;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf116 */
GEN_FRAME uint GEN_THISCALL F_006df360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6df360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  float10 fVar6;
  
  F_00a02210(((byte *)(gen_frame + 0x8)) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (2 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar3);
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x60);
  bVar3 = F_00a01f40(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
  if (bVar3 != 0) {
    fVar6 = F_00a01dd0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    F_006b96b0(uVar2,((float)GEN_TOF((((float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                              (float10)*(double *)&REFG(undefined, 0x1080220)))),(*(uint *)&gen_args[1]));
    F_00a02240(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 0;
  }
  bVar3 = F_00a01f20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
  if (bVar3 == 0) {
    uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,2);
    piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
    F_006df030(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4) GEN_EDX_ARG,uVar2,*(undefined4 *)(*piVar5 + 0x60),(*(uint *)&gen_args[1]));
  }
  F_00a02240(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006df450 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006df450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  for (piVar4 = *(int * PTR32 *)this; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  iVar3 = *(int *)this;
  if (iVar3 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar3,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar3;
  }
  return;
}

/* ref: FUN_006df4a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006df4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  for (piVar4 = *(int * PTR32 *)((int)this + 0x10); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != *(int *)((int)this + 0x14)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0x14),0);
    *(int *)((int)this + 0x14) = iVar3;
  }
  return;
}

/* ref: FUN_006df500 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006df500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006df450(this GEN_EDX_FWD);
  F_006df4a0(this GEN_EDX_ARG);
  return;
}

/* ref: Client::Game::Event::InitializeSceneTask::vf1 */
GEN_FRAME uint GEN_THISCALL F_006df510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6df510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  float10 fVar4;
  int local_c;
  
  if (*(char *)((int)param_1 + 0x10) == '\0') {
    F_006daf30(param_1 GEN_EDX_FWD,param_2,param_3);
  }
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2 GEN_EDX_ARG);
    if ((uVar3 & 8) != 0) {
      return 0;
    }
    *(undefined1 *)((int)param_1 + 0x11) = 0;
  }
  this = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  if (((param_3 != 0) && (*(char *)(param_3 + 0x44) == '\x02')) &&
     (uVar3 = F_00aa0fa0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG), (char)uVar3 != '\0')) {
    return 0;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x400) != 0) {
    local_c = (int)(longlong)TRUNC((float10)*(float *)((int)param_1 + 8));
    if ((local_c == 1) && (*(char *)((int)this + 0x188) != '\x02')) {
      F_00aa2c50(this GEN_EDX_ARG,0,0,0);
    }
    fVar1 = *(float *)((int)param_1 + 8);
    if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
       (fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
       fVar4 = (float10)fVar1, *(float *)((int)param_1 + 8) = fVar1,
       (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)0)) && !(fVar4 <= (float10)0))) {
      return 0;
    }
  }
  uVar3 = F_006bb830(param_2,param_3);
  if (((uVar3 != 0) && (*(float *)&REFG(undefined, 0x1088114) <= *(float *)((int)param_1 + 0xc))) &&
     (fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))),
     *(float *)((int)param_1 + 0xc) = fVar1, (float10)0 <= (float10)fVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006df660 */
GEN_FRAME uint GEN_THISCALL F_006df660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6df660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  F_006bcd10(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0xe8);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xf0) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  iVar1 = *(int *)((int)this + 0xd0);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xd8) - iVar1 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_0042c880((undefined *)((int)this + 0x7c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[3])REFP(0x10b8184))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  F_00744a50((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x10),0x14,800);
  return (uint)uVar2;
}

/* ref: FUN_006df740 */
GEN_FRAME uint GEN_THISCALL F_006df740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1488344);
  F_00aa4270(param_1 GEN_EDX_FWD,param_2,0,0);
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar2 = F_00746770((undefined4 *)(iVar1 + 0x6f0) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x6f0),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_006df7a0 */
GEN_FRAME uint GEN_THISCALL F_006df7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6df7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x1488344);
  F_00aa0000(param_1 GEN_EDX_FWD,param_2,param_3,0,0,0);
  uVar1 = *(undefined4 *)(iVar2 + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(int *)(gen_frame + 0x10)) = (int)this + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00746770((undefined *)(iVar2 + 0x6f0) GEN_EDX_ARG,uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return uVar3;
}

/* ref: FUN_006df810 */
GEN_FRAME uint GEN_THISCALL F_006df810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6df810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de820(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_006df830 */
GEN_FRAME uint GEN_THISCALL F_006df830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6df830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006de8d0(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_006df850 */
GEN_FRAME uint GEN_THISCALL F_006df850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6df850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (byte)param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,param_1);
    return uVar2;
  case 1: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,param_1,param_3);
    return uVar2;
  case 2: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,param_1);
    return uVar2;
  case 3: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,param_1);
    return uVar2;
  case 5: ;
    if (*(int *)((int)this + 8) == 0xa0001) {
      *(byte *)((int)this + 0x44) = (byte)param_2;
      *(undefined4 *)((int)this + 0x48) = param_3;
      *(undefined4 *)((int)this + 0x50) = param_1;
      uVar2 = F_006dbcd0(this GEN_EDX_ARG);
    }
  default: ;
    *(byte *)((int)this + 0x44) = (byte)param_2;
    *(undefined4 *)((int)this + 0x48) = param_3;
    *(undefined4 *)((int)this + 0x50) = param_1;
    if (*(int *)(REFG(int, 0x1488344) + 0x224) != 0) {
      uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
      if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
      }
      if (*(uint *)(iVar3 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar3 + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4)));
      uVar1 = *(undefined1 *)(iVar3 + 0x20);
      *(undefined1 *)((int)this + 0x4c) = uVar1;
      return CONCAT31((int3)((uint)iVar3 >> 8),uVar1);
    }
    *(undefined1 *)((int)this + 0x4c) = 0;
    return uVar2 & 0xffffff00;
  case 6: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,param_1,param_3);
    return uVar2;
  case 7: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,param_3);
    return uVar2;
  case 9: ;
    break;
  case 10: ;
    uVar2 = F_005f3270(0x31,param_3,0);
    if ((uVar2 == 0) && (uVar2 = F_005f3270(0x29,param_3,0), uVar2 == 0)) {
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_ARG,uVar2);
    return uVar2;
  case 0xe: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_3);
    return uVar2;
  case 0x11: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,param_1,param_3);
    return uVar2;
  case 0x12: ;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,param_1,param_3);
    return uVar2;
  }
  uVar2 = F_005f3270(0x31,param_3,0);
  if ((uVar2 == 0) && (uVar2 = F_005f3270(0x29,param_3,0), uVar2 == 0)) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: Client::Game::Event::EventHandler::vf115 */
GEN_FRAME ushort GEN_THISCALL F_006dfa70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfa70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
  iVar1 = REFG(int, 0x1488344);
  if ((*(uint *)&gen_args[1]) != 0) {
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x268)) {
      return *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) << 8 | *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) >> 8;
    }
  }
  return 0x100;
}

/* ref: FUN_006dfaf0 */
GEN_FRAME uint GEN_THISCALL F_006dfaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,800);
  *puVar1 = *(undefined4 *)((int)this + 0x10);
  puVar1[1] = *(undefined4 *)((int)this + 0x10);
  puVar1[2] = *(undefined4 *)((int)this + 0x10);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00746c00((undefined *)((int)this + 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_006dfb50 */
GEN_FRAME uint GEN_THISCALL F_006dfb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfb50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_0073ce10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  uVar2 = F_00744a50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  if (iVar1 == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1);
  }
  return uVar2;
}

/* ref: FUN_006dfba0 */
GEN_FRAME uint GEN_THISCALL F_006dfba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfba0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00748d80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
    uVar1 = F_0042a990((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 100 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006dfbe0 */
GEN_NOFRAME uint GEN_THISCALL F_006dfbe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dfbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b988c));
  if (*(int *)((int)this + 0x13c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x138);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x13c));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x13c);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
  }
  uVar3 = F_006df660(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf112 */
GEN_FRAME uint GEN_THISCALL F_006dfc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1c0))))(*(int * PTR32 *)pAVar4 GEN_EDX_FWD,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfc9d: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfc9d;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf128 */
GEN_FRAME uint GEN_THISCALL F_006dfcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6dfcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x200))))
                        (*(int * PTR32 *)pAVar4 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfd49: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfd49;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: Client::Game::Event::ArrayEventHandler::vf127 */
GEN_FRAME uint GEN_THISCALL F_006dfd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pAVar4;
  
  uVar2 = (*(ushort *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x14)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x14)) = uVar2 & 0xff00;
  pAVar4 = this + 0xf8;
  (*(int *)(gen_frame + 0x10)) = 0x10;
  do {
    if (*(int *)pAVar4 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 0x1fc))))(*(int * PTR32 *)pAVar4 GEN_EDX_FWD,param_1);
      iVar1 = REFG(int, 0x1488344);
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      if (uVar3 == 0) {
LAB_006dfded: ;
        (*(ushort *)(gen_frame + 0x18)) = 1;
      }
      else {
        F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        if ((*(int *)(gen_frame + 0x4)) == *(int *)(iVar1 + 0x268)) goto LAB_006dfded;
        (*(ushort *)(gen_frame + 0x18)) = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10);
      }
      if ((uVar3 != 0) && ((byte)(*(ushort *)(gen_frame + 0x14)) < (byte)(*(ushort *)(gen_frame + 0x18)))) {
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        (*(ushort *)(gen_frame + 0x14)) = (*(ushort *)(gen_frame + 0x18));
      }
    }
    pAVar4 = pAVar4 + 4;
    iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar1;
    if (iVar1 == 0) {
      return (*(uint *)(gen_frame + 0xc));
    }
  } while( true );
}

/* ref: FUN_006dfe20 */
GEN_FRAME uint GEN_THISCALL F_006dfe20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6dfe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  undefined4 * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint * this_01;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * PTR32 * ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  (*(uint *)(gen_frame + 0x8)) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(int *)((int)this + 0x5a4) * 4)));
  F_007494c0((undefined *)((int)this + 0x584) GEN_EDX_FWD,&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  iVar4 = 0x54;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  REFG(void * PTR32, 0x132411c) = this;
  F_006c4440((*(int *)(gen_frame + 0xc)) + 0x10,((undefined4 *)(gen_frame + 0x10)));
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar10 = 4;
  uVar9 = 0;
  uVar8 = 0;
  ppuVar7 = &REFG(undefined * PTR32, 0x1324118);
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  uVar6 = 0x55;
  uVar5 = 0x15;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG)));
  REFG(undefined4, 0x1324120) = F_008668b0(this_00 GEN_EDX_ARG,uVar5,uVar6,puVar1,ppuVar7,uVar8,uVar9,uVar10);
  this_01 = &(*(uint *)(gen_frame + 0x2b8));
  iVar4 = 0x54;
  do {
    this_01 = this_01 - 2;
    uVar3 = F_005a2670(this_01 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_006dff00 */
GEN_FRAME uint GEN_THISCALL F_006dff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6dff00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10;
  }
  return 0;
}

/* ref: FUN_006dff40 */
GEN_NOFRAME uint GEN_THISCALL F_006dff40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x570);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar2 = F_006dfe20(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006dff80 */
GEN_FRAME uint GEN_THISCALL F_006dff80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6dff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x1c)) = (uint)param_3 & 0xff;
  puVar9 = (undefined4 *)((uint)((int)(uintptr_t)param_3) >> 8 & 0xff);
  uVar5 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar9;
  if (param_2 != 0) {
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x570) + 0xc)));
    do {
      ((int *)(gen_frame + 0xc))[(int)(uVar5)] = *((int *)GEN_TOP((*((int *)GEN_TOP(((param_1 - (int)((int *)(gen_frame + 0xc))) + (int)(((int *)(gen_frame + 0xc)) + uVar5)))) + 4)));
      ((undefined4 *)(gen_frame + 0x28))[(int)(uVar5)] = *puVar8;
      uVar5 = uVar5 + 1;
      puVar8 = puVar8 + 4;
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
    } while (uVar5 < param_2);
  }
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
  uVar2 = **(ushort * PTR32 *)((int)this + 0x270);
  puVar8 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x54c))[1]));
  cVar1 = *(char *)((int)puVar8 + 0x2cd);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x54c);
  while (cVar1 == '\0') {
    if (*(ushort *)(puVar8 + 3) < uVar2) {
      puVar6 = (undefined4 *)puVar8[2];
      puVar8 = puVar3;
    }
    else {
      puVar6 = (undefined4 *)*puVar8;
    }
    puVar3 = puVar8;
    puVar8 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x2cd);
  }
  puVar8 = *(undefined4 * PTR32 *)((int)this + 0x54c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar3;
  if ((puVar3 == puVar8) || (uVar2 < *(ushort *)(puVar3 + 3))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar8;
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
  }
  else {
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  if (*ppuVar7 == *(undefined4 * PTR32 *)((int)this + 0x54c)) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = *ppuVar7 + 4;
  }
  F_006d42d0((undefined *)((int)this + 0x278) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x270),puVar8[0x6e],((int *)(gen_frame + 0xc)),
               ((undefined4 *)(gen_frame + 0x28)),param_2);
  *(undefined4 *)((int)this + 0x56c) = 0;
  if (*(undefined4 * PTR32 *)((int)this + 0x570) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x570))))(1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  uVar5 = F_0070e7f0(this GEN_EDX_ARG,puVar9,(*(uint *)(gen_frame + 0x1c)),(uint)**(ushort * PTR32 *)((int)this + 0x270),
                       (uint)((int)(uintptr_t)puVar4) >> 0x10 & 0xff);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_006e0028 */
GEN_NOFRAME uint F_006e0028(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6e0028u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort in_cx = (ushort)gen_a0;
  int in_edx = (int)gen_a1;
  uint in_ebx = (uint)gen_a2;
  undefined * in_esi = (undefined *)(uintptr_t)gen_a3;
  undefined4 in_edi = (undefined4)gen_a4;
  uint in_ebp = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)((int)in_esi + 0x54c);
  *(int *)(in_ebp - 0x18) = in_edx;
  if ((in_edx == iVar3) || (in_cx < *(ushort *)(in_edx + 0xc))) {
    *(int *)(in_ebp - 0x1c) = iVar3;
    piVar2 = (int *)(in_ebp - 0x1c);
  }
  else {
    piVar2 = (int *)(in_ebp - 0x18);
  }
  if (*piVar2 == *(int *)((int)in_esi + 0x54c)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2 + 0x10;
  }
  F_006d42d0((undefined *)((int)in_esi + 0x278) GEN_EDX_ARG,*(undefined4 *)((int)in_esi + 0x270),
               *(undefined4 *)(iVar3 + 0x1b8),in_ebp - 0x30,in_ebp - 0x14,
               *(undefined4 *)(in_ebp + 0xc));
  puVar1 = *(undefined4 * PTR32 *)((int)in_esi + 0x570);
  *(undefined4 *)((int)in_esi + 0x56c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)in_esi + 0x570) = 0;
  }
  uVar4 = F_0070e7f0(in_esi GEN_EDX_ARG,in_edi,*(undefined4 *)(in_ebp - 0x20),
                       (uint)**(ushort * PTR32 *)((int)in_esi + 0x270),in_ebx >> 0x10 & 0xff);
  F_00c47745(*(uint *)(in_ebp - 4) ^ in_ebp GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006e00e0 */
GEN_FRAME uint GEN_THISCALL F_006e00e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * this_00;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,9);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar1;
  uVar2 = 0;
  F_007494c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x584))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x588)))) {
    uVar2 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x18);
  }
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00 GEN_EDX_ARG,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = (*(undefined * PTR32 *)&gen_args[0]);
    this_00[7] = ((code *)REFP(0x6dff40));
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = this_00;
  F_00cb4540(this_00 GEN_EDX_ARG,0,uVar2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar1;
}

/* ref: FUN_006e01a0 */
GEN_FRAME uint GEN_THISCALL F_006e01a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e01a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c)));
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570)));
    if (puVar4 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = 0;
    }
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,0xb2);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) = uVar3;
  puVar4 = (undefined4 *)F_00406b90(0x20,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar4 GEN_EDX_ARG,1,(((*(uint *)&gen_args[4]) & 0xff) << 8 | (*(uint *)&gen_args[1]) & 0xff) << 8 | (*(uint *)&gen_args[2]) & 0xff);
    puVar4[5] = 1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    puVar4[6] = (*(undefined * PTR32 *)&gen_args[0]);
    puVar4[7] = ((code *)REFP(0x6bdc70));
  }
  uVar2 = (undefined2)(*(uint *)&gen_args[3]);
  (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))) = puVar4;
  F_00749410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x548))) GEN_EDX_ARG,&(*(uint *)&gen_args[4]),&(*(uint *)&gen_args[3]));
  if ((*(uint *)&gen_args[4]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54c)))) {
    iVar5 = 0;
  }
  else {
    iVar5 = (*(uint *)&gen_args[4]) + 0x10;
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x52c))) = uVar2;
  F_00cb4540(puVar4 GEN_EDX_ARG,0,*(undefined4 *)(iVar5 + 0x1c4));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) + 0x48))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x56c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x570))));
  return uVar3;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf115 */
GEN_FRAME uint GEN_THISCALL F_006e02c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e02c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar1 = *(short *)(REFG(int, 0x1379694) + 0xe6);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    uVar3 = F_006d6fd0(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD);
    if ((uVar3 != 0) && (*(byte *)(uVar3 + 0x1dc) < 0xfe)) {
      return 0xffff;
    }
  }
  (*(uint *)&gen_args[1]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  pvVar2 = REFG(void * PTR32, 0x1488344);
  if ((*(uint *)&gen_args[1]) != 0) {
    F_007491b0(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x264))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)((int)pvVar2 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) << 8 | *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e03a0 */
GEN_FRAME uint GEN_THISCALL F_006e03a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e03a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9adc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10b9ad0));
  F_006be8d0(this GEN_EDX_FWD);
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x120);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4 GEN_EDX_ARG);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x124);
  if (pvVar4 != (undefined *)0x0) {
    F_0042c880(pvVar4 GEN_EDX_ARG);
    F_00406ad0(pvVar4);
    *(undefined4 *)((int)this + 0x124) = 0;
  }
  iVar1 = *(int *)((int)this + 0x10c);
  if (iVar1 != 0) {
    iVar3 = 7;
    pvVar4 = (undefined *)(iVar1 + 0x3b0);
    do {
      pvVar4 = (undefined *)((int)pvVar4 - 0x74);
      F_0042c880(pvVar4 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x10c) = 0;
  }
  F_00cb4870((undefined *)((int)this + 0xf8) GEN_EDX_ARG);
  uVar2 = F_006df660(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006e0460 */
GEN_NOFRAME uint GEN_THISCALL F_006e0460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e0460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9d24));
  if (*(int *)((int)this + 0xfc) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x100);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0xfc));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xfc);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xfc) = 0;
    }
  }
  uVar3 = F_006df660(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::Event::DefaultTalkEventHandler::vf132 */
GEN_FRAME uint GEN_THISCALL F_006e04b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e04b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((char)param_3 != '\a') {
    return 0xf;
  }
  uVar1 = F_006de7c0(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_006e04e0 */
GEN_FRAME uint GEN_THISCALL F_006e04e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9f6c));
  piVar5 = (int *)((int)this + 0xf8);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x4;
  do {
    if (*piVar5 != 0) {
      piVar2 = (int *)piVar5[4];
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2 GEN_EDX_FWD,*piVar5);
      }
      puVar3 = (undefined4 *)*piVar5;
      if (puVar3 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 1;
    pvVar1 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - 1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  } while (pvVar1 != (undefined *)0x0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10b9644));
  F_006bcd10(this GEN_EDX_ARG);
  iVar4 = *(int *)((int)this + 0xe8);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xf0) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  iVar4 = *(int *)((int)this + 0xd0);
  if (iVar4 != 0) {
    F_00429760(iVar4,(*(int *)((int)this + 0xd8) - iVar4 >> 2) * 4,800);
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_0042c880((undefined *)((int)this + 0x7c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[3])REFP(0x10b8184))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[3])REFP(0x10b8174));
  F_00744a50((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar6 = F_00429760(*(undefined4 *)((int)this + 0x10),0x14,800);
  return (uint)uVar6;
}

/* ref: Client::Game::Event::QuestEventHandler::vf5 */
GEN_FRAME byte GEN_THISCALL F_006e0600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa8))(param_1 GEN_EDX_ARG);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this GEN_EDX_ARG,iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar6,iVar1,uVar5,1,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf7 */
GEN_FRAME byte GEN_THISCALL F_006e0690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e0690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = REFG(int, 0x1379694);
  (*(int *)(gen_frame + 0x8)) = 0;
  if ((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    iVar1 = param_1[0x1e];
    iVar6 = param_1[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa8))(param_1 GEN_EDX_ARG);
    if (((char)uVar4 == '\x01') && (iVar6 == 0)) {
      iVar6 = 0x4c7250;
    }
    bVar3 = F_006dc160(this GEN_EDX_ARG,iVar2,(*(undefined4 *)(gen_frame + 0x4)),iVar6,iVar1,uVar5,2,&(*(int *)(gen_frame + 0x8)));
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
      bVar3 = F_006dc600(iVar2,(*(int *)(gen_frame + 0x8)));
      if (bVar3 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf13 */
GEN_FRAME byte GEN_THISCALL F_006e0740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (((REFG(int, 0x1379694) != 0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) && (REFG(char, 0x14a7381) == '\0')) {
    bVar1 = F_006dc160(this GEN_EDX_FWD,REFG(int, 0x1379694),0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0);
    return bVar1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf15 */
GEN_FRAME byte GEN_THISCALL F_006e0790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (((REFG(int, 0x1379694) == 0) || (**(char * PTR32 *)(this + 0x16c) == '\0')) || (REFG(char, 0x14a7381) != '\0')) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  bVar4 = F_006dc160(this GEN_EDX_FWD,REFG(int, 0x1379694),0,5000000,uVar2,0,0xb,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (bVar4 != 0) {
    QVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8))[1];
    iVar6 = 5000000;
    if (((QVar1 != (undefined1)0xa) && (QVar1 != (undefined1)0xb)) &&
       (QVar1 == (undefined1)0xf)) {
      iVar6 = 0x4c9960;
    }
    uVar5 = F_006d8e70(this GEN_EDX_ARG,iVar3,0,iVar6,*(undefined4 *)(param_1 + 0x14),0,(*(undefined * PTR32 *)(gen_frame + 0x8)));
    if ((((uVar5 != 0) && (iVar6 != *(int *)(this + 0x31c))) &&
        (*(*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined1)0xff)) ||
       ((uVar5 == 0 ||
        (bVar4 = F_006dc160(this GEN_EDX_ARG,iVar3,0,5000000,*(undefined4 *)(param_1 + 0x14),0,10,0),
        bVar4 == 0)))) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf17 */
GEN_FRAME byte GEN_THISCALL F_006e0880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_8;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) && (**(char * PTR32 *)(this + 0x16c) != '\0')) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD);
    iVar1 = piVar2[0x1e];
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),(char)uVar4);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2 GEN_EDX_ARG);
    bVar3 = F_006dc160(this GEN_EDX_ARG,piVar2,local_8,0x4c9960,iVar1,uVar4,0xf,0);
    if (bVar3 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf19 */
GEN_FRAME byte GEN_THISCALL F_006e08f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e08f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar2 = REFG(int, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) != '\0') {
    switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[3]) & 0xff)) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 10: ;
      if (REFG(int, 0x1379694) != 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
        iVar1 = piVar3[0x1e];
        iVar8 = piVar3[0x20];
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(char)uVar5);
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3 GEN_EDX_ARG);
        if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
          iVar8 = 0x4c7250;
        }
        bVar4 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar2,(*(undefined4 *)(gen_frame + 0x8)),iVar8,iVar1,uVar6,0x12,0);
        if (bVar4 != 0) {
          uVar5 = F_006bcb60(iVar2);
          iVar2 = piVar3[0x5d];
          if ((uVar5 != 0) && (iVar2 != 0)) {
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
            uVar6 = F_0042a990(iVar2 + 8 GEN_EDX_ARG);
            uVar5 = F_0042a990(uVar5 + 8 GEN_EDX_ARG);
            uVar7 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
            uVar5 = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"OnPreActionResult",uVar7,uVar5,uVar6,
                                 (*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]) & 0xff,1);
            if (uVar5 == 0) {
              F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
            }
            return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf112 */
GEN_FRAME uint GEN_THISCALL F_006e0a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if ((((char)uVar3 != '\x02') && (bVar2 = F_006d9290(this GEN_EDX_ARG,iVar1,0), bVar2 != 0)) &&
     (bVar2 = F_006d9430(this GEN_EDX_ARG,param_1), bVar2 != 0)) {
    return 0;
  }
  bVar2 = F_006c0470(iVar1,param_1);
  if (bVar2 != 0) {
    return 0;
  }
  if (((char)uVar3 == '\x02') && (uVar3 = F_00a5f290(param_1 GEN_EDX_ARG), *(char *)(uVar3 + 0x188) == '\x02')
     ) {
    return 0;
  }
  iVar6 = param_1[0x1e];
  iVar5 = param_1[0x20];
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa8))(param_1 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  uVar3 = F_006dc9e0(this GEN_EDX_ARG,iVar1,uVar4,iVar5,iVar6,uVar3);
  return uVar3;
}

/* ref: Client::Game::Event::QuestEventHandler::vf128 */
GEN_FRAME uint GEN_THISCALL F_006e0af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 QVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = REFG(int, 0x1379694);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  sVar2 = *(short *)(this + 0x1d4);
  uVar5 = F_00a4ffd0();
  iVar7 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar2) {
      if (-1 < iVar7) {
        if ((*(char *)(iVar6 + 6) != -1) && (bVar4 = F_00a67a10(1,iVar7), bVar4 == 0)) {
          return 0;
        }
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        uVar5 = F_006dcaf0(this GEN_EDX_ARG,iVar3,param_1,param_2,param_3,param_4,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        if (((uVar5 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0)) &&
           (QVar1 = *(*(undefined * PTR32 *)(gen_frame + 0x8)), (byte)QVar1 < 0x18)) {
          if ((((uint)(byte)QVar1 < (uint)((*(int *)(this + 0x35c) - *(int *)(this + 0x358)) / 0x28)
               ) && ((char)param_1 != '\x02')) &&
             (*((char *)GEN_TOP((*(int *)(this + 0x358) + 0x24 + (uint)(byte)QVar1 * 0x28))) != '\0')) {
            return 0;
          }
        }
        return uVar5;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar7 < 0x1e);
  uVar5 = F_006dcaf0(this GEN_EDX_ARG,iVar3,param_1,param_2,param_3,param_4,0);
  return uVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf129 */
GEN_FRAME uint GEN_THISCALL F_006e0c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e0c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar1 = F_006dcaf0(this GEN_EDX_FWD,REFG(int, 0x1379694),param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf115 */
GEN_FRAME uint GEN_THISCALL F_006e0c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0c30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  iVar2 = *piVar3;
  iVar8 = piVar3[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar5)));
  (*(int *)(gen_frame + 0x8)) = piVar3[0x1e];
  uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0xa8))(piVar3);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar8 == 0)) {
    iVar8 = 0x4c7250;
  }
  bVar4 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),(*(int * PTR32 *)&gen_args[1]),iVar8,(*(int *)(gen_frame + 0x8)),uVar5,0);
  if (bVar4 == 0) {
    return 0;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar3);
  sVar1 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar6 = F_00a4ffd0();
  iVar2 = REFG(int, 0x1488344);
  iVar7 = 0;
  iVar8 = uVar6 + 0x13b4;
  do {
    if (*(short *)(iVar8 + 4) == sVar1) {
      if (((-1 < iVar7) && (*(char *)(iVar8 + 6) != '\0')) && (uVar5 == 0)) {
        return 0x2ff;
      }
      break;
    }
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar7 < 0x1e);
  if (uVar5 != 0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar5;
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar2 + 0x268)) {
      return (uint)(ushort)(*(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) << 8 | *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x10) >> 8);
    }
  }
  return 0x100;
}

/* ref: FUN_006e0d70 */
GEN_FRAME byte GEN_THISCALL F_006e0d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e0d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  byte * param_4 = (byte *)(uintptr_t)gen_a4;
  byte * param_5 = (byte *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(byte * PTR32 *)(gen_frame + 0x10)) = param_4;
  if (**(char * PTR32 *)((int)this + 0x16c) != '\0') {
    (*(int *)(gen_frame + 0x8)) = (param_2 & 0xff) + 0x18;
    F_00748d80((undefined *)((int)this + 0x1c0) GEN_EDX_FWD,&(*(int *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0xc)) != *(int *)((int)this + 0x1c4)) {
      F_0042aca0(param_3 GEN_EDX_ARG);
      F_0042ccf0(param_3 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)) + 100);
      F_006d0d30(this GEN_EDX_ARG,param_1,param_2,(*(byte * PTR32 *)(gen_frame + 0x10)),param_5);
      bVar1 = *param_5;
      if (bVar1 != 0) {
        bVar3 = *(*(byte * PTR32 *)(gen_frame + 0x10));
        if (bVar1 < *(*(byte * PTR32 *)(gen_frame + 0x10))) {
          bVar3 = bVar1;
        }
        uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x14))," %u/%u",(uint)bVar3,(uint)bVar1);
        F_0042e360(param_3 GEN_EDX_ARG,uVar2);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      }
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf116 */
GEN_FRAME byte GEN_THISCALL F_006e0e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0e60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = REFG(int, 0x1379694);
  if ((~*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x1c))) & 1) != 0) {
    return 1;
  }
  if ((REFG(int, 0x1379694) != 0) && (bVar3 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,REFG(int, 0x1379694),(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1])), bVar3 != 0))
  {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if ((uVar4 == 7) &&
       ((uVar4 = F_006bfcb0(piVar2), (char)uVar4 == '\0' &&
        (bVar3 = F_006dcc00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1,piVar2,0), bVar3 != 0)))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf118 */
GEN_FRAME uint GEN_THISCALL F_006e0ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e0ee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  undefined2 extraout_var_00 = 0;
  undefined2 uVar9;
  uint uVar7;
  uint uVar8;
  uint3 extraout_var = 0;
  int iVar10;
  int iVar11;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  piVar3 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == (int *)0x0) {
    return 0;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4)));
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar6 = (*pcVar1)((*(int * PTR32 *)&gen_args[1]));
  iVar11 = *piVar4;
  iVar10 = piVar4[0x20];
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),(char)uVar6)));
  iVar2 = piVar4[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(iVar11 + 0xa8))(piVar4);
  if (((char)(*(int * PTR32 *)&gen_args[1]) == '\x01') && (iVar10 == 0)) {
    iVar10 = 0x4c7250;
  }
  bVar5 = F_006dc4a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar3,(*(int * PTR32 *)&gen_args[1]),iVar10,iVar2,uVar6,&(*(int *)(gen_frame + 0x8)));
  if (bVar5 != 0) {
    uVar9 = extraout_var_00;
    if ((*(byte *)((*(int *)(gen_frame + 0x8)) + 0x10) & 0x20) != 0) {
      (*(int * PTR32 *)&gen_args[1]) = (int *)piVar3[0x5d];
      uVar6 = 0;
      if (((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) ||
         (uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG), iVar11 = (int)(*(int * PTR32 *)&gen_args[1]), uVar6 != 1)) {
        iVar11 = 0;
      }
      uVar9 = (undefined2)(uVar6 >> 0x10);
      iVar10 = piVar4[0x5d];
      if ((iVar11 != 0) && (iVar10 != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
        uVar6 = F_0042a990(iVar10 + 8 GEN_EDX_ARG);
        uVar7 = F_0042a990(iVar11 + 8 GEN_EDX_ARG);
        uVar8 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
        uVar6 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"GetBehavior",uVar8,uVar7,uVar6,
                             (uint)*(ushort *)((*(int *)(gen_frame + 0x8)) + 0xe),1);
        if (uVar6 == 0) {
          F_00727460(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
          uVar6 = (uint)extraout_var << 8;
        }
        return CONCAT22((short)(uVar6 >> 0x10),(*((undefined2 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 0)))));
      }
    }
    return CONCAT22(uVar9,*(undefined2 *)((*(int *)(gen_frame + 0x8)) + 0xe));
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf123 */
GEN_FRAME byte GEN_THISCALL F_006e1020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1020u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (**((char * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) == '\0') {
    return 0;
  }
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
    iVar8 = piVar2[0x1e];
    iVar7 = piVar2[0x20];
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(char)uVar4);
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2 GEN_EDX_ARG);
    if (((char)uVar4 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar3 = F_006dc160((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar1,(*(undefined4 *)(gen_frame + 0x4)),iVar7,iVar8,uVar5,8,0);
    if (bVar3 != 0) {
      iVar8 = piVar1[0x5d];
      if ((iVar8 == 0) || (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG), uVar4 != 1)) {
        iVar8 = 0;
      }
      iVar7 = piVar2[0x5d];
      if ((iVar8 != 0) && (iVar7 != 0)) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
        uVar4 = F_0042a990(iVar7 + 8 GEN_EDX_ARG);
        uVar5 = F_0042a990(iVar8 + 8 GEN_EDX_ARG);
        uVar6 = F_0042a990((*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
        uVar4 = F_00a02e70(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"IsEventItemUsable",uVar6,uVar5,uVar4,(*(undefined4 *)&gen_args[2]),1
                            );
        if (uVar4 == 0) {
          F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3);
        }
        return (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3))));
      }
      return 0;
    }
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf126 */
GEN_FRAME uint GEN_THISCALL F_006e1140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  char * pcVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = REFG(int, 0x1379694);
  pcVar5 = (char *)0x0;
  if ((REFG(int, 0x1379694) != 0) && (pcVar5 = *(char * PTR32 *)(this + 0x16c), *pcVar5 != '\0')) {
    F_006d82c0((undefined *)this GEN_EDX_FWD);
    (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(this + 0x1d4);
    pcVar5 = (char *)F_00a4ffd0();
    uVar10 = 0;
    pcVar11 = pcVar5 + 0x13b4;
    while (*(short *)(pcVar11 + 4) != (short)(*(uint *)(gen_frame + 0x2c))) {
      uVar10 = uVar10 + 1;
      pcVar11 = pcVar11 + 0x10;
      if (0x1d < (int)uVar10) {
        F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
        return (uint)pcVar5;
      }
    }
    (*(uint *)(gen_frame + 0x1c)) = uVar10;
    if (-1 < (int)uVar10) {
      F_00a83f80(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,uVar10);
      F_00a6a810(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,uVar10,(uint)*(ushort *)(this + 0x1d4),this + 0x1d8);
      (*(char *)(gen_frame + 0x33)) = pcVar11[6];
      F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      piVar6 = (int *)F_00744460(this + 0x328 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x33)));
      iVar9 = *piVar6;
      ((byte *)(gen_frame + 0x0))[0xc] = (char)iVar9;
      ((byte *)(gen_frame + 0x0))[0xd] = (char)((uint)iVar9 >> 8);
      ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint)iVar9 >> 0x10);
      ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint)iVar9 >> 0x18);
      if (iVar9 != *(int *)(this + 0x32c)) {
        ((char *)(gen_frame + 0x88))[0] = '\0';
        F_00c48350(((char *)(gen_frame + 0x88)) + 1,0,0xbf);
        piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar9 + 0x14)));
        if (piVar6 != *(int * PTR32 *)(iVar9 + 0x14)) {
          do {
            bVar4 = *(byte *)(piVar6 + 4);
            uVar10 = (uint)bVar4;
            ((byte *)(gen_frame + 0x0))[8] = bVar4;
            (*(uint *)(gen_frame + 0x2c)) = uVar10;
            if (uVar10 < (uint)((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x35c) - *(int *)(this + 0x358)) / 0x28)) {
              ((byte *)(gen_frame + 0x0))[4] = *(byte *)((int)piVar6 + 0x11);
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = piVar6[3];
              (*(uint *)(gen_frame + 0x24)) = 0;
              (*(uint * PTR32 *)(gen_frame + 0x20)) = ((uint *)GEN_TOP((*(int *)(this + 0x358) + 4 + uVar10 * 0x28)));
              do {
                uVar10 = *(*(uint * PTR32 *)(gen_frame + 0x20));
                if (uVar10 == 0) break;
                uVar7 = F_00ab37e0(uVar10);
                if ((uVar7 != 0) && (((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] == '\0')) {
                  bVar4 = F_00a5f470(*(undefined4 *)(uVar7 + 0x24));
                  ((byte *)(gen_frame + 0x0))[0x18] = bVar4;
                  uVar8 = 0;
                  iVar9 = 0;
                  if (piVar6[5] == 1) {
                    iVar9 = piVar6[6];
                  }
                  else if (piVar6[5] == 3) {
                    uVar8 = piVar6[6];
                  }
                  if ((*(int *)(uVar7 + 0x24) == 9) || (*(int *)(uVar7 + 0x24) == 0x33)) {
                    bVar4 = F_006dc160((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)),
                                         uVar8,iVar9,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),0);
                    if (bVar4 != 0) {
                      uVar8 = 0xebf9;
LAB_006e13a9: ;
                      F_00a83e20(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x1c)),uVar10,uVar8,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar7,
                                   (uint)((*(char *)(gen_frame + 0x33)) == -1));
                    }
                  }
                  else {
                    if ((*(int *)(uVar7 + 0x14) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))) ||
                       ((uVar8 != 0 && (uVar8 != uVar10)))) goto LAB_006e1369;
                    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x204))
                                      ((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),*(undefined4 *)(uVar7 + 0x14),uVar10
                                       ,*(undefined4 *)(uVar7 + 0x14));
                    if (uVar8 != 0) goto LAB_006e13a9;
                  }
                  ((char *)(gen_frame + 0x88))[(int)((*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 8)] = '\x01';
                  break;
                }
LAB_006e1369: ;
                (*(uint * PTR32 *)(gen_frame + 0x20)) = (*(uint * PTR32 *)(gen_frame + 0x20)) + 1;
                uVar10 = (*(uint *)(gen_frame + 0x24)) + 1;
                (*(uint *)(gen_frame + 0x24)) = uVar10;
              } while (uVar10 < 8);
            }
            if (*(char *)((int)piVar6 + 0x25) == '\0') {
              piVar2 = (int *)piVar6[2];
              if (*(char *)((int)piVar2 + 0x25) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x25);
                piVar6 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar2 + 0x25);
                  piVar6 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar1 = *(char *)(piVar6[1] + 0x25);
                piVar3 = (int *)piVar6[1];
                piVar2 = piVar6;
                while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
                  cVar1 = *(char *)(piVar6[1] + 0x25);
                  piVar3 = (int *)piVar6[1];
                  piVar2 = piVar6;
                }
              }
            }
            this = (*(undefined * PTR32 *)(gen_frame + 0x28));
          } while (piVar6 != *((int * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) + 0x14))));
        }
        REFG(undefined4, 0x14b0ee0) = 1;
        uVar10 = F_00a679e0(&REFG(undefined, 0x14ac288) GEN_EDX_ARG);
        if (uVar10 == 1) {
          *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
        }
      }
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      pcVar5 = (char *)uVar12;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return (uint)pcVar5;
}

/* ref: Client::Game::Event::QuestEventHandler::vf135 */
GEN_FRAME byte GEN_THISCALL F_006e14b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e14b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = REFG(int, 0x1379694);
  if (((this[0x44] == (undefined1)0x1) &&
      (piVar1 = *(int * PTR32 *)(this + 0x50), piVar1 != (int *)0x0)) && (REFG(int, 0x1379694) != 0)) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    iVar7 = piVar1[0x20];
    iVar2 = piVar1[0x1e];
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(char)uVar5);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1 GEN_EDX_ARG);
    if (((char)uVar5 == '\x01') && (iVar7 == 0)) {
      iVar7 = 0x4c7250;
    }
    bVar4 = F_006dc160(this GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0xc)),iVar7,iVar2,uVar6,2,0);
    if (bVar4 == 0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      iVar7 = piVar1[0x1e];
      iVar8 = piVar1[0x20];
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31((int3)((uint)iVar2 >> 8),(char)uVar5);
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1 GEN_EDX_ARG);
      if (((char)uVar5 == '\x01') && (iVar8 == 0)) {
        iVar8 = 0x4c7250;
      }
      bVar4 = F_006dc160(this GEN_EDX_ARG,iVar3,(*(undefined4 *)(gen_frame + 0x10)),iVar8,iVar7,uVar6,8,0);
      if (bVar4 == 0) goto LAB_006e1591;
    }
    return 0;
  }
LAB_006e1591: ;
  return this[0x44] != (undefined1)0x7;
}

/* ref: FUN_006e15b0 */
GEN_FRAME uint GEN_THISCALL F_006e15b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if (uVar2 == 7) {
    bVar1 = F_00ae20f0(param_1 GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 == 3) && (this_00 = (undefined *)param_1[0x3c], this_00 != (undefined *)0x0)) {
      bVar1 = F_005d5fe0(this_00 GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) {
        (*(int *)(gen_frame + 0x8)) = REFG(int, 0x1379694);
        uVar2 = 0;
        if (REFG(int, 0x1379694) != 0) {
          (*(uint *)(gen_frame + 0x4)) = 0;
          if (param_1[0x47] == 0) {
            bVar1 = F_00a5f060(param_1 GEN_EDX_ARG);
            if ((bVar1 == 0) || (bVar1 = F_006dcc00(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x8)),param_1,0), bVar1 != 0)) {
              bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,1);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 2;
              }
            }
            else {
              bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,0);
              if (bVar1 != 0) {
                (*(uint *)(gen_frame + 0x4)) = 1;
              }
            }
            uVar2 = F_006bfcb0(param_1);
            if (((char)uVar2 != '\0') && (**(char * PTR32 *)((int)this + 0x16c) != '\0')) {
              uVar2 = F_006bcb60((*(int *)(gen_frame + 0x8)));
              if ((uVar2 != 0) && (param_1[0x5d] != 0)) {
                uVar3 = F_0042a990(param_1[0x5d] + 8 GEN_EDX_ARG);
                uVar2 = F_0042a990(uVar2 + 8 GEN_EDX_ARG);
                uVar4 = F_0042a990((int)this + 0x16c GEN_EDX_ARG);
                uVar2 = F_00a02c60(*(undefined * PTR32 *)((int)this + 0xf8) GEN_EDX_ARG,"GetGimmickState",uVar4,uVar2,
                                     uVar3,2);
                if (uVar2 == 0) {
                  puVar5 = (undefined1 *)((int)&(*(int *)(gen_frame + 0x8)) + 1);
                  iVar6 = 2;
                  do {
                    this_01 = *(undefined * PTR32 *)((int)this + 0xf8);
                    *puVar5 = 0;
                    F_00a01d80(this_01 GEN_EDX_ARG,puVar5);
                    puVar5 = puVar5 - 1;
                    iVar6 = iVar6 - 1;
                  } while (iVar6 != 0);
                  uVar2 = 3;
                  iVar6 = 0;
                  do {
                    uVar3 = uVar2 - 1;
                    if (*(char *)((int)&(*(int *)(gen_frame + 0x8)) + iVar6) == '\0') {
                      uVar3 = uVar2;
                    }
                    bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,uVar3);
                    if (bVar1 != 0) {
                      (*(uint *)(gen_frame + 0x4)) = (uint)(ushort)((ushort)(*(uint *)(gen_frame + 0x4)) | 1 << ((byte)uVar3 & 0x1f));
                    }
                    uVar2 = uVar2 + 2;
                    iVar6 = iVar6 + 1;
                  } while (uVar2 < 7);
                }
              }
            }
          }
          else {
            bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,1);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = 2;
            }
            bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,3);
            if (bVar1 != 0) {
              (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) | 8;
            }
            bVar1 = F_005dbc90(this_00 GEN_EDX_ARG,5);
            if (bVar1 != 0) {
              uVar2 = F_00ae2030(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)) | 0x20);
              return uVar2;
            }
          }
          uVar2 = F_00ae2030(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006e17b0 */
GEN_FRAME uint GEN_THISCALL F_006e17b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006d8b60(this GEN_EDX_FWD,param_1);
  if ((uVar1 != 0) &&
     ((((*(byte *)((int)this + 800) & 2) == 0 || ((uVar1 & 0x500) != 0)) || ((uVar1 & 0x70) != 0))))
  {
    return 0;
  }
  return 1;
}

/* ref: FUN_006e17f0 */
GEN_FRAME byte GEN_THISCALL F_006e17f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e17f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int iVar2;
  undefined * this_00;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_FWD);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3 GEN_EDX_ARG);
  if ((char)uVar5 != '\a') {
    return (byte)(*(undefined4 *)&gen_args[3]);
  }
  cVar1 = **((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
  (*(undefined4 *)&gen_args[3]) = CONCAT13(cVar1 != '\0',(undefined3)(*(undefined4 *)&gen_args[3]));
  bVar4 = F_006d9290((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),1);
  if ((bVar4 != 0) && (bVar4 = F_006d9430((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar3), bVar4 != 0)) {
    return 0;
  }
  (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
  bVar4 = F_006dc640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),piVar3,&(*(int * PTR32 *)&gen_args[2]));
  if (bVar4 != 0) {
    if ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x10))) & 8) == 0) {
      return *(byte *)((int)piVar3 + 0x8e) & 1;
    }
    iVar2 = piVar3[0x5d];
    uVar5 = F_006bcb60((*(undefined4 *)&gen_args[1]));
    if ((((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) != '\0') && (uVar5 != 0)) && (iVar2 != 0)) {
      uVar6 = F_0042a990(iVar2 + 8 GEN_EDX_ARG);
      uVar5 = F_0042a990(uVar5 + 8 GEN_EDX_ARG);
      uVar7 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c GEN_EDX_ARG);
      uVar5 = F_00a02c60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))) GEN_EDX_ARG,"IsTargetingPossible",uVar7,uVar5,uVar6,1);
      if (uVar5 == 0) {
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
        (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3)) = 0;
        bVar4 = F_00a01d80(this_00 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[3]) + 3);
        if (bVar4 != 0) {
          return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[3]) + 3));
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006e1910 */
GEN_NOFRAME uint GEN_THISCALL F_006e1910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e1910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[144])REFP(0x10ba1bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) = (*(undefined * PTR32 (*)[2])REFP(0x10ba1b0));
  if (REFG(void * PTR32, 0x1488760) == this) {
    REFG(void * PTR32, 0x1488760) = (undefined *)0x0;
  }
  if (*(int *)((int)this + 0x1c00) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c08);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x1c00));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c00);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x1c00) = 0;
    }
  }
  if (*(int *)((int)this + 0x1c04) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1c0c);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_ARG,*(int *)((int)this + 0x1c04));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c04);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x1c04) = 0;
    }
  }
  iVar4 = 9;
  pvVar5 = (undefined *)((int)this + 0x1bdc);
  do {
    pvVar5 = (undefined *)((int)pvVar5 - 0xa8);
    F_0042c880(pvVar5 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x14dc) GEN_EDX_ARG);
  iVar4 = 0x27;
  pvVar5 = (undefined *)((int)this + 0x14e4);
  do {
    pvVar5 = (undefined *)((int)pvVar5 - 0x7c);
    F_0042c880(pvVar5 GEN_EDX_ARG);
    iVar4 = iVar4 - 1;
  } while (-1 < iVar4);
  F_0042c880((undefined *)((int)this + 0x10c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf8) =
       (*(undefined * PTR32 (*)[2])REFP(0x10b815c));
  uVar3 = F_006df660(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::Event::ShopEventHandler::vf115 */
GEN_FRAME ushort GEN_THISCALL F_006e1a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e1a10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[1])[0x20];
  iVar2 = (*(int * PTR32 *)&gen_args[1])[0x1e];
  pcVar3 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[1]) = (int *)iVar1;
  uVar6 = (*pcVar3)(piVar4);
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]),iVar2,uVar6);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x200))((*(undefined * PTR32 *)&gen_args[0]),uVar6)));
  iVar1 = REFG(int, 0x1488344);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    F_007491b0((undefined *)(REFG(int, 0x1488344) + 0x264) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x268)) {
      sVar5 = *(short *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1)))) = (byte)((ushort)sVar5 >> 8);
      bVar7 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 1))));
      goto LAB_006e1a92;
    }
  }
  sVar5 = 1;
  bVar7 = 0;
LAB_006e1a92: ;
  return sVar5 << 8 | (ushort)bVar7;
}

/* ref: FUN_006e1ab0 */
GEN_FRAME byte GEN_THISCALL F_006e1ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e1ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_FWD,&REFG(undefined, 0x10b3a6a),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined, 0x10b3a6b),REFG(undefined4, 0x108cc50));
  F_00ab0230(0x18f48,((undefined1 *)(gen_frame + 0x64)));
  F_00ab0230(0x18f49,((undefined1 *)(gen_frame + 0x10)));
  (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)this + 0x1d4);
  F_00744670((undefined *)((int)this + 0x344) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x8)));
  iVar1 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x18);
  if (iVar1 != 0) {
    ((int *)(gen_frame + 0xb8))[0] = iVar1;
    ((uint *)(gen_frame + 0xcc))[0] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x28);
    ((undefined1 *)(gen_frame + 0xe0))[0] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x31);
  }
  uVar4 = (uint)(iVar1 != 0);
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x1c) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x1c);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2a);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x32);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x20) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x20);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2c);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x33);
    uVar4 = uVar4 + 1;
  }
  if (*(int *)((*(int *)(gen_frame + 0xc)) + 0x24) != 0) {
    ((int *)(gen_frame + 0xb8))[(int)(uVar4)] = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
    ((uint *)(gen_frame + 0xcc))[(int)(uVar4)] = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x2e);
    ((undefined1 *)(gen_frame + 0xe0))[(int)(uVar4)] = *(undefined1 *)((*(int *)(gen_frame + 0xc)) + 0x34);
    uVar4 = uVar4 + 1;
  }
  F_00ba07c0(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG,((int *)(gen_frame + 0xb8)),((uint *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0xe0)),uVar4,this);
  bVar2 = F_00ba05d0(&REFG(undefined, 0x14b0f2c) GEN_EDX_ARG);
  if (bVar2 != 0) {
    F_00a6e080(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,0x44,0,0);
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar5 = 0x1d;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
    piVar3 = (int *)F_00763050(uVar4 GEN_EDX_ARG,uVar5);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3 GEN_EDX_ARG,4,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec) GEN_EDX_ARG);
    return 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006e1c70 */
GEN_FRAME uint F_006e1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1ab0((undefined *)*puVar3 GEN_EDX_ARG);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
      F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return uVar2;
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006e1cf0 */
GEN_FRAME uint F_006e1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_006dd050((undefined *)*puVar2 GEN_EDX_ARG);
    uVar1 = F_00a02290(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
    F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return uVar1;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006e1d50 */
GEN_FRAME uint GEN_THISCALL F_006e1d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e1d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  uVar6 = F_00a4ffd0();
  uVar6 = uVar6 + 0x1684;
  iVar7 = 0;
  do {
    if (*(ushort *)(uVar6 + 4) == uVar1) {
      if (-1 < iVar7) {
        uVar6 = *(byte *)(uVar6 + 8) & 7;
        (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
        F_00744670((undefined *)((int)this + 0x344) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2c);
        uVar2 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2e);
        uVar3 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x2a);
        uVar4 = *(ushort *)((*(int *)(gen_frame + 0x4)) + 0x28);
        *param_1 = uVar6;
        bVar5 = F_006c2400(uVar6,(uint)uVar2 + (uint)uVar1 + (uint)uVar3 + (uint)uVar4);
        *param_2 = (uint)bVar5;
        uVar6 = F_006c23a0((*(int *)(gen_frame + 0x4)) + 0x10);
        *param_3 = uVar6;
      }
      return uVar6;
    }
    iVar7 = iVar7 + 1;
    uVar6 = uVar6 + 0x10;
  } while (iVar7 < 0x10);
  return uVar6;
}

/* ref: FUN_006e1e00 */
GEN_FRAME uint F_006e1e00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  if (this != (undefined *)0x0) {
    F_006e1d50(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x20)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x28)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)(gen_frame + 0x20)));
  F_00a02240(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 3;
}

/* ref: FUN_006e1e90 */
GEN_FRAME byte GEN_THISCALL F_006e1e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e1e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  byte bVar6;
  
  uVar1 = *(ushort *)((int)this + 0x1d4);
  bVar6 = 0;
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar3 = uVar2 + 0x1684;
  do {
    if (*(ushort *)(iVar3 + 4) == uVar1) {
      if (-1 < iVar5) {
        bVar6 = *(byte *)(iVar3 + 8) >> 5;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar5 < 0x10);
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar1;
  F_00744670((undefined *)((int)this + 0x344) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  uVar2 = ((uint)*(byte *)((*(uint *)(gen_frame + 0x4)) + 0x30) - (uint)bVar6) + 1;
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  (*(uint *)(gen_frame + 0x8)) = 0;
  puVar4 = &(*(uint *)(gen_frame + 0x4));
  if ((int)uVar2 < 1) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  return (byte)*puVar4;
}

/* ref: FUN_006e1f10 */
GEN_FRAME uint F_006e1f10(unsigned int gen_a0)
{
  GEN_ENTER(0x6e1f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = 0;
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006e1e90((undefined *)*puVar3 GEN_EDX_ARG);
    uVar2 = (uint)bVar1;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006e1f70 */
GEN_FRAME uint GEN_THISCALL F_006e1f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e1f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  char cVar2;
  ushort uVar3;
  double dVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * PTR32 * ppuVar11;
  int iVar12;
  undefined4 * puVar13;
  int iVar14;
  undefined4 * puVar15;
  ushort uVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  uVar7 = F_00a4ffd0();
  uVar8 = F_00ab3330(param_1 & 0xffff);
  uVar9 = 0;
  if (uVar8 != 0) {
    iVar12 = 0;
    iVar14 = uVar7 + 0x1684;
    while (uVar16 = (ushort)param_1, *(ushort *)(iVar14 + 4) != uVar16) {
      iVar12 = iVar12 + 1;
      iVar14 = iVar14 + 0x10;
      if (0xf < iVar12) {
        return uVar8;
      }
    }
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar9 = F_00ab21d0((uint)*(byte *)(uVar8 + 0x55));
    if (uVar9 != 0) {
      uVar7 = 0;
      do {
        if (*(char *)(uVar9 + 4 + uVar7) != '\0') {
          (*(uint *)(gen_frame + 0x14)) = uVar7;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x1d);
    }
    uVar9 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),0);
    bVar1 = *(byte *)(iVar14 + 8);
    uVar3 = *(ushort *)(iVar14 + 10);
    (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
    puVar15 = ((undefined4 *)GEN_TOP(((undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2])[1]));
    cVar2 = *(char *)((int)puVar15 + 0x9d);
    puVar13 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2];
    while (cVar2 == '\0') {
      if (*(ushort *)(puVar15 + 3) < uVar16) {
        puVar10 = (undefined4 *)puVar15[2];
        puVar15 = puVar13;
      }
      else {
        puVar10 = (undefined4 *)*puVar15;
      }
      puVar13 = puVar15;
      puVar15 = puVar10;
      cVar2 = *(char *)((int)puVar10 + 0x9d);
    }
    puVar15 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xd2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar13;
    if ((puVar13 == puVar15) || (uVar16 < *(ushort *)(puVar13 + 3))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar15;
      ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      ppuVar11 = (undefined4 * PTR32 *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    }
    puVar15 = *ppuVar11;
    puVar15 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)((int)puVar15 + 0x2e) + (uint)*(ushort *)(puVar15 + 0xb) +
               (uint)*(ushort *)((int)puVar15 + 0x2a) + (uint)*(ushort *)(puVar15 + 10))));
    uVar7 = F_00ab3300(0x25);
    if (uVar7 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(uVar7 + 4);
    }
    puVar13 = ((undefined4 *)GEN_TOP(((uint)bVar6 * (uint)(bVar1 & 7))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar13;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar15;
    dVar5 = (GEN_X87MATH(((double)(int)((int)(uintptr_t)puVar13) / (double)(int)puVar15),0xe));
    (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2)) = gen_x87_cw;
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0)))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)GEN_TOP((gen_x87_cw | 0xc00)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(int)TRUNC(dVar5);
    uVar9 = F_006d6580(param_1,(uint)uVar3,uVar9 & 0xffff,(*(uint *)(gen_frame + 0xc)),(uint)REFG(undefined1, 0x14ab29a),param_2,0,0,
                         0,0,(*(uint *)(gen_frame + 0x14)),0,(*(undefined4 * PTR32 *)(gen_frame + 0x10)),0);
  }
  return uVar9;
}

/* ref: FUN_006e2150 */
GEN_FRAME byte GEN_THISCALL F_006e2150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((char)(*(int *)&gen_args[4]) != '\x02') {
    return 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(pvVar1 GEN_EDX_FWD,&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)((int)pvVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7e) = 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)((int)pvVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x7f) = 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)((int)pvVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x80) = 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)((int)pvVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x81) = 0;
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  F_006d7550(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[4]),(*(undefined * PTR32 *)&gen_args[1]));
  if ((*(int *)&gen_args[4]) != *(int *)((int)pvVar1 + 0x30)) {
    *(undefined1 *)((*(int *)&gen_args[4]) + 0x82) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x2dd8))) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  uVar2 = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(int *)&gen_args[4]) = REFG(int, 0x1488344);
  F_00aa4270((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar2,0,0);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)&gen_args[2]) & 0xffff;
  uVar3 = *(undefined4 *)((*(int *)&gen_args[4]) + 0x6f0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(int *)(gen_frame + 0x10)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28;
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00746770((undefined *)((*(int *)&gen_args[4]) + 0x6f0) GEN_EDX_ARG,uVar3,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf6 */
GEN_FRAME uint GEN_THISCALL F_006e2260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2260u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[1]);
  F_006df030(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,(*(uint *)&gen_args[1]),REFG(int, 0x1379694),1);
  bVar3 = F_006db1d0((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4);
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),REFG(int, 0x1379694));
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7e) = 0;
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)));
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar2);
    uVar4 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)((int)pvVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x7f) = 0;
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::WarpEventHandler::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_006e22d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  
  F_006db1d0((undefined *)this GEN_EDX_FWD,param_1);
  F_006dd780(((undefined *)(uint)((undefined *)this)) GEN_EDX_ARG,param_1);
  return;
}

/* ref: Client::Game::Event::WarpEventHandler::vf18 */
GEN_FRAME unsigned int GEN_THISCALL F_006e22f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  
  F_006db430((undefined *)this GEN_EDX_FWD,param_1);
  F_006dd780(((undefined *)(uint)((undefined *)this)) GEN_EDX_ARG,REFG(undefined4, 0x1379694));
  return;
}

/* ref: Client::Game::Event::StoryEventHandler::vf116 */
GEN_FRAME byte GEN_THISCALL F_006e2310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  ushort uVar5;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar5 = F_006dd800((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,REFG(int, 0x1379694));
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x80);
  F_00745bd0((*(undefined * PTR32 *)&gen_args[0]) + 0x254 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
  while( true ) {
    if (piVar3 == (*(int * PTR32 *)(gen_frame + 0x8))) {
      return 0;
    }
    if ((*(ushort *)(piVar3 + 4) <= uVar5) && (uVar5 < *(ushort *)((int)piVar3 + 0x12))) break;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_006e23d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * pvVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_006db1d0((undefined *)this GEN_EDX_FWD,param_1);
  iVar2 = REFG(int, 0x1379694);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (REFG(int, 0x1379694) != 0) {
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x58)) = pvVar1;
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x5c)),REFG(int, 0x1379694));
    if ((*(undefined * PTR32 *)(gen_frame + 0x5c)) != *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x7e) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)(this + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x5c)) = pvVar1;
    F_006d7550(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x58)),iVar2);
    if ((*(undefined * PTR32 *)(gen_frame + 0x58)) != *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x5c)) + 0x30)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x7f) = 0;
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xb8))(param_1 GEN_EDX_ARG);
    if ((char)uVar4 != '\0') {
      (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_00aa0000(param_1 GEN_EDX_ARG,0x2ff,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
      uVar4 = F_006df030(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,param_1,REFG(int, 0x1379694),1);
    }
  }
  return uVar4;
}

/* ref: Client::Game::Event::EventHandlerModule::vf6 */
GEN_FRAME byte GEN_THISCALL F_006e24f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e24f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  if ((short)param_2 == 7) {
    F_006de0e0(this GEN_EDX_FWD,0xffff);
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar5 != *(int * PTR32 *)(this + 0x30)) {
    do {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar5[4] + 200))
                        ((int *)piVar5[4] GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      if ((char)uVar4 != '\0') {
        return 1;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x30));
  }
  return 0;
}

/* ref: FUN_006e25a0 */
GEN_FRAME uint GEN_THISCALL F_006e25a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006e25f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006e25f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e25f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddc50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return;
}

/* ref: FUN_006e2610 */
GEN_FRAME uint GEN_THISCALL F_006e2610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006e2660 */
GEN_FRAME unsigned int GEN_THISCALL F_006e2660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddd80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return;
}

/* ref: FUN_006e2680 */
GEN_FRAME uint GEN_THISCALL F_006e2680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006e26d0 */
GEN_FRAME uint GEN_THISCALL F_006e26d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e26d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006e2720 */
GEN_FRAME uint GEN_THISCALL F_006e2720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2720u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_006e2770 */
GEN_FRAME unsigned int GEN_THISCALL F_006e2770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2770u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_006ddfb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return;
}

/* ref: FUN_006e2790 */
GEN_FRAME uint GEN_THISCALL F_006e2790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
    if (((*(uint *)&gen_args[1]) & 1) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1c8))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
    if (((*(uint *)&gen_args[1]) & 2) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e0))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
    if (((*(uint *)&gen_args[1]) & 4) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
    if (((*(uint *)&gen_args[1]) & 8) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1f8))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
    if (((*(uint *)&gen_args[1]) & 0x10) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 500))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
    if (((*(uint *)&gen_args[1]) & 0x20) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x10) + 0x1e4))))(*(int * PTR32 *)((int)pvVar1 + 0x10) GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_006e2840 */
GEN_FRAME uint GEN_THISCALL F_006e2840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e2840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_006de320((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf154 */
GEN_FRAME uint GEN_THISCALL F_006e2860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 uVar10;
  
  uVar8 = param_1 & 0xff;
  uVar5 = (uint)(byte)param_2;
  uVar10 = 0;
  uVar6 = F_0042a990(this + 0x16c GEN_EDX_FWD);
  piVar7 = (int *)F_00a02640(*(undefined * PTR32 *)(this + 0xf8) GEN_EDX_ARG,"OnSequence",uVar6,uVar8,uVar5,uVar10);
  if ((byte)param_2 == 0xfe) {
    F_00a6ddf0(&REFG(undefined, 0x14ab380) GEN_EDX_ARG);
    iVar3 = REFG(int, 0x1488344);
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1488344) + 0x30);
    piVar9 = (int *)*piVar7;
    if (piVar9 != piVar7) {
      do {
        piVar2 = (int *)piVar9[4];
        if (*(short *)((int)piVar2 + 10) == 1) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x22c))(piVar2 GEN_EDX_ARG);
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1c8))((int *)piVar9[4] GEN_EDX_ARG);
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1f8))((int *)piVar9[4] GEN_EDX_ARG);
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)piVar9[4] + 0x1e4))((int *)piVar9[4] GEN_EDX_ARG)));
        }
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar2 = (int *)piVar9[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar7 = (int *)*piVar2;
            while (piVar9 = piVar2, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x15);
              piVar2 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar2 = piVar9;
            while ((piVar7 = piVar4, piVar9 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x15);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar9 != *(int * PTR32 *)(iVar3 + 0x30));
    }
  }
  else if ((byte)param_2 == 0xff) {
    F_00a69720(&REFG(undefined, 0x14ab380) GEN_EDX_ARG);
    return (uint)piVar7;
  }
  return (uint)piVar7;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf154 */
GEN_FRAME uint GEN_THISCALL F_006e2960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_006e2860((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::Game::Event::DirectorModule::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_006e2970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e2970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x2c);
  if (piVar4 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int * PTR32 *)(this + 0x30));
  }
  iVar2 = *(int *)(this + 0x2c);
  if (iVar2 != *(int *)(this + 0x30)) {
    F_00c46e20(iVar2,*(int *)(this + 0x30),0);
    *(int *)(this + 0x30) = iVar2;
  }
  uVar3 = F_00745180(this + 0x4c GEN_EDX_ARG);
  this[0x24] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_006e29e0 */
GEN_FRAME byte GEN_THISCALL F_006e29e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e29e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006deae0(REFG(void * PTR32, 0x1488344) GEN_EDX_FWD,param_2,this,param_1);
  return bVar1;
}

/* ref: FUN_006e2a00 */
GEN_FRAME uint F_006e2a00(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2a00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar1 = *puVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  iVar6 = 3;
  if (2 < (int)uVar3) {
    do {
      bVar2 = F_00a01f20(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar6);
      if (bVar2 != 0) break;
      uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
      F_006deae0(REFG(void * PTR32, 0x1488344) GEN_EDX_ARG,uVar5,uVar1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar3);
  }
  F_00a01890(((byte *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006e2aa0 */
GEN_FRAME uint F_006e2aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6e2aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  F_00748d80((undefined *)(iVar1 + 0x1c0) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x28)));
  if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x1c4)) {
    uVar2 = F_0042a990((*(int *)(gen_frame + 0x24)) + 100 GEN_EDX_ARG);
    if (uVar2 != 0) {
      F_0042e430((undefined *)(iVar1 + 0x23c) GEN_EDX_ARG,uVar2);
    }
  }
  F_00a01890(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006e2b30 */
GEN_FRAME unsigned int GEN_THISCALL F_006e2b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (((((char)param_4 == '\x06') && (REFG(int, 0x1379694) != 0)) && (*(char *)(REFG(int, 0x1379694) + 0x1688) == '\x12')) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) ) {
    uVar1 = F_006dd370(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_FWD,REFG(int, 0x1379694));
    if (uVar1 == 0) {
      F_006d9810(((undefined *)(uint)(*(undefined * PTR32 *)((int)this + 0x54))) GEN_EDX_ARG,this,299);
    }
  }
  return;
}

/* ref: FUN_006e2b70 */
GEN_FRAME uint GEN_THISCALL F_006e2b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x54) == (undefined *)0x0) {
    return (uint)this & 0xffffff00;
  }
  uVar1 = F_006d9810(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_006e2b90 */
GEN_FRAME uint GEN_THISCALL F_006e2b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 100))(piVar1 GEN_EDX_ARG,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2be0 */
GEN_FRAME uint GEN_THISCALL F_006e2be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6e2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1 GEN_EDX_ARG,param_2,param_3,param_4,param_5)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2c50 */
GEN_FRAME uint GEN_THISCALL F_006e2c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    if (((piVar1 != (int *)0x0) && ((short)piVar1[0x15] == (short)param_2)) &&
       ((*(byte *)(piVar1 + 0x17) & 1) != 0)) {
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe;
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_ARG,param_2,param_3,param_4)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_006e2cb0 */
GEN_FRAME uint GEN_THISCALL F_006e2cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e2cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1 GEN_EDX_ARG,param_2,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_006e2d00 */
GEN_FRAME uint GEN_THISCALL F_006e2d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6e2d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar2 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      if ((1 < (byte)param_4) && (((byte)param_4 < 4 || ((byte)param_4 == 7)))) {
        uVar3 = F_00463610(0,param_5,(uint)(byte)param_4);
        F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar3);
      }
      iVar1 = *piVar2;
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      ((code *)*(gen_code32 *)(iVar1 + 0x78))(piVar2,uVar3,param_6,param_7,param_8,param_9);
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar3 = (uint)uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_006e2dc0 */
GEN_FRAME uint GEN_THISCALL F_006e2dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e2dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (param_1 != 0) {
    if ((param_1 & 0x80000000) == 0x80000000) {
      piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    }
    else {
      piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,param_1);
    }
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1 GEN_EDX_ARG,param_2);
      return uVar2;
    }
  }
  puVar3 = (undefined4 *)F_00ab3d50(param_2);
  uVar2 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xd8))
                      (piVar1 GEN_EDX_ARG,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,(int)*(char *)(puVar3 + 1))
    ;
  }
  return uVar2;
}

/* ref: FUN_006e2e40 */
GEN_FRAME uint GEN_THISCALL F_006e2e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6e2e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = (*(uint *)&gen_args[2]) & 0xffff | 0x10000;
  if ((*(int *)&gen_args[1]) == 0) {
    (*(uint *)&gen_args[3]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_FWD,&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
    uVar4 = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10) + 0x22c))))(*(int * PTR32 *)((*(uint *)&gen_args[2]) + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1c8))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e0))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f0))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1f8))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 500))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + 0x10) + 0x1e4))))(*(int * PTR32 *)(uVar4 + 0x10) GEN_EDX_ARG);
    }
    (*(uint *)&gen_args[3]) = 0x1a;
    F_006ddd80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[3]),1);
    if (REFG(int, 0x14b4eb4) < 1) {
      REFG(int, 0x14b4eb4) = 1;
    }
  }
  else if ((*(int *)&gen_args[1]) == 1) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x3b);
    (*(uint *)&gen_args[2]) = uVar4;
    F_00748ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[2]));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x22c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x10) + 0x1f0))))(*(int * PTR32 *)((int)pvVar2 + 0x10) GEN_EDX_ARG);
    }
    if ((ushort)(*(uint *)&gen_args[3]) < 0x1e) {
      F_00a83f80(&REFG(undefined, 0x14b1258) GEN_EDX_ARG,(*(uint *)&gen_args[3]) & 0xffff);
    }
  }
  else if ((*(int *)&gen_args[1]) == 2) {
    F_006de0e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xffff);
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar4 = (uint)((*(int *)&gen_args[1]) == 1);
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
  uVar3 = F_008229a0(pvVar2 GEN_EDX_ARG,uVar3,uVar4);
  return uVar3;
}

/* ref: FUN_006e2fa0 */
GEN_FRAME uint GEN_THISCALL F_006e2fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6e2fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if ((((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) == (*(uint *)&gen_args[1])) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) == (*(int *)&gen_args[2]))) &&
      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) == (*(int *)&gen_args[3]))) &&
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) == (char)(*(undefined4 *)&gen_args[4]) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) == (*(int *)&gen_args[5])))))
  {
    if ((char)(*(undefined4 *)&gen_args[4]) == '\n') {
      (*(uint *)&gen_args[1]) = F_005f3270(0x31,(*(int *)&gen_args[5]),0);
      if ((*(uint *)&gen_args[1]) != 0) {
        F_0073d9b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
        F_00745550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6fc))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
      }
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) != 0) {
      F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))),0);
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0xe0000000;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24c))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = 0;
  }
  if ((*(int *)&gen_args[2]) == -0x20000000) {
    uVar3 = 0xe0000000;
    uVar4 = 0;
  }
  else {
    uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    uVar4 = uVar3;
  }
  if (uVar1 != 0) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) GEN_EDX_ARG,uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar1);
    }
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2 GEN_EDX_ARG,uVar4,(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]),(*(undefined4 *)&gen_args[6]));
    }
  }
  return uVar3;
}

/* ref: FUN_006e3100 */
GEN_FRAME byte GEN_THISCALL F_006e3100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (REFG(int, 0x13238f8) != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG,REFG(undefined4, 0x1323904),0);
  }
  if (((char)param_2 == '\0') && (uVar2 = F_006d9f00(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
    return 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    uVar2 = *(uint *)((int)this + 0x220);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = uVar2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar3 = uVar2 - *(uint *)(iVar4 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x2c))) != '\0') {
      return 0;
    }
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 8)));
    if (uVar2 != 0) {
      if ((uVar2 & 0x80000000) == 0x80000000) {
        piVar1 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,uVar2);
      }
      else {
        piVar1 = (int *)F_006dda70(this GEN_EDX_ARG,uVar2);
      }
      if ((piVar1 != (int *)0x0) && ((short)piVar1[0x15] != -1)) {
        uVar2 = F_00743a80((undefined *)((int)this + 0x214) GEN_EDX_ARG);
        if (*(char *)(uVar2 + 0x2c) == '\0') {
          *(undefined1 *)(uVar2 + 0x2c) = 1;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1 GEN_EDX_ARG,param_1);
        return 1;
      }
    }
  }
  if ((*(int *)((int)this + 0x238) != 0) && (*(char *)((int)this + 0x25c) == '\0')) {
    *(undefined1 *)((int)this + 0x25c) = 1;
  }
  return 0;
}

/* ref: FUN_006e3240 */
GEN_FRAME uint GEN_THISCALL F_006e3240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6e3240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 & 0x80000000) == 0x80000000) {
    uVar1 = F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  uVar1 = F_006dda70(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_006e3280 */
GEN_FRAME byte GEN_THISCALL F_006e3280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6e3280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = F_00a4ffd0();
  uVar1 = *((ushort *)GEN_TOP((uVar2 + (param_1 & 0xffff) * 0x10 + 0x13b8)));
  *param_4 = 0;
  *param_3 = 0;
  if (((uVar1 != 0) && (uVar2 = uVar1 | 0x10000, uVar2 != 0)) &&
     (piVar3 = (int *)F_006dda70(this GEN_EDX_ARG,uVar2), piVar3 != (int *)0x0)) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
    if (((char)uVar4 == '\0') || (*(char *)piVar3[0x5b] == '\0')) {
      return 0;
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1e8))(piVar3 GEN_EDX_ARG,param_2,3);
    *param_4 = *param_4 + uVar4;
    *param_3 = uVar2;
  }
  return 1;
}

/* ref: FUN_006e3330 */
GEN_FRAME byte GEN_THISCALL F_006e3330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6e3330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230) GEN_EDX_FWD,0x7d4);
  uVar1 = F_00a3a8f0(this_00 GEN_EDX_ARG,param_2,0);
  if ((uVar1 != 0) && (uVar1 = *(uint *)(uVar1 + 0x3c), uVar1 != 0)) {
    if ((uVar1 & 0x80000000) == 0x80000000) {
      piVar2 = (int *)F_00748af0((undefined *)((int)this + 0x5c) GEN_EDX_ARG,uVar1);
    }
    else {
      piVar2 = (int *)F_006dda70(this GEN_EDX_ARG,uVar1);
    }
    if (piVar2 != (int *)0x0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1ec))(piVar2 GEN_EDX_ARG,param_1,param_2);
      return (byte)uVar1;
    }
  }
  return 0;
}

/* ref: FUN_006e33b0 */
GEN_FRAME uint GEN_THISCALL F_006e33b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6e33b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x224) != 0) {
    in_EAX = *(uint *)((int)this + 0x220);
    piVar1 = *(int * PTR32 *)((int)this + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = in_EAX;
    if (*(uint *)(iVar4 + 8) <= in_EAX) {
      uVar3 = in_EAX - *(uint *)(iVar4 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 8))) != 0) {
      if (REFG(int, 0x13238f8) == 0) {
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        if (*(uint *)(iVar4 + 8) <= in_EAX) {
          in_EAX = in_EAX - *(uint *)(iVar4 + 8);
        }
        uVar3 = *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + in_EAX * 4)));
        if ((*(byte *)(uVar3 + 0x20) >> 1 & 1) == 0) {
          return uVar3;
        }
      }
      bVar2 = F_006e3100(this GEN_EDX_FWD,0x37,1);
      in_EAX = CONCAT31(extraout_var,bVar2);
    }
  }
  return in_EAX;
}

