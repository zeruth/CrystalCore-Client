#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e09cf0 */
GEN_NOFRAME byte GEN_THISCALL F_00e09cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
  F_0105aec0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
  pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
  *(byte * PTR32 *)((int)this + 8) = pbVar2;
  *(byte * PTR32 *)((int)this + 0xc) = pbVar2 + *(int *)((int)this + 0x14);
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 8) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d20 */
GEN_NOFRAME byte GEN_THISCALL F_00e09d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *(byte * PTR32 *)((int)this + 8);
  if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar2) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
    F_0105aec0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
    *(byte * PTR32 *)((int)this + 8) = pbVar2;
    *(byte * PTR32 *)((int)this + 0xc) = pbVar2 + *(int *)((int)this + 0x14);
  }
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 8) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d60 */
GEN_FRAME uint GEN_THISCALL F_00e09d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  byte bVar5;
  uint uVar6;
  
  pbVar4 = *(byte * PTR32 *)((int)this + 8);
  if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar4) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
    F_0105aec0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
    pbVar4 = *(byte * PTR32 *)((int)this + 0x10);
    *(byte * PTR32 *)((int)this + 8) = pbVar4;
    *(byte * PTR32 *)((int)this + 0xc) = pbVar4 + *(int *)((int)this + 0x14);
  }
  bVar1 = *pbVar4;
  *(byte * PTR32 *)((int)this + 8) = pbVar4 + 1;
  bVar3 = bVar1 & 1;
  uVar6 = bVar1 >> 1 & 0x7fffffbf;
  bVar5 = 6;
  while ((char)bVar1 < '\0') {
    pbVar4 = *(byte * PTR32 *)((int)this + 8);
    if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar4) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
      F_0105aec0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this
                  );
      pbVar4 = *(byte * PTR32 *)((int)this + 0x10);
      *(byte * PTR32 *)((int)this + 8) = pbVar4;
      *(byte * PTR32 *)((int)this + 0xc) = pbVar4 + *(int *)((int)this + 0x14);
    }
    bVar1 = *pbVar4;
    *(byte * PTR32 *)((int)this + 8) = pbVar4 + 1;
    bVar2 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar6 = uVar6 | (bVar1 & 0xffffff7f) << bVar2;
  }
  *(int *)this = *(int *)this - 1;
  if (bVar3 != 0) {
    uVar6 = -uVar6;
  }
  return uVar6;
}

/* ref: FUN_00e09e20 */
GEN_FRAME uint GEN_THISCALL F_00e09e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe09e20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09e60 */
GEN_FRAME unsigned int GEN_THISCALL F_00e09e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e09a40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00e09ea0 */
GEN_FRAME uint GEN_THISCALL F_00e09ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09ea0u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00e09ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00e09ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e09f20 */
GEN_NOFRAME uint GEN_THISCALL F_00e09f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e09f60 */
GEN_NOFRAME uint GEN_THISCALL F_00e09f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09fa0 */
GEN_FRAME uint GEN_THISCALL F_00e09fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe09fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  this_00 = (undefined *)((int)this + 4);
  F_0105aec0(this_00 GEN_EDX_FWD,&(*(byte *)(gen_frame + 0xb)),1,1);
  uVar4 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar5 = 6;
  bVar1 = (*(byte *)(gen_frame + 0xb));
  while ((char)bVar1 < '\0') {
    F_0105aec0(this_00 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xa)),1,1);
    bVar1 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar4 = uVar4 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0xa));
  }
  if (((*(byte *)(gen_frame + 0xb)) & 1) != 0) {
    uVar4 = -uVar4;
  }
  if (0 < (int)uVar4) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar3 = F_00d92460(*(undefined4 *)((int)pvVar2 + 0x2c),uVar4 + 1);
    F_0105afb0(this_00 GEN_EDX_ARG,uVar3,uVar4);
    *(undefined1 *)(uVar4 + uVar3) = 0;
    if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x28),4);
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + *(int *)((int)this + 0x2c) * 4))) = uVar3;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
    return uVar3;
  }
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + uVar4 * -4)));
}

/* ref: FUN_00e0a0a0 */
GEN_FRAME uint GEN_THISCALL F_00e0a0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 + 7U & 0xfffffff8;
  iVar4 = (int)(((int)(param_1 + 7U) >> 0x1f & 7U) + uVar5) >> 3;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if ((int)(param_2[2] & 0x3fffffffU) < (int)uVar5) {
    uVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if ((int)uVar2 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,uVar2,1);
  }
  param_2[1] = uVar5;
  F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)),1,iVar4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      bVar1 = ((byte *)(gen_frame + 0x8))[(int)(iVar3)];
      *(byte *)(*param_2 + iVar3 * 8) = bVar1 & 1;
      *(byte *)(*param_2 + 1 + iVar3 * 8) = bVar1 >> 1 & 1;
      *(byte *)(*param_2 + 2 + iVar3 * 8) = bVar1 >> 2 & 1;
      *(byte *)(*param_2 + 3 + iVar3 * 8) = bVar1 >> 3 & 1;
      *(byte *)(*param_2 + 4 + iVar3 * 8) = bVar1 >> 4 & 1;
      *(byte *)(*param_2 + 5 + iVar3 * 8) = bVar1 >> 5 & 1;
      *(byte *)(*param_2 + 6 + iVar3 * 8) = bVar1 >> 6 & 1;
      *(byte *)(*param_2 + 7 + iVar3 * 8) = bVar1 >> 7;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar5 = param_2[2] & 0x3fffffff;
  if ((int)uVar5 < param_1) {
    iVar4 = uVar5 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar1);
  }
  param_2[1] = param_1;
  return uVar5;
}

/* ref: FUN_00e0a1b0 */
GEN_FRAME uint GEN_THISCALL F_00e0a1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a1b0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a1f0 */
GEN_FRAME uint GEN_THISCALL F_00e0a1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a1f0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a230 */
GEN_FRAME uint GEN_THISCALL F_00e0a230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a230u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a270 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e0a2b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a2b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e0a2f0 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a2f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a330 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a330u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a370 */
GEN_FRAME uint GEN_THISCALL F_00e0a370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *(int *)this = param_2;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,iVar3,1);
  }
  *(int *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 8) = *piVar1;
  *(int *)((int)this + 0xc) = *piVar1 + *(int *)((int)this + 0x14);
  return (uint)this;
}

/* ref: FUN_00e0a3e0 */
GEN_FRAME uint GEN_THISCALL F_00e0a3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  byte bVar5;
  byte * pbVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  
  uVar8 = *(uint *)this;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x14)) = uVar8;
  if (0 < (int)uVar8) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x4)),((int)uVar8 < 0) - 1 & uVar8,4);
  }
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  (*(int *)(gen_frame + 0x18)) = 0;
  if (0 < (int)uVar8) {
    do {
      pbVar6 = *(byte * PTR32 *)((int)this + 8);
      if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar6) {
        uVar2 = *(undefined4 *)this;
        uVar3 = *(undefined4 *)((int)this + 0x10);
        pvVar4 = *(undefined * PTR32 *)((int)this + 4);
        *(undefined4 *)((int)this + 0x14) = uVar2;
        F_0105aec0(pvVar4 GEN_EDX_ARG,uVar3,1,uVar2);
        pbVar6 = *(byte * PTR32 *)((int)this + 0x10);
        *(byte * PTR32 *)((int)this + 8) = pbVar6;
        *(byte * PTR32 *)((int)this + 0xc) = pbVar6 + *(int *)((int)this + 0x14);
      }
      bVar1 = *pbVar6;
      *(byte * PTR32 *)((int)this + 8) = pbVar6 + 1;
      uVar10 = bVar1 >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x10)) = bVar1 & 1;
      bVar9 = 6;
      uVar8 = (*(uint *)(gen_frame + 0x14));
      while ((*(uint *)(gen_frame + 0x14)) = uVar8, (char)bVar1 < '\0') {
        pbVar6 = *(byte * PTR32 *)((int)this + 8);
        if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar6) {
          uVar2 = *(undefined4 *)this;
          pvVar4 = *(undefined * PTR32 *)((int)this + 4);
          *(undefined4 *)((int)this + 0x14) = uVar2;
          F_0105aec0(pvVar4 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10),1,uVar2);
          pbVar6 = *(byte * PTR32 *)((int)this + 0x10);
          *(byte * PTR32 *)((int)this + 8) = pbVar6;
          *(byte * PTR32 *)((int)this + 0xc) = pbVar6 + *(int *)((int)this + 0x14);
        }
        bVar1 = *pbVar6;
        *(byte * PTR32 *)((int)this + 8) = pbVar6 + 1;
        bVar5 = bVar9 & 0x1f;
        bVar9 = bVar9 + 7;
        uVar10 = uVar10 | (bVar1 & 0xffffff7f) << bVar5;
        uVar8 = (*(uint *)(gen_frame + 0x14));
      }
      *(int *)this = *(int *)this - 1;
      if ((*(uint *)(gen_frame + 0x10)) != 0) {
        uVar10 = -uVar10;
      }
      *(uint *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x18)) * 4) = uVar10;
      iVar7 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar7;
    } while (iVar7 < (int)uVar8);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x80))((int *)*param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),uVar8);
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar8 = (*(uint *)(gen_frame + 0xc));
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) * 4);
  }
  return uVar8;
}

/* ref: FUN_00e0a540 */
GEN_FRAME uint GEN_THISCALL F_00e0a540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a590 */
GEN_FRAME uint GEN_THISCALL F_00e0a590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a5e0 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar1;
}

/* ref: FUN_00e0a620 */
GEN_FRAME uint GEN_THISCALL F_00e0a620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a620u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e0a690 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a690u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e0a720 */
GEN_FRAME uint GEN_THISCALL F_00e0a720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a720u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 0x10 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e0a790 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a790u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e0a820 */
GEN_FRAME uint GEN_THISCALL F_00e0a820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0a890 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a890u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a920 */
GEN_NOFRAME uint GEN_THISCALL F_00e0a920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0a920u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a980 */
GEN_FRAME uint GEN_THISCALL F_00e0a980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  *(undefined4 *)this = 0xffffffff;
  F_0105b020((undefined *)((int)this + 4) GEN_EDX_FWD,param_1,(uint)this & 0xffffff00);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar1 = (int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  if (*(uint *)((int)this + 0x20) == (*(uint *)((int)this + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x1c),4);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x20) * 4))) = 0;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined1 * PTR32 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x2c) * 4))) = &REFG(undefined1, 0x107fc63);
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x2c) * 4))) = 0;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  *(undefined4 *)((int)this + 0x34) = 2;
  return (uint)this;
}

/* ref: FUN_00e0aa80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0aa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0aa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x34);
  if (iVar4 < *(int *)((int)this + 0x2c)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 4)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x2c));
  }
  F_00dbdb20((undefined *)((int)this + 0x44) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar2 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  F_0105b090((undefined *)((int)this + 4) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e0ab70 */
GEN_FRAME uint GEN_THISCALL F_00e0ab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    F_00e0a370(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,(int)this + 4,param_2);
    F_00e0a3e0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    ((byte *)(gen_frame + 0x0))[0x14] = 0;
    ((byte *)(gen_frame + 0x0))[0x15] = 0;
    ((byte *)(gen_frame + 0x0))[0x16] = 0;
    ((byte *)(gen_frame + 0x0))[0x17] = 0;
    uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) & 0x3fffffff);
    }
  }
  return uVar1;
}

/* ref: FUN_00e0abd0 */
GEN_FRAME uint GEN_THISCALL F_00e0abd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  byte bVar7;
  uint * puVar8;
  undefined * pvVar9;
  uint uVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
  uVar2 = F_00e09fa0(this GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  pvVar9 = (undefined *)((int)this + 4);
  F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3b)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3b)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3b)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3b));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3a)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3a)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3a));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) + 0x18))))
                            (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x20)))));
  if (*piVar3 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
    }
    return 1;
  }
  F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3a)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3a)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3a));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3b)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3b));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  if (((int)uVar2 < 0) || (*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x1c) + uVar2 * 4))) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
  }
  else {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x1c) + uVar2 * 4)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x10)) = uVar2;
  }
  F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3a)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3a)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3a));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3b)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3b));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  if ((int)((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) < (int)uVar2) {
    uVar4 = ((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar4 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x14)),uVar4,0xc);
  }
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (0 < (int)uVar2) {
    (*(int *)(gen_frame + 0x2c)) = 0;
    do {
      puVar8 = (uint *)((*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x2c)));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8;
      uVar2 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      *puVar8 = uVar2;
      F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3a)),1,1);
      uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x28)) = (*(byte *)(gen_frame + 0x3a)) & 1;
      bVar7 = 6;
      bVar1 = (*(byte *)(gen_frame + 0x3a));
      while ((char)bVar1 < '\0') {
        F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x3b)),1,1);
        bVar1 = bVar7 & 0x1f;
        bVar7 = bVar7 + 7;
        uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
        bVar1 = (*(byte *)(gen_frame + 0x3b));
      }
      if ((*(uint *)(gen_frame + 0x28)) != 0) {
        uVar2 = -uVar2;
      }
      (*(uint *)(gen_frame + 0x30)) = uVar2;
      if ((uVar2 & 0x20) == 0) {
        (*(uint *)(gen_frame + 0x28)) = 0;
      }
      else {
        F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x39)),1,1);
        (*(uint *)(gen_frame + 0x28)) = (*(byte *)(gen_frame + 0x39)) & 1;
        uVar2 = (*(byte *)(gen_frame + 0x39)) >> 1 & 0x7fffffbf;
        bVar7 = 6;
        bVar1 = (*(byte *)(gen_frame + 0x39));
        while ((char)bVar1 < '\0') {
          F_0105aec0(pvVar9 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x38)),1,1);
          bVar1 = bVar7 & 0x1f;
          bVar7 = bVar7 + 7;
          uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x38)) & 0xffffff7f) << bVar1;
          bVar1 = (*(byte *)(gen_frame + 0x38));
        }
        if ((*(uint *)(gen_frame + 0x28)) != 0) {
          uVar2 = -uVar2;
        }
        (*(uint *)(gen_frame + 0x28)) = uVar2;
      }
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x34));
      if ((((*(uint *)(gen_frame + 0x30)) & 0xf) == 9) || (((*(uint *)(gen_frame + 0x30)) & 0xf) == 8)) {
        uVar2 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        if (uVar2 != 0) {
          piVar3 = *(int * PTR32 *)((int)pvVar5 + 0x14);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,uVar2);
        }
      }
      else {
        uVar2 = 0;
      }
      piVar3 = *(int * PTR32 *)((int)pvVar5 + 0x14);
      uVar4 = (*(uint *)(gen_frame + 0x30));
      uVar10 = (*(uint *)(gen_frame + 0x28));
      pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3 GEN_EDX_ARG)));
      uVar2 = F_00e1aa20(pvVar5 GEN_EDX_ARG,uVar4,uVar2,uVar10);
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0xc;
      (*(uint * PTR32 *)(gen_frame + 0x20))[1] = uVar2;
      iVar6 = (*(uint *)(gen_frame + 0x24)) + 1;
      (*(uint *)(gen_frame + 0x24)) = iVar6;
    } while (iVar6 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) + 0xc))))
                    (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)));
  if (*(uint *)((int)pvVar9 + 0x20) == (*(uint *)((int)pvVar9 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)pvVar9 + 0x1c),4);
  }
  *((uint *)GEN_TOP((*(int *)((int)pvVar9 + 0x1c) + *(int *)((int)pvVar9 + 0x20) * 4))) = uVar2;
  *(int *)((int)pvVar9 + 0x20) = *(int *)((int)pvVar9 + 0x20) + 1;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
  }
  return 0;
}

/* ref: FUN_00e0afb0 */
GEN_NOFRAME uint GEN_THISCALL F_00e0afb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 * 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e0b030 */
GEN_FRAME uint GEN_THISCALL F_00e0b030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0b030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  LPVOID pvVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  byte bVar9;
  
  if (*(int *)this < 2) {
    F_00e0c190(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0,0);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x60))(param_1 GEN_EDX_ARG,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
      *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4)))((*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
        return uVar7;
      }
    }
  }
  else {
    F_0105aec0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar7 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((*(byte *)(gen_frame + 0xb)) & 1);
    bVar9 = 6;
    bVar3 = (*(byte *)(gen_frame + 0xb));
    while ((char)bVar3 < '\0') {
      F_0105aec0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xa)),1,1);
      bVar3 = bVar9 & 0x1f;
      bVar9 = bVar9 + 7;
      uVar7 = uVar7 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar3;
      bVar3 = (*(byte *)(gen_frame + 0xa));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
      uVar7 = -uVar7;
    }
    if (*(int *)((int)this + 0x3c) <= (int)uVar7) {
      piVar1 = (int *)((int)this + 0x44);
      uVar7 = F_00dbe3b0(piVar1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar7,0);
      piVar8 = *(int * PTR32 *)(*piVar1 + 4 + uVar7 * 8);
      if (piVar8 == (int *)0x0) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                                  (*(int * PTR32 *)((int)pvVar5 + 0x2c) GEN_EDX_ARG,0x18)));
        if (piVar6 != (int *)0x0) {
          *piVar6 = 0;
          piVar6[1] = 0;
          piVar6[2] = ((int)0x80000000);
          piVar6[3] = 0;
          piVar6[4] = 0;
          piVar6[5] = ((int)0x80000000);
          piVar8 = piVar6;
        }
        *(int * PTR32 *)(*piVar1 + 4 + uVar7 * 8) = piVar8;
      }
      if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar8,8);
      }
      puVar4 = (undefined4 *)(*piVar8 + piVar8[1] * 8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_1;
        puVar4[1] = param_2;
      }
      piVar8[1] = piVar8[1] + 1;
      return (uint)puVar4;
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + uVar7 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x60))(param_1 GEN_EDX_ARG,param_2,puVar2)));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) - 1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1)));
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e0b1e0 */
GEN_FRAME uint GEN_THISCALL F_00e0b1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0b1e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  int * piVar4;
  undefined * pvVar5;
  int * in_ecx;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined1 * puVar10;
  LPVOID pvVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  undefined1 * puVar19;
  byte bVar20;
  bool bVar21;
  
  (*(undefined * PTR32 *)(gen_frame + 0x80)) = (*(undefined * PTR32 *)&gen_args[0]);
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_FWD)));
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  piVar7 = (int *)(*in_ecx - 2);
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case (int *)0x0: ;
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
      uVar6 = 0;
LAB_00e0b24c: ;
      piVar7 = (int *)0x80000000;
    }
    else {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[2]));
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) goto LAB_00e0b24c;
    }
    (*(int * PTR32 *)(gen_frame + 0x74)) = piVar7;
    (*(uint *)(gen_frame + 0x6c)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    if ((int)((uint)piVar7 & 0x3fffffff) < (int)piVar4) {
      piVar7 = ((int *)GEN_TOP((((uint)piVar7 & 0x3fffffff) * 2)));
      if ((int)piVar7 <= (int)piVar4) {
        piVar7 = piVar4;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),piVar7,1);
    }
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),1,piVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x8c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),piVar4);
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x74));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x74))) {
      uVar6 = (uint)(*(int * PTR32 *)(gen_frame + 0x74)) & 0x3fffffff;
LAB_00e0b2bd: ;
      (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x6c)),uVar6);
      return uVar6;
    }
    break;
  case (int *)0x1: ;
    uVar6 = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
LAB_00e0b476: ;
      piVar7 = (int *)0x80000000;
    }
    else {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) * 4)));
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[2]));
      piVar7 = ((int *)GEN_TOP(((int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 3U)) >> 2)));
      if (piVar7 == (int *)0x0) goto LAB_00e0b476;
    }
    (*(int * PTR32 *)(gen_frame + 0x74)) = piVar7;
    (*(uint *)(gen_frame + 0x6c)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    if ((int)((uint)piVar7 & 0x3fffffff) < (int)piVar4) {
      piVar7 = ((int *)GEN_TOP((((uint)piVar7 & 0x3fffffff) * 2)));
      if ((int)piVar7 <= (int)piVar4) {
        piVar7 = piVar4;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),piVar7,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),4,piVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),(*(int * PTR32 *)(gen_frame + 0x70)));
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    if ((int)(*(int * PTR32 *)(gen_frame + 0x74)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x74));
    }
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x74))) * 4;
    goto LAB_00e0b2bd;
  case (int *)0x2: ;
    if (2 < *(int *)(*(undefined * PTR32 *)&gen_args[0])) {
      piVar7 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
      F_0105aec0(piVar7 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8b)),1,1);
      uVar6 = (uint)(*(byte *)(gen_frame + 0x8b));
      uVar16 = (*(byte *)(gen_frame + 0x8b)) >> 1 & 0x7fffffbf;
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)(uVar6 & 1);
      bVar17 = 6;
      bVar20 = (*(byte *)(gen_frame + 0x8b));
      while ((char)bVar20 < '\0') {
        F_0105aec0(piVar7 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8a)),1,1);
        uVar6 = (uint)(*(byte *)(gen_frame + 0x8a));
        bVar20 = bVar17 & 0x1f;
        bVar17 = bVar17 + 7;
        uVar16 = uVar16 | (uVar6 & 0xffffff7f) << bVar20;
        bVar20 = (*(byte *)(gen_frame + 0x8a));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
        uVar16 = -uVar16;
      }
      if (uVar16 != 4) {
        (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)0x0;
        if ((int)(*(int * PTR32 *)&gen_args[2]) < 1) {
          return uVar6;
        }
        do {
          F_0105aec0(piVar7 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8a)),1,1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((*(byte *)(gen_frame + 0x8a)) & 1);
          uVar6 = (*(byte *)(gen_frame + 0x8a)) >> 1 & 0xffffffbf;
          uVar16 = 0;
          (*(uint *)(gen_frame + 0x60)) = 6;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
          bVar17 = (*(byte *)(gen_frame + 0x8a));
          while ((*(int * PTR32 *)(gen_frame + 0x78)) = piVar4, (bVar17 & 0x80) != 0) {
            F_0105aec0((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8b)),1,1);
            lVar3 = ((ulonglong)(((ulonglong)(byte)(*(uint *)(gen_frame + 0x60)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << (ulonglong)(byte)(*(uint *)(gen_frame + 0x60)))) : 0));
            (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + 7;
            uVar6 = uVar6 | (uint)lVar3;
            uVar16 = uVar16 | (uint)((ulonglong)lVar3 >> 0x20);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
            bVar17 = (*(byte *)(gen_frame + 0x8b));
          }
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
            bVar21 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar16 = -(uVar16 + bVar21);
          }
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x58))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,piVar4,uVar6,uVar16);
          (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)((int)piVar4 + 1);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x84));
        } while ((int)piVar4 + 1 < (int)(*(int * PTR32 *)&gen_args[2]));
        return uVar6;
      }
    }
    uVar6 = F_00e0ab70((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
    return uVar6;
  case (int *)0x3: ;
    iVar18 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
      do {
        uVar6 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x38))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar18,uVar6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)piVar4);
      return uVar6;
    }
    break;
  case (int *)0x4: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG)));
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x24))(piVar7 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x60)) = uVar6;
    ((uint *)(gen_frame + 0x48))[0] = 0;
    ((uint *)(gen_frame + 0x48))[1] = 0;
    (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)0x80000000;
    (*(int *)(gen_frame + 0x58)) = 0x80;
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = *(uint *)((int)pvVar11 + 0xc);
    if ((*(int *)((int)pvVar11 + 8) < 0x80) || (*(uint *)((int)pvVar11 + 0x10) < uVar6 + 0x80)) {
      uVar6 = F_00d94390(pvVar11 GEN_EDX_ARG,0x80);
    }
    else {
      *(uint *)((int)pvVar11 + 0xc) = uVar6 + 0x80;
    }
    uVar16 = (*(uint *)(gen_frame + 0x60));
    ((uint *)(gen_frame + 0x48))[0] = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)0x80000080;
    (*(uint *)(gen_frame + 0x54)) = uVar6;
    F_00e0a0a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x60)),((uint *)(gen_frame + 0x48)));
    uVar6 = 0;
    uVar12 = 0;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(uint *)(gen_frame + 0x68)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0x80000000;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)uVar16;
    if (uVar16 != 0) {
      pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar11 + 0xc);
      uVar12 = uVar16 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar11 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar11 + 0x10) < uVar6 + uVar12)) {
        uVar6 = F_00d94390(pvVar11 GEN_EDX_ARG,uVar12);
        uVar12 = (*(uint *)(gen_frame + 0x68));
      }
      else {
        *(uint *)((int)pvVar11 + 0xc) = uVar6 + uVar12;
        uVar12 = (*(uint *)(gen_frame + 0x68));
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = uVar16 | 0x80000000;
    iVar18 = uVar16 - uVar12;
    (*(uint *)(gen_frame + 0x64)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)uVar6;
    if (0 < iVar18) {
      puVar13 = (undefined4 *)(uVar12 * 0x10 + uVar6 + 8);
      do {
        if (puVar13 != (undefined4 *)0x8) {
          puVar13[-2] = 0;
          puVar13[-1] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
        }
        puVar13 = puVar13 + 4;
        iVar18 = iVar18 - 1;
      } while (iVar18 != 0);
    }
    (*(uint *)(gen_frame + 0x68)) = uVar16;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x64)));
    (*(int *)(gen_frame + 0x5c)) = 0;
    if (0 < (int)uVar16) {
      (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)0x0;
      do {
        puVar13 = (undefined4 *)((*(uint *)(gen_frame + 0x64)) + (int)(*(int * PTR32 *)(gen_frame + 0x78)));
        if (*(char *)(((uint *)(gen_frame + 0x48))[0] + (*(int *)(gen_frame + 0x5c))) != '\0') {
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,*puVar13)));
          (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
          if (piVar7 != (int *)0x0) {
            *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
            piVar7[2] = piVar7[2] + 1;
          }
          piVar7 = (int *)puVar13[2];
          if ((*piVar7 == 9) &&
             ((*(int *)piVar7[1] != 3 ||
              ((((iVar18 = piVar7[2], iVar18 != 4 && (iVar18 != 8)) && (iVar18 != 0xc)) &&
               (iVar18 != 0x10)))))) {
            iVar18 = 0;
            if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
              do {
                puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 100))((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,iVar18)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = puVar13;
                if (puVar13 != (undefined4 *)0x0) {
                  *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
                  puVar13[2] = puVar13[2] + 1;
                }
                uVar6 = F_00e19c70(piVar7 GEN_EDX_ARG);
                F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),(int *)uVar6);
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
                  *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 6) - 1;
                  piVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 2;
                  *piVar4 = *piVar4 - 1;
                  if (*piVar4 == 0) {
                    ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x7c)))((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) GEN_EDX_ARG,1);
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < (int)(*(int * PTR32 *)&gen_args[2]));
            }
          }
          else {
            F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x84)),(*(int * PTR32 *)&gen_args[2]));
          }
          if ((*(int * PTR32 *)(gen_frame + 0x84)) != (int *)0x0) {
            *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x84)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x84)) + 6) - 1;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x84)) + 2;
            *piVar7 = *piVar7 - 1;
            if (*piVar7 == 0) {
              ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x84)))((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,1);
            }
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x78)) = (*(int * PTR32 *)(gen_frame + 0x78)) + 4;
        iVar18 = (*(int *)(gen_frame + 0x5c)) + 1;
        (*(int *)(gen_frame + 0x5c)) = iVar18;
      } while (iVar18 < (int)(*(uint *)(gen_frame + 0x60)));
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x74));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x70));
    if ((*(int * PTR32 *)(gen_frame + 0x70)) == (int *)(*(uint *)(gen_frame + 0x64))) {
      (*(uint *)(gen_frame + 0x68)) = 0;
    }
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = (int)((int)(uintptr_t)piVar4) * 0x10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar11 + 8) < (int)uVar6) ||
        (uVar6 + (int)piVar7 != *(int *)((int)pvVar11 + 0xc))) ||
       ((int *)*(uint *)((int)pvVar11 + 0x14) == piVar7)) {
      F_00d945c0(pvVar11 GEN_EDX_ARG,piVar7,uVar6);
    }
    else {
      *(int * PTR32 *)((int)pvVar11 + 0xc) = piVar7;
    }
    (*(uint *)(gen_frame + 0x68)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x6c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x6c)) << 4);
    }
    iVar18 = (*(int *)(gen_frame + 0x58));
    uVar6 = (*(uint *)(gen_frame + 0x54));
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x54)) == ((uint *)(gen_frame + 0x48))[0]) {
      ((uint *)(gen_frame + 0x48))[1] = 0;
    }
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar16 = iVar18 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar11 + 8) < (int)uVar16) ||
        (uVar16 + uVar6 != *(int *)((int)pvVar11 + 0xc))) ||
       (*(uint *)((int)pvVar11 + 0x14) == uVar6)) {
      F_00d945c0(pvVar11 GEN_EDX_ARG,uVar6,uVar16);
    }
    else {
      *(uint *)((int)pvVar11 + 0xc) = uVar6;
    }
    ((uint *)(gen_frame + 0x48))[1] = 0;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x50));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x50))) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x48))[0],(uint)(*(int * PTR32 *)(gen_frame + 0x50)) & 0x3fffffff);
      return uVar6;
    }
    break;
  case (int *)0x5: ;
    iVar18 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
      do {
        uVar6 = F_00e0b030((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,*(*(undefined4 * PTR32 *)&gen_args[1]),iVar18);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)piVar4);
      return uVar6;
    }
    break;
  case (int *)0x6: ;
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)0x0;
    if (0 < (int)piVar4) {
      do {
        F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8a)),1,1);
        uVar6 = (*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf;
        bVar17 = (*(byte *)(gen_frame + 0x8a)) & 1;
        bVar20 = 6;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c));
        bVar2 = (*(byte *)(gen_frame + 0x8a));
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = puVar13, (char)bVar2 < '\0') {
          F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8b)),1,1);
          bVar2 = bVar20 & 0x1f;
          bVar20 = bVar20 + 7;
          uVar6 = uVar6 | ((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << bVar2;
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c));
          bVar2 = (*(byte *)(gen_frame + 0x8b));
        }
        if (bVar17 != 0) {
          uVar6 = -uVar6;
        }
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,puVar13)));
        (*(int * PTR32 *)(gen_frame + 0x78)) = piVar7;
        if (piVar7 != (int *)0x0) {
          *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
          piVar7[2] = piVar7[2] + 1;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7 GEN_EDX_ARG,uVar6);
        F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x78)),(int *)uVar6);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x78));
        if ((*(int * PTR32 *)(gen_frame + 0x78)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x78)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x78)) + 6) - 1;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x78)) + 2;
          *piVar4 = *piVar4 - 1;
          if (*piVar4 == 0) {
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x78)))((*(int * PTR32 *)(gen_frame + 0x78)) GEN_EDX_ARG,1)));
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((int)puVar13 + 1);
      } while ((int)puVar13 + 1 < (int)(*(int * PTR32 *)&gen_args[2]));
    }
    break;
  case (int *)0x7: ;
    if (*in_ecx != 9) {
      return (uint)piVar7;
    }
    if (*(int *)in_ecx[1] != 3) {
      return 7;
    }
    puVar10 = (undefined1 *)in_ecx[2];
    if ((((puVar10 != &REFG(undefined, 0x4)) && (puVar10 != (undefined1 *)0x8)) &&
        (puVar10 != (undefined1 *)0xc)) && (puVar10 != (undefined1 *)0x10)) {
      return (uint)puVar10;
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x20))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,((uint *)(gen_frame + 0x48)));
    if (uVar6 != 0) {
      puVar10 = (undefined1 *)F_00e19c70(in_ecx GEN_EDX_ARG);
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x80));
      puVar19 = puVar10;
      if (puVar10 == &REFG(undefined, 0x4)) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8a)),1,1);
        puVar10 = (undefined1 *)(uint)(*(byte *)(gen_frame + 0x8a));
        puVar19 = (undefined1 *)((*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf);
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((uint)puVar10 & 1);
        bVar17 = 6;
        bVar20 = (*(byte *)(gen_frame + 0x8a));
        while ((char)bVar20 < '\0') {
          F_0105aec0((undefined *)((int)pvVar5 + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8b)),1,1);
          puVar10 = (undefined1 *)(uint)(*(byte *)(gen_frame + 0x8b));
          bVar20 = bVar17 & 0x1f;
          bVar17 = bVar17 + 7;
          puVar19 = ((undefined1 *)GEN_TOP(((uint)puVar19 | ((uint)puVar10 & 0xffffff7f) << bVar20)));
          bVar20 = (*(byte *)(gen_frame + 0x8b));
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
          puVar19 = ((undefined1 *)GEN_TOP(-(int)puVar19));
        }
      }
      iVar18 = 0;
      if ((int)(*(int * PTR32 *)&gen_args[2]) < 1) {
        return (uint)puVar10;
      }
      (*(int * PTR32 *)(gen_frame + 0x84)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4);
      do {
        F_0105aec0((*(int * PTR32 *)(gen_frame + 0x84)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),4,puVar19);
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x30))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar18,((undefined1 *)(gen_frame + 0x8)));
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)(*(int * PTR32 *)&gen_args[2]));
      return uVar6;
    }
    piVar7 = (int *)F_00e19c70(in_ecx GEN_EDX_ARG);
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x80));
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
    if (piVar7 == (int *)&REFG(undefined, 0x4)) {
      F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8a)),1,1);
      piVar7 = (int *)((*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf);
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((*(byte *)(gen_frame + 0x8a)) & 1);
      bVar17 = 6;
      bVar20 = (*(byte *)(gen_frame + 0x8a));
      while ((char)bVar20 < '\0') {
        F_0105aec0((undefined *)((int)pvVar5 + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x8b)),1,1);
        bVar20 = bVar17 & 0x1f;
        bVar17 = bVar17 + 7;
        piVar7 = ((int *)GEN_TOP(((uint)piVar7 | ((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << bVar20)));
        bVar20 = (*(byte *)(gen_frame + 0x8b));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
        piVar7 = ((int *)GEN_TOP(-(int)piVar7));
      }
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
    piVar7 = (*(int * PTR32 *)&gen_args[2]);
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x78))) * (int)(*(int * PTR32 *)&gen_args[2]);
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if (0 < (int)uVar6) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),((int)uVar6 < 0) - 1 & uVar6,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)uVar6;
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),4,(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x84))) * (int)piVar7);
    if (piVar4 != (*(int * PTR32 *)(gen_frame + 0x84))) {
      iVar18 = 0;
      puVar13 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + (int)((int)piVar7 - 1) * (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x84))) * 4)));
      puVar9 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + ((int)piVar7 - 1) * (int)((int)(uintptr_t)piVar4) * 4)));
      if (3 < (int)piVar7) {
        iVar15 = ((uint)(piVar7 - 1) >> 2) + 1;
        iVar18 = iVar15 * 4;
        puVar8 = puVar9;
        puVar14 = puVar13;
        do {
          puVar8[3] = 0;
          puVar8[2] = puVar14[2];
          puVar13 = puVar14 - 0xc;
          puVar9 = puVar8 - 0x10;
          iVar15 = iVar15 - 1;
          puVar8[1] = puVar14[1];
          uVar1 = *puVar14;
          puVar8[-1] = 0;
          *puVar8 = uVar1;
          puVar8[-2] = puVar14[-1];
          puVar8[-3] = puVar14[-2];
          uVar1 = puVar14[-3];
          puVar8[-5] = 0;
          puVar8[-4] = uVar1;
          puVar8[-6] = puVar14[-4];
          puVar8[-7] = puVar14[-5];
          uVar1 = puVar14[-6];
          puVar8[-9] = 0;
          puVar8[-8] = uVar1;
          puVar8[-10] = puVar14[-7];
          puVar8[-0xb] = puVar14[-8];
          puVar8[-0xc] = puVar14[-9];
          puVar8 = puVar9;
          puVar14 = puVar13;
        } while (iVar15 != 0);
      }
      if (iVar18 < (int)piVar7) {
        iVar18 = (int)piVar7 - iVar18;
        puVar9 = puVar9 + 2;
        puVar13 = puVar13 + 1;
        do {
          puVar9[1] = 0;
          *puVar9 = puVar13[1];
          iVar18 = iVar18 - 1;
          puVar9[-1] = *puVar13;
          puVar9[-2] = puVar13[-1];
          puVar9 = puVar9 - 4;
          puVar13 = puVar13 - 3;
        } while (iVar18 != 0);
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)),piVar7);
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    if ((int)(*(int * PTR32 *)(gen_frame + 0x74)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x74));
    }
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x74))) * 4;
    goto LAB_00e0b2bd;
  }
  return (uint)piVar7;
}

/* ref: FUN_00e0bc80 */
GEN_FRAME uint GEN_THISCALL F_00e0bc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0bc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  longlong lVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  float fVar6;
  int * piVar7;
  code * pcVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar3 = (*(uint *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x64)) = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
  }
  puVar5 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 8);
  piVar7 = (int *)*puVar5;
  if ((piVar7 == (int *)0x9) &&
     ((*(int *)puVar5[1] != 3 ||
      ((((iVar11 = puVar5[2], iVar11 != 4 && (iVar11 != 8)) && (iVar11 != 0xc)) && (iVar11 != 0x10))
      )))) {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]))));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar2;
    uVar3 = F_00e19c70(puVar5 GEN_EDX_ARG);
    uVar3 = F_00e0b1e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[3]),uVar3);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) - 1;
      piVar7 = puVar2 + 2;
      *piVar7 = *piVar7 - 1;
      if (*piVar7 == 0) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    if ((*(int * PTR32 *)(gen_frame + 0x64)) == (int *)0x0) {
      return uVar3;
    }
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) - 1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,1);
    return uVar3;
  }
  if (piVar7 == (int *)0x8) {
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) + 0x2c))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) GEN_EDX_ARG)));
    (*(undefined8 *)(gen_frame + 0x44)) = *(undefined8 *)uVar3;
    (*(int * PTR32 *)(gen_frame + 0x54)) = pvVar4;
    (*(undefined8 *)(gen_frame + 0x4c)) = *(undefined8 *)(uVar3 + 8);
    F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    piVar7 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1)));
    piVar9 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0x7fffffbf)));
    (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
    (*(int *)(gen_frame + 0x60)) = 6;
    if ((int)(*(uint *)&gen_args[3]) < 0) {
      do {
        F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x6b)),1,1);
        iVar11 = (*(int *)(gen_frame + 0x60));
        (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
        piVar9 = ((int *)GEN_TOP(((uint)piVar9 | ((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << ((byte)iVar11 & 0x1f))));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
      } while ((char)(*(byte *)(gen_frame + 0x6b)) < '\0');
    }
    if (piVar7 != (int *)0x0) {
      piVar9 = ((int *)GEN_TOP(-(int)piVar9));
    }
    (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar9;
    uVar3 = F_00e1cd10(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    if ((**(int * PTR32 *)(uVar3 + 4) == 6) && (uVar3 = F_00e19c80(*(int * PTR32 *)(uVar3 + 4) GEN_EDX_ARG), uVar3 == 0)) {
      F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
      uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x58)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1;
      (*(int *)(gen_frame + 0x60)) = 6;
      if ((int)(*(uint *)&gen_args[3]) < 0) {
        do {
          F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x6b)),1,1);
          iVar11 = (*(int *)(gen_frame + 0x60));
          (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
          uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << ((byte)iVar11 & 0x1f);
        } while ((char)(*(byte *)(gen_frame + 0x6b)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x58)) != 0) {
        uVar3 = -uVar3;
      }
      piVar7 = *((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[7] + uVar3 * 4)));
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 8))(piVar7 GEN_EDX_ARG);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x54));
      uVar3 = F_00e1a240((*(int * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar3);
      uVar3 = F_00e1a670(piVar7 GEN_EDX_ARG,uVar3);
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 0)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x4c)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4)),uVar3);
    }
    piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) + 0x14))))
                              (((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[2]),&(*(undefined8 *)(gen_frame + 0x44)))));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
    if (piVar9 != (int *)0x0) {
      *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + 1;
      piVar9[2] = piVar9[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)piVar9;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x5c)));
    uVar3 = F_00e0b1e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[3]),piVar7);
    *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) - 1;
    piVar7 = piVar9 + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 == 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*piVar9)(piVar9 GEN_EDX_ARG,1);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x64)) == (int *)0x0) {
      return uVar3;
    }
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) - 1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar7 = *piVar7 - 1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,1);
    return uVar3;
  }
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case (int *)0x2: ;
    F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    fVar6 = gen_bits2f((*(uint *)&gen_args[3]) >> 0x18);
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x44)));
    goto LAB_00e0c103;
  case (int *)0x3: ;
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(F_00e093a0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x50)));
    fVar6 = gen_bits2f((*(uint *)&gen_args[3]));
    goto LAB_00e0c103;
  case (int *)0x4: ;
    piVar7 = (*(int * PTR32 *)&gen_args[0]) + 1;
    (*(int * PTR32 *)(gen_frame + 0x54)) = piVar7;
    F_0105aec0(piVar7 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0xffffffbf;
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x58)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1;
    (*(int *)(gen_frame + 0x60)) = 6;
    if (((*(uint *)&gen_args[3]) & 0x80000000) != 0) {
      do {
        F_0105aec0(piVar7 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x6b)),1,1);
        lVar1 = ((ulonglong)(((ulonglong)(byte)(*(int *)(gen_frame + 0x60)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << (ulonglong)(byte)(*(int *)(gen_frame + 0x60)))) : 0));
        (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
        uVar3 = uVar3 | (uint)lVar1;
        uVar10 = uVar10 | (uint)((ulonglong)lVar1 >> 0x20);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x54));
      } while (((*(byte *)(gen_frame + 0x6b)) & 0x80) != 0);
    }
    if ((*(uint *)(gen_frame + 0x58)) != 0) {
      bVar12 = uVar3 != 0;
      uVar3 = -uVar3;
      uVar10 = -(uVar10 + bVar12);
    }
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x40))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),uVar3,uVar10)));
    break;
  case (int *)0x5: ;
    fVar6 = gen_bits2f(F_00e09fa0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54)));
LAB_00e0c103: ;
    piVar7 = ((int *)GEN_TOP((*pcVar8)((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(undefined4)gen_fl2bits(fVar6))));
    break;
  case (int *)0x6: ;
    if (1 < *(*(int * PTR32 *)&gen_args[0])) {
      iVar11 = *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
      uVar3 = F_00e19c80(puVar5 GEN_EDX_ARG);
      uVar3 = ((code *)*(gen_code32 *)(iVar11 + 0x24))((*(int * PTR32 *)&gen_args[0])[5],uVar3);
      puVar5 = (undefined4 *)F_00e0c190((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x5c)),3,uVar3);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x5c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),*puVar5);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
      if ((*(int * PTR32 *)(gen_frame + 0x5c)) != (int *)0x0) {
        *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x5c)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x5c)) + 6) - 1;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x5c)) + 2;
        *piVar9 = *piVar9 - 1;
        if (*piVar9 == 0) {
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x5c)))((*(int * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG,1)));
        }
      }
      break;
    }
  case (int *)0x7: ;
    piVar7 = (int *)F_00e0cc30((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    break;
  case (int *)0x9: ;
    if (((piVar7 == (int *)0x9) && (piVar7 = (int *)puVar5[1], *piVar7 == 3)) &&
       ((piVar7 = (int *)puVar5[2], piVar7 == (int *)&REFG(undefined, 0x4) ||
        (((piVar7 == (int *)0x8 || (piVar7 == (int *)0xc)) || (piVar7 == (int *)0x10)))))) {
      uVar3 = F_00e19c70(puVar5 GEN_EDX_ARG);
      iVar11 = 0;
      if (0 < (int)uVar3) {
        do {
          F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1 GEN_EDX_ARG,&(*(uint *)&gen_args[3]),4,1);
          ((uint *)(gen_frame + 0x4))[(int)(iVar11)] = (*(uint *)&gen_args[3]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar3);
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x48))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),((uint *)(gen_frame + 0x4)),uVar3)));
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x64)) != (int *)0x0) {
    piVar7 = (int *)0xffffffff;
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) - 1;
    piVar9 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar9 = *piVar9 - 1;
    if (*piVar9 == 0) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,1)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00e0c150 */
GEN_FRAME uint GEN_THISCALL F_00e0c150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0c150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e0afb0(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00e0c190 */
GEN_FRAME uint GEN_THISCALL F_00e0c190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  undefined * pvVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  uint uVar13;
  byte bVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x254)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
    piVar12 = ((int *)GEN_TOP(((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) >> 1 & 0x7fffffbf)));
    (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) & 1;
    bVar14 = 6;
    if ((int)(*(int * PTR32 *)&gen_args[2]) < 0) {
      do {
        F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x25b)),1,1);
        bVar3 = bVar14 & 0x1f;
        bVar14 = bVar14 + 7;
        piVar12 = ((int *)GEN_TOP(((uint)piVar12 | ((*(byte *)(gen_frame + 0x25b)) & 0xffffff7f) << bVar3)));
      } while ((char)(*(byte *)(gen_frame + 0x25b)) < '\0');
    }
    (*(int * PTR32 *)&gen_args[2]) = piVar12;
    if ((*(uint *)(gen_frame + 0x250)) != 0) {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(-(int)piVar12));
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x254));
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)&REFG(undefined, 0x5)) {
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 4) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
    uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) & 1;
    bVar14 = 6;
    piVar12 = (*(int * PTR32 *)&gen_args[2]);
    while ((int)piVar12 < 0) {
      F_0105aec0((undefined *)((int)pvVar1 + 4) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[3]) + 3,1,1);
      bVar3 = bVar14 & 0x1f;
      bVar14 = bVar14 + 7;
      uVar13 = uVar13 | ((uint)(*(int * PTR32 *)&gen_args[3]) >> 0x18 & 0x7f) << bVar3;
      piVar12 = (*(int * PTR32 *)&gen_args[3]);
    }
    if ((*(uint *)(gen_frame + 0x250)) != 0) {
      uVar13 = -uVar13;
    }
    iVar10 = *((int *)GEN_TOP((*(int *)((int)pvVar1 + 0x38) + uVar13 * 4)));
    *(*(int * PTR32 *)&gen_args[1]) = iVar10;
    if (iVar10 != 0) {
      *(short *)(iVar10 + 6) = *(short *)(iVar10 + 6) + 1;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)&REFG(undefined, 0x6)) {
      *(*(int * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
    piVar12 = (*(int * PTR32 *)&gen_args[3]);
    if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
      F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 4) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[3]) + 3,1,1);
      uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3)))) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3)))) & 1;
      bVar14 = 6;
      if ((int)(*(int * PTR32 *)&gen_args[3]) < 0) {
        do {
          F_0105aec0((undefined *)((int)pvVar1 + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x25b)),1,1);
          bVar3 = bVar14 & 0x1f;
          bVar14 = bVar14 + 7;
          uVar13 = uVar13 | ((*(byte *)(gen_frame + 0x25b)) & 0xffffff7f) << bVar3;
        } while ((char)(*(byte *)(gen_frame + 0x25b)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x250)) != 0) {
        uVar13 = -uVar13;
      }
      piVar12 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar1 + 0x1c) + uVar13 * 4)));
    }
    piVar4 = (*(int * PTR32 *)&gen_args[2]);
    (*(int * PTR32 *)(gen_frame + 0x210)) = piVar12;
    uVar13 = ((GEN_TCODE *)*(gen_code32 *)(*piVar12 + 0x24))(piVar12 GEN_EDX_ARG);
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x14) + 0x10))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x14) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x210)),0)));
    if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
      (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
    }
    if (piVar4 != (int *)0x3) {
      if (piVar4 == (int *)&REFG(undefined, 0x4)) {
        (*(int * PTR32 *)&gen_args[3]) = *(int * PTR32 *)((int)pvVar1 + 0x3c);
        if (*(uint *)((int)pvVar1 + 0x3c) == (*(uint *)((int)pvVar1 + 0x40) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)pvVar1 + 0x38),4);
        }
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x254));
        *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar1 + 0x38) + *(int *)((int)pvVar1 + 0x3c) * 4))) = (*(int * PTR32 *)&gen_args[2]);
        *(int *)((int)pvVar1 + 0x3c) = *(int *)((int)pvVar1 + 0x3c) + 1;
        (*(int * PTR32 *)&gen_args[3]) = (int *)F_00dbd930((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 0x44) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]));
        if ((int)(*(int * PTR32 *)&gen_args[3]) <= *(int *)((int)pvVar5 + 0x4c)) {
          pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar5 + 0x44) + 4 + (int)(*(int * PTR32 *)&gen_args[3]) * 8)));
          F_00e09780(pvVar1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]));
          if (pvVar1 != (undefined *)0x0) {
            F_00e0afb0(pvVar1 GEN_EDX_ARG);
            pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar7 + 0x2c) + 8))))
                      (*(int * PTR32 *)((int)pvVar7 + 0x2c) GEN_EDX_ARG,pvVar1,0x18);
          }
          F_00dbd9f0((undefined *)((int)pvVar5 + 0x44) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[3]));
        }
      }
      else {
        F_00da0a80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG,"corrupt file");
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x484994d5,((undefined1 *)(gen_frame + 0x4)),
                           "Tagfile\\Binary\\hkBinaryTagfileReader.cpp",0x28a);
        if (uVar6 != 0) {
          pcVar2 = ((code *)GEN_TOP(swi(3)));
          uVar13 = (*pcVar2)();
          return uVar13;
        }
        F_00d9fda0(((undefined1 *)(gen_frame + 0x204)) GEN_EDX_ARG);
      }
    }
    ((uint *)(gen_frame + 0x214))[0] = 0;
    ((uint *)(gen_frame + 0x214))[1] = 0;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000000;
    (*(int *)(gen_frame + 0x224)) = 0x80;
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = *(uint *)((int)pvVar7 + 0xc);
    if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < uVar6 + 0x80)) {
      uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,0x80);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar6 + 0x80;
    }
    ((uint *)(gen_frame + 0x214))[0] = uVar6;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000080;
    ((uint *)(gen_frame + 0x214))[3] = uVar6;
    F_00e0a0a0((*(undefined * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG,uVar13,((uint *)(gen_frame + 0x214)));
    uVar6 = 0;
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x23c)) = 0;
    (*(uint *)(gen_frame + 0x240)) = 0;
    (*(uint *)(gen_frame + 0x244)) = 0x80000000;
    (*(uint *)(gen_frame + 0x24c)) = uVar13;
    if (uVar13 != 0) {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar7 + 0xc);
      uVar8 = uVar13 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar8) ||
         (*(uint *)((int)pvVar7 + 0x10) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,uVar8);
        uVar8 = (*(uint *)(gen_frame + 0x240));
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar6 + uVar8;
        uVar8 = (*(uint *)(gen_frame + 0x240));
      }
    }
    iVar10 = uVar13 - uVar8;
    (*(uint *)(gen_frame + 0x23c)) = uVar6;
    (*(uint *)(gen_frame + 0x244)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x248)) = uVar6;
    if (0 < iVar10) {
      puVar9 = (undefined4 *)(uVar8 * 0x10 + uVar6 + 8);
      do {
        if (puVar9 != (undefined4 *)0x8) {
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        puVar9 = puVar9 + 4;
        iVar10 = iVar10 - 1;
      } while (iVar10 != 0);
    }
    (*(uint *)(gen_frame + 0x240)) = uVar13;
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x210)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x210)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x23c)));
    (*(uint *)(gen_frame + 0x228)) = 0;
    (*(uint *)(gen_frame + 0x22c)) = 0;
    (*(uint *)(gen_frame + 0x230)) = 0x80000000;
    (*(uint *)(gen_frame + 0x238)) = uVar13;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar7 + 0xc);
      uVar8 = uVar13 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar8) ||
         (*(uint *)((int)pvVar7 + 0x10) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7 GEN_EDX_ARG,uVar8);
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar6 + uVar8;
      }
    }
    (*(uint *)(gen_frame + 0x228)) = uVar6;
    (*(uint *)(gen_frame + 0x234)) = uVar6;
    (*(uint *)(gen_frame + 0x230)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x22c)) = uVar13;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x74))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x228)));
    iVar10 = 0;
    if (0 < (int)uVar13) {
      iVar11 = 0;
      do {
        if (*(char *)(((uint *)(gen_frame + 0x214))[0] + iVar10) != '\0') {
          F_00e0bc80((*(undefined * PTR32 *)(gen_frame + 0x254)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]),*(undefined4 *)((*(uint *)(gen_frame + 0x228)) + iVar10 * 4),iVar11 + (*(uint *)(gen_frame + 0x23c)));
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar10 < (int)uVar13);
    }
    uVar6 = (*(uint *)(gen_frame + 0x238));
    uVar13 = (*(uint *)(gen_frame + 0x234));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[2]);
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
    if ((*(uint *)(gen_frame + 0x234)) == (*(uint *)(gen_frame + 0x228))) {
      (*(uint *)(gen_frame + 0x22c)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    (*(uint *)(gen_frame + 0x22c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x230))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x228)),(*(uint *)(gen_frame + 0x230)) * 4);
    }
    uVar6 = (*(uint *)(gen_frame + 0x24c));
    uVar13 = (*(uint *)(gen_frame + 0x248));
    (*(uint *)(gen_frame + 0x228)) = 0;
    (*(uint *)(gen_frame + 0x230)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x248)) == (*(uint *)(gen_frame + 0x23c))) {
      (*(uint *)(gen_frame + 0x240)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 0x10 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    (*(uint *)(gen_frame + 0x240)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x244))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x23c)),(*(uint *)(gen_frame + 0x244)) << 4);
    }
    iVar10 = (*(int *)(gen_frame + 0x224));
    uVar13 = ((uint *)(gen_frame + 0x214))[3];
    (*(uint *)(gen_frame + 0x23c)) = 0;
    (*(uint *)(gen_frame + 0x244)) = 0x80000000;
    if (((uint *)(gen_frame + 0x214))[3] == ((uint *)(gen_frame + 0x214))[0]) {
      ((uint *)(gen_frame + 0x214))[1] = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = iVar10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7 GEN_EDX_ARG,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    ((uint *)(gen_frame + 0x214))[1] = 0;
    if (-1 < (int)((uint *)(gen_frame + 0x214))[2]) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x214))[0],((uint *)(gen_frame + 0x214))[2] & 0x3fffffff);
    }
    ((uint *)(gen_frame + 0x214))[0] = 0;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000000;
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) - 1;
    piVar12 = (*(int * PTR32 *)&gen_args[2]) + 2;
    *piVar12 = *piVar12 - 1;
    if (*piVar12 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,1);
    }
  }
  return (uint)(*(int * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e0c7b0 */
GEN_FRAME uint GEN_THISCALL F_00e0c7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  uint * this_00;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  undefined * pvVar5;
  byte bVar6;
  uint uVar7;
  
  pvVar5 = (undefined *)((int)this + 4);
  (*(uint * PTR32 *)(gen_frame + 0x21c)) = this;
  F_0105aec0(pvVar5 GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x218)),4,1);
  F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x224)),4,1);
  if (((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0xcab00d1e) || ((*(uint *)(gen_frame + 0x224)) != 0xd011face)) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,"This does not look like a binary tagfile (magic number mismatch)");
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x2ab6036f,((undefined1 *)(gen_frame + 0xc)),"Tagfile\\Binary\\hkBinaryTagfileReader.cpp",
               0x2e4);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
    *param_1 = 0;
    return (uint)param_1;
  }
  F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x22a)),1,1);
  uVar7 = (*(byte *)(gen_frame + 0x22a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x22a)) & 1;
  bVar6 = 6;
  bVar3 = (*(byte *)(gen_frame + 0x22a));
  while ((char)bVar3 < '\0') {
    F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x22b)),1,1);
    bVar3 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x22b)) & 0xffffff7f) << bVar3;
    bVar3 = (*(byte *)(gen_frame + 0x22b));
  }
  if ((*(uint *)(gen_frame + 0x224)) != 0) {
    uVar7 = -uVar7;
  }
  if (uVar7 != 0xffffffff) {
    do {
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
      switch((unsigned int)(uintptr_t)(uVar7)) {
      case 1: ;
        F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x22b)),1,1);
        uVar7 = (*(byte *)(gen_frame + 0x22b)) >> 1 & 0x7fffffbf;
        (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x22b)) & 1;
        bVar6 = 6;
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
        bVar3 = (*(byte *)(gen_frame + 0x22b));
        while ((*(uint * PTR32 *)(gen_frame + 0x21c)) = puVar4, (char)bVar3 < '\0') {
          F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x22a)),1,1);
          bVar3 = bVar6 & 0x1f;
          bVar6 = bVar6 + 7;
          uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x22a)) & 0xffffff7f) << bVar3;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
          bVar3 = (*(byte *)(gen_frame + 0x22a));
        }
        if ((*(uint *)(gen_frame + 0x224)) != 0) {
          uVar7 = -uVar7;
        }
        *puVar4 = uVar7;
        switch((unsigned int)(uintptr_t)(uVar7)) {
        case 0: ;
          break;
        case 1: ;
          F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x222)),1,1);
          uVar7 = (*(byte *)(gen_frame + 0x222)) >> 1 & 0x7fffffbf;
          (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x222)) & 1;
          bVar6 = 6;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
          bVar3 = (*(byte *)(gen_frame + 0x222));
          while ((*(uint * PTR32 *)(gen_frame + 0x21c)) = puVar4, (char)bVar3 < '\0') {
            F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x220)),1,1);
            bVar3 = bVar6 & 0x1f;
            bVar6 = bVar6 + 7;
            uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x220)) & 0xffffff7f) << bVar3;
            puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
            bVar3 = (*(byte *)(gen_frame + 0x220));
          }
          if ((*(uint *)(gen_frame + 0x224)) != 0) {
            uVar7 = -uVar7;
          }
          if (uVar7 != 1) goto switchD_00e0c87f_caseD_5;
          this_00 = puVar4 + 10;
          puVar4[0xb] = 0;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *(undefined1 * PTR32 *)(*this_00 + puVar4[0xb] * 4) = &REFG(undefined1, 0x107fc63);
          puVar4[0xb] = puVar4[0xb] + 1;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *(undefined4 *)(*this_00 + puVar4[0xb] * 4) = 0;
          puVar4[0xb] = puVar4[0xb] + 1;
          F_00e09a40(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined * PTR32, 0x1354f18),0x6d8);
          puVar4[0xd] = 0x6da;
          break;
        case 2: ;
        case 3: ;
          if (puVar4[0xf] == (puVar4[0x10] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar4 + 0xe,4);
          }
          *(undefined4 *)(puVar4[0xe] + puVar4[0xf] * 4) = 0;
          puVar4[0xf] = puVar4[0xf] + 1;
          break;
        default: ;
          F_00da0a80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
          uVar7 = *puVar4;
          pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,"Unrecognised tagfile version ");
          F_00d9ff40(pvVar5 GEN_EDX_ARG,uVar7);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x2ab6036f,((undefined1 *)(gen_frame + 0xc)),
                     "Tagfile\\Binary\\hkBinaryTagfileReader.cpp",0x313);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
          goto switchD_00e0c87f_caseD_5;
        }
        break;
      case 2: ;
        uVar7 = F_00e0abd0((*(uint * PTR32 *)(gen_frame + 0x21c)) GEN_EDX_ARG);
        if (uVar7 == 1) goto switchD_00e0c87f_caseD_5;
        break;
      case 3: ;
      case 4: ;
      case 6: ;
        F_00e0c190((*(uint * PTR32 *)(gen_frame + 0x21c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x218)),uVar7,0);
        if ((int)*puVar4 < 2) {
          *param_1 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x218));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) + 1;
            (*(undefined4 * PTR32 *)(gen_frame + 0x218))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x218))[2] + 1;
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x218)))((*(undefined4 * PTR32 *)(gen_frame + 0x218)) GEN_EDX_ARG,1);
            }
          }
          return (uint)param_1;
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) - 1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x218)))((*(undefined4 * PTR32 *)(gen_frame + 0x218)) GEN_EDX_ARG,1);
          }
        }
        break;
      default: ;
        goto switchD_00e0c87f_caseD_5;
      case 7: ;
        iVar2 = *(int *)((*(uint * PTR32 *)(gen_frame + 0x21c))[0xe] + 4);
        *param_1 = iVar2;
        if (iVar2 == 0) {
          return (uint)param_1;
        }
        *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        return (uint)param_1;
      }
      F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x221)),1,1);
      uVar7 = (*(byte *)(gen_frame + 0x221)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x221)) & 1;
      bVar6 = 6;
      bVar3 = (*(byte *)(gen_frame + 0x221));
      while ((char)bVar3 < '\0') {
        F_0105aec0(pvVar5 GEN_EDX_ARG,&(*(byte *)(gen_frame + 0x223)),1,1);
        bVar3 = bVar6 & 0x1f;
        bVar6 = bVar6 + 7;
        uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x223)) & 0xffffff7f) << bVar3;
        bVar3 = (*(byte *)(gen_frame + 0x223));
      }
      if ((*(uint *)(gen_frame + 0x224)) != 0) {
        uVar7 = -uVar7;
      }
      if (uVar7 == 0xffffffff) {
        *param_1 = 0;
        return (uint)param_1;
      }
    } while( true );
  }
switchD_00e0c87f_caseD_5: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e0cc30 */
GEN_FRAME uint GEN_THISCALL F_00e0cc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  byte bVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  byte bVar8;
  
  iVar3 = *(int *)this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = this;
  if (iVar3 < 2) {
    F_00e0c190(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),0,0);
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_ARG,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
    if (puVar6 != (undefined4 *)0x0) {
      uVar7 = 0xffffffff;
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) - 1;
      piVar1 = puVar6 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
        return uVar7;
      }
    }
  }
  else {
    F_0105aec0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar7 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x4)) = (*(byte *)(gen_frame + 0xb)) & 1;
    bVar8 = 6;
    bVar4 = (*(byte *)(gen_frame + 0xb));
    while ((char)bVar4 < '\0') {
      F_0105aec0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(byte *)(gen_frame + 0xa)),1,1);
      bVar4 = bVar8 & 0x1f;
      bVar8 = bVar8 + 7;
      uVar7 = uVar7 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar4;
      bVar4 = (*(byte *)(gen_frame + 0xa));
    }
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      uVar7 = -uVar7;
    }
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xf] <= (int)uVar7) {
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x11;
      uVar7 = F_00dbe3b0(piVar1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar7,0);
      puVar6 = *(undefined4 * PTR32 *)(*piVar1 + 4 + uVar7 * 8);
      if (puVar6 == (undefined4 *)0x0) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar5 + 0x2c) GEN_EDX_ARG,0x18)));
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0x80000000;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0x80000000;
        }
        *(undefined4 * PTR32 *)(*piVar1 + 4 + uVar7 * 8) = puVar6;
      }
      if (puVar6[4] == (puVar6[5] & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar6 + 3,8);
      }
      puVar2 = (undefined4 *)(puVar6[3] + puVar6[4] * 8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_1;
        puVar2[1] = param_2;
      }
      puVar6[4] = puVar6[4] + 1;
      return (uint)puVar2;
    }
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))
                      (param_1 GEN_EDX_ARG,param_2,*(undefined4 *)((*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xe] + uVar7 * 4));
  }
  return uVar7;
}

/* ref: FUN_00e0cde0 */
GEN_FRAME uint GEN_THISCALL F_00e0cde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0cde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,*(undefined4 *)((int)this + 4),*param_1);
  return uVar1;
}

/* ref: FUN_00e0ce10 */
GEN_FRAME uint GEN_THISCALL F_00e0ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (uint)(*(int *)this == *param_1);
}

/* ref: FUN_00e0ce40 */
GEN_FRAME uint GEN_THISCALL F_00e0ce40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0ce70 */
GEN_FRAME uint GEN_THISCALL F_00e0ce70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
  *(undefined4 *)((int)this + 8) = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0ceb0 */
GEN_FRAME uint F_00e0ceb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  if ((uVar4 != 8) && (uVar4 != 9)) {
    if (uVar4 == 5) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        do {
          uVar4 = F_00da11e0(param_2[iVar5 * 2]);
          param_2[iVar5 * 2] = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else if (uVar4 == 6) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        uVar4 = 0;
        do {
          piVar3 = (int *)param_2[iVar5 * 2];
          param_2[iVar5 * 2] = 0;
          if (piVar3 != (int *)0x0) {
            if (param_4 != 0) {
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG);
            }
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)*piVar3)(piVar3 GEN_EDX_ARG,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else {
      uVar4 = uVar4 - 7;
      if ((uVar4 == 0) && (iVar5 = 0, 0 < param_3)) {
        do {
          puVar2 = (undefined4 *)param_2[iVar5 * 2];
          param_2[iVar5 * 2] = 0;
          if (puVar2 != (undefined4 *)0x0) {
            piVar3 = puVar2 + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
      }
    }
    return uVar4;
  }
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 2;
    *piVar3 = *piVar3 - 1;
    if (*piVar3 == 0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  *param_2 = 0;
  return uVar4;
}

/* ref: FUN_00e0cfa0 */
GEN_FRAME uint GEN_THISCALL F_00e0cfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e0ceb0(param_1,this,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0cfd0 */
GEN_FRAME uint GEN_THISCALL F_00e0cfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00e0d010 */
GEN_FRAME uint GEN_THISCALL F_00e0d010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00e0d020 */
GEN_FRAME uint GEN_THISCALL F_00e0d020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00e0d060 */
GEN_FRAME uint GEN_THISCALL F_00e0d060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return (uint)this;
}

/* ref: ArrayOfTuplesImplementation::View::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  return *(uint *)(uVar1 + 4);
}

/* ref: ArrayOfTuplesImplementation::View::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))
                    (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * in_ecx;
  uint uVar2;
  
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  if (*in_ecx == 6) {
    iVar1 = **((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    uVar2 = F_00e19c80(in_ecx GEN_EDX_ARG);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  uVar1 = F_00e19c70(uVar1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf35 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0d140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 (uint)*(byte *)(iVar1 + param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf28 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0d180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x40))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 *(undefined4 *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf32 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0d1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + iVar1,
                 *(undefined4 *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: ArrayOfTuplesImplementation::View::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: ArrayOfTuplesImplementation::View::vf11 */
GEN_FRAME uint GEN_THISCALL F_00e0d210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf12 */
GEN_FRAME uint GEN_THISCALL F_00e0d230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x30))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf13 */
GEN_FRAME uint GEN_THISCALL F_00e0d260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf14 */
GEN_FRAME uint GEN_THISCALL F_00e0d280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf15 */
GEN_FRAME uint GEN_THISCALL F_00e0d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x3c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf16 */
GEN_FRAME uint GEN_THISCALL F_00e0d2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe0d2d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x10)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))
                    (piVar1 GEN_EDX_ARG,*(int *)(param_1 + 0x10) + param_2,(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: ArrayOfTuplesImplementation::View::vf19 */
GEN_FRAME uint GEN_THISCALL F_00e0d300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x4c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf20 */
GEN_FRAME uint GEN_THISCALL F_00e0d320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf21 */
GEN_FRAME uint GEN_THISCALL F_00e0d350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x54))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf22 */
GEN_FRAME uint GEN_THISCALL F_00e0d370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x58))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2,
                     param_3);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf23 */
GEN_FRAME uint GEN_THISCALL F_00e0d3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x5c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf24 */
GEN_FRAME uint GEN_THISCALL F_00e0d3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x60))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf25 */
GEN_FRAME uint GEN_THISCALL F_00e0d3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 100))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf26 */
GEN_FRAME uint GEN_THISCALL F_00e0d410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x68))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) GEN_EDX_ARG,*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: FUN_00e0d440 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0d440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return;
}

/* ref: FUN_00e0d480 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0d480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return;
}

/* ref: ArrayOfTuplesImplementation::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_FWD);
  uVar2 = *(undefined4 *)(this + 0x14);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x2c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG)));
  uVar1 = F_00e1a6a0(this_00 GEN_EDX_ARG,uVar1,uVar2);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: ArrayOfTuplesImplementation::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * in_ecx;
  uint uVar3;
  
  in_ecx = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD)));
  if (*in_ecx == 6) {
    piVar1 = *(int * PTR32 *)(this + 0xc);
    iVar2 = *piVar1;
    uVar3 = F_00e19c80(in_ecx GEN_EDX_ARG);
    uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x24))(piVar1,uVar3);
    return uVar3;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 8))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e0d530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e0d550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                    (*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0d570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_FWD);
  return (int)uVar1 / *(int *)(this + 0x14);
}

/* ref: ArrayOfTuplesImplementation::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00e0d590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkDataWorldDict::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e0d5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x30)));
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf10 */
GEN_FRAME uint GEN_THISCALL F_00e0d620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf14 */
GEN_FRAME uint GEN_THISCALL F_00e0d650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*param_1 + 0x14) = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e0d670 */
GEN_FRAME uint F_00e0d670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d670u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 <= *(int *)(in_eax + 0x10)) {
    return *(uint *)(in_eax + 0xc);
  }
  return 0;
}

/* ref: hkDataWorldDict::vf6 */
GEN_FRAME uint GEN_THISCALL F_00e0d690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e0d6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))) GEN_EDX_FWD,param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf17 */
GEN_FRAME uint GEN_THISCALL F_00e0d6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *param_1;
  iVar3 = *(int *)(this + 8);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar3 + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar3 + 0x50) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  iVar3 = *(int *)(iVar1 + 0x2c) - 1;
  if (-1 < iVar3) {
    puVar4 = ((uint *)GEN_TOP((*(int *)(iVar1 + 0x28) + iVar3 * 0x18)));
    do {
      if (*puVar4 == uVar2) goto LAB_00e0d732;
      puVar4 = puVar4 - 6;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = -1;
LAB_00e0d732: ;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x28) + 0x14 + iVar3 * 0x18))) = param_3;
  return iVar3 * 3;
}

/* ref: hkDataWorldDict::vf12 */
GEN_FRAME uint GEN_THISCALL F_00e0d750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1 GEN_EDX_FWD);
  iVar1 = *(int *)(this + 8);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar1 + 0x50) GEN_EDX_ARG,uVar2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(uVar2);
      F_00da3a20((undefined *)(iVar1 + 0x50) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  F_00e1a550(this + 0x10 GEN_EDX_ARG,uVar3,param_2);
  uVar2 = F_00e12420(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar3,param_2);
  return uVar2;
}

/* ref: hkDataWorldDict::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e0d7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e14d90(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkDataWorldDict::vf16 */
GEN_FRAME uint GEN_THISCALL F_00e0d7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe0d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint * puVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  iVar2 = *(int *)(this + 8);
  this_00 = (int *)*param_1;
  if (param_2 == 0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)F_00da4190((undefined *)(iVar2 + 0x50) GEN_EDX_FWD,param_2,0);
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar2 + 0x50) GEN_EDX_ARG,param_1,param_1);
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x20))(this_00 GEN_EDX_ARG,param_2);
  if (uVar3 != 0xffffffff) {
    F_00e13930(this_00 GEN_EDX_ARG,param_1);
  }
  if (this_00[0xb] == (this_00[0xc] & 0x3fffffffU)) {
    F_00d95710(*(undefined4 *)(this_00[3] + 0xc),this_00 + 10,0x18);
  }
  puVar1 = (uint *)(this_00[10] + this_00[0xb] * 0x18);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uint)param_1;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
  }
  this_00[0xb] = this_00[0xb] + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldDict::vf18 */
GEN_FRAME uint GEN_THISCALL F_00e0d8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x24)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar8 + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar8 + 0x50) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar8 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = param_3;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar8 + 0x50) GEN_EDX_ARG,param_3,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_3);
      F_00da3a20((undefined *)(iVar8 + 0x50) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_3 = uVar3;
  piVar1 = (int *)*param_1;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x10)) = 0;
  F_00e14e20(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8) GEN_EDX_ARG,uVar3,1,0,&(*(int *)(gen_frame + 0xc)));
  iVar8 = (*(int *)(gen_frame + 0x24));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar2 = *(int *)((*(int *)(gen_frame + 0xc)) + iVar9 * 4);
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar4 = 0;
      if (0 < iVar5) {
        puVar6 = *(uint * PTR32 *)(iVar2 + 0x10);
        puVar7 = puVar6;
        do {
          if (*puVar7 == param_2) {
            puVar6[iVar4 * 4] = param_3;
            break;
          }
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar4 < iVar5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(gen_frame + 0x10)));
  }
  this_00 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = ((int)0x80000000);
  F_00e14c90(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x24)),1,&(*(int *)(gen_frame + 0x18)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x1c))) {
    do {
      iVar8 = *(int *)((*(int *)(gen_frame + 0x18)) + iVar9 * 4);
      iVar2 = *(int *)(iVar8 + 0x10);
      iVar5 = 0;
      if (0 < iVar2) {
        puVar6 = *(uint * PTR32 *)(iVar8 + 0xc);
        do {
          if (*puVar6 == param_2) {
            *puVar6 = param_3;
            break;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar5 < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar8 = (*(int *)(gen_frame + 0x24));
    } while (iVar9 < (*(int *)(gen_frame + 0x1c)));
  }
  iVar9 = *(int *)(iVar8 + 0x2c) - 1;
  if (-1 < iVar9) {
    puVar6 = ((uint *)GEN_TOP((*(int *)(iVar8 + 0x28) + iVar9 * 0x18)));
    do {
      if (*puVar6 == param_2) goto LAB_00e0da12;
      iVar9 = iVar9 - 1;
      puVar6 = puVar6 - 6;
    } while (-1 < iVar9);
  }
  iVar9 = -1;
LAB_00e0da12: ;
  *((uint *)GEN_TOP((*(int *)(iVar8 + 0x28) + iVar9 * 0x18))) = param_3;
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) * 4);
  }
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf19 */
GEN_FRAME uint GEN_THISCALL F_00e0da90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0da90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(this + 8);
  (*(int *)(gen_frame + 0x18)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar7 + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar7 + 0x50) GEN_EDX_ARG,uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar7 = 0;
  piVar1 = (int *)*param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00e14e20(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar3,1,0,&(*(int *)(gen_frame + 0x0)));
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      F_00e13c60(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x0)) + iVar7 * 4) GEN_EDX_ARG,param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x4)));
  }
  iVar7 = (*(int *)(gen_frame + 0x18));
  this_00 = *(undefined * PTR32 *)(this + 8);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  F_00e14c90(this_00 GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),1,&(*(int *)(gen_frame + 0xc)));
  param_1 = (int *)0x0;
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar5 = *(int *)((*(int *)(gen_frame + 0xc)) + (int)((int)(uintptr_t)param_1) * 4);
      iVar8 = 0;
      if (0 < *(int *)(iVar5 + 0x10)) {
        puVar4 = *(uint * PTR32 *)(iVar5 + 0xc);
        do {
          if (*puVar4 == param_2) {
            puVar6 = (undefined4 *)puVar4[1];
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
            }
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) - 1;
            iVar2 = (*(int *)(iVar5 + 0x10) - iVar8) * 8;
            puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0xc) + iVar8 * 8)));
            if (0 < iVar2) {
              iVar5 = (iVar2 - 1U >> 2) + 1;
              do {
                *puVar6 = puVar6[2];
                puVar6 = puVar6 + 1;
                iVar5 = iVar5 - 1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar8 < *(int *)(iVar5 + 0x10));
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < (*(int *)(gen_frame + 0x10)));
  }
  iVar5 = *(int *)(iVar7 + 0x2c) - 1;
  if (-1 < iVar5) {
    puVar4 = ((uint *)GEN_TOP((*(int *)(iVar7 + 0x28) + iVar5 * 0x18)));
    do {
      if (*puVar4 == param_2) goto LAB_00e0dbe8;
      puVar4 = puVar4 - 6;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = -1;
LAB_00e0dbe8: ;
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) - 1;
  iVar8 = (*(int *)(iVar7 + 0x2c) - iVar5) * 0x18;
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x28) + iVar5 * 0x18)));
  if (0 < iVar8) {
    iVar5 = (iVar8 - 1U >> 3) + 1;
    do {
      *puVar6 = puVar6[6];
      puVar6[1] = puVar6[7];
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  do {
    iVar5 = 0;
    if (0 < *(int *)(iVar7 + 0x2c)) {
      puVar4 = *(uint * PTR32 *)(iVar7 + 0x28);
      do {
        if (*puVar4 == param_2) goto LAB_00e0dc48;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 6;
      } while (iVar5 < *(int *)(iVar7 + 0x2c));
    }
    iVar7 = *(int *)(iVar7 + 0x18);
  } while (iVar7 != 0);
LAB_00e0dc48: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf21 */
GEN_FRAME uint GEN_THISCALL F_00e0dcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = F_00e14e20(this_00 GEN_EDX_FWD,param_1,0,1,param_2);
  return uVar1;
}

/* ref: hkDataWorldDict::vf20 */
GEN_FRAME uint GEN_THISCALL F_00e0dce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = F_00e14e20(this_00 GEN_EDX_FWD,param_1,1,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0dd10 */
GEN_FRAME uint F_00e0dd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dd10u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 in_ecx;
  int * piVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 2: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14220(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 3: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14390(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 4: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x30)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x30;
    uVar4 = F_00e0ff60(pvVar3 GEN_EDX_ARG,param_1);
    return uVar4;
  case 5: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14670(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 6: ;
    iVar6 = *param_1;
    uVar4 = F_00e19c80(param_2 GEN_EDX_ARG);
    uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0x24))(param_1,uVar4);
    if (uVar4 != 0) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x28)));
      *(undefined2 *)((int)pvVar3 + 4) = 0x28;
      uVar4 = F_00e153f0(pvVar3 GEN_EDX_ARG,param_1,param_2,uVar4,param_3);
      return uVar4;
    }
    break;
  case 7: ;
    in_ecx = param_2[1];
    uVar4 = F_00e19c80(in_ecx GEN_EDX_ARG);
    if (uVar4 != 0) {
      iVar6 = *param_1;
      uVar4 = F_00e19c80(in_ecx GEN_EDX_ARG);
      uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0x24))(param_1,uVar4);
      if (uVar4 == 0) {
        return 0;
      }
    }
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e144e0(pvVar3 GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  case 8: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    piVar1 = (int *)F_00e147e0(pvVar3 GEN_EDX_ARG,param_1,param_2);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG,param_3);
    iVar6 = 0;
    if (0 < param_3) {
      do {
        uVar4 = F_00e0dd10(param_1,(undefined4 *)param_2[1],0);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_ARG,iVar6,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
    }
    return (uint)piVar1;
  case 9: ;
    if (*(int *)param_2[1] == 3) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
      *(undefined2 *)((int)pvVar3 + 4) = 0x20;
      uVar4 = F_00e10660(pvVar3 GEN_EDX_ARG,param_1,param_2);
      return uVar4;
    }
    uVar4 = F_00e0dd10(param_1,(int *)param_2[1],0);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x1c)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x1c;
    uVar5 = F_00e19c70(param_2 GEN_EDX_ARG);
    uVar4 = F_00e0d020(pvVar3 GEN_EDX_ARG,param_1,uVar4,uVar5);
    return uVar4;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e0dfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  piVar1 = *(int * PTR32 *)(param_3 + 8);
  if (*piVar1 == 9) {
    uVar2 = F_00e19c70(piVar1 GEN_EDX_FWD);
  }
  else {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)F_00e0dd10(this,piVar1[1],uVar2);
  piVar1 = (int *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
    puVar3[2] = puVar3[2] + 1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1 GEN_EDX_ARG,param_2,puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) - 1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00e0e030 */
GEN_FRAME uint GEN_THISCALL F_00e0e030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0e030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  undefined4 uVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char * pcVar13;
  char * pcVar14;
  
  uVar4 = *(uint *)((int)this + 0x38);
  (*(undefined * PTR32 *)(gen_frame + 0x254)) = this;
  (*(uint *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x244)) = 0;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x250)) = uVar4;
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *(uint *)((int)pvVar3 + 0xc);
    uVar10 = uVar4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar10) ||
       (*(uint *)((int)pvVar3 + 0x10) < uVar10 + uVar5)) {
      uVar5 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar10);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar10 + uVar5;
    }
  }
  uVar10 = *(uint *)((int)this + 8);
  (*(uint *)(gen_frame + 0x240)) = uVar5;
  (*(uint *)(gen_frame + 0x248)) = uVar4 | 0x80000000;
  (*(uint *)(gen_frame + 0x24c)) = uVar5;
  (*(uint *)(gen_frame + 0x220)) = uVar10;
  (*(int *)(gen_frame + 0x228)) = 0;
  if (uVar10 == 0) {
    (*(uint *)(gen_frame + 0x224)) = 0;
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *(uint *)((int)pvVar3 + 0xc);
    uVar11 = uVar10 * 4 + 0x7f & 0xffffff80;
    uVar4 = uVar11 + uVar5;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar11) || (*(uint *)((int)pvVar3 + 0x10) < uVar4)) {
      uVar4 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar11);
      (*(uint *)(gen_frame + 0x224)) = uVar4;
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar4;
      (*(uint *)(gen_frame + 0x224)) = uVar5;
    }
  }
  (*(uint *)(gen_frame + 0x22c)) = uVar10 | 0x80000000;
  (*(undefined4 * PTR32 *)(gen_frame + 0x218)) = (undefined4 *)((int)this + 0x14);
  F_00e12fa0((undefined4 *)((int)this + 0x14) GEN_EDX_ARG);
  pvVar7 = (undefined *)((int)this + 4);
  *(undefined4 *)((int)this + 0x30) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x238)) = pvVar7;
  uVar4 = F_00da3970(pvVar7 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x23c)) = uVar4;
  F_00da3e40(pvVar7 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
  while ((*(char *)(gen_frame + 0x25b)) != '\0') {
    uVar5 = F_00da39b0(pvVar7 GEN_EDX_ARG,uVar4);
    *(uint *)((*(uint *)(gen_frame + 0x224)) + (*(int *)(gen_frame + 0x228)) * 4) = uVar5;
    (*(int *)(gen_frame + 0x228)) = (*(int *)(gen_frame + 0x228)) + 1;
    (*(uint *)(gen_frame + 0x21c)) = uVar5;
    uVar5 = F_00e113a0((undefined *)((int)this + 0x34) GEN_EDX_ARG,uVar5);
    if (uVar5 != 0xffffffff) {
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + uVar5 * 8)));
        if ((*(uint *)(gen_frame + 0x244)) == ((*(uint *)(gen_frame + 0x248)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x240)),4);
        }
        *(undefined4 *)((*(uint *)(gen_frame + 0x240)) + (*(uint *)(gen_frame + 0x244)) * 4) = uVar1;
        (*(uint *)(gen_frame + 0x244)) = (*(uint *)(gen_frame + 0x244)) + 1;
        uVar5 = *((uint *)GEN_TOP((*(int *)((int)this + 0x34) + 4 + uVar5 * 8)));
      } while (uVar5 != 0xffffffff);
      F_00e113c0((undefined *)((int)this + 0x34) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x21c)));
      uVar4 = (*(uint *)(gen_frame + 0x23c));
    }
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x238));
    uVar4 = F_00da39f0((*(undefined * PTR32 *)(gen_frame + 0x238)) GEN_EDX_ARG,uVar4);
    (*(uint *)(gen_frame + 0x23c)) = uVar4;
    F_00da3e40(pvVar7 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
    uVar4 = (*(uint *)(gen_frame + 0x23c));
  }
  iVar12 = 0;
  (*(char *)(gen_frame + 0x25b)) = '\0';
  if (0 < (int)(*(uint *)(gen_frame + 0x244))) {
    do {
      piVar9 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x240)) + iVar12 * 4);
      if (0 < *(short *)((int)piVar9 + 6)) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0x200);
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 8))(piVar9 GEN_EDX_ARG)));
        iVar8 = (int)*(short *)((int)piVar9 + 6);
        pcVar14 = ") from outside the world and it will lead to unexpected behavior or crash.";
        pcVar13 = 
        " is about to be removed and all references to it will be invalid.\nHowever, the object is referenced ("
        ;
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
        pvVar7 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG,"The object of class ");
        pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,uVar4);
        pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar13);
        pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar8);
        F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar14);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x760d3795,((undefined1 *)(gen_frame + 0xc)),"Data\\Dict\\hkDataObjectDict.cpp",0xab0);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
      }
      F_00e13ac0(piVar9 GEN_EDX_ARG);
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(*(uint *)(gen_frame + 0x244)));
  }
  iVar12 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x244))) {
    do {
      puVar2 = *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x240)) + iVar12 * 4);
      piVar9 = puVar2 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)(*(uint *)(gen_frame + 0x244)));
  }
  iVar12 = 0;
  if (0 < (*(int *)(gen_frame + 0x228))) {
    do {
      puVar2 = *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x224)) + iVar12 * 4);
      piVar9 = puVar2 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (*(int *)(gen_frame + 0x228)));
  }
  uVar4 = F_00da3970((undefined *)((int)this + 0x60) GEN_EDX_ARG);
  F_00da3e40((int)this + 0x60 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
  while ((*(char *)(gen_frame + 0x25b)) != '\0') {
    pvVar7 = (undefined *)F_00da39b0((int)this + 0x60 GEN_EDX_ARG,uVar4);
    F_00d91a80(pvVar7 GEN_EDX_ARG);
    uVar4 = F_00da39f0((undefined *)((int)this + 0x60) GEN_EDX_ARG,uVar4);
    F_00da3e40((int)this + 0x60 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
  }
  uVar4 = F_00da3970((undefined *)((int)this + 0x50) GEN_EDX_ARG);
  F_00da3e40((int)this + 0x50 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
  while ((*(char *)(gen_frame + 0x25b)) != '\0') {
    uVar5 = F_00da39b0((int)this + 0x50 GEN_EDX_ARG,uVar4);
    F_00da11e0(uVar5);
    uVar4 = F_00da39f0((undefined *)((int)this + 0x50) GEN_EDX_ARG,uVar4);
    F_00da3e40((int)this + 0x50 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x25b)),uVar4);
  }
  iVar12 = 0;
  if (-1 < *(int *)((int)this + 0x78)) {
    piVar9 = *(int * PTR32 *)((int)this + 0x70);
    do {
      if (*piVar9 != -1) break;
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 2;
    } while (iVar12 <= *(int *)((int)this + 0x78));
  }
  if (iVar12 <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 0x78)) {
    do {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x70) + 4 + iVar12 * 8)));
      if (pvVar7 != (undefined *)0x0) {
        F_00dbdb20(pvVar7 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,pvVar7,0xc);
      }
      iVar12 = iVar12 + 1;
      if (iVar12 <= *(int *)((int)this + 0x78)) {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + iVar12 * 8)));
        do {
          if (*piVar9 != -1) break;
          iVar12 = iVar12 + 1;
          piVar9 = piVar9 + 2;
        } while (iVar12 <= *(int *)((int)this + 0x78));
      }
    } while (iVar12 <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 0x78));
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = (*(uint *)(gen_frame + 0x224));
  uVar5 = (*(uint *)(gen_frame + 0x220)) * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + (*(uint *)(gen_frame + 0x224)) != *(int *)((int)pvVar3 + 0xc))
      ) || (*(uint *)((int)pvVar3 + 0x14) == (*(uint *)(gen_frame + 0x224)))) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x224)),uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (*(uint *)(gen_frame + 0x224));
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x22c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar4,(*(uint *)(gen_frame + 0x22c)) * 4);
  }
  uVar5 = (*(uint *)(gen_frame + 0x250));
  uVar4 = (*(uint *)(gen_frame + 0x24c));
  if ((*(uint *)(gen_frame + 0x24c)) == (*(uint *)(gen_frame + 0x240))) {
    (*(uint *)(gen_frame + 0x244)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + uVar4 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar4)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,uVar4,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar4;
  }
  (*(uint *)(gen_frame + 0x244)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x248))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x240)),(*(uint *)(gen_frame + 0x248)) * 4);
  }
  F_00dbdb20((undefined *)((int)this + 0x70) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x254));
  F_00da3e20((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 0x60) GEN_EDX_ARG);
  F_00da3e20((undefined *)((int)pvVar7 + 0x50) GEN_EDX_ARG);
  F_00dbdb20((undefined *)((int)pvVar7 + 0x40) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar12 = *(int *)((int)pvVar7 + 0x3c);
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  if (-1 < iVar12) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)pvVar7 + 0x34),iVar12 * 8);
  }
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x218));
  *(undefined4 *)((int)pvVar7 + 0x34) = 0;
  *(undefined4 *)((int)pvVar7 + 0x3c) = 0x80000000;
  F_00dbdb20((*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 3 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar12 = puVar2[2];
  puVar2[1] = 0;
  if (-1 < iVar12) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar2,iVar12 * 8);
  }
  *puVar2 = 0;
  puVar2[2] = 0x80000000;
  uVar4 = F_00da3e20((*(undefined * PTR32 *)(gen_frame + 0x238)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: hkDataWorldDict::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e0e5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  LPVOID pvVar2;
  int * piVar3;
  uint uVar4;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                            (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x20)));
  *(undefined2 *)(piVar3 + 1) = 0x20;
  iVar1 = *(*(int * PTR32 *)&gen_args[1]);
  *(undefined2 *)((int)piVar3 + 6) = 0;
  piVar3[2] = 0;
  *piVar3 = (int)(*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  piVar3[3] = iVar1;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = ((int)0x80000000);
  piVar3[7] = (uint)(*(int * PTR32 *)&gen_args[2]) & 0xff;
  piVar3[2] = piVar3[2] + 1;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)&gen_args[2]) = piVar3;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
  F_00e16440((undefined *)(iVar1 + 0x34) GEN_EDX_ARG,uVar4,&(*(int * PTR32 *)&gen_args[2]));
  if (*(int *)(iVar1 + 0x30) == 0) {
    *(int * PTR32 *)(iVar1 + 0x30) = piVar3;
  }
  return (uint)piVar3;
}

/* ref: hkDataWorldDict::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e0e650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0e650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar4 + 0x2c) GEN_EDX_ARG,0x40)));
  *(undefined2 *)((int)pvVar5 + 4) = 0x40;
  piVar6 = (int *)F_00e13540(pvVar5 GEN_EDX_ARG,this,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    uVar7 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))) GEN_EDX_ARG,param_1[2],0);
    if (uVar7 != 0) {
      *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    }
    puVar1 = (undefined4 *)piVar6[6];
    if (puVar1 != (undefined4 *)0x0) {
      piVar9 = puVar1 + 2;
      *piVar9 = *piVar9 - 1;
      if (*piVar9 == 0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      }
    }
    piVar6[6] = uVar7;
  }
  piVar6[2] = piVar6[2] + 1;
  iVar2 = *(int *)(this + 8);
  pcVar3 = *(gen_code32 *)(*piVar6 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  (*(int *)(gen_frame + 0x14)) = iVar2;
  uVar7 = (*pcVar3)(piVar6);
  uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
  pvVar5 = (undefined *)(iVar2 + 4);
  uVar8 = F_00da3ae0(pvVar5 GEN_EDX_ARG,uVar8);
  F_00da3e40(pvVar5 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x1b)),uVar8);
  if ((*(char *)(gen_frame + 0x1b)) == '\0') {
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
    F_00da3a20(pvVar5 GEN_EDX_ARG,uVar8,piVar6);
    if (uVar7 != 0) {
      F_00e163b0((undefined *)((*(int *)(gen_frame + 0x14)) + 0x14) GEN_EDX_ARG,uVar7,&(*(int * PTR32 *)(gen_frame + 0x10)));
    }
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (0 < (int)param_1[4]) {
    (*(int *)(gen_frame + 0x14)) = 0;
    do {
      piVar10 = (int *)(param_1[3] + (*(int *)(gen_frame + 0x14)));
      piVar9 = (int *)*piVar10;
      iVar2 = *(int *)(this + 8);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      if (piVar9 == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
      }
      else {
        piVar9 = (int *)F_00da4190((undefined *)(iVar2 + 0x50) GEN_EDX_ARG,piVar9,0);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)F_00da1210((*(int * PTR32 *)(gen_frame + 0x10)));
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
          F_00da3a20((undefined *)(iVar2 + 0x50) GEN_EDX_ARG,piVar9,piVar9);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x10));
        }
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      }
      iVar2 = piVar10[1];
      if (piVar6[0xb] == (piVar6[0xc] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)(piVar6[3] + 0xc),piVar6 + 10,0x18);
      }
      puVar1 = (undefined4 *)(piVar6[10] + piVar6[0xb] * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = (*(int * PTR32 *)(gen_frame + 0x10));
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = iVar2;
        puVar1[5] = 0;
      }
      piVar6[0xb] = piVar6[0xb] + 1;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xc;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    } while ((*(int *)(gen_frame + 0xc)) < (int)param_1[4]);
  }
  F_00e1a240(this + 0x10 GEN_EDX_ARG,*param_1);
  return (uint)piVar6;
}

/* ref: FUN_00e0e830 */
GEN_FRAME uint GEN_THISCALL F_00e0e830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0e830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 * puVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  uint * puVar10;
  undefined1 * in_ecx;
  int iVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar4 + 0x2c) GEN_EDX_ARG,0x40)));
  *(undefined2 *)((int)pvVar5 + 4) = 0x40;
  uVar6 = F_00d92a10(param_1 GEN_EDX_ARG);
  uVar7 = F_00d92610(param_1 GEN_EDX_ARG);
  piVar8 = (int *)F_00e13540(pvVar5 GEN_EDX_ARG,this,uVar7,uVar6);
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
  uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
  if (uVar6 == 0) goto LAB_00e0e8e5;
  uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
  uVar6 = F_00d92610(uVar6 GEN_EDX_ARG);
  if (uVar6 == 0) {
LAB_00e0e8b5: ;
    uVar6 = F_00d92620(param_1 GEN_EDX_ARG);
    uVar6 = F_00e0e830((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar6);
    if (uVar6 != 0) goto LAB_00e0e8cb;
  }
  else {
    uVar6 = F_00da4190(((undefined *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) + 4))) GEN_EDX_ARG,uVar6,0);
    if (uVar6 == 0) goto LAB_00e0e8b5;
LAB_00e0e8cb: ;
    *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
  }
  puVar2 = (undefined4 *)piVar8[6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar9 = puVar2 + 2;
    *piVar9 = *piVar9 - 1;
    if (*piVar9 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  piVar8[6] = uVar6;
LAB_00e0e8e5: ;
  piVar8[2] = piVar8[2] + 1;
  iVar11 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8);
  pcVar3 = *(gen_code32 *)(*piVar8 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar8;
  uVar6 = (*pcVar3)(piVar8);
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG);
  uVar6 = F_00da3ae0((undefined *)(iVar11 + 4) GEN_EDX_ARG,uVar6);
  F_00da3e40(iVar11 + 4 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x2b)),uVar6);
  if ((*(char *)(gen_frame + 0x2b)) == '\0') {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 8))(piVar8 GEN_EDX_ARG);
    F_00da3a20((undefined *)(iVar11 + 4) GEN_EDX_ARG,uVar6,piVar8);
    if ((*(uint *)(gen_frame + 0x18)) != 0) {
      F_00e163b0((undefined *)(iVar11 + 0x14) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x1c)));
    }
  }
  (*(int *)(gen_frame + 0x20)) = 0;
  uVar6 = F_00d92850(param_1 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      piVar9 = (int *)F_00d92860(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
      (*(uint *)(gen_frame + 0x18)) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x20);
      if ((*(ushort *)(piVar9 + 4) & 0x400) != 0x400) {
        pvVar5 = (undefined *)F_00da5fd0(piVar9 GEN_EDX_ARG);
        uVar6 = 0;
        if (pvVar5 != (undefined *)0x0) {
          uVar6 = F_00d92610(pvVar5 GEN_EDX_ARG);
          uVar7 = F_00da6010(piVar9 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1354944));
          if (uVar7 == 0) {
            uVar7 = F_00d92c00(pvVar5 GEN_EDX_ARG,REFG(undefined * PTR32, 0x1354944));
            if (uVar7 == 0) goto LAB_00e0e9f6;
            F_0105a6d0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar7,"typeName");
            in_ecx = ((undefined1 *)(gen_frame + 0x4));
          }
          else {
            F_0105a6d0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar7,"typeName");
            in_ecx = ((undefined1 *)(gen_frame + 0xc));
          }
          puVar10 = (uint *)F_0105a770(in_ecx GEN_EDX_ARG,0);
          uVar6 = *puVar10;
        }
LAB_00e0e9f6: ;
        bVar1 = *(byte *)((int)piVar9 + 0xd);
        (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)(piVar9 + 3);
        uVar7 = F_00da5ff0(piVar9 GEN_EDX_ARG);
        uVar6 = F_00e06180((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x10,(*(uint *)(gen_frame + 0x18)),(uint)bVar1,uVar6,uVar7);
        (*(uint *)(gen_frame + 0x18)) = uVar6;
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x14));
      }
      iVar11 = *piVar9;
      if (iVar11 == 0) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
      }
      else {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) + 0x50)));
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
        piVar9 = (int *)F_00da4190(piVar9 GEN_EDX_ARG,iVar11,0);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)F_00da1210(iVar11);
          F_00da3a20((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,piVar9,piVar9);
        }
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
      }
      if (piVar8[0xb] == (piVar8[0xc] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)(piVar8[3] + 0xc),piVar8 + 10,0x18);
      }
      puVar2 = (undefined4 *)(piVar8[10] + piVar8[0xb] * 0x18);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(int * PTR32 *)(gen_frame + 0x1c));
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = (*(uint *)(gen_frame + 0x18));
        puVar2[5] = 0;
      }
      piVar8[0xb] = piVar8[0xb] + 1;
      iVar11 = (*(int *)(gen_frame + 0x20)) + 1;
      (*(int *)(gen_frame + 0x20)) = iVar11;
      uVar6 = F_00d92850(param_1 GEN_EDX_ARG);
    } while (iVar11 < (int)uVar6);
  }
  return (uint)piVar8;
}

/* ref: hkDataWorldDict::vf13 */
GEN_FRAME uint GEN_THISCALL F_00e0eae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0eae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1 GEN_EDX_FWD);
  uVar3 = F_00e1a1a0(this + 0x10 GEN_EDX_ARG,uVar3);
  if (uVar3 != 0) {
    F_00e1ac10(this + 0x10 GEN_EDX_ARG,uVar3);
  }
  puVar2 = (undefined4 *)*param_1;
  *param_1 = 0;
  uVar3 = F_00e16d40(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,puVar2);
  piVar1 = puVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf15 */
GEN_FRAME uint GEN_THISCALL F_00e0eb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1 GEN_EDX_FWD);
  iVar2 = *param_1;
  iVar3 = *param_2;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)(iVar2 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
    }
  }
  *(int *)(iVar2 + 0x18) = iVar3;
  uVar5 = F_00e16f50(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,uVar5,*param_1);
  return uVar5;
}

/* ref: hkDataWorldDict::vf22 */
GEN_FRAME uint GEN_THISCALL F_00e0eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0eba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e16fc0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,*param_1,*param_2);
  return uVar1;
}

/* ref: FUN_00e0ebc0 */
GEN_FRAME uint GEN_THISCALL F_00e0ebc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  uVar1 = param_1 >> 8;
  param_1 = uVar1 << 8;
  *(uint *)this = uVar2;
  F_00da3de0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  param_1 = uVar1 << 8;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0x50) GEN_EDX_ARG,param_1);
  param_1 = uVar1 << 8;
  F_00da3de0((undefined *)((int)this + 0x60) GEN_EDX_ARG,param_1);
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ec50 */
GEN_NOFRAME uint GEN_THISCALL F_00e0ec50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar1 + 0x2c);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x7c)));
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e0ebc0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ecc0 */
GEN_FRAME uint GEN_THISCALL F_00e0ecc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc) = param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x7c)));
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e0ebc0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ed30 */
GEN_NOFRAME uint GEN_THISCALL F_00e0ed30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ed30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  if (this_00 != (undefined *)0x0) {
    F_00e0e030(this_00 GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this_00,0x7c);
  }
  uVar2 = F_00e1a370((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDataWorldDict::vf23 */
GEN_FRAME uint GEN_THISCALL F_00e0ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  uVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]));
  if (uVar2 != 0) {
    return uVar2;
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x24))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,uVar1)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0x80000000;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG)));
  if (piVar3 == (int *)0x0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
    if (uVar2 != 0) {
      F_00df1580(&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
      return uVar2;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x40)) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0x80000000;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    (*(int *)(gen_frame + 0x48)) = uVar2 << 4;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x48)));
    iVar5 = (int)((*(int *)(gen_frame + 0x48)) + ((*(int *)(gen_frame + 0x48)) >> 0x1f & 0xfU)) >> 4;
    if (iVar5 != 0) goto LAB_00e0ee4b;
  }
  iVar5 = ((int)0x80000000);
LAB_00e0ee4b: ;
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  (*(int *)(gen_frame + 0x2c)) = iVar5;
  if (0 < (int)uVar2) {
    puVar6 = (undefined4 *)(uVar4 + 8);
    do {
      if (puVar6 != (undefined4 *)0x8) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  F_00e1ce00(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)));
  if ((int)((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) < (int)(*(uint *)(gen_frame + 0x28))) {
    uVar2 = ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 2;
    uVar4 = (*(uint *)(gen_frame + 0x28));
    if ((int)(*(uint *)(gen_frame + 0x28)) < (int)uVar2) {
      uVar4 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 *)(gen_frame + 0x18)),uVar4,0xc);
  }
  (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x40));
  (*(int *)(gen_frame + 0x44)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
    (*(int *)(gen_frame + 0x48)) = 0;
    do {
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x48)) + (*(uint *)(gen_frame + 0x24)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar6;
      uVar2 = F_00e1aff0((*(undefined * PTR32 *)&gen_args[0]) + 0x10 GEN_EDX_ARG,puVar6[2]);
      piVar3 = (int *)F_00e19d40(uVar2 GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
      if (*piVar3 == 6) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x24)));
        uVar4 = F_00e19c80(uVar2 GEN_EDX_ARG);
        uVar4 = (*(code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))((*(int * PTR32 *)&gen_args[2]),uVar4);
        if (uVar4 != 0) {
          iVar5 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
          piVar3 = (*(int * PTR32 *)&gen_args[2]);
          uVar4 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
          ((code *)*(gen_code32 *)(iVar5 + 0x5c))((*(undefined * PTR32 *)&gen_args[0]),uVar4,piVar3);
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
        }
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x30)),*puVar6,uVar2,0);
      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0x10;
      iVar5 = (*(int *)(gen_frame + 0x44)) + 1;
      (*(int *)(gen_frame + 0x44)) = iVar5;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x28)));
  }
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x2c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x2c)) << 4);
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x40));
  if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x18)),((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 0xc);
    uVar2 = (*(uint *)(gen_frame + 0x40));
  }
  return uVar2;
}

/* ref: FUN_00e0f010 */
GEN_FRAME uint GEN_THISCALL F_00e0f010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f030 */
GEN_FRAME uint GEN_THISCALL F_00e0f030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f040 */
GEN_FRAME uint GEN_THISCALL F_00e0f040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f050 */
GEN_FRAME uint GEN_THISCALL F_00e0f050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f070 */
GEN_FRAME uint GEN_THISCALL F_00e0f070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00e0f080 */
GEN_FRAME uint GEN_THISCALL F_00e0f080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f090 */
GEN_FRAME uint GEN_THISCALL F_00e0f090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f0b0 */
GEN_FRAME uint GEN_THISCALL F_00e0f0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f0d0 */
GEN_FRAME uint GEN_THISCALL F_00e0f0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0e0 */
GEN_FRAME uint GEN_THISCALL F_00e0f0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0f0 */
GEN_FRAME uint GEN_THISCALL F_00e0f0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f110 */
GEN_FRAME uint GEN_THISCALL F_00e0f110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00e0f120 */
GEN_FRAME uint GEN_THISCALL F_00e0f120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f130 */
GEN_FRAME uint GEN_THISCALL F_00e0f130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f150 */
GEN_FRAME uint GEN_THISCALL F_00e0f150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f1b0 */
GEN_FRAME uint GEN_THISCALL F_00e0f1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1d0 */
GEN_FRAME uint GEN_THISCALL F_00e0f1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1f0 */
GEN_FRAME uint GEN_THISCALL F_00e0f1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e0f210 */
GEN_FRAME uint GEN_THISCALL F_00e0f210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0f250 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f270 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0f270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0f2d0 */
GEN_FRAME uint GEN_THISCALL F_00e0f2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f320 */
GEN_FRAME uint GEN_THISCALL F_00e0f320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f320u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f360 */
GEN_FRAME uint GEN_THISCALL F_00e0f360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f360u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f390 */
GEN_FRAME uint GEN_THISCALL F_00e0f390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f390u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f3d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0f3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(int *)this = param_1;
  return;
}

/* ref: FUN_00e0f430 */
GEN_FRAME uint GEN_THISCALL F_00e0f430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f480 */
GEN_FRAME uint GEN_THISCALL F_00e0f480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f480u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4a0 */
GEN_FRAME uint GEN_THISCALL F_00e0f4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f4a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4e0 */
GEN_FRAME uint GEN_THISCALL F_00e0f4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f4e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f500 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0f500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0f560 */
GEN_FRAME uint GEN_THISCALL F_00e0f560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f560u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0f5e0 */
GEN_FRAME uint GEN_THISCALL F_00e0f5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f5e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f630 */
GEN_FRAME uint GEN_THISCALL F_00e0f630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f630u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f680 */
GEN_FRAME uint GEN_THISCALL F_00e0f680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f6a0 */
GEN_FRAME uint GEN_THISCALL F_00e0f6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6c0 */
GEN_FRAME uint GEN_THISCALL F_00e0f6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6d0 */
GEN_FRAME uint GEN_THISCALL F_00e0f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6e0 */
GEN_FRAME uint GEN_THISCALL F_00e0f6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6f0 */
GEN_FRAME uint GEN_THISCALL F_00e0f6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e0f730 */
GEN_FRAME uint GEN_THISCALL F_00e0f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f760 */
GEN_FRAME uint GEN_THISCALL F_00e0f760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f770 */
GEN_FRAME uint GEN_THISCALL F_00e0f770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f790 */
GEN_FRAME uint GEN_THISCALL F_00e0f790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f7e0 */
GEN_FRAME uint GEN_THISCALL F_00e0f7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f820 */
GEN_FRAME uint GEN_THISCALL F_00e0f820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e0f860 */
GEN_FRAME uint GEN_THISCALL F_00e0f860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e0f890 */
GEN_FRAME unsigned int F_00e0f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00e0f900 */
GEN_FRAME unsigned int F_00e0f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f950 */
GEN_FRAME unsigned int F_00e0f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f9c0 */
GEN_FRAME uint GEN_THISCALL F_00e0f9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f9f0 */
GEN_FRAME uint GEN_THISCALL F_00e0f9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0fa10 */
GEN_FRAME uint F_00e0fa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fa10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e0fa20 */
GEN_FRAME uint GEN_THISCALL F_00e0fa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa40 */
GEN_FRAME uint GEN_THISCALL F_00e0fa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa90 */
GEN_FRAME uint F_00e0fa90(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e0fac0 */
GEN_FRAME uint F_00e0fac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e0faf0 */
GEN_FRAME uint GEN_THISCALL F_00e0faf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0faf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0fb30 */
GEN_NOFRAME uint GEN_THISCALL F_00e0fb30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0fb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948) GEN_EDX_FWD);
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return (uint)this;
}

/* ref: FUN_00e0fb60 */
GEN_NOFRAME uint GEN_THISCALL F_00e0fb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948) GEN_EDX_FWD);
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return uVar1;
}

/* ref: FUN_00e0fb80 */
GEN_FRAME uint F_00e0fb80(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e0fba0 */
GEN_FRAME unsigned int F_00e0fba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x7c);
  }
  return;
}

/* ref: FUN_00e0fbd0 */
GEN_FRAME uint GEN_THISCALL F_00e0fbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 4) GEN_EDX_FWD,param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e0fbf0 */
GEN_FRAME unsigned int F_00e0fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00e0fc20 */
GEN_FRAME uint F_00e0fc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fc20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_2[1] - 1;
  if (-1 < (int)uVar1) {
    piVar2 = (int *)(*param_2 + uVar1 * 0x18);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      piVar2 = piVar2 - 6;
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00e0fc50 */
GEN_FRAME uint GEN_THISCALL F_00e0fc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) - 1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fc73;
      piVar2 = piVar2 - 6;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fc73: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fc90 */
GEN_FRAME uint GEN_THISCALL F_00e0fc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) - 1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fcb3;
      piVar2 = piVar2 - 6;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fcb3: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x14 + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fcd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0fcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  *(int *)((int)this + 0x18) = param_1;
  return;
}

/* ref: FUN_00e0fd00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e0fd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0fd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e0fd40 */
GEN_FRAME uint GEN_THISCALL F_00e0fd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(uint *)((int)this + 0x1c) = (uint)(byte)param_2;
  return (uint)this;
}

/* ref: FUN_00e0fd80 */
GEN_FRAME uint GEN_THISCALL F_00e0fd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)this;
  param_2[1] = param_1;
  param_2[2] = *(undefined4 *)((int)this + 0x10);
  param_2[3] = *(undefined4 *)((int)this + 0x14);
  return (uint)param_2;
}

/* ref: FUN_00e0fda0 */
GEN_FRAME uint GEN_THISCALL F_00e0fda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: hkDataObjectDict::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_00e0fdc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: hkDataObjectDict::vf1 */
GEN_FRAME uint GEN_THISCALL F_00e0fdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: hkDataObjectDict::vf5 */
GEN_NOFRAME uint F_00e0fdf0(void)
{
  GEN_ENTER(0xe0fdf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectDict::vf7 */
GEN_FRAME uint GEN_THISCALL F_00e0fe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

/* ref: hkDataObjectDict::vf25 */
GEN_FRAME uint GEN_THISCALL F_00e0fe10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *param_1;
  param_2[1] = 0;
  param_2[2] = param_1[4];
  param_2[3] = param_1[5];
  return (uint)param_2;
}

/* ref: FUN_00e0fe40 */
GEN_FRAME uint GEN_THISCALL F_00e0fe40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fe40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0fe80 */
GEN_FRAME uint GEN_THISCALL F_00e0fe80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fe80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    uVar2 = uVar1;
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    while (*piVar3 != param_1) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 4;
      if (*(int *)((int)this + 0x14) <= (int)uVar2) {
        return uVar2;
      }
    }
    uVar1 = uVar2 * 2;
    (*(int * PTR32 *)((int)this + 0x10))[uVar2 * 4] = param_2;
  }
  return uVar1;
}

/* ref: hkDataObjectDict::vf6 */
GEN_FRAME byte GEN_THISCALL F_00e0fec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 < *(int *)(this + 0x14);
}

/* ref: hkDataObjectDict::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e0fee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 0x10)));
}

/* ref: hkDataObjectDict::vf9 */
GEN_FRAME uint GEN_THISCALL F_00e0ff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ff00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + param_2 * 0x10)));
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf26 */
GEN_FRAME uint GEN_THISCALL F_00e0ff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1[5] != 0) {
    return 1;
  }
  iVar1 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar2 = *(int * PTR32 *)(this + 0x10);
    do {
      if (*piVar2 == *param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 < *(int *)(this + 0x14));
  }
  return 0;
}

/* ref: FUN_00e0ff60 */
GEN_FRAME uint GEN_THISCALL F_00e0ff60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ff60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x114d894));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined1 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: VariableIntArrayImplementation::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e0ffa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ffa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c)));
}

/* ref: VariableIntArrayImplementation::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00e0ffb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ffb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*(int *)(in_ecx + 0x10) != 0) * 4 + 4;
}

/* ref: VariableIntArrayImplementation::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e0ffc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe0ffc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: VariableIntArrayImplementation::vf30 */
GEN_FRAME unsigned int GEN_THISCALL F_00e0ffd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ffd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_2);
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))
                (this GEN_EDX_ARG,iVar1,*(undefined4 *)(param_1 + iVar1 * 8),
                 *(undefined4 *)(param_1 + 4 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: VariableIntArrayImplementation::vf6 */
GEN_NOFRAME uint F_00e10010(void)
{
  GEN_ENTER(0xe10010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: VariableIntArrayImplementation::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_00e10020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10040 */
GEN_FRAME uint GEN_THISCALL F_00e10040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10050 */
GEN_FRAME uint GEN_THISCALL F_00e10050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10050u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10090 */
GEN_FRAME uint GEN_THISCALL F_00e10090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e100c0 */
GEN_FRAME unsigned int F_00e100c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe100c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 8) = *param_3;
      *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_3[1];
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: VariableIntArrayImplementation::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e10100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    *param_1 = 7;
    param_1[3] = *(undefined4 *)(this + 0x18);
    uVar1 = *(undefined4 *)(this + 0x14);
    param_1[4] = 4;
    param_1[2] = uVar1;
    param_1[1] = 1;
    return 0;
  }
  *param_1 = 9;
  param_1[3] = *(undefined4 *)(this + 0x24);
  uVar1 = *(undefined4 *)(this + 0x20);
  param_1[4] = 8;
  param_1[2] = uVar1;
  param_1[1] = 1;
  return 0;
}

/* ref: VariableIntArrayImplementation::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x10) == 0) {
    return *(uint *)(in_ecx + 0x18);
  }
  if (*(int *)(in_ecx + 0x10) != 1) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x24);
}

/* ref: VariableIntArrayImplementation::vf19 */
GEN_FRAME uint GEN_THISCALL F_00e10180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(this + 0x10) == 0) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  if (*(int *)(this + 0x10) != 1) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x20) + param_1 * 8)));
}

/* ref: VariableIntArrayImplementation::vf21 */
GEN_FRAME uint GEN_THISCALL F_00e101b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe101b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(this + 0x10) == 0) {
    return *((uint *)GEN_TOP((*(int *)(this + 0x14) + param_1 * 4)));
  }
  if (*(int *)(this + 0x10) != 1) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x20) + param_1 * 8)));
}

/* ref: VariableIntArrayImplementation::vf20 */
GEN_FRAME uint GEN_THISCALL F_00e101f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe101f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = *(uint *)(this + 0x14);
    *(int *)(uVar1 + param_1 * 4) = param_2;
    this[0x2c] = (undefined1)0x1;
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_FWD,param_1,param_2,param_2 >> 0x1f);
  this[0x2c] = (undefined1)0x1;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf10 */
GEN_FRAME uint GEN_THISCALL F_00e10230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x28))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,0x14)));
  *(undefined2 *)(puVar4 + 1) = 0x14;
  uVar1 = *(undefined4 *)(this + 0x10);
  puVar4[3] = uVar2;
  puVar4[4] = uVar1;
  *(undefined2 *)((int)puVar4 + 6) = 0;
  puVar4[2] = 0;
  *puVar4 = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  return (uint)puVar4;
}

/* ref: ArrayOfTuplesImplementation::vf10 */
GEN_FRAME uint GEN_THISCALL F_00e10290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  if (*(int *)(this + 0x18) == 0) {
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar5 + 0x2c) GEN_EDX_ARG,0x1c)));
    *(undefined2 *)(puVar6 + 1) = 0x1c;
    uVar2 = *(undefined4 *)(this + 0x14);
    uVar3 = *(undefined4 *)(this + 0xc);
    *(undefined2 *)((int)puVar6 + 6) = 0;
    puVar6[2] = 0;
    *puVar6 = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
    puVar6[3] = uVar3;
    puVar6[4] = 0;
    puVar6[5] = uVar2;
    puVar6[6] = 0;
    *(undefined4 * PTR32 *)(this + 0x18) = puVar6;
    puVar6[2] = puVar6[2] + 1;
  }
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x28))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1);
  iVar4 = *(int *)(this + 0x18);
  if (uVar7 != 0) {
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
  }
  puVar6 = *(undefined4 * PTR32 *)(iVar4 + 0x10);
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
    }
  }
  *(uint *)(iVar4 + 0x10) = uVar7;
  return *(uint *)(this + 0x18);
}

/* ref: ArrayOfTuplesImplementation::vf25 */
GEN_FRAME uint GEN_THISCALL F_00e10330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,0x14)));
  *(undefined2 *)(puVar3 + 1) = 0x14;
  iVar1 = *(int *)(this + 0x14);
  puVar3[3] = this;
  *(undefined2 *)((int)puVar3 + 6) = 0;
  puVar3[2] = 0;
  *puVar3 = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  puVar3[4] = iVar1 * param_1;
  return (uint)puVar3;
}

/* ref: ArrayOfTuplesImplementation::vf26 */
GEN_FRAME unsigned int GEN_THISCALL F_00e10380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10380u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  float10 extraout_ST0;
  undefined8 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x14) * param_2;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 4))(param_3 GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*puVar1)) {
  case 2: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x4c))(param_3 GEN_EDX_ARG,param_2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x50))))
                  (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 3: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)param_3 + 0x3c))(param_3,param_2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x40))))
                  (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,
                   (undefined4)gen_fl2bits((float)extraout_ST0));
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 4: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x9c))(param_3 GEN_EDX_ARG);
        if (uVar2 == 0) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x4c))(param_3 GEN_EDX_ARG,param_2);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x50))))
                    (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,uVar2);
        }
        else {
          uVar4 = ((gen_lcode *)*(gen_code32 *)(*(int *)param_3 + 0x54))(param_3,param_2);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x58))))
                    (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,(int)uVar4,
                     (int)((ulonglong)uVar4 >> 0x20));
        }
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
    }
    break;
  case 5: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x34))(param_3 GEN_EDX_ARG,param_2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x38))))
                  (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 6: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x5c))(param_3 GEN_EDX_ARG,param_2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x60))))
                  (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
    break;
  case 7: ;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_3 + 0x5c))(param_3 GEN_EDX_ARG,param_2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x60))))
                  (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,param_2 + iVar3,uVar2);
        param_2 = param_2 + 1;
      } while (param_2 < *(int *)(param_1 + 0x14));
      return 0;
    }
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e105b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe105b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: ArrayOfTuplesImplementation::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e105f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe105f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  puVar2 = *(undefined4 * PTR32 *)(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,1);
    }
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e10660 */
GEN_FRAME uint GEN_THISCALL F_00e10660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_00e106a0 */
GEN_FRAME uint GEN_THISCALL F_00e106a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe106a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d9dc));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  return (uint)this;
}

/* ref: RealArrayView::vf15 */
GEN_FRAME float10 GEN_THISCALL F_00e106d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe106d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 4)));
}

/* ref: RealArrayView::vf16 */
GEN_FRAME uint GEN_THISCALL F_00e106e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe106e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x10);
  *(float *)(uVar1 + param_2 * 4) = param_3;
  return uVar1;
}

/* ref: RealArrayView::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x2c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD);
  return *(uint *)(uVar1 + 0x18);
}

/* ref: RealArrayView::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: RealArrayView::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: RealArrayView::vf6 */
GEN_NOFRAME uint F_00e10730(void)
{
  GEN_ENTER(0xe10730u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: RealArrayView::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: RealArrayView::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: RealArrayView::vf2 */
GEN_NOFRAME unsigned int F_00e10760(void)
{
  GEN_ENTER(0xe10760u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: RealArrayView::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e10770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[2] = *(undefined4 *)(this + 0x10);
  param_1[3] = *(undefined4 *)(this + 0x14);
  param_1[4] = 4;
  param_1[1] = 1;
  *param_1 = 0xb;
  return 0;
}

/* ref: RealArrayView::vf28 */
GEN_FRAME uint GEN_THISCALL F_00e107a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe107a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da1010(*(undefined4 *)(this + 0x10),param_1,param_2 * 4);
  return uVar1;
}

/* ref: VecArrayImplementation::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e107f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe107f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: VecArrayImplementation::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: VecArrayImplementation::vf6 */
GEN_NOFRAME uint F_00e10810(void)
{
  GEN_ENTER(0xe10810u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: VecArrayImplementation::vf38 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf37 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf36 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf35 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf34 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf33 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf32 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf31 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e10890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e108a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf29 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e108b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: VecArrayImplementation::vf27 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e108c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe108c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: RealArrayView::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e108e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe108e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: VecArrayImplementation::vf11 */
GEN_FRAME uint GEN_THISCALL F_00e10920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e19c70(*(undefined4 *)(in_ecx + 0x1c) GEN_EDX_FWD);
  return *(int *)(in_ecx + 0xc) + uVar1 * param_2 * 4;
}

/* ref: VecArrayImplementation::vf12 */
GEN_FRAME uint GEN_THISCALL F_00e10940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar1 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  iVar6 = 0;
  if (3 < (int)uVar1) {
    iVar3 = (uVar1 - 4 >> 2) + 1;
    iVar6 = iVar3 * 4;
    puVar2 = (undefined4 *)(param_2 + 8);
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * param_1 * 4)));
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8 + uVar1 * param_1 * 4)));
    do {
      puVar5[-2] = puVar2[-2];
      iVar3 = iVar3 - 1;
      *puVar4 = puVar2[-1];
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      puVar2 = puVar2 + 4;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar3 != 0);
  }
  if (iVar6 < (int)uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + (uVar1 * param_1 + iVar6) * 4)));
    do {
      iVar3 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *puVar2 = *(undefined4 *)(param_2 + iVar3);
      puVar2 = puVar2 + 1;
    } while (iVar6 < (int)uVar1);
  }
  return uVar1;
}

/* ref: VecArrayImplementation::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e109e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe109e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  return iVar1 / (int)uVar2;
}

/* ref: VecArrayImplementation::vf25 */
GEN_FRAME uint GEN_THISCALL F_00e10a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  
  uVar3 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c) GEN_EDX_ARG,0x18)));
  *(undefined2 *)(puVar5 + 1) = 0x18;
  iVar1 = *(int *)(this + 0xc);
  uVar2 = *(undefined4 *)(this + 0x18);
  puVar5[5] = uVar3;
  puVar5[3] = uVar2;
  *(undefined2 *)((int)puVar5 + 6) = 0;
  puVar5[2] = 0;
  *puVar5 = (*(undefined * PTR32 (*)[39])REFP(0x114d9dc));
  puVar5[4] = iVar1 + uVar3 * param_1 * 4;
  return (uint)puVar5;
}

/* ref: VecArrayImplementation::vf8 */
GEN_FRAME uint GEN_THISCALL F_00e10a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  param_1[2] = *(undefined4 *)(this + 0xc);
  iVar1 = *(int *)(this + 0x10);
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  param_1[3] = iVar1 / (int)uVar2;
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_ARG);
  param_1[4] = uVar2 * 4;
  *param_1 = 0xb;
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_ARG);
  param_1[1] = uVar2;
  return 0;
}

/* ref: FUN_00e10ab0 */
GEN_FRAME uint GEN_THISCALL F_00e10ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar2 = *(uint * PTR32 *)((int)this + 0xc);
    while (*puVar2 != param_1) {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
      if (*(int *)((int)this + 0x10) <= (int)uVar1) {
        return uVar1;
      }
    }
    *puVar2 = param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00e10b40 */
GEN_FRAME uint GEN_THISCALL F_00e10b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20((undefined *)((int)this + 0x50) GEN_EDX_ARG,uVar1,uVar1);
    }
    *param_1 = uVar1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e10b90 */
GEN_FRAME uint GEN_THISCALL F_00e10b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e10bc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e10bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_1 != param_2) {
    this_00 = (undefined *)((int)this + 0x60);
    uVar1 = F_00da4190(this_00 GEN_EDX_FWD,param_1,0);
    F_00da3f00(this_00 GEN_EDX_ARG,param_1);
    *(int *)(uVar1 + 8) = param_2;
    F_00da3a20(this_00 GEN_EDX_ARG,param_2,uVar1);
  }
  return;
}

/* ref: FUN_00e10c00 */
GEN_FRAME uint GEN_THISCALL F_00e10c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_2);
  F_00da3e40(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00e10c40 */
GEN_FRAME uint GEN_THISCALL F_00e10c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10c50 */
GEN_FRAME uint GEN_THISCALL F_00e10c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10c60 */
GEN_FRAME uint GEN_THISCALL F_00e10c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10c70 */
GEN_FRAME uint GEN_THISCALL F_00e10c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10c70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10c80 */
GEN_FRAME uint GEN_THISCALL F_00e10c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e10ca0 */
GEN_FRAME uint GEN_THISCALL F_00e10ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe10ca0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e10cb0 */
GEN_FRAME uint GEN_THISCALL F_00e10cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e10cd0 */
GEN_FRAME uint GEN_THISCALL F_00e10cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_E::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_E::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_E::vf6 */
GEN_NOFRAME uint F_00e10d30(void)
{
  GEN_ENTER(0xe10d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_E::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10d50 */
GEN_FRAME uint GEN_THISCALL F_00e10d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_M::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10d90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_M::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_M::vf6 */
GEN_NOFRAME uint F_00e10db0(void)
{
  GEN_ENTER(0xe10db0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_M::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10dd0 */
GEN_FRAME uint GEN_THISCALL F_00e10dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf6 */
GEN_NOFRAME uint F_00e10e30(void)
{
  GEN_ENTER(0xe10e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10e50 */
GEN_FRAME uint GEN_THISCALL F_00e10e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAD::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10e90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAD::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAD::vf6 */
GEN_NOFRAME uint F_00e10eb0(void)
{
  GEN_ENTER(0xe10eb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAD::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10ed0 */
GEN_FRAME uint GEN_THISCALL F_00e10ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e10f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00e10f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf6 */
GEN_NOFRAME uint F_00e10f30(void)
{
  GEN_ENTER(0xe10f30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e10f40 */
GEN_FRAME unsigned int F_00e10f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10f40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00e10f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00e10f80 */
GEN_FRAME uint F_00e10f80(unsigned int gen_a0)
{
  GEN_ENTER(0xe10f80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e10fa0 */
GEN_FRAME unsigned int F_00e10fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe10fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e10fd0 */
GEN_FRAME uint GEN_THISCALL F_00e10fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe10fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e11000 */
GEN_FRAME uint GEN_THISCALL F_00e11000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00e11010 */
GEN_FRAME uint GEN_THISCALL F_00e11010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11010u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e110d0 */
GEN_FRAME uint GEN_THISCALL F_00e110d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe110d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e110f0 */
GEN_FRAME uint GEN_THISCALL F_00e110f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe110f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11130 */
GEN_FRAME uint GEN_THISCALL F_00e11130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11130u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11170 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e111e0 */
GEN_FRAME uint GEN_THISCALL F_00e111e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe111e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11220 */
GEN_FRAME uint GEN_THISCALL F_00e11220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11260 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e112c0 */
GEN_FRAME uint GEN_THISCALL F_00e112c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe112c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11310 */
GEN_FRAME uint GEN_THISCALL F_00e11310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e11330 */
GEN_FRAME uint GEN_THISCALL F_00e11330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0((undefined *)((int)this + 0xc) GEN_EDX_ARG,uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *(int *)(iVar1 + 4 + iVar3);
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *(int *)(iVar3 + 4 + iVar1);
      iVar1 = iVar5 * 8;
      iVar4 = *(int *)(iVar3 + 4 + iVar5 * 8);
    }
    uVar6 = *(uint *)((int)this + 0x18);
    *(uint *)(iVar3 + 4 + iVar5 * 8) = uVar6;
    *(int *)((int)this + 0x18) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e113a0 */
GEN_FRAME uint GEN_THISCALL F_00e113a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe113a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e113c0 */
GEN_FRAME uint GEN_THISCALL F_00e113c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe113c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0((undefined *)((int)this + 0xc) GEN_EDX_ARG,uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *(int *)(iVar1 + 4 + iVar3);
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *(int *)(iVar3 + 4 + iVar1);
      iVar1 = iVar5 * 8;
      iVar4 = *(int *)(iVar3 + 4 + iVar5 * 8);
    }
    uVar6 = *(uint *)((int)this + 0x18);
    *(uint *)(iVar3 + 4 + iVar5 * 8) = uVar6;
    *(int *)((int)this + 0x18) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e11440 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 0x18;
  puVar1 = (undefined4 *)(*(int *)this + param_1 * 0x18);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 3) + 1;
    do {
      *puVar1 = puVar1[6];
      puVar1[1] = puVar1[7];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e114a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e114a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe114a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(param_1 * 0x10 + *(int *)this);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 0x10) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e114e0 */
GEN_FRAME uint GEN_THISCALL F_00e114e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe114e0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11520 */
GEN_FRAME uint GEN_THISCALL F_00e11520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe11520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,8);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *(uint *)((int)this + 4) = param_2;
    return uVar2;
  }
  do {
    *(undefined4 *)(iVar1 + uVar2 * 8) = *param_3;
    *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = param_3[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *(uint *)((int)this + 4) = param_2;
  return param_2;
}

/* ref: FUN_00e11590 */
GEN_FRAME uint GEN_THISCALL F_00e11590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11590u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00e115d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e115d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe115d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00e11630 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  iVar1 = (*(int *)((int)this + 4) - param_1) * 8;
  puVar2 = (undefined4 *)(*(int *)this + param_1 * 8);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00e11680 */
GEN_FRAME uint GEN_THISCALL F_00e11680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e116d0 */
GEN_FRAME uint GEN_THISCALL F_00e116d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe116d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11710 */
GEN_FRAME uint GEN_THISCALL F_00e11710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e11730 */
GEN_FRAME uint F_00e11730(unsigned int gen_a0)
{
  GEN_ENTER(0xe11730u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e11770 */
GEN_FRAME uint F_00e11770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e117c0 */
GEN_FRAME uint F_00e117c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe117c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e11800 */
GEN_FRAME uint F_00e11800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11850 */
GEN_FRAME uint GEN_THISCALL F_00e11850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_00e11870 */
GEN_NOFRAME uint GEN_THISCALL F_00e11870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe11870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e118c0 */
GEN_FRAME uint GEN_THISCALL F_00e118c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe118c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e11930 */
GEN_FRAME unsigned int F_00e11930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x10) {
        puVar1[-4] = *param_3;
        puVar1[-2] = param_3[2];
        puVar1[-1] = param_3[3];
        *puVar1 = param_3[4];
        puVar1[1] = param_3[5];
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e11980 */
GEN_FRAME unsigned int F_00e11980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe11980u, gen_a0, gen_a1, 0u, 0u);
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
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e119c0 */
GEN_FRAME unsigned int F_00e119c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe119c0u, gen_a0, gen_a1, 0u, 0u);
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
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e119f0 */
GEN_FRAME uint GEN_THISCALL F_00e119f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe119f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a30 */
GEN_FRAME uint GEN_THISCALL F_00e11a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11a30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a70 */
GEN_FRAME uint GEN_THISCALL F_00e11a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e11ac0 */
GEN_FRAME uint GEN_THISCALL F_00e11ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e11b00 */
GEN_FRAME uint GEN_THISCALL F_00e11b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11b60 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1 + param_1[1] * 4;
  for (; this != (undefined *)0x0; this = *(undefined * PTR32 *)((int)this + 0x18)) {
    iVar2 = *(int *)((int)this + 0x2c);
    iVar4 = *(int *)((int)this + 0x28);
    iVar1 = iVar1 + iVar2 * -4;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        *(int *)(iVar1 + iVar3 * 4) = iVar4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

/* ref: FUN_00e11bb0 */
GEN_FRAME uint GEN_THISCALL F_00e11bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD);
  iVar3 = param_1 - uVar1;
  pvVar2 = this;
  do {
    iVar3 = iVar3 + *(int *)((int)pvVar2 + 0x2c);
    if (-1 < iVar3) {
      return *(int *)((int)pvVar2 + 0x28) + iVar3 * 0x18;
    }
    pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x18);
  } while (pvVar2 != (undefined *)0x0);
  return *(int *)((int)this + 0x28) - 0x18;
}

/* ref: FUN_00e11bf0 */
GEN_FRAME uint GEN_THISCALL F_00e11bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  do {
    if (this == (undefined *)0x0) {
      return 0;
    }
    iVar1 = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      piVar2 = *(int * PTR32 *)((int)this + 0x28);
      do {
        if (*piVar2 == param_1) {
          return *(int *)((int)this + 0x28) + iVar1 * 0x18;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar1 < *(int *)((int)this + 0x2c));
    }
    this = *(undefined * PTR32 *)((int)this + 0x18);
  } while( true );
}

/* ref: FUN_00e11c40 */
GEN_FRAME uint GEN_THISCALL F_00e11c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0x10);
  }
  return (uint)this;
}

/* ref: hkDataObjectDict::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e11c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe11c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkDataObjectDict::vf29 */
GEN_FRAME unsigned int GEN_THISCALL F_00e11c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e11b60(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00e11c90 */
GEN_FRAME uint GEN_THISCALL F_00e11c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)((int)this + 0x10))));
  uVar1 = F_00e11bf0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,*puVar3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00e0ceb0(*(undefined4 *)(uVar1 + 0x10),puVar3 + 2,1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00e11cd0 */
GEN_FRAME uint GEN_THISCALL F_00e11cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar1 + 0x50) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11d30 */
GEN_FRAME uint GEN_THISCALL F_00e11d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    piVar3 = *(int * PTR32 *)((int)this + 0x10);
    do {
      if (*piVar3 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar1 < *(int *)((int)this + 0x14));
  }
  iVar1 = *(int *)((int)this + 0xc);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x2c)) {
      piVar3 = *(int * PTR32 *)(iVar1 + 0x28);
      do {
        if (*piVar3 == param_1) {
          iVar1 = *(int *)(iVar1 + 0x28) + iVar2 * 0x18;
          if (iVar1 == 0) {
            return 0;
          }
          return (uint)(*(int *)(iVar1 + 0x14) != 0);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *(int *)(iVar1 + 0x2c));
    }
    iVar1 = *(int *)(iVar1 + 0x18);
  } while( true );
}

/* ref: hkDataObjectDict::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e11db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 8)));
  if (param_1 != 0) {
    uVar2 = F_00da4190((undefined *)(iVar1 + 0x50) GEN_EDX_FWD,param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20((undefined *)(iVar1 + 0x50) GEN_EDX_ARG,uVar2,uVar2);
    }
    uVar2 = F_00e11d30(this GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  uVar2 = F_00e11d30(this GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: hkDataObjectDict::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e11e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe11e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00 GEN_EDX_FWD,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00 GEN_EDX_ARG,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: VariableIntArrayImplementation::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e11eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar2 = *(uint *)(this + 0x1c) & 0x3fffffff;
    if ((int)uVar2 < param_1) {
      iVar3 = uVar2 * 2;
      if (iVar3 <= param_1) {
        iVar3 = param_1;
      }
      bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x14,iVar3,4);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
    }
  }
  else {
    uVar2 = *(int *)(this + 0x10) - 1;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(this + 0x28) & 0x3fffffff;
      if ((int)uVar2 < param_1) {
        iVar3 = uVar2 * 2;
        if (iVar3 <= param_1) {
          iVar3 = param_1;
        }
        bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x20,iVar3,8);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e11f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe11f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*(int *)(this + 0x10) == 0) {
    if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < param_1) {
      iVar2 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
      if (iVar2 <= param_1) {
        iVar2 = param_1;
      }
      F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x14,iVar2,4);
    }
    uVar1 = *(uint *)(this + 0x18);
    iVar4 = param_1 - uVar1;
    iVar2 = uVar1 * 4;
    if (0 < iVar4) {
      uVar1 = 0;
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + iVar2)));
      for (; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    *(int *)(this + 0x18) = param_1;
  }
  else {
    uVar1 = *(int *)(this + 0x10) - 1;
    if (uVar1 == 0) {
      if ((int)(*(uint *)(this + 0x28) & 0x3fffffff) < param_1) {
        iVar2 = (*(uint *)(this + 0x28) & 0x3fffffff) * 2;
        if (iVar2 <= param_1) {
          iVar2 = param_1;
        }
        F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),this + 0x20,iVar2,8);
      }
      uVar1 = param_1 - *(int *)(this + 0x24);
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + *(int *)(this + 0x24) * 8)));
      if (0 < (int)uVar1) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar6 = puVar5 + 2;
        for (uVar3 = uVar1 * 8 - 5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      *(int *)(this + 0x24) = param_1;
    }
  }
  if (param_1 == 0) {
    this[0x2c] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: FUN_00e12010 */
GEN_FRAME uint GEN_THISCALL F_00e12010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)((int)this + 0x2c) != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,
                 "Converting DataObjectArray from 32-bit to 64-bit. If this is intended, always use 64-bit values"
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x3599e1ed,((undefined1 *)(gen_frame + 0x0)),"Data\\Dict\\hkDataObjectDict.cpp",0x5cb);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  iVar1 = *(int *)((int)this + 0x18);
  uVar4 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))),(int *)((int)this + 0x20),iVar5,8)
    ;
  }
  iVar5 = 0;
  *(int *)((int)this + 0x24) = iVar1;
  if (0 < *(int *)((int)this + 0x18)) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + iVar5 * 4)));
      iVar2 = *(int *)((int)this + 0x20);
      *(int *)(iVar2 + iVar5 * 8) = iVar1;
      *(int *)(iVar2 + 4 + iVar5 * 8) = iVar1 >> 0x1f;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x18));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
  uVar4 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)uVar4) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x14),uVar4 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 1;
  return uVar4;
}

/* ref: VariableIntArrayImplementation::vf22 */
GEN_FRAME uint GEN_THISCALL F_00e12110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe12110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (*(int *)(this + 0x10) != 1) {
    F_00e12010(this GEN_EDX_FWD);
  }
  this[0x2c] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x20);
  *(undefined4 *)(iVar1 + param_1 * 8) = param_2;
  *(undefined4 *)(iVar1 + 4 + param_1 * 8) = param_3;
  return param_1;
}

/* ref: FUN_00e12140 */
GEN_NOFRAME uint GEN_THISCALL F_00e12140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VecArrayImplementation::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e12190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: VecArrayImplementation::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e121a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe121a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  iVar3 = uVar2 * param_1;
  uVar2 = *(uint *)(this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < iVar3) {
    iVar4 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar3) {
      iVar4 = iVar3;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar4,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: VecArrayImplementation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e121f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe121f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar1 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  iVar2 = uVar1 * param_1;
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < iVar2) {
    iVar3 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar3,4);
  }
  uVar1 = *(uint *)(this + 0x10);
  iVar4 = iVar2 - uVar1;
  iVar3 = uVar1 * 4;
  if (0 < iVar4) {
    uVar1 = 0;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + iVar3)));
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = iVar2;
  return uVar1;
}

/* ref: VecArrayImplementation::vf28 */
GEN_FRAME uint GEN_THISCALL F_00e12250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * pVVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar2 = F_00e19c70(*(undefined4 *)(this + 0x1c) GEN_EDX_FWD);
  iVar4 = uVar2 * param_2;
  pVVar1 = this + 0xc;
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < iVar4) {
    iVar3 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),pVVar1,iVar3,4);
  }
  iVar3 = iVar4 - *(int *)(this + 0x10);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)pVVar1 + *(int *)(this + 0x10) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = iVar4;
  uVar2 = F_00da1010(*(int *)pVVar1,param_1,iVar4 * 4);
  return uVar2;
}

/* ref: VecArrayImplementation::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e122d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe122d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < *(int *)(this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0xc),*(int *)(this + 0x14) * 4);
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e12350 */
GEN_FRAME unsigned int GEN_THISCALL F_00e12350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    while (*piVar2 != param_1) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 2;
      if (*(int *)((int)this + 0x10) <= iVar4) {
        return;
      }
    }
    puVar3 = (undefined4 *)piVar2[1];
    piVar2 = puVar3 + 2;
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_FWD,1);
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - 1;
    iVar1 = (*(int *)((int)this + 0x10) - iVar4) * 8;
    puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 8)));
    if (0 < iVar1) {
      iVar4 = (iVar1 - 1U >> 2) + 1;
      do {
        *puVar3 = puVar3[2];
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  return;
}

/* ref: FUN_00e123d0 */
GEN_FRAME uint GEN_THISCALL F_00e123d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe123d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dbdb20(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00e12420 */
GEN_FRAME uint GEN_THISCALL F_00e12420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = F_00da4190((undefined *)((int)this + 4) GEN_EDX_FWD,param_1,0);
  }
  if (param_2 != 0) {
    uVar2 = F_00da4190((undefined *)((int)this + 0x50) GEN_EDX_ARG,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)((int)this + 0x50) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  if (param_1 != uVar2) {
    this_00 = (undefined *)((int)this + 0x60);
    uVar1 = F_00da4190(this_00 GEN_EDX_ARG,param_1,0);
    F_00da3f00(this_00 GEN_EDX_ARG,param_1);
    *(uint *)(uVar1 + 8) = uVar2;
    F_00da3a20(this_00 GEN_EDX_ARG,uVar2,uVar1);
  }
  F_00da3f00((undefined *)((int)this + 4) GEN_EDX_ARG,param_1);
  uVar2 = F_00da3a20((undefined *)((int)this + 4) GEN_EDX_ARG,uVar2,local_8);
  return uVar2;
}

/* ref: FUN_00e124d0 */
GEN_FRAME uint GEN_THISCALL F_00e124d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe124d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 * this_00;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948) GEN_EDX_FWD);
  if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) != (undefined *)0x0) {
    F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG);
  }
  iVar2 = (*(int *)&gen_args[2]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = &REFG(undefined * PTR32, 0x1354948);
  if ((*(int *)&gen_args[2]) != 0) {
    this_00 = (undefined4 *)F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) GEN_EDX_ARG,(*(int *)&gen_args[2]),0);
    if (this_00 == (undefined4 *)0x0) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,0xc)))
      ;
      *(undefined2 *)(this_00 + 1) = 0xc;
      puVar4 = (undefined4 *)F_00e10b40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)&gen_args[2]),iVar2);
      *(undefined2 *)((int)this_00 + 6) = 1;
      *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
      uVar1 = *puVar4;
      this_00[2] = uVar1;
      F_00da3a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) GEN_EDX_ARG,uVar1,this_00);
    }
    F_00d919e0(this_00 GEN_EDX_ARG);
    if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) != (undefined *)0x0) {
      F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG);
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = this_00;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e125a0 */
GEN_FRAME uint GEN_THISCALL F_00e125a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe125a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12620 */
GEN_FRAME unsigned int GEN_THISCALL F_00e12620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e12650 */
GEN_NOFRAME uint GEN_THISCALL F_00e12650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e126a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe126a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: BasicArrayImplementation_E::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e126b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe126b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e126f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe126f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * _Size;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,1)
    ;
  }
  _Size = ((undefined *)GEN_TOP((param_1 - *(int *)((int)this + 0x10))));
  if (0 < (int)_Size) {
    _Size = F_00c48350(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10)))),0,(gen_size32)_Size
                   );
  }
  *(int *)((int)this + 0x10) = param_1;
  return (uint)_Size;
}

/* ref: FUN_00e12750 */
GEN_NOFRAME uint GEN_THISCALL F_00e12750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e127a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe127a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: BasicArrayImplementation_M::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e127b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe127b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e127f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe127f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12850 */
GEN_NOFRAME uint GEN_THISCALL F_00e12850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e128a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe128a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e128b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe128b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e128f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe128f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12950 */
GEN_NOFRAME uint GEN_THISCALL F_00e12950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e129a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe129a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAD::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e129b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe129b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e129f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe129f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12a50 */
GEN_NOFRAME uint GEN_THISCALL F_00e12a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0xc),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e12aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12aa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e12ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e12af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc))),(int *)((int)this + 0xc),iVar2,4)
    ;
  }
  uVar1 = *(uint *)((int)this + 0x10);
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return uVar1;
}

/* ref: FUN_00e12b50 */
GEN_FRAME uint GEN_THISCALL F_00e12b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12b90 */
GEN_FRAME uint GEN_THISCALL F_00e12b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12b90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12c10 */
GEN_FRAME unsigned int GEN_THISCALL F_00e12c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e12c40 */
GEN_FRAME uint GEN_THISCALL F_00e12c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c40u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e12c90 */
GEN_FRAME uint GEN_THISCALL F_00e12c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12c90u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12cd0 */
GEN_FRAME uint GEN_THISCALL F_00e12cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: BasicArrayImplementation_E::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e12d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),*(uint *)((int)this + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_M::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e12d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e12e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAD::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e12e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e12f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe12f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xc)));
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e12fa0 */
GEN_NOFRAME uint GEN_THISCALL F_00e12fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00dbdaf0((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e12fc0 */
GEN_FRAME uint GEN_THISCALL F_00e12fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe12fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *(uint *)(iVar3 + 4 + param_2 * 8);
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = (uint *)(*(int *)this + 4 + uVar5 * 8);
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *(undefined4 *)(*(int *)this + param_2 * 8) = *(undefined4 *)(*(int *)this + uVar5 * 8);
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar3 + param_2 * 8) = *(undefined4 *)(iVar3 + uVar5 * 8);
    *(undefined4 *)(iVar3 + 4 + param_2 * 8) = *(undefined4 *)(iVar3 + 4 + uVar5 * 8);
  }
  *(undefined4 *)(*(int *)this + 4 + uVar5 * 8) = *(undefined4 *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar5;
  return param_2;
}

/* ref: FUN_00e13050 */
GEN_FRAME uint GEN_THISCALL F_00e13050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e11310(this GEN_EDX_FWD,param_1);
  if (uVar1 != 0xffffffff) {
    while (*(int *)(*(int *)this + uVar1 * 8) != *param_2) {
      uVar1 = *(uint *)(*(int *)this + 4 + uVar1 * 8);
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    uVar1 = F_00e12fc0(this GEN_EDX_ARG,param_1,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00e130a0 */
GEN_FRAME uint GEN_THISCALL F_00e130a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe130a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *(uint *)(iVar3 + 4 + param_2 * 8);
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = (uint *)(*(int *)this + 4 + uVar5 * 8);
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *(undefined4 *)(*(int *)this + param_2 * 8) = *(undefined4 *)(*(int *)this + uVar5 * 8);
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar3 + param_2 * 8) = *(undefined4 *)(iVar3 + uVar5 * 8);
    *(undefined4 *)(iVar3 + 4 + param_2 * 8) = *(undefined4 *)(iVar3 + 4 + uVar5 * 8);
  }
  *(undefined4 *)(*(int *)this + 4 + uVar5 * 8) = *(undefined4 *)((int)this + 0x18);
  *(uint *)((int)this + 0x18) = uVar5;
  return param_2;
}

/* ref: FUN_00e13130 */
GEN_FRAME uint GEN_THISCALL F_00e13130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe13130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13170 */
GEN_FRAME uint GEN_THISCALL F_00e13170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe13170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e131b0 */
GEN_FRAME uint GEN_THISCALL F_00e131b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe131b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13200 */
GEN_FRAME uint GEN_THISCALL F_00e13200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

