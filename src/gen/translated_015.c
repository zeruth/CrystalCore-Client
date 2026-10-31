#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::Graphics::Kernel::VertexShader::VertexShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6c10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096afc));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Kernel::PixelShader::PixelShader */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6c50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00b1b490(in_ecx GEN_EDX_FWD);
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1096b14));
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Kernel::Texture::Texture */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pTVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *(undefined4 *)(this + 8) = 0;
  pTVar1 = this + 0xc;
  *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4, 0x1375a40) == ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)(this + 0x14) = 0;
  }
  else {
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(undefined4, 0x1375a40) + 4))) = pTVar1;
    *(undefined * PTR32 *)(this + 0x14) = REFG(undefined4, 0x1375a40);
  }
  *(undefined4 *)(this + 0x10) = 0;
  REFG(undefined4, 0x1375a40) = pTVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b44));
  *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096b2c));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x27] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Texture::InitFromSurface */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_004d6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4d6d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  *(undefined4 *)(this + 0x18) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
  *(undefined4 *)(this + 0x1c) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28));
  *(undefined4 *)(this + 0x20) = 1;
  *(undefined2 *)(this + 0x24) = 1;
  this[0x26] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = param_2;
  *(uint *)(this + 0x2c) = param_3 & 0xfcbfffff | 0x900008;
  *(int * PTR32 *)(this + 0x34) = param_1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Graphics::Kernel::Texture::Lock2D */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d6dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4d6dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(this + 0x2c);
  if (((uVar2 & 0x3c00000) == 0x800000) && (*(int *)(this + 0x30) != 0)) {
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
      if (param_3 == 1) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar3 = 0x1000;
    }
    if ((uVar2 & 0x100010) == 0x100010) {
      piVar1 = *(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x38);
    }
    else {
      piVar1 = *(int * PTR32 *)(this + 0x30);
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x0)),0,uVar3);
    if (-1 < (int)uVar2) {
      *param_2 = (*(undefined4 *)(gen_frame + 0x0));
      param_2[1] = 0;
      param_2[2] = (*(uint *)(gen_frame + 0x4));
      return (*(uint *)(gen_frame + 0x4));
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::Unlock2D */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d6e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d6e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x2c);
  if (((uVar1 & 0x3c00000) == 0x800000) && (*(int *)(this + 0x30) != 0)) {
    if ((uVar1 & 0x100010) == 0x100010) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x38) + 0x50))))
                        (*(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x38) GEN_EDX_ARG,param_1);
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x50))))(*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_004d6ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b74));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096b5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 1;
  return (uint)this;
}

/* ref: FUN_004d6f50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  F_00b1b490(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a24));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (REFG(undefined4 * PTR32, 0x1375a40) == ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  else {
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1375a40) + 4))) = puVar1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = REFG(undefined4 * PTR32, 0x1375a40);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  REFG(undefined4 * PTR32, 0x1375a40) = puVar1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Query::ReleaseQuery */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d6fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d6fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x1c);
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: Global::AcquireThreadContext_004d7110 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004d7110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + 0x28)));
  uVar2 = _InterlockedExchangeAdd((volatile gen_long *)(puVar1), (gen_long)(1));
  if (*((uint *)GEN_TOP(((int)this + 0x24))) <= uVar2) {
    return 0;
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8))) =
       uVar2 * 0x5b0 + *((int *)GEN_TOP(((int)this + 4)));
  return 1;
}

/* ref: FUN_004d7150 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_c;
  int local_8;
  
  local_c = *((int *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  if (local_c != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP(((int)this + 4))) + local_8;
      *((undefined4 *)GEN_TOP((iVar4 + 8))) = 0;
      *((uint *)GEN_TOP((iVar4 + 0x38))) = REFG(undefined4, 0x1302350) & 0x7ffffff;
      *((uint *)GEN_TOP((iVar4 + 0x3c))) = REFG(undefined4, 0x1302370) & 0x7fffffff;
      *((undefined4 *)GEN_TOP((iVar4 + 0x40))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x44))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x48))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x4c))) = 0;
      *((uint *)GEN_TOP((iVar4 + 0x6c))) = *((uint *)GEN_TOP((iVar4 + 0x6c))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x74))) = *((uint *)GEN_TOP((iVar4 + 0x74))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x7c))) = *((uint *)GEN_TOP((iVar4 + 0x7c))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x84))) = *((uint *)GEN_TOP((iVar4 + 0x84))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x8c))) = *((uint *)GEN_TOP((iVar4 + 0x8c))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x94))) = *((uint *)GEN_TOP((iVar4 + 0x94))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0x9c))) = *((uint *)GEN_TOP((iVar4 + 0x9c))) & 0x800000ff;
      *((uint *)GEN_TOP((iVar4 + 0xa4))) = *((uint *)GEN_TOP((iVar4 + 0xa4))) & 0x800000ff;
      *((undefined4 *)GEN_TOP((iVar4 + 0x68))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x6c))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x70))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x74))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x78))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x7c))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x80))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x84))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x88))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x8c))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x90))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x94))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x98))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0x9c))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0xa0))) = 0;
      *((undefined1 *)GEN_TOP((iVar4 + 0xa4))) = 0;
      puVar5 = ((undefined4 *)GEN_TOP((iVar4 + 0xa8)));
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      puVar2 = ((uint *)GEN_TOP((iVar4 + 0x2ac)));
      iVar3 = 0x60;
      do {
        puVar2[-1] = 0;
        *puVar2 = REFG(undefined4, 0x1375a5c) & 0xfffffff;
        puVar2 = puVar2 + 2;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      local_8 = local_8 + 0x5b0;
      *((uint *)GEN_TOP((iVar4 + 0x50))) = REFG(undefined4, 0x1302360) & 0x1f;
      uVar1 = REFG(undefined4, 0x1302368);
      *((uint *)GEN_TOP((iVar4 + 0x5c))) = REFG(undefined4, 0x130236c) & 0xfffffffc;
      *((uint *)GEN_TOP((iVar4 + 0x58))) = uVar1 & 0xfe000000;
      local_c = local_c - 1;
      *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = 0;
      *((int *)GEN_TOP((iVar4 + 0x14))) = iVar4 + 0x10;
      *((undefined4 *)GEN_TOP((iVar4 + 0x18))) = 0x8000;
      *((undefined4 *)GEN_TOP((iVar4 + 0x1c))) = 1;
      *((undefined4 *)GEN_TOP((iVar4 + 0x20))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x24))) = 0;
      *((undefined4 *)GEN_TOP((iVar4 + 0x28))) = 0;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: Global::Present */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d72d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d72d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*((char *)GEN_TOP(((int)this + 0xa8))) == '\0') || (iVar1 = *((int *)GEN_TOP(((int)this + 0xa0))), iVar1 == 0))
  goto LAB_004d737b;
  if (iVar1 == 1) {
LAB_004d7304: ;
    uVar5 = 0x3c;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x1e;
  }
  else {
    if (iVar1 != 3) goto LAB_004d7304;
    uVar5 = 0x14;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xb0)));
  *((int *)GEN_TOP(((int)this + 0xb0))) = iVar1 + 1;
  uVar5 = (uint)(iVar1 * 1000) / uVar5 + *((int *)GEN_TOP(((int)this + 0xac)));
  DVar3 = gen_imp_timeGetTime();
  if (DVar3 < uVar5) {
    if (3 < uVar5 - DVar3) {
      gen_imp_Sleep((uVar5 - DVar3) - 3);
    }
    uVar4 = gen_imp_timeGetTime();
    while (uVar4 < uVar5) {
      gen_imp_Sleep(0);
      uVar4 = gen_imp_timeGetTime();
    }
  }
  else if (uVar5 + 100 < DVar3) {
    DVar3 = gen_imp_timeGetTime();
    *((DWORD *)GEN_TOP(((int)this + 0xac))) = DVar3;
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  }
LAB_004d737b: ;
  if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0x3c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,0,0,0,0,0);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
  }
  else {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x44))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,0,0,0,0);
  }
  if ((uVar5 == 0x88760868) || (uVar5 == 0x88760869)) {
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 2;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x31))) = 0;
  return uVar5;
}

/* ref: Global::FindDisplayMode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d73d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d73d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 0x74))) - *((int *)GEN_TOP(((int)this + 0x70)));
  iVar1 = iVar4 >> 0x1f;
  iVar4 = iVar4 / 0xc + iVar1;
  uVar2 = 0;
  if (iVar4 != iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x70)));
    do {
      if (((*param_1 == *piVar3) && (param_1[1] == piVar3[1])) && (param_1[2] == piVar3[2])) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 < (uint)(iVar4 - iVar1));
  }
  return 0xffffffff;
}

/* ref: Global::UpdateAspectRatio */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d7430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)*((int *)GEN_TOP(((int)this + 0x90)));
  if (*((int *)GEN_TOP(((int)this + 0x90))) < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar4 = (float10)*((int *)GEN_TOP(((int)this + 0x94)));
  if (*((int *)GEN_TOP(((int)this + 0x94))) < 0) {
    fVar4 = GEN_X87(fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x4)) = (float)fVar4;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)(gen_frame + 0x4));
  if (!((float10)1 < (float10)(float)fVar4)) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  fVar1 = *pfVar2;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *((float *)GEN_TOP(((int)this + 0x98))) = (float)((float10)(float)fVar3 / (float10)fVar1);
  return (uint)pfVar2;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ImmediateContext */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d74a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d74a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096bbc));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x1000;
  *(undefined4 *)(this + 0x14) = 0x1000;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (undefined1)0x0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  return (uint)this;
}

/* ref: Global::ReleaseResources_004d74f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) != ((undefined *)GEN_TOP(0x0))) {
    F_004d6410(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) GEN_EDX_FWD);
  }
  if (*((int *)GEN_TOP(((int)this + 0x21c))) != 0) {
    F_0050c620(*((int *)GEN_TOP(((int)this + 0x21c))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x21c))) = 0;
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x218))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0x218))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0;
  }
  return uVar1;
}

/* ref: Global::SetViewportRect */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004d7550(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x4d7550u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  iVar1 = param_2[2];
  iVar2 = *param_2;
  (*(int *)(gen_frame + 0x4)) = param_2[1];
  (*(int *)(gen_frame + 0xc)) = param_2[3] - param_2[1];
  piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x1c)));
  (*(float *)(gen_frame + 0x10)) = param_3;
  (*(int *)(gen_frame + 0x0)) = iVar2;
  (*(int *)(gen_frame + 0x8)) = iVar1 - iVar2;
  (*(float *)(gen_frame + 0x14)) = param_4;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xbc))))(piVar3 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: Global::ApplyBlendState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d75c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,0x1b,param_1 & 1);
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xab,(param_1 >> 1 & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x13,(param_1 >> 4 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x14,(param_1 >> 8 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xd1,(param_1 >> 0xc & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xcf,(param_1 >> 0xf & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xd0,(param_1 >> 0x13 & 0xf) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xce,1);
  }
  iVar1 = (param_1 >> 0x18 & 7) + (param_1 >> 0x14 & 8);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xa8,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xbe,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xbf,iVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xc0,iVar1);
  *((uint *)GEN_TOP(((int)this + 0x40))) = param_1 & 0x7ffffff;
  return param_1 & 0x7ffffff;
}

/* ref: Global::ApplyDepthState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d7720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x34))) == 0) {
    param_1 = param_1 & 0xfffffffe;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,7,param_1 & 1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xe,param_1 >> 1 & 1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x17,(param_1 >> 2 & 7) + 1);
  *((uint *)GEN_TOP(((int)this + 0x44))) = param_1 & 0x1f;
  return uVar1;
}

/* ref: Global::ApplyStencilState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d7790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x34,param_1 >> 0x19 & 1);
  if ((param_1 & 0x2000000) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x38,(param_1 >> 0x1a & 7) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x39,param_2 >> 8 & 0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x3a,param_2 >> 0x10 & 0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x3b,param_2 >> 0x18);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x35,(param_1 >> 0x1d) + 1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x36,(param_2 >> 2 & 7) + 1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x37,(param_2 >> 5 & 7) + 1);
  }
  *((uint *)GEN_TOP(((int)this + 0x48))) = param_1 & 0xfe000000;
  *((uint *)GEN_TOP(((int)this + 0x4c))) = param_2 & 0xfffffffc;
  return uVar1;
}

/* ref: Global::ApplyRasterizerState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d7890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,8,param_1 & 3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x16,((param_1 >> 3 & 1) + 1) * (param_1 >> 2 & 1) + 1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xae,param_1 >> 4 & 1);
  uVar1 = param_1 >> 5;
  if ((short)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((uVar1 & 0x8000) * 8 | uVar1 & 0x3ff) << 0xd |
            (((uVar1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xc3,uVar1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0xaf,
             (undefined4)
             gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((param_1 >> 0x15) << 0x16) >> 0x16))) *
                                (float10)*(double *)&REFG(double, 0x10969f8))))));
  *((uint *)GEN_TOP(((int)this + 0x50))) = param_1 & 0x7fffffff;
  return param_1 & 0x7fffffff;
}

/* ref: Global::ApplyVertexStreams */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d79a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4d79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  uint local_14;
  uint local_8;
  
  if (*((uint *)GEN_TOP(((int)this + 0x58))) != param_1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x15c))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x20))));
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
  uVar6 = 0;
  local_8 = 0;
  local_14 = 1;
  if (param_3 != 0) {
    iVar2 = (int)this + (0x130 - (int)param_2);
    bVar4 = 0;
    piVar5 = param_2;
    do {
      local_8 = local_8 | ((uint)piVar5[1] >> 0x1f & (uint)(param_5 != 0)) +
                          (uint)(param_5 != 0) * 2 << GEN_SHC(bVar4, bVar4);
      if (((uVar1 & local_14) != 0) &&
         ((*piVar5 != *((int *)GEN_TOP((iVar2 + (int)piVar5))) ||
          (piVar5[1] != *((int *)GEN_TOP((iVar2 + 4 + (int)piVar5))))))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 400))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,
                   *((undefined4 *)GEN_TOP((*piVar5 + 0x20 + REFG(int, 0x1375a3c) * 4))),
                   (uint)piVar5[1] >> 8 & 0x7fffff,piVar5[1] & 0xff);
        *((int *)GEN_TOP((iVar2 + (int)piVar5))) = *piVar5;
        *((int *)GEN_TOP((iVar2 + 4 + (int)piVar5))) = piVar5[1];
      }
      bVar4 = bVar4 + 2;
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 2;
      local_14 = local_14 << 1 | (uint)((int)local_14 < 0);
    } while (uVar6 < param_3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x128)));
  iVar2 = 0;
  uVar6 = 0;
  do {
    bVar4 = (byte)uVar6;
    if ((2 << GEN_SHC(bVar4, bVar4) & local_8) == 0) {
      if (((uVar1 ^ local_8) & 3 << GEN_SHC(bVar4, bVar4)) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x198))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar2,1);
      }
    }
    else {
      if ((local_8 & 1 << GEN_SHC(bVar4, bVar4)) == 0) {
        uVar3 = param_5 | 0x40000000;
      }
      else {
        uVar3 = 0x80000001;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x198))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar2,uVar3);
    }
    uVar6 = uVar6 + 2;
    iVar2 = iVar2 + 1;
  } while (uVar6 < 0x10);
  *((uint *)GEN_TOP(((int)this + 0x58))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x128))) = local_8;
  return param_1;
}

/* ref: Global::ForceApplyVertexStreams */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4d7b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_8;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x15c))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x20))));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
  uVar3 = 0;
  local_8 = 0;
  uVar6 = 1;
  if (param_3 != 0) {
    bVar1 = 0;
    puVar5 = ((uint *)GEN_TOP((param_2 + 4)));
    do {
      local_8 = local_8 | (*puVar5 >> 0x1f & (uint)(param_5 != 0)) + (uint)(param_5 != 0) * 2 <<
                          (bVar1 & 0x1f);
      if ((uVar2 & uVar6) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 400))))
                  (this,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar3,
                   *((undefined4 *)GEN_TOP((puVar5[-1] + 0x20 + REFG(int, 0x1375a3c) * 4))),*puVar5 >> 8 & 0x7fffff,
                   *puVar5 & 0xff);
      }
      bVar1 = bVar1 + 2;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    } while (uVar3 < param_3);
  }
  iVar4 = 0;
  uVar6 = 0;
  do {
    if ((local_8 & 2 << GEN_SHC((byte)uVar6, (unsigned int)(uintptr_t)uVar6)) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x198))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,1);
    }
    else {
      if ((local_8 & 1 << GEN_SHC((byte)uVar6, (unsigned int)(uintptr_t)uVar6)) == 0) {
        uVar2 = param_5 | 0x40000000;
      }
      else {
        uVar2 = 0x80000001;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x198))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,uVar2);
    }
    uVar6 = uVar6 + 2;
    iVar4 = iVar4 + 1;
  } while (uVar6 < 0x10);
  *((uint *)GEN_TOP(((int)this + 0x128))) = local_8;
  *((int *)GEN_TOP(((int)this + 0x58))) = param_1;
  uVar7 = F_00c46aa0((int)this + 0x130,param_2,param_3 * 8);
  return (uint)uVar7;
}

/* ref: Global::ApplyVertexShaderConstants */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d7c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar3 = (int)this + (0x60 - param_2);
    puVar4 = ((uint *)GEN_TOP((param_2 + 4)));
    do {
      uVar2 = *puVar4;
      if (*((uint *)GEN_TOP((iVar3 + (int)puVar4))) < uVar2 ||
          *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 0x60))) != puVar4[-1]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x178))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + (-4 - param_2) + (int)puVar4))),
                   puVar4[-1],uVar2);
        *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 0x60))) = puVar4[-1];
        *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 100))) = *puVar4;
      }
      else {
        *((uint *)GEN_TOP((iVar3 + (int)puVar4))) = uVar2;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < uVar1);
  }
  return (int)this + 0x60;
}

/* ref: Global::ForceApplyVertexShaderConstants */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d7d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d7d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x178))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar2 * 8)))
                 ,*((undefined4 *)GEN_TOP((param_2 + uVar2 * 8))),*((undefined4 *)GEN_TOP((param_2 + 4 + uVar2 * 8))));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar3 = F_00c46aa0((int)this + 0x60,param_2,uVar1 * 8);
  return (uint)uVar3;
}

/* ref: Global::BindVertexShader */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004d7da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d7da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  ushort * puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  uVar8 = *((uint *)GEN_TOP((param_1 + 0xc)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x5c)));
  uVar4 = *((uint *)GEN_TOP((iVar3 + 0xc)));
  (*(uint *)(gen_frame + 0x0)) = 0;
  F_00c46aa0(((undefined4 *)(gen_frame + 0xc)),(int)this + 0x60,uVar4 * 8);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      iVar1 = (*(uint *)(gen_frame + 0x4)) * 8;
      puVar6 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar1)));
      *((undefined4 *)GEN_TOP((iVar1 + 0x60 + (int)this))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 + 100 + (int)this))) = 0;
      uVar10 = uVar9;
      uVar5 = (*(uint *)(gen_frame + 0x0));
      if (uVar9 < uVar4) {
        uVar2 = *puVar6;
        puVar7 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x10))) + uVar9 * 8)));
        do {
          if (uVar2 == *puVar7 && puVar7[1] <= puVar6[1]) {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 8 + 0x60 + (int)this))) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar9 * 2)];
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 8 + 100 + (int)this))) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar9 * 2 + 1)];
            uVar10 = uVar9 + 1;
            uVar5 = uVar9 + 1;
            break;
          }
          uVar10 = uVar9;
          uVar5 = uVar9;
          if (uVar2 < *puVar7) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 4;
          uVar10 = (*(uint *)(gen_frame + 0x0));
          uVar5 = (*(uint *)(gen_frame + 0x0));
        } while (uVar9 < uVar4);
      }
      (*(uint *)(gen_frame + 0x0)) = uVar5;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      uVar9 = uVar10;
    } while ((*(uint *)(gen_frame + 0x4)) < uVar8);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x170))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x2c))));
  *((int *)GEN_TOP(((int)this + 0x5c))) = param_1;
  return uVar8;
}

/* ref: Global::ApplyVertexTextures */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d7ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d7ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    iVar3 = -4 - param_2;
    puVar5 = ((uint *)GEN_TOP((param_2 + 4)));
    param_2 = *((int *)GEN_TOP((param_1 + 0x14)));
    do {
      iVar4 = *((ushort *)GEN_TOP(((int)puVar5 + *((int *)GEN_TOP((param_1 + 0x18))) + iVar3))) + 0x101;
      if (puVar5[-1] != *((uint *)GEN_TOP(((int)this + iVar4 * 8 - 0x698)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,*((undefined4 *)GEN_TOP((puVar5[-1] + 0x30))));
      }
      puVar1 = ((uint *)GEN_TOP(((int)this + iVar4 * 8 - 0x694)));
      if (*puVar5 != *puVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,1,(*puVar5 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,2,(*puVar5 >> 2 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,3,(*puVar5 >> 4 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,8,
                   (undefined4)
                   gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar5 >> 10) << 0x16) >> 0x16))) *
                                      (float10)*(double *)&REFG(double, 0x10969f8))))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar4,9,*puVar5 >> 0x14 & 0xf);
      }
      *((uint *)GEN_TOP(((int)this + iVar4 * 8 - 0x698))) = puVar5[-1];
      uVar2 = *puVar5;
      puVar5 = puVar5 + 2;
      param_2 = param_2 - 1;
      *puVar1 = uVar2 & 0xfffffff;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: Global::ForceApplyVertexTextures */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d8030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d8030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    iVar2 = -4 - param_2;
    puVar4 = ((uint *)GEN_TOP((param_2 + 4)));
    param_2 = *((int *)GEN_TOP((param_1 + 0x14)));
    do {
      iVar3 = *((ushort *)GEN_TOP(((int)puVar4 + *((int *)GEN_TOP((param_1 + 0x18))) + iVar2))) + 0x101;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,*((undefined4 *)GEN_TOP((puVar4[-1] + 0x30))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,1,(*puVar4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,2,(*puVar4 >> 2 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,3,(*puVar4 >> 4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,8,
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar4 >> 10) << 0x16) >> 0x16))) *
                                    (float10)*(double *)&REFG(double, 0x10969f8))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,iVar3,9,*puVar4 >> 0x14 & 0xf);
      *((uint *)GEN_TOP(((int)this + iVar3 * 8 - 0x698))) = puVar4[-1];
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      param_2 = param_2 - 1;
      *((uint *)GEN_TOP(((int)this + iVar3 * 8 - 0x694))) = uVar1 & 0xfffffff;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: Global::ApplyPixelShaderConstants */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d8160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar3 = (int)this + (200 - param_2);
    puVar4 = ((uint *)GEN_TOP((param_2 + 4)));
    do {
      uVar2 = *puVar4;
      if (*((uint *)GEN_TOP((iVar3 + (int)puVar4))) < uVar2 ||
          *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 200))) != puVar4[-1]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1b4))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,
                   (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + (-4 - param_2) + (int)puVar4))),
                   puVar4[-1],uVar2);
        *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 200))) = puVar4[-1];
        *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 0xcc))) = *puVar4;
      }
      else {
        *((uint *)GEN_TOP((iVar3 + (int)puVar4))) = uVar2;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar5 < uVar1);
  }
  return (int)this + 200;
}

/* ref: Global::ForceApplyPixelShaderConstants */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d8210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1b4))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + uVar2 * 8)))
                 ,*((undefined4 *)GEN_TOP((param_2 + uVar2 * 8))),*((undefined4 *)GEN_TOP((param_2 + 4 + uVar2 * 8))));
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  uVar3 = F_00c46aa0((int)this + 200,param_2,uVar1 * 8);
  return (uint)uVar3;
}

/* ref: Global::BindPixelShader */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004d8280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d8280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x74, 12, 4);
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  ushort * puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70));
  uVar8 = *((uint *)GEN_TOP((param_1 + 0xc)));
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc0)));
  uVar4 = *((uint *)GEN_TOP((iVar3 + 0xc)));
  (*(uint *)(gen_frame + 0x0)) = 0;
  F_00c46aa0(((undefined4 *)(gen_frame + 0xc)),(int)this + 200,uVar4 * 8);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar9 = 0;
  if (uVar8 != 0) {
    do {
      iVar1 = (*(uint *)(gen_frame + 0x4)) * 8;
      puVar6 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar1)));
      *((undefined4 *)GEN_TOP((iVar1 + 200 + (int)this))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 + 0xcc + (int)this))) = 0;
      uVar10 = uVar9;
      uVar5 = (*(uint *)(gen_frame + 0x0));
      if (uVar9 < uVar4) {
        uVar2 = *puVar6;
        puVar7 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x10))) + uVar9 * 8)));
        do {
          if (uVar2 == *puVar7 && puVar7[1] <= puVar6[1]) {
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 8 + 200 + (int)this))) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar9 * 2)];
            *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 8 + 0xcc + (int)this))) = ((undefined4 *)(gen_frame + 0xc))[(int)(uVar9 * 2 + 1)];
            uVar10 = uVar9 + 1;
            uVar5 = uVar9 + 1;
            break;
          }
          uVar10 = uVar9;
          uVar5 = uVar9;
          if (uVar2 < *puVar7) break;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 4;
          uVar10 = (*(uint *)(gen_frame + 0x0));
          uVar5 = (*(uint *)(gen_frame + 0x0));
        } while (uVar9 < uVar4);
      }
      (*(uint *)(gen_frame + 0x0)) = uVar5;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      uVar9 = uVar10;
    } while ((*(uint *)(gen_frame + 0x4)) < uVar8);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x1ac))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  *((int *)GEN_TOP(((int)this + 0xc0))) = param_1;
  return uVar8;
}

/* ref: Global::ApplyPixelTextures */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d83c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d83c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  int local_c;
  
  local_c = *((int *)GEN_TOP((param_1 + 0x14)));
  if (local_c != 0) {
    puVar5 = ((uint *)GEN_TOP((param_2 + 4)));
    do {
      uVar6 = (uint)*((ushort *)GEN_TOP(((int)puVar5 + (-4 - param_2) + *((int *)GEN_TOP((param_1 + 0x18))))));
      uVar2 = puVar5[-1];
      if (uVar2 != *((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x194)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,*((undefined4 *)GEN_TOP((uVar2 + 0x30))));
        uVar3 = *((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x194)));
        if (4 < uVar3) {
          *((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x198))) =
               (uint)(*((char *)GEN_TOP((uVar2 + 0x27))) != *((char *)GEN_TOP((uVar3 + 0x27)))) << 0x1c |
               *((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x198))) & 0xfffffff;
        }
      }
      puVar1 = ((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x198)));
      if (*puVar5 != *puVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,1,(*puVar5 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,2,(*puVar5 >> 2 & 3) + 1);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,3,(*puVar5 >> 4 & 3) + 1);
        uVar3 = *puVar5 >> 6 & 0xf;
        if (uVar3 != (*puVar1 >> 6 & 0xf)) {
          if (uVar3 == 0xf) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,5,2);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,6,3);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,7,2);
          }
          else {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,5,
                       *(undefined4 *)(&REFG(undefined, 0x1096bf4) + (*puVar5 >> 9 & 1) * 4));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,6,
                       *(undefined4 *)(&REFG(undefined, 0x1096bec) + (*puVar5 >> 6 & 1) * 4));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,7,
                       *(undefined4 *)(&REFG(undefined, 0x1096be0) + (*puVar5 >> 7 & 3) * 4));
          }
        }
        fVar4 = 3.088944e-09;
        if (*((char *)GEN_TOP((uVar2 + 0x27))) == '\0') {
          fVar4 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar5 >> 10) << 0x16) >> 0x16))) *
                         (float10)*(double *)&REFG(double, 0x10969f8))));
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,8,(undefined4)gen_fl2bits(fVar4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,9,*puVar5 >> 0x14 & 0xf);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,10,
                   *(undefined4 *)(&REFG(undefined, 0x1096bc0) + (*((byte *)GEN_TOP(((int)puVar5 + 3))) & 7) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,0xb,*puVar5 >> 0x1b & 1);
      }
      *((uint *)GEN_TOP(((int)this + uVar6 * 8 + 0x194))) = puVar5[-1];
      uVar2 = *puVar5;
      puVar5 = puVar5 + 2;
      local_c = local_c - 1;
      *puVar1 = uVar2 & 0xfffffff;
    } while (local_c != 0);
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x1c)));
  uVar6 = ~uVar2 & *((uint *)GEN_TOP(((int)this + 0x214)));
  if (uVar6 != 0) {
    uVar7 = 0;
    uVar3 = 1;
    do {
      if ((uVar6 & uVar3) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar7,0);
        *((undefined4 *)GEN_TOP(((int)this + uVar7 * 8 + 0x194))) = 0;
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (uVar7 < 0x10);
  }
  *((uint *)GEN_TOP(((int)this + 0x214))) = uVar2;
  return uVar2;
}

/* ref: Global::ForceApplyPixelTextures */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d8690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  float fVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    iVar2 = -4 - param_2;
    puVar4 = ((uint *)GEN_TOP((param_2 + 4)));
    param_2 = *((int *)GEN_TOP((param_1 + 0x14)));
    do {
      uVar1 = puVar4[-1];
      uVar5 = (uint)*((ushort *)GEN_TOP(((int)puVar4 + *((int *)GEN_TOP((param_1 + 0x18))) + iVar2)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,*((undefined4 *)GEN_TOP((uVar1 + 0x30))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,1,(*puVar4 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,2,(*puVar4 >> 2 & 3) + 1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,3,(*puVar4 >> 4 & 3) + 1);
      if ((*puVar4 & 0x3c0) == 0x3c0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,5,2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,6,3);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,7,1);
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,5,
                   *(undefined4 *)(&REFG(undefined, 0x1096c30) + (*puVar4 >> 9 & 1) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,6,
                   *(undefined4 *)(&REFG(undefined, 0x1096c28) + (*puVar4 >> 6 & 1) * 4));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,7,
                   *(undefined4 *)(&REFG(undefined, 0x1096c1c) + (*puVar4 >> 7 & 3) * 4));
      }
      fVar3 = 3.088944e-09;
      if (*((char *)GEN_TOP((uVar1 + 0x27))) == '\0') {
        fVar3 = ((float)GEN_TOF((((float10)GEN_TOD(((int)((*puVar4 >> 10) << 0x16) >> 0x16))) *
                       (float10)*(double *)&REFG(double, 0x10969f8))));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,8,(undefined4)gen_fl2bits(fVar3));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,9,*puVar4 >> 0x14 & 0xf);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,10,
                 *(undefined4 *)(&REFG(undefined, 0x1096bfc) + (*((byte *)GEN_TOP(((int)puVar4 + 3))) & 7) * 4));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x114))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar5,0xb,*puVar4 >> 0x1b & 1);
      *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 0x194))) = puVar4[-1];
      uVar1 = *puVar4;
      puVar4 = puVar4 + 2;
      param_2 = param_2 - 1;
      *((uint *)GEN_TOP(((int)this + uVar5 * 8 + 0x198))) = uVar1 & 0xfffffff;
    } while (param_2 != 0);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x1c)));
  if (~uVar1 != 0) {
    uVar6 = 0;
    uVar5 = 1;
    do {
      if ((~uVar1 & uVar5) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar6,0);
        *((undefined4 *)GEN_TOP(((int)this + uVar6 * 8 + 0x194))) = 0;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    } while (uVar6 < 0x10);
  }
  *((uint *)GEN_TOP(((int)this + 0x214))) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteClear */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d8900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint local_8;
  
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
  local_8 = (uint)((uVar1 & 1) != 0);
  if ((uVar1 & 2) != 0) {
    local_8 = local_8 | 2;
  }
  if ((uVar1 & 4) != 0) {
    local_8 = local_8 | 4;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xac))))
                    (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,(uint)(*((int *)GEN_TOP((param_1 + 0x14))) != 0),
                     *((int *)GEN_TOP((param_1 + 0x14))),local_8,
                     CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((param_1 + 0xb))),
                                                *((undefined1 *)GEN_TOP((param_1 + 8)))),
                                       *((undefined1 *)GEN_TOP((param_1 + 9)))),*((undefined1 *)GEN_TOP((param_1 + 10)))),
                     *((undefined4 *)GEN_TOP((param_1 + 0xc))),*((undefined4 *)GEN_TOP((param_1 + 0x10))));
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecutePresent */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d89a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d89a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x3c)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0,0,0,0,0);
  return uVar2;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteCopySurfaceRect */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004d89e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d89e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x30)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x18))),&(*(int * PTR32 *)(gen_frame + 0x0)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x30)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x1c)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0xc)));
  iVar3 = *((int *)GEN_TOP((param_1 + 0x10)));
  (*(int *)(gen_frame + 0x8)) = iVar2;
  (*(int *)(gen_frame + 0xc)) = iVar3;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    bVar5 = (byte)*((undefined4 *)GEN_TOP((param_1 + 0x18)));
    uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x18))) >> GEN_SHC(bVar5, bVar5);
    uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x1c))) >> GEN_SHC(bVar5, bVar5);
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    (*(int *)(gen_frame + 0x10)) = iVar2 + uVar4;
    (*(int *)(gen_frame + 0x14)) = iVar3 + uVar6;
  }
  else {
    (*(int *)(gen_frame + 0x10)) = (piVar1[2] - *piVar1) + iVar2;
    (*(int *)(gen_frame + 0x14)) = (piVar1[3] - piVar1[1]) + iVar3;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x88))))
            (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)),piVar1,(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)),1);
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  }
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: Global::CopyTextureByLock */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004d8b40(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4d8b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  uint uVar7;
  
  iVar4 = (int)param_1;
  uVar7 = *((uint *)GEN_TOP(((int)param_1 + 0x14)));
  sVar6 = 0;
  if ((*((uint *)GEN_TOP((uVar7 + 0x28))) & 0xf000) == 0x3000) {
    sVar6 = 2;
  }
  uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c))) & 0x3c00000;
  if (uVar5 == 0x800000) {
    puVar1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x18)));
    param_1 = ((int *)GEN_TOP(((*((uint *)GEN_TOP((uVar7 + 0x1c))) >> GEN_SHC((byte)*puVar1, (byte)*puVar1)) >> sVar6)));
    if (param_1 == ((int *)GEN_TOP(0x0))) {
      param_1 = ((int *)GEN_TOP(0x1));
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((uVar7 + 0x30)));
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + 0x30)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,*puVar1,&(*(int *)(gen_frame + 0x10)),0,0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 8))),&(*(int *)(gen_frame + 0x4)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x10)) * (int)param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 8))));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 0x18))));
    return uVar7;
  }
  if (uVar5 == 0x1000000) {
    puVar1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x18)));
    param_1 = ((int *)GEN_TOP(((*((uint *)GEN_TOP((uVar7 + 0x20))) >> GEN_SHC((byte)*puVar1, (byte)*puVar1)) >> sVar6)));
    if (param_1 == ((int *)GEN_TOP(0x0))) {
      param_1 = ((int *)GEN_TOP(0x1));
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((uVar7 + 0x30)));
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + 0x30)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,*puVar1,((undefined1 *)(gen_frame + 0x0)),0,0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 8))),((undefined1 *)(gen_frame + 0xc)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x4)) * (int)param_1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 8))));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 0x18))));
    return uVar7;
  }
  if (uVar5 != 0x2000000) {
    return uVar7;
  }
  uVar5 = (*((uint *)GEN_TOP((uVar7 + 0x1c))) >> GEN_SHC((byte)*((undefined4 *)GEN_TOP(((int)param_1 + 0x18))), (byte)*((undefined4 *)GEN_TOP(((int)param_1 + 0x18))))) >> sVar6;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 1;
  }
  uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c))) & 0x3c00000;
  if (uVar5 != 0x800000) {
    if (uVar5 == 0x1000000) {
      param_1 = *((int * PTR32 *)GEN_TOP((uVar7 + 0x30)));
      goto LAB_004d8be6;
    }
    if (uVar5 == 0x2000000) {
      param_1 = *((int * PTR32 *)GEN_TOP((uVar7 + 0x30)));
      goto LAB_004d8be6;
    }
  }
  param_1 = *((int * PTR32 *)GEN_TOP((uVar7 + 0x30)));
LAB_004d8be6: ;
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 4))) + 0x30)));
  uVar7 = 0;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_ARG,uVar7,*((undefined4 *)GEN_TOP((iVar4 + 0x18))),&(*(int *)(gen_frame + 0x10)),0,0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_ARG,uVar7,*((undefined4 *)GEN_TOP((iVar4 + 8))),&(*(int *)(gen_frame + 0x4)),0,0);
    F_00c46aa0((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x10)) * (*(uint *)(gen_frame + 0x18)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,uVar7,*((undefined4 *)GEN_TOP((iVar4 + 8))));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,uVar7,*((undefined4 *)GEN_TOP((iVar4 + 0x18))));
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  return uVar5;
}

/* ref: Global::ExecuteCopyTexture */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004d8da0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4d8da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1;
  if (((*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x2c))) & 0x200000) == 0) &&
     ((*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x2c))) & 0x300000) == 0)) {
    uVar1 = F_004d8b40(param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteStretchRect */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d8dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x30)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((uint *)GEN_TOP((param_1 + 0x14))) & 0x7fffffff,&(*(int * PTR32 *)(gen_frame + 0x0)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x30)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x34)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 8))),&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x88))))
            (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((param_1 + 0x18))),(*(int * PTR32 *)(gen_frame + 0x4)),
             *((undefined4 *)GEN_TOP((param_1 + 0xc))),((*((uint *)GEN_TOP((param_1 + 0x14))) & 0x80000000) != 0) + 1);
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  }
  uVar2 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteGetRenderTargetData */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d8ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4d8ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[1] + 0x38 + REFG(int, 0x1375a3c) * 4)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_FWD,0,&(*(int * PTR32 *)&gen_args[0]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x80))))
            (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((piVar2[1] + 0x34))),(*(int * PTR32 *)&gen_args[0]));
  uVar3 = 0;
  if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Global::ExecuteSaveTexture */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004d8f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4d8f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  code * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0xc)));
  iVar6 = *((int *)GEN_TOP((iVar1 + 0x38 + REFG(int, 0x1375a3c) * 4)));
  if (iVar6 == 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x34))) != 0) {
      uVar3 = gen_imp_D3DXSaveSurfaceToFileA(*((undefined4 *)GEN_TOP((param_1 + 4))),*((undefined4 *)GEN_TOP((param_1 + 8))),
                         *((int *)GEN_TOP((iVar1 + 0x34))),0,0);
      goto LAB_004d8fc1;
    }
    iVar6 = *((int *)GEN_TOP((iVar1 + 0x30)));
    uVar5 = *((undefined4 *)GEN_TOP((param_1 + 8)));
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((param_1 + 8)));
    uVar4 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  uVar3 = gen_imp_D3DXSaveTextureToFileA(uVar4,uVar5,iVar6,0);
LAB_004d8fc1: ;
  pcVar2 = *((gen_code32 *)GEN_TOP((param_1 + 0x14)));
  if (pcVar2 != ((code *)GEN_TOP(0x0))) {
    uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0x18)));
    uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined, 0x109694c);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    uVar3 = (*pcVar2)(&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::LoadCopyrightResources */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d9000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),((char *)REFP(0x1096964)),0,0,0);
  *(uint *)(this + 4) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),((char *)REFP(0x109698c)),0,0,0);
    *(uint *)(this + 8) = uVar2;
    if (uVar2 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0);
      (*(undefined4 *)(gen_frame + 0x4)) = 0x746578;
      uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x10969b4)),0,0
                           ,0);
      *(uint *)(this + 0xc) = uVar2;
      if (uVar2 != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x98)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)(this + 0x10);
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)(this + 0x10) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x98)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 8) + 0x9c)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)(this + 0x14);
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)(this + 0x14) = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x9c)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xfc)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        }
        piVar1 = *(int * PTR32 *)(this + 0x18);
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
        }
        *(undefined4 *)(this + 0x18) = *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xfc)));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004d9130 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d9130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(wchar_t * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d9130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    return 0;
  }
  F_00c4a8e0(((wchar_t *)GEN_TOP(((int)this + 0x48))),0x104,param_1);
  *((wchar_t * PTR32 *)GEN_TOP(((int)this + 0x34))) = ((wchar_t *)GEN_TOP(((int)this + 0x48)));
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::SaveThread */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  F_004cefe0((undefined *)this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)(this + 0x18) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)(this + 0x1c) = pvVar1;
  *(undefined4 *)(this + 0x38) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::RequestSave */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d91b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d91b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x2c) = param_1[3];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
  *(int * PTR32 *)(this + 0x38) = param_2;
  return (uint)(gen_imp_SetEvent(*(HANDLE *)(this + 0x18)));
}

/* ref: FUN_004d9220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x18))));
  uVar1 = F_004cf020(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::Run */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004d9240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d9240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined1 SVar1;
  int * piVar2;
  undefined4 uVar3;
  
  SVar1 = this[0x14];
  while ((SVar1 == (undefined1)0x0 &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)(this + 0x18),0xffffffff),
         this[0x14] == (undefined1)0x0))) {
    uVar3 = gen_imp_D3DXSaveSurfaceToFileW(*(undefined4 *)(this + 0x24),*(undefined4 *)(this + 0x28),
                       *(undefined4 *)(this + 0x38),0,0);
    *(undefined4 *)(this + 0x3c) = uVar3;
    piVar2 = *(int * PTR32 *)(this + 0x38);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x38) = 0;
    }
    gen_imp_SetEvent(*(HANDLE *)(this + 0x1c));
    SVar1 = this[0x14];
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::RenderThread */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d92b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d92b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  F_004cefe0((undefined *)this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)(this + 0x18) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)(this + 0x1c) = pvVar1;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::CallbackManager::CallbackManager */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d92f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d92f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::CallbackManager::Register */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d9320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(this + 0x1c);
  uVar2 = 0;
  if (*(uint *)(this + 0x20) != 0) {
    do {
      if (*((int *)GEN_TOP((iVar1 + uVar2 * 8))) == 0) {
        *((undefined4 *)GEN_TOP((iVar1 + uVar2 * 8))) = param_1;
        *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar2 * 8))) = param_2;
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x20));
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0xffffffff;
}

/* ref: FUN_004d9380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d9380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4 + param_1 * 8))) = 0;
  *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: Global::InvokeCallbacks */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004d93c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d93c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  code * pcVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      pcVar3 = *((gen_code32 *)GEN_TOP((iVar2 + uVar4 * 8)));
      if (pcVar3 != ((code *)GEN_TOP(0x0))) {
        (*pcVar3)(*((undefined4 *)GEN_TOP((iVar2 + 4 + uVar4 * 8))));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: Global::SetTrackedSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d9410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0xfU >> 4;
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*((uint *)GEN_TOP(((int)this + 8))) & 0xf) * 4)));
  _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)((uVar2 * 0x10 - (*((uint *)GEN_TOP(((int)this + 8))) & 0xfffffff0))));
  uVar2 = uVar2 << 4;
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) & 0xf | uVar2;
  return uVar2;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::ReleaseResource */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * pVVar3;
  
  if (*(int *)(this + REFG(int, 0x1375a38) * 4 + 0x20) != 0) {
    pVVar3 = this + 0x2c;
    iVar2 = _InterlockedExchangeAdd((volatile gen_long *)(((int *)pVVar3)), (gen_long)(-1));
    if (iVar2 == 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x20) + 0x30))))
                (*(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x20) GEN_EDX_ARG);
    }
  }
  if (((byte)this[0x1c] & 1) == 0) {
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    piVar1 = *(int * PTR32 *)(this + 0x20);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  else {
    pVVar3 = this + 0x20;
    iVar2 = 3;
    do {
      piVar1 = *(int * PTR32 *)pVVar3;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        *(int *)pVVar3 = 0;
      }
      pVVar3 = pVVar3 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
  LOCK();
  *piVar1 = *piVar1 - (*(uint *)(this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xf;
  return (uint)piVar1;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::CreateResource */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pVVar4;
  uint local_c;
  uint local_8;
  
  uVar2 = *(uint *)(this + 0x1c);
  local_8 = 0;
  if ((uVar2 & 1) != 0) {
    local_8 = 0x200;
  }
  if ((uVar2 & 0x10) == 0) {
    local_8 = local_8 | 8;
  }
  local_c = (uint)((uVar2 & 4) != 0);
  if ((uVar2 & 0x40) != 0) {
    local_c = 2;
  }
  pVVar4 = this + 0x20;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x68))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),local_8,0,local_c,
                     pVVar4,0);
  if (-1 < (int)uVar2) {
    if (((byte)this[0x1c] & 1) == 0) {
      *(undefined4 *)(this + 0x24) = *(undefined4 *)pVVar4;
      *(undefined4 *)(this + 0x28) = *(undefined4 *)pVVar4;
      uVar2 = *(int *)(this + 0x18) + 0xfU >> 4;
      piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
      _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)((uVar2 * 0x10 - (*(uint *)(this + 8) & 0xfffffff0))));
      uVar2 = uVar2 << 4 | *(uint *)(this + 8) & 0xf;
    }
    else {
      uVar2 = 1;
      pVVar4 = this + 0x24;
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x68))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),local_8,0,
                           local_c,pVVar4,0);
        if ((int)uVar3 < 0) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        pVVar4 = pVVar4 + 4;
      } while (uVar2 < 3);
      uVar2 = *(int *)(this + 0x18) * 3 + 0xfU >> 4;
      piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
      _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)((uVar2 * 0x10 - (*(uint *)(this + 8) & 0xfffffff0))));
      uVar2 = uVar2 << 4 | *(uint *)(this + 8) & 0xf;
    }
    *(uint *)(this + 8) = uVar2;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0xffffffff;
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::OnDeviceLost */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004d9650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((byte)this[0x10] & 0x4c) == 0) {
    F_004d9460(this - 0xc GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::OnDeviceReset */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004d9660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (((byte)this[0x10] & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004d9500(this - 0xc GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004d9460(this - 0xc GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::ReleaseResource */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * pIVar3;
  
  if (*(int *)(this + REFG(int, 0x1375a38) * 4 + 0x24) != 0) {
    pIVar3 = this + 0x30;
    iVar2 = _InterlockedExchangeAdd((volatile gen_long *)(((int *)pIVar3)), (gen_long)(-1));
    if (iVar2 == 1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x24) + 0x30))))
                (*(int * PTR32 *)(this + REFG(int, 0x1375a38) * 4 + 0x24) GEN_EDX_ARG);
    }
  }
  if (((byte)this[0x20] & 1) == 0) {
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    piVar1 = *(int * PTR32 *)(this + 0x24);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x24) = 0;
    }
  }
  else {
    pIVar3 = this + 0x24;
    iVar2 = 3;
    do {
      piVar1 = *(int * PTR32 *)pIVar3;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
        *(int *)pIVar3 = 0;
      }
      pIVar3 = pIVar3 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
  LOCK();
  *piVar1 = *piVar1 - (*(uint *)(this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xf;
  return (uint)piVar1;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::CreateResource */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d9730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * pIVar5;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  if (*(int *)(this + 0x1c) == 1) {
    local_c = 0x65;
  }
  else {
    if (*(int *)(this + 0x1c) != 2) {
      return 0;
    }
    local_c = 0x66;
  }
  uVar3 = *(uint *)(this + 0x20);
  local_8 = 0;
  if ((uVar3 & 1) != 0) {
    local_8 = 0x200;
  }
  if ((uVar3 & 0x10) == 0) {
    local_8 = local_8 | 8;
  }
  uVar4 = (uint)((uVar3 & 4) != 0);
  if ((uVar3 & 0x40) != 0) {
    uVar4 = 2;
  }
  pIVar5 = this + 0x24;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x6c))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),local_8,local_c,
                     uVar4,pIVar5,0);
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (((byte)this[0x20] & 1) == 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)pIVar5;
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)pIVar5;
    iVar2 = *(int *)(this + 0x18);
  }
  else {
    local_10 = 1;
    pIVar5 = this + 0x28;
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x6c))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),local_8,local_c
                         ,uVar4,pIVar5,0);
      if ((int)uVar3 < 0) {
        return 0;
      }
      local_10 = local_10 + 1;
      pIVar5 = pIVar5 + 4;
    } while (local_10 < 3);
    iVar2 = *(int *)(this + 0x18) * 3;
  }
  uVar3 = iVar2 + 0xfU >> 4;
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
  _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)((uVar3 * 0x10 - (*(uint *)(this + 8) & 0xfffffff0))));
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xf | uVar3 << 4;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  return 1;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::OnDeviceLost */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004d9870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((byte)this[0x14] & 0x4c) == 0) {
    F_004d9690(this - 0xc GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::OnDeviceReset */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004d9880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (((byte)this[0x14] & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004d9730(this - 0xc GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004d9690(this - 0xc GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004d98b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d98b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d98b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) != 0) {
      piVar2 = ((int *)GEN_TOP(((int)this + 0x14)));
      iVar3 = 3;
      do {
        uVar1 = 0;
        if (*piVar2 != 0) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*piVar2);
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return uVar1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
    uVar1 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x14))));
      *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_004d9920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4d9920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 == 0) {
    iVar3 = *((int *)GEN_TOP((param_1 + 0xc))) - param_2;
  }
  uVar2 = param_2 + iVar3;
  if ((uVar2 <= *((uint *)GEN_TOP((param_1 + 0xc)))) &&
     (((*((uint *)GEN_TOP((param_1 + 0x10))) & 3) == 0 || ((param_4 & 1) == 0)))) {
    if ((*((uint *)GEN_TOP((param_1 + 0x10))) & 2) == 0) {
      iVar3 = *((int *)GEN_TOP((param_1 + 0x14 + REFG(int, 0x1375a38) * 4)));
      *((uint *)GEN_TOP((param_1 + 0x28))) = *((uint *)GEN_TOP((param_1 + 0xc)));
      *((int *)GEN_TOP((param_1 + 0x20))) = iVar3;
      return iVar3 + param_2;
    }
    uVar1 = F_004d4760(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)))
                        GEN_EDX_ARG,uVar2);
    *((uint *)GEN_TOP((param_1 + 0x20))) = uVar1;
    if (uVar1 != 0) {
      *((uint *)GEN_TOP((param_1 + 0x24))) = uVar2;
      *((uint *)GEN_TOP((param_1 + 0x28))) = param_2 + 0xf + iVar3 & 0xfffffff0;
      return uVar1 + param_2;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexDeclaration::Create */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d99c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d99c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  byte * pbVar7;
  byte * pbVar8;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_2 * 4,0x10);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  *((int *)GEN_TOP(((int)this + 0x10))) = param_2;
  if (uVar4 != 0) {
    F_00c46aa0(uVar4,param_1,param_2 * 4);
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8)));
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 8)));
    uVar4 = 0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    uVar5 = (*pcVar2)(piVar1,param_2 * 8 + 8,0x10);
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    if (param_2 != 0) {
      pbVar7 = ((byte *)GEN_TOP((param_1 + 3)));
      pbVar8 = ((byte *)GEN_TOP((uVar5 + 4)));
      param_1 = param_2;
      do {
        *(ushort *)(pbVar8 - 4) = (ushort)pbVar7[-3];
        *(ushort *)(pbVar8 - 2) = (ushort)pbVar7[-2];
        bVar3 = F_004d5660((uint)pbVar7[-1]);
        *pbVar8 = bVar3;
        pbVar8[1] = 0;
        F_004d5770((uint)*pbVar7,pbVar8 + 2,pbVar8 + 3);
        bVar3 = pbVar7[-3];
        (*(uint *)(gen_frame + 0x0)) = (uint)bVar3;
        puVar6 = &(*(uint *)(gen_frame + 0x8));
        if (uVar4 <= bVar3) {
          puVar6 = &(*(uint *)(gen_frame + 0x0));
        }
        uVar4 = *puVar6;
        bVar3 = *pbVar7;
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 1 << GEN_SHC(pbVar7[-3], pbVar7[-3]);
        pbVar8 = pbVar8 + 8;
        pbVar7 = pbVar7 + 4;
        (*(uint *)(gen_frame + 0x8)) = uVar4;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) | 1 << GEN_SHC(bVar3, bVar3);
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + param_2 * 8))) = 0xff;
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 4 + param_2 * 8))) = 0x11;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x158))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),(int)this + 0x20);
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
    }
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar4;
    *((uint *)GEN_TOP(((int)this + 0x18))) = (*(uint *)(gen_frame + 0x10));
    *((uint *)GEN_TOP(((int)this + 0x1c))) = (*(uint *)(gen_frame + 0xc));
    return -1 < (int)uVar5;
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexDeclaration::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar2;
}

/* ref: FUN_004d9b80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004d9b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4d9b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x14))) = param_2;
  if (param_1 + param_2 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,(param_1 + param_2) * 8,0x10);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1 + param_1 * 8;
    if (param_1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    }
    if (param_2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x20))) = (*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0xc)))) * 8;
  return 1;
}

/* ref: Client::Graphics::Kernel::Shader::FreeParameterTables */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x20) = 0;
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = 0;
    if (*(int *)(this + 0x18) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*(int *)(this + 0x18));
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  else {
    *(undefined4 *)(this + 0x18) = 0;
    uVar1 = 0;
    if (*(int *)(this + 0x10) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*(int *)(this + 0x10));
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      return uVar1;
    }
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_004d9c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_004d9c90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004d9c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  }
  uVar2 = F_004d9c00(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Global::ReleaseResources_004d9cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4d9cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    bVar1 = *((byte *)GEN_TOP(((int)this + 0x24)));
    uVar4 = 0;
    if (bVar1 != 0) {
      iVar5 = 0;
      do {
        iVar2 = *((int *)GEN_TOP((iVar5 + *((int *)GEN_TOP(((int)this + 0x44))))));
        if (iVar2 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,iVar2);
          *((undefined4 *)GEN_TOP((iVar5 + *((int *)GEN_TOP(((int)this + 0x44)))))) = 0;
        }
        if (*((int *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0x44)))))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,uVar4);
          *((undefined4 *)GEN_TOP((iVar5 + 4 + *((int *)GEN_TOP(((int)this + 0x44)))))) = 0;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar4 < bVar1);
    }
    if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x44))));
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
    }
  }
  piVar6 = ((int *)GEN_TOP(((int)this + 0x38)));
  iVar5 = 3;
  do {
    piVar3 = ((int *)GEN_TOP(*piVar6));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3c00000;
  if ((((uVar4 == 0x800000) || (uVar4 == 0x1000000)) || (uVar4 == 0x2000000)) &&
     (piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30))), piVar6 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  }
  piVar6 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*((uint *)GEN_TOP(((int)this + 8))) & 0xf) * 4)));
  LOCK();
  *piVar6 = *piVar6 - (*((uint *)GEN_TOP(((int)this + 8))) & 0xfffffff0);
  UNLOCK();
  *((uint *)GEN_TOP(((int)this + 8))) = *((uint *)GEN_TOP(((int)this + 8))) & 0xf;
  return (uint)piVar6;
}

/* ref: Client::Graphics::Kernel::Texture::LockBox */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4d9de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  byte * pbVar6;
  
  if (((*(uint *)(this + 0x2c) & 0x3c00000) != 0x1000000) || (*(int *)(this + 0x30) == 0)) {
    return 0;
  }
  uVar5 = 0;
  if ((*(uint *)(this + 0x2c) & 1) == 0) {
    if ((*(int *)&gen_args[2]) == 1) {
      uVar5 = 0x10;
    }
  }
  else {
    uVar5 = 0x1000;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x4c))))
                    (*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,(*(int *)&gen_args[0]),((byte *)(gen_frame + 0x0)),0,uVar5);
  if ((int)uVar3 < 0) {
    return 0;
  }
  *(undefined4 *)(*(byte * PTR32 *)&gen_args[1]) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 8))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  pbVar6 = (*(byte * PTR32 *)&gen_args[1]);
  if (*(int *)(this + 0x44) != 0) {
    iVar2 = (*(int *)&gen_args[0]) * 0xc;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)(this + 0x44))));
    if (iVar1 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)(this + 0x44)))) = 0;
      pbVar6 = (*(byte * PTR32 *)&gen_args[1]);
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 4 + iVar2))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
    uVar3 = *(uint *)(this + 0x20) >> GEN_SHC((byte)(*(int *)&gen_args[0]), (byte)(*(int *)&gen_args[0]));
    (*(int *)&gen_args[2]) = 1;
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(uVar3));
    piVar4 = (int *)&(*(byte * PTR32 *)&gen_args[1]);
    if (uVar3 < 2) {
      piVar4 = &(*(int *)&gen_args[2]);
    }
    *((int *)GEN_TOP((*(int *)(this + 0x44) + 8 + iVar2))) = *piVar4 * (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  }
  return *(uint *)(pbVar6 + 8);
}

/* ref: Client::Graphics::Kernel::Texture::UnlockBox */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004d9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4d9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(this + 0x2c) & 0x3c00000;
  if ((uVar4 == 0x1000000) && (*(int *)(this + 0x30) != 0)) {
    if (*(int *)(this + 0x44) != 0) {
      iVar3 = param_1 * 0xc;
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 4 + iVar3)));
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 8 + iVar3)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,uVar2,0x10);
      F_00c46aa0(uVar4,uVar1,uVar2);
      *((uint *)GEN_TOP((iVar3 + *(int *)(this + 0x44)))) = uVar4;
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 4 + iVar3))) = 0;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x50))))(*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: Global::ToD3DFormat */
GEN_OWN GEN_FRAME uint F_004d9f60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4d9f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x2461) {
    if (param_1 == 0x2460) {
      return 0x71;
    }
    if (param_1 < 0x1451) {
      if (param_1 == 0x1450) {
        return 0x15;
      }
      if (param_1 < 0x1132) {
        if (param_1 == 0x1131) {
          return 0x1c;
        }
        if (param_1 == 0) {
          return 0;
        }
        if (param_1 == 0x1130) {
          return 0x32;
        }
      }
      else {
        if (param_1 == 0x1440) {
          return 0x1a;
        }
        if (param_1 == 0x1441) {
          return 0x19;
        }
      }
    }
    else if (param_1 < 0x2251) {
      if (param_1 == 0x2250) {
        return 0x70;
      }
      if (param_1 == 0x1451) {
        return 0x16;
      }
      if (param_1 == 0x2150) {
        return 0x72;
      }
    }
    else if (param_1 == 0x2260) {
      return 0x73;
    }
  }
  else if (param_1 < 0x4141) {
    if (param_1 == 0x4140) {
      return 0x50;
    }
    if (param_1 < 0x3431) {
      if (param_1 == 0x3430) {
        return 0x33545844;
      }
      if (param_1 == 0x2470) {
        return 0x74;
      }
      if (param_1 == 0x3420) {
        return 0x31545844;
      }
    }
    else if (param_1 == 0x3431) {
      return 0x35545844;
    }
  }
  else if (param_1 < 0x5141) {
    if (param_1 == 0x5140) {
      if ((*((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) >> 3 & 1) != 0) {
        return 0x50;
      }
      if ((*((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) >> 4 & 1) == 0) {
        return 0x50;
      }
      return 0x36314644;
    }
    if (param_1 == 0x4250) {
      uVar1 = *((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34)));
      if ((uVar1 >> 2 & 1) != 0) {
        return 0x5a544e49;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        return (-(uint)((uVar1 >> 4 & 1) != 0) & 0x343245f9) + 0x4b;
      }
      return 0x5a574152;
    }
    if (param_1 == 0x5100) {
      return (-(uint)((*((byte *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) & 1) != 0) & 0x4c4c5539) + 0x15;
    }
  }
  else if ((param_1 == 0x5150) &&
          (((*((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) >> 3 & 1) != 0 ||
           (uVar1 = 0x34324644, (*((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34))) >> 4 & 1) == 0)))) {
    uVar1 = 0x4b;
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Texture::CreateResource */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004da150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int * piVar1;
  undefined1 TVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  uint * puVar9;
  uint * puVar10;
  uint uVar11;
  uint uVar12;
  undefined * pTVar13;
  bool bVar14;
  
  uVar11 = *(uint *)(this + 0x2c);
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  bVar14 = (uVar11 & 0x100000) != 0;
  if (bVar14) {
    (*(uint *)(gen_frame + 0x28)) = 1;
  }
  (*(uint *)(gen_frame + 0x28)) = (uint)bVar14;
  if ((uVar11 & 0x200000) != 0) {
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 2;
  }
  if ((uVar11 & 1) != 0) {
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) | 0x200;
  }
  bVar14 = (uVar11 & 4) != 0;
  if (bVar14) {
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar14;
  if ((uVar11 & 0x40) != 0) {
    (*(uint *)(gen_frame + 0x24)) = 2;
  }
  uVar7 = F_004d9f60(*(undefined4 *)(this + 0x28));
  uVar11 = uVar11 & 0x3c00000;
  if (uVar11 == 0x800000) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x5c))))
                       (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),
                        *(undefined4 *)(this + 0x1c),(uint)(byte)this[0x24],(*(uint *)(gen_frame + 0x28)),uVar7,(*(uint *)(gen_frame + 0x24)),
                        this + 0x30,0);
  }
  else if (uVar11 == 0x1000000) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x60))))
                       (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),
                        *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x20),
                        (uint)(byte)this[0x24],(*(uint *)(gen_frame + 0x28)),uVar7,(*(uint *)(gen_frame + 0x24)),this + 0x30,0);
  }
  else {
    if (uVar11 != 0x2000000) {
      return 0;
    }
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 100))))
                       (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),
                        (uint)(byte)this[0x24],(*(uint *)(gen_frame + 0x28)),uVar7,(*(uint *)(gen_frame + 0x24)),this + 0x30,0);
  }
  if (-1 < (int)uVar11) {
    TVar2 = this[0x24];
    uVar11 = *(uint *)(this + 0x1c);
    uVar12 = *(uint *)(this + 0x18);
    (*(uint *)(gen_frame + 0x1c)) = *(uint *)(this + 0x20);
    uVar3 = *(uint *)(this + 0x28);
    this[0x27] = (undefined1)(uVar7 == 0x34324644);
    (*(uint *)(gen_frame + 0x14)) = uVar12;
    ((uint *)(gen_frame + 0x0))[4] = uVar11;
    if ((byte)TVar2 != 0) {
      ((uint *)(gen_frame + 0x0))[2] = 1;
      ((uint *)(gen_frame + 0x0))[1] = 1;
      ((uint *)(gen_frame + 0x0))[0] = 1;
      ((uint *)(gen_frame + 0x0))[3] = (uint)(byte)TVar2;
      do {
        puVar10 = &(*(uint *)(gen_frame + 0x14));
        if (uVar12 < 2) {
          puVar10 = ((uint *)(gen_frame + 0x0)) + 2;
        }
        puVar8 = ((uint *)(gen_frame + 0x0)) + 4;
        if (uVar11 < 2) {
          puVar8 = ((uint *)(gen_frame + 0x0)) + 1;
        }
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
        puVar9 = &(*(uint *)(gen_frame + 0x1c));
        if ((*(uint *)(gen_frame + 0x1c)) < 2) {
          puVar9 = ((uint *)(gen_frame + 0x0));
        }
        uVar4 = *puVar10;
        uVar5 = *puVar9;
        uVar6 = *puVar8;
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) >> 1;
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + (uVar4 * uVar5 * (1 << ((byte)(uVar3 >> 4) & 0xf)) * uVar6 >> 3);
        uVar12 = uVar12 >> 1;
        uVar11 = uVar11 >> 1;
        uVar4 = ((uint *)(gen_frame + 0x0))[3] - 1;
        ((uint *)(gen_frame + 0x0))[3] = uVar4;
        (*(uint *)(gen_frame + 0x14)) = uVar12;
        ((uint *)(gen_frame + 0x0))[4] = uVar11;
      } while (uVar4 != 0);
    }
    if ((*(uint *)(this + 0x2c) & 0x300000) != 0) {
      uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x48))))(*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,0,this + 0x34);
      if ((int)uVar11 < 0) {
        return 0;
      }
      if (((*(uint *)(gen_frame + 0x24)) == 0) && (((byte)this[0x2c] & 0x10) != 0)) {
        ((uint *)(gen_frame + 0x0))[3] = 0;
        pTVar13 = this + 0x38;
        do {
          uVar11 = (*(uint *)(gen_frame + 0x28)) & 0xfffffffc;
          (*(uint *)(gen_frame + 0x28)) = uVar11;
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x5c))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0x18),
                              *(undefined4 *)(this + 0x1c),(uint)(byte)this[0x24],uVar11,uVar7,2,
                              pTVar13,0);
          if ((int)uVar11 < 0) {
            return 0;
          }
          uVar11 = ((uint *)(gen_frame + 0x0))[3] + 1;
          pTVar13 = pTVar13 + 4;
          ((uint *)(gen_frame + 0x0))[3] = uVar11;
        } while (uVar11 < 3);
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) * 3 + 1;
      }
    }
    uVar11 = (*(int *)(gen_frame + 0x20)) + 0xfU >> 4;
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
    _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)((uVar11 * 0x10 - (*(uint *)(this + 8) & 0xfffffff0))));
    *(uint *)(this + 8) = uVar11 << 4 | *(uint *)(this + 8) & 0xf;
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::OnDeviceLost */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004da3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((byte)this[0x20] & 0x4c) == 0) {
    F_004d9cc0(this - 0xc GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Graphics::Kernel::Texture::OnDeviceReset */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004da3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da3f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if ((*(uint *)(this + 0x20) & 0x4c) == 0) {
    bVar2 = F_004da150(this - 0xc GEN_EDX_FWD);
    if (bVar2 != 0) {
      return 1;
    }
    F_004d9cc0(this - 0xc GEN_EDX_ARG);
    return 0;
  }
  if (*(int *)(this + 0x38) == 0) {
    return 1;
  }
  if ((*(uint *)(this + 0x20) & 0x3c00000) == 0x1000000) {
    piVar1 = *(int * PTR32 *)(this + 0x24);
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x24) = 0;
    }
    uVar3 = *(uint *)(this + 0x20);
    (*(uint *)(gen_frame + 0xc)) = 0;
    uVar5 = (uint)((uVar3 & 0x100000) != 0);
    if ((uVar3 & 0x200000) != 0) {
      uVar5 = uVar5 | 2;
    }
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar5 | 0x200;
    }
    bVar6 = (uVar3 & 4) != 0;
    if (bVar6) {
      (*(uint *)(gen_frame + 0xc)) = 1;
    }
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar6;
    if ((uVar3 & 0x40) != 0) {
      (*(uint *)(gen_frame + 0xc)) = 2;
    }
    uVar3 = F_004d9f60(*(undefined4 *)(this + 0x1c));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x60))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,*(undefined4 *)(this + 0xc),
                       *(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14),
                       (uint)(byte)this[0x18],uVar5,uVar3,(*(uint *)(gen_frame + 0xc)),this + 0x24,0);
    if ((-1 < (int)uVar3) && (*(int *)(this + 0x24) != 0)) {
      uVar3 = 0;
      (*(uint *)(gen_frame + 0xc)) = (uint)(byte)this[0x18];
      if ((byte)this[0x18] == 0) {
        return 1;
      }
      iVar4 = 0;
      do {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 0x4c))))
                          (*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,uVar3,((byte *)(gen_frame + 0x0)),0,0);
        if ((int)uVar5 < 0) {
          return 0;
        }
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(this + 0x38) + iVar4))),
                   *((undefined4 *)GEN_TOP((*(int *)(this + 0x38) + 8 + iVar4))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 0x50))))(*(int * PTR32 *)(this + 0x24) GEN_EDX_ARG,uVar3);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0xc;
      } while (uVar3 < (*(uint *)(gen_frame + 0xc)));
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::Create */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004da550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4da550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  uVar1 = param_2[1];
  param_1[0x24] = param_3;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (param_4 != 0) {
    *(int *)(param_1 + 0x28) = param_4;
  }
  bVar2 = F_004da150(param_1 GEN_EDX_FWD);
  if (bVar2 == 0) {
    F_004d9cc0(param_1 GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::SwapChain::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004da5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x38);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x38) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x34) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x3c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xd8 + (*(uint *)(this + 8) & 0xf) * 4)));
  LOCK();
  *piVar1 = *piVar1 - (*(uint *)(this + 8) & 0xfffffff0);
  UNLOCK();
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0xf;
  return (uint)piVar1;
}

/* ref: Client::Graphics::Kernel::SwapChain::OnDeviceLost */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004da610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((byte)this[0x24] & 0x4c) == 0) {
    F_004da5a0(this - 0xc GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Graphics::Kernel::SwapChain::ReleaseD3DResources */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004da620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)(this + 0x38) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)(this + 0x34) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*(undefined * PTR32 *)(this + 0x34) GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(this + 0x3c);
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Kernel::SwapChain::InitFromD3DSwapChain */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004da660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4da660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  
  *(int * PTR32 *)(this + 0x3c) = (*(int * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3c) + 0x14))))(*(int * PTR32 *)(this + 0x3c) GEN_EDX_ARG,0,0,&(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar4) {
    bVar3 = F_004d6d10(*(undefined * PTR32 *)(this + 0x34) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),*(undefined4 *)(this + 0x20),8);
    if (bVar3 != 0) {
      iVar2 = *(int *)(this + 0x34);
      *(undefined4 *)(this + 0x18) = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
      *(undefined4 *)(this + 0x1c) = *((undefined4 *)GEN_TOP((iVar2 + 0x1c)));
      *(undefined4 *)(this + 0x20) = *((undefined4 *)GEN_TOP((iVar2 + 0x28)));
      if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      }
      this_00 = *(undefined * PTR32 *)(this + 0x38);
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(this + 0x18);
        *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x1c);
        this_00[0x24] = (undefined1)0x1;
        bVar3 = F_004da150(this_00 GEN_EDX_ARG);
        if (bVar3 == 0) {
          F_004d9cc0(this_00 GEN_EDX_ARG);
          F_004da620(this GEN_EDX_ARG);
          return 0;
        }
      }
      return 1;
    }
    if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
    }
  }
  if (*(undefined * PTR32 *)(this + 0x38) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_ARG);
  }
  if (*(undefined * PTR32 *)(this + 0x34) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*(undefined * PTR32 *)(this + 0x34) GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(this + 0x3c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Query::CreateD3DQuery */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004da760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 1) {
    uVar3 = 8;
  }
  else if (iVar1 == 2) {
    uVar3 = 9;
  }
  else {
    if ((iVar1 != 3) || (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0)) {
      return 0;
    }
    uVar3 = 10;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x1d8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,uVar3,this + 0x1c);
  return -1 < (int)uVar2;
}

/* ref: Global::InitTimestampFrequency */
GEN_OWN GEN_FRAME byte F_004da7c0(void)
{
  GEN_ENTER(0x4da7c0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  ulonglong uVar3;
  uint uVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0x1d8)));
  uVar4 = (*pcVar2)(piVar1,0xc,&(*(int * PTR32 *)(gen_frame + 0x0)));
  if ((int)uVar4 < 0) {
    REFG(int, 0x1375a30) = 0;
    REFG(int, 0x1375a34) = 0;
    return 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
  REFG(int, 0x1375a30) = 0;
  REFG(int, 0x1375a34) = 0;
  do {
    do {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(int, 0x1375a30),8,1);
    } while ((int)uVar4 < 0);
  } while (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0);
  uVar3 = CONCAT44(REFG(int, 0x1375a34),REFG(int, 0x1375a30)) / 1000000;
  REFG(int, 0x1375a34) = (int)(uVar3 >> 0x20);
  REFG(int, 0x1375a30) = (int)uVar3;
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar3 = CONCAT44(REFG(int, 0x1375a34),REFG(int, 0x1375a30));
  }
  REFG(int, 0x1375a34) = (int)(uVar3 >> 0x20);
  REFG(int, 0x1375a30) = (int)uVar3;
  return 1;
}

/* ref: Global::CreateD3DQuery */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004da890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4da890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == 1) {
    uVar4 = 8;
  }
  else if (iVar1 == 2) {
    uVar4 = 9;
  }
  else {
    if ((iVar1 != 3) || (REFG(int, 0x1375a30) == 0 && REFG(int, 0x1375a34) == 0)) goto LAB_004da8e3;
    uVar4 = 10;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x1d8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,uVar4,(int)this + 0x10);
  if (-1 < (int)uVar3) {
    return 1;
  }
LAB_004da8e3: ;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return 0;
}

/* ref: FUN_004da960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004da960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4da960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = 0;
  iVar6 = REFG(int, 0x1370b90);
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
  if (uVar4 == 0) {
    return 0;
  }
  piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xc4)));
  iVar7 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)(uVar4 * 0x8000));
  if (*((uint *)GEN_TOP((iVar6 + 0xb8))) < (uint)(*((int *)GEN_TOP((iVar6 + 0xc0))) + *((int *)GEN_TOP((iVar6 + 0xc4))))) {
    iVar6 = 0;
  }
  else {
    iVar6 = (*((int *)GEN_TOP((iVar6 + 0xbc))) - iVar7) + uVar4 * -0x8000 + *((uint *)GEN_TOP((iVar6 + 0xb8)));
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x10)));
  uVar2 = iVar6 + uVar4 * 0x4000;
  iVar7 = iVar6;
  for (uVar3 = uVar4; uVar3 != 0; uVar3 = uVar3 - 1) {
    F_00c46aa0(iVar7,iVar5,0x4000);
    iVar7 = iVar7 + 0x4000;
    iVar5 = *((int *)GEN_TOP((iVar5 + 0x3ff8)));
  }
  F_00c46aa0(uVar2,iVar6,uVar4 * 0x4000);
  iVar7 = (uVar4 & 0x3ffff) * 0x800 - *((int *)GEN_TOP(((int)this + 0x1c)));
  *param_1 = iVar7;
  F_004d5dd0(this GEN_EDX_ARG,uVar2,iVar6,0,iVar7 - 1);
  return uVar2;
}

/* ref: FUN_004daa40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004daa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4daa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,0x24)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(uint *)(gen_frame + 0x0)) = 4;
  *puVar1 = 0;
  puVar2 = &(*(uint *)&gen_args[0]);
  if (3 < (*(uint *)&gen_args[0])) {
    puVar2 = &(*(uint *)(gen_frame + 0x0));
  }
  uVar4 = *puVar2;
  puVar1[7] = (*(undefined4 *)&gen_args[3]);
  uVar3 = 0;
  puVar1[1] = uVar4;
  puVar1[8] = (*(undefined4 *)&gen_args[4]);
  if (uVar4 != 0) {
    puVar6 = puVar1 + 2;
    do {
      *puVar6 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + uVar3 * 4)));
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 < uVar4);
    if (3 < uVar3) goto LAB_004daab1;
  }
  puVar6 = puVar1 + uVar3 + 2;
  for (iVar5 = 4 - uVar3; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
LAB_004daab1: ;
  puVar1[6] = (*(undefined4 *)&gen_args[2]);
  uVar4 = F_004d4810(this GEN_EDX_ARG,puVar1);
  return uVar4;
}

/* ref: FUN_004daad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004daad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4daad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  int iVar10;
  undefined4 * puVar11;
  ushort * puVar12;
  int * piVar13;
  int * piVar14;
  
  puVar11 = (*(undefined4 * PTR32 *)&gen_args[1]);
  iVar2 = (*(uint *)&gen_args[0]);
  *(*(int * PTR32 *)&gen_args[2]) = (int)(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar5 = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(iVar5));
  if (iVar5 != 0) {
    puVar12 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10))) + 2)));
    iVar10 = iVar5;
    do {
      iVar6 = *((int *)GEN_TOP(((int)this + *(int *)(puVar12 + 1) * 4 + 0xa8)));
      *puVar11 = *((undefined4 *)GEN_TOP((iVar6 + 0x20)));
      uVar4 = *puVar12;
      uVar7 = *((uint *)GEN_TOP((iVar6 + 0x28))) >> 4;
      (*(uint *)&gen_args[0]) = uVar7;
      (*(uint *)(gen_frame + 0x0)) = (uint)uVar4;
      puVar9 = &(*(uint *)&gen_args[0]);
      if (uVar4 <= uVar7) {
        puVar9 = &(*(uint *)(gen_frame + 0x0));
      }
      puVar11[1] = *puVar9;
      puVar12 = puVar12 + 4;
      puVar11 = puVar11 + 2;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
  }
  iVar10 = *((int *)GEN_TOP(((int)this + 0x5a8)));
  *(*(int * PTR32 *)&gen_args[3]) = *(*(int * PTR32 *)&gen_args[2]) + iVar5 * 8;
  iVar5 = *((int *)GEN_TOP((iVar2 + 0x14)));
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(iVar5));
  if (iVar5 != 0) {
    piVar14 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x18))) + 4)));
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(iVar5));
    piVar13 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[3])));
    do {
      piVar1 = ((int *)GEN_TOP(((int)this + *piVar14 * 8 + 0x2a8)));
      *piVar13 = *piVar1;
      uVar8 = piVar1[1] & 0xfffffff;
      piVar13[1] = uVar8;
      bVar3 = *((byte *)GEN_TOP((*piVar13 + 0x26)));
      uVar7 = uVar8 >> 0x14 & 0xf;
      (*(uint *)&gen_args[0]) = uVar7;
      (*(uint *)(gen_frame + 0x0)) = (uint)bVar3;
      puVar9 = &(*(uint *)&gen_args[0]);
      if (uVar7 <= bVar3) {
        puVar9 = &(*(uint *)(gen_frame + 0x0));
      }
      uVar8 = (*puVar9 << 0x14 ^ uVar8) & 0xf00000 ^ uVar8;
      uVar7 = (uint)((uVar8 & 0x3c0) == 0x1c0);
      piVar14 = piVar14 + 2;
      iVar2 = (int)(*(int * PTR32 *)&gen_args[2]) - 1;
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(iVar2));
      piVar13[1] = ~(uVar7 * 0x70003c0) & uVar8 | uVar7 * iVar10;
      piVar13 = piVar13 + 2;
    } while (iVar2 != 0);
  }
  return *(*(int * PTR32 *)&gen_args[3]) + iVar5 * 8;
}

/* ref: FUN_004dac00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dac00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dac00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xd0))) != 0) {
    uVar1 = F_0050c620(*((int *)GEN_TOP(((int)this + 0xd0))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_004d74f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: Global::CreateTextureFromD3DTexture */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dac40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4dac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  byte bVar1;
  undefined * pTVar2;
  
  pTVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
  if (pTVar2 != ((undefined *)GEN_TOP(0x0))) {
    pTVar2 = ((undefined *)GEN_TOP(F_004d6c80(pTVar2 GEN_EDX_ARG)));
    if (pTVar2 != ((undefined *)GEN_TOP(0x0))) {
      *(uint *)(pTVar2 + 8) = *(uint *)(pTVar2 + 8) ^ (*(uint *)(pTVar2 + 8) ^ param_4) & 0xf;
      bVar1 = F_004d5950(pTVar2 GEN_EDX_ARG,param_1,param_2,param_3);
      if (bVar1 != 0) {
        return (uint)pTVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pTVar2 + 0xc))))(pTVar2 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_004dacb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dacb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dacb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004d9320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004dacc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004dacc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dacc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x80)));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + 4 + param_1 * 8))) = 0;
  *((int *)GEN_TOP((iVar1 + 0x24))) = *((int *)GEN_TOP((iVar1 + 0x24))) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: FUN_004dad00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dad00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004d9320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004dad10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004dad10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dad10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x84)));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + 4 + param_1 * 8))) = 0;
  *((int *)GEN_TOP((iVar1 + 0x24))) = *((int *)GEN_TOP((iVar1 + 0x24))) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: Global::AddCallback */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dad50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dad50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004d9320(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Global::RemoveCallback */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004dad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dad60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + param_1 * 8))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + 4 + param_1 * 8))) = 0;
  *((int *)GEN_TOP((iVar1 + 0x24))) = *((int *)GEN_TOP((iVar1 + 0x24))) - 1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4)));
}

/* ref: FUN_004dada0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004dada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dada0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xa4, 12, 4);
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0));
  uVar5 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(uint *)(gen_frame + 0x50)) = *((uint *)GEN_TOP(((int)this + 0x28)));
  (*(uint *)(gen_frame + 0x54)) = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x28))) != 0) {
    ((uint *)(gen_frame + 0x58))[0] = 0;
    do {
      uVar2 = F_004da960(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + ((uint *)(gen_frame + 0x58))[0]))) GEN_EDX_FWD,((uint *)(gen_frame + 0x58)) + uVar5 + 1);
      (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) + ((uint *)(gen_frame + 0x58))[(int)(uVar5 + 1)];
      ((uint *)(gen_frame + 0x58))[0] = ((uint *)(gen_frame + 0x58))[0] + 0x5b0;
      ((uint *)(gen_frame + 0x0))[(int)(uVar5)] = uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)(gen_frame + 0x50)));
  }
  uVar5 = *((int *)GEN_TOP(((int)this + 0xbc))) + *((int *)GEN_TOP(((int)this + 0xb8))) + (*(uint *)(gen_frame + 0x54)) * -8;
  (*(uint *)(gen_frame + 0x4c)) = uVar5;
  ((uint *)(gen_frame + 0x58))[0] = uVar5;
  uVar2 = (*(uint *)(gen_frame + 0x54));
  uVar4 = (*(uint *)(gen_frame + 0x50));
  if ((*(uint *)(gen_frame + 0x54)) != 0) {
    do {
      iVar6 = 0;
      uVar5 = 0xffffffff;
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          iVar3 = uVar4 - uVar2;
          if ((((uint *)(gen_frame + 0x58))[(int)(iVar3)] != 0) && (*((uint *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar3 - 1)])) <= uVar5)) {
            iVar6 = iVar3 - 1;
            uVar5 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar3 - 1)]));
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
      puVar1 = ((uint *)(gen_frame + 0x0)) + iVar6;
      (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)(gen_frame + 0x58)) + iVar6 + 1;
      uVar5 = ((uint *)(gen_frame + 0x58))[(int)(iVar6 + 1)];
      uVar2 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x48)) = puVar1;
      do {
        uVar2 = uVar2 + 1;
        if (uVar2 == uVar5) break;
      } while (*((int *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar6)])) == *((int *)GEN_TOP((*puVar1 + uVar2 * 8))));
      if (uVar2 != 0) {
        iVar6 = uVar2 * 8;
        F_00c46aa0(((uint *)(gen_frame + 0x58))[0],*puVar1,iVar6);
        ((uint *)(gen_frame + 0x58))[0] = ((uint *)(gen_frame + 0x58))[0] + iVar6;
        *(*(uint * PTR32 *)(gen_frame + 0x48)) = iVar6 + *(*(uint * PTR32 *)(gen_frame + 0x48));
        *(*(uint * PTR32 *)(gen_frame + 0x40)) = uVar5 - uVar2;
        uVar4 = (*(uint *)(gen_frame + 0x50));
      }
      uVar5 = (*(uint *)(gen_frame + 0x4c));
      uVar2 = (*(uint *)(gen_frame + 0x54));
    } while ((uint)((int)(((uint *)(gen_frame + 0x58))[0] - (*(uint *)(gen_frame + 0x4c))) >> 3) < (*(uint *)(gen_frame + 0x54)));
  }
  *(*(uint * PTR32 *)(gen_frame + 0x44)) = uVar2;
  return uVar5;
}

/* ref: Global::ApplyDisplaySettings */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004daee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4daee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  BOOL BVar3;
  undefined4 uVar4;
  DWORD DVar5;
  
  if (*((char *)GEN_TOP(((int)this + 0x4f))) != '\0') {
    if (*((int *)GEN_TOP(((int)this + 0x38))) != 5) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 2;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x4f))) = 0;
  }
  if ((*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') &&
     ((((*((int *)GEN_TOP(((int)this + 0x90))) != *((int *)GEN_TOP(((int)this + 0x68))) ||
        (*((int *)GEN_TOP(((int)this + 0x94))) != *((int *)GEN_TOP(((int)this + 0x6c))))) &&
       (*((int *)GEN_TOP(((int)this + 0x68))) != 0)) && (*((int *)GEN_TOP(((int)this + 0x6c))) != 0)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    F_004d7430(this GEN_EDX_FWD);
    if (*((int *)GEN_TOP(((int)this + 0x38))) != 5) {
      *((undefined1 *)GEN_TOP(((int)this + 0x50))) = 1;
    }
  }
  cVar1 = *((char *)GEN_TOP(((int)this + 0x4d)));
  if ((*((char *)GEN_TOP(((int)this + 0x4c))) != cVar1) ||
     ((*((char *)GEN_TOP(((int)this + 0x4c))) != '\0' &&
      (*((int *)GEN_TOP(((int)this + 0x60))) != *((int *)GEN_TOP(((int)this + 100))))))) {
    *((char *)GEN_TOP(((int)this + 0x4c))) = cVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    if (cVar1 == '\0') {
      gen_imp_SetWindowLongA(*((HWND *)GEN_TOP(((int)this + 0x5c))),-0x10,0xcf0000);
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
      *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    }
    else {
      BVar3 = gen_imp_IsZoomed(*((HWND *)GEN_TOP(((int)this + 0x5c))));
      if (BVar3 != 0) {
        gen_imp_ShowWindow(*((HWND *)GEN_TOP(((int)this + 0x5c))),1);
      }
      gen_imp_SetWindowLongA(*((HWND *)GEN_TOP(((int)this + 0x5c))),-0x10,-0x70000000);
      *((undefined4 *)GEN_TOP(((int)this + 0x90))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + *((int *)GEN_TOP(((int)this + 0x60))) * 0xc)));
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 4 + *((int *)GEN_TOP(((int)this + 0x60))) * 0xc)));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = uVar4;
    F_004d7430(this GEN_EDX_ARG);
    gen_imp_SetWindowPos(*((HWND *)GEN_TOP(((int)this + 0x5c))),(HWND)0xfffffffe,0,0,0,0,0x23);
    *((undefined1 *)GEN_TOP(((int)this + 0x4e))) = 1;
    if (*((int *)GEN_TOP(((int)this + 0x38))) != 5) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 2;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != *((int *)GEN_TOP(((int)this + 0xa4)))) {
    *((int *)GEN_TOP(((int)this + 0xa0))) = *((int *)GEN_TOP(((int)this + 0xa4)));
    if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
      DVar5 = gen_imp_timeGetTime();
      *((DWORD *)GEN_TOP(((int)this + 0xac))) = DVar5;
      *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
    }
    else if (*((int *)GEN_TOP(((int)this + 0x38))) != 5) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 2;
    }
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x38)));
  if ((uVar2 == 2) || (uVar2 == 3)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return uVar2;
}

/* ref: Global::BuildPresentParameters */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004db060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4db060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  char cVar1;
  
  F_00c48350(param_1,0,0x38);
  if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
    *param_1 = 1;
    param_1[1] = 1;
  }
  else {
    *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
    param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x94)));
  }
  param_1[2] = 0x16;
  param_1[3] = 1;
  param_1[6] = 1;
  cVar1 = *((char *)GEN_TOP(((int)this + 0x4c)));
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = (uint)(cVar1 == '\0');
  if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0xa8))) = 1;
  }
  else {
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xa0))))) {
    default: ;
      *((undefined1 *)GEN_TOP(((int)this + 0xa8))) = 0;
      break;
    case 2: ;
      *((byte *)GEN_TOP(((int)this + 0xa8))) = ~(byte)(*((uint *)GEN_TOP(((int)this + 0x34))) >> 7) & 1;
      break;
    case 3: ;
      *((byte *)GEN_TOP(((int)this + 0xa8))) = ~(byte)((uint)*((undefined4 *)GEN_TOP(((int)this + 0x34))) >> 8) & 1;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xa8))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
      param_1[0xc] = 0x3c;
    }
    else {
      param_1[0xc] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8 + *((int *)GEN_TOP(((int)this + 0x60))) * 0xc)));
    }
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0xa0))))) {
    case 0: ;
      goto switchD_004db132_caseD_0;
    default: ;
      param_1[0xd] = 1;
      return 0;
    case 2: ;
      param_1[0xd] = 2;
      return 0;
    case 3: ;
      param_1[0xd] = 4;
      return 0;
    }
  }
  param_1[0xc] = 0;
switchD_004db132_caseD_0: ;
  param_1[0xd] = 0x80000000;
  return 0;
}

/* ref: Global::ReleaseDeviceResources */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004db190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_00510db0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
  if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x38))) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x38))) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x34))) != ((undefined *)GEN_TOP(0x0))) {
    F_004d9cc0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x34))) GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x3c)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((iVar2 + 0x3c))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 3;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 6;
  return uVar3;
}

/* ref: FUN_004db220 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004db220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_ecx;
  undefined * pvVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0x20 < *((uint *)GEN_TOP(((int)this + 0x88)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 5;
  *((uint *)GEN_TOP(((int)this + 0x88))) = *((uint *)GEN_TOP(((int)this + 0x88))) + 1;
  if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) + 0x24))) != 0) {
    F_004d93c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x84))) GEN_EDX_FWD);
    return 1;
  }
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10)));
  uVar4 = 1;
  uVar3 = 0x500;
  pvVar1 = ((undefined *)GEN_TOP(F_00414500(in_ecx GEN_EDX_ARG,0xf)));
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  uVar4 = 1;
  uVar3 = 0x2d0;
  pvVar1 = ((undefined *)GEN_TOP(F_00414500(in_ecx GEN_EDX_ARG,0x10)));
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  uVar4 = 1;
  uVar3 = 0;
  pvVar1 = ((undefined *)GEN_TOP(F_00414500(in_ecx GEN_EDX_ARG,0x11)));
  F_00414a40(pvVar1 GEN_EDX_ARG,uVar3,uVar4);
  BVar2 = gen_imp_IsZoomed(*((HWND *)GEN_TOP(((int)this + 0x5c))));
  if (BVar2 != 0) {
    gen_imp_ShowWindow(*((HWND *)GEN_TOP(((int)this + 0x5c))),1);
  }
  return 1;
}

/* ref: FUN_004db2c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004db2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint extraout_EAX = 0;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  for (piVar1 = REFG(int * PTR32, 0x1375a40); piVar1 != ((int *)GEN_TOP(0x0)); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  uVar3 = extraout_EAX;
  if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
    if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x38))) != ((undefined *)GEN_TOP(0x0))) {
      F_004d9cc0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x38))) GEN_EDX_ARG);
    }
    if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x34))) != ((undefined *)GEN_TOP(0x0))) {
      F_004d9cc0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x34))) GEN_EDX_ARG);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x3c)));
    uVar3 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((iVar2 + 0x3c))) = 0;
    }
  }
  return uVar3;
}

/* ref: Global::LoadDepthCopyShaders */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004db340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,5,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x73686364;
  uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x109690c)),0,0,0);
  *((uint *)GEN_TOP(((int)this + 0x218))) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),((char *)REFP(0x109692c)),0,0,0);
    *((uint *)GEN_TOP(((int)this + 0x21c))) = uVar3;
    if (uVar3 != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x218))) + 0x98)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x220))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x218))) + 0x98)));
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x21c))) + 0x9c)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      }
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x224)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x224))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x21c))) + 0x9c)));
      if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) != ((undefined *)GEN_TOP(0x0))) &&
         (bVar2 = F_004d9000(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) GEN_EDX_ARG), bVar2 == 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Global::SetScissorRect */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004db440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4db440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x18)));
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0x1c)));
  bVar3 = (byte)*((undefined4 *)GEN_TOP(((int)this + 0x38)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0xc)) = uVar1 >> GEN_SHC(bVar3, bVar3);
  (*(uint *)(gen_frame + 0x8)) = uVar2 >> GEN_SHC(bVar3, bVar3);
  F_004e28b0((int)this + 8,param_1 + 4,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 300))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,(int)this + 8);
  return uVar2;
}

/* ref: Global::ExecuteCallbackCommand */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004db4a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4db4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1;
  if ((*((uint *)GEN_TOP((param_1 + 0xc))) >> 1 & 1) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 4))))(*((undefined4 *)GEN_TOP((param_1 + 8))));
  }
  return uVar1;
}

/* ref: FUN_004db4c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004db4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4db4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x230)));
  if (*((int *)GEN_TOP((iVar1 + 0x34))) == 0) {
    F_00c4a8e0(((wchar_t *)GEN_TOP((iVar1 + 0x48))),0x104,*((wchar_t * PTR32 *)GEN_TOP((param_1 + 4))));
    *((wchar_t * PTR32 *)GEN_TOP((iVar1 + 0x34))) = ((wchar_t *)GEN_TOP((iVar1 + 0x48)));
  }
  return;
}

/* ref: Global::ResetDeviceState */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004db500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  if (*((uint *)GEN_TOP(((int)this + 0x40))) != (REFG(undefined4, 0x1302350) & 0x7ffffff)) {
    F_004d75c0(this GEN_EDX_FWD,REFG(undefined4, 0x1302350) & 0x7ffffff);
  }
  if (*((uint *)GEN_TOP(((int)this + 0x44))) != (REFG(undefined4, 0x130235c) & 0x1f)) {
    F_004d7720(this GEN_EDX_ARG,REFG(undefined4, 0x130235c) & 0x1f);
  }
  if ((*((uint *)GEN_TOP(((int)this + 0x48))) != (REFG(undefined4, 0x1302368) & 0xfe000000)) ||
     (*((uint *)GEN_TOP(((int)this + 0x4c))) != (REFG(undefined4, 0x130236c) & 0xfffffffc))) {
    F_004d7790(this GEN_EDX_ARG,REFG(undefined4, 0x1302368) & 0xfe000000,REFG(undefined4, 0x130236c) & 0xfffffffc);
  }
  if (*((uint *)GEN_TOP(((int)this + 0x50))) != (REFG(undefined4, 0x1302370) & 0x7fffffff)) {
    F_004d7890(this GEN_EDX_ARG,REFG(undefined4, 0x1302370) & 0x7fffffff);
  }
  uVar4 = 0;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x104))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x2c)));
  if (*((char *)GEN_TOP(((int)this + 0x20))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xa8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x94))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x34))) + 0x34))));
  uVar4 = 1;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if (*((int *)GEN_TOP((iVar1 + 0x38))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x9c))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x38))) + 0x34))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  uVar2 = *((undefined4 *)GEN_TOP((iVar1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((iVar1 + 0x18)));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xbc))))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xe4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,0x9c,1);
  return uVar4;
}

/* ref: FUN_004db680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004db680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4db680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar1 = ((int *)GEN_TOP(0x0));
  if (param_2 != 0) {
    piVar2 = ((int *)GEN_TOP((param_1 + 4)));
    iVar3 = param_2;
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        if (*piVar1 == 8) {
          if (((*((uint *)GEN_TOP((piVar1[1] + 0x2c))) & 0x200000) == 0) &&
             ((*((uint *)GEN_TOP((piVar1[5] + 0x2c))) & 0x300000) == 0)) {
            piVar1 = ((int *)GEN_TOP(F_004d8b40(piVar1)));
          }
        }
        else if ((*piVar1 == 0xb) && (((uint)piVar1[3] >> 1 & 1) != 0)) {
          piVar1 = ((int *)GEN_TOP((*((code *)GEN_TOP(piVar1[1])))(piVar1[2])));
        }
      }
      piVar2 = piVar2 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)piVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::Initialize */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_004db6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x20, 0, 4);
  undefined * this_00;
  HANDLE pvVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  *(undefined * PTR32 *)(this + 0x1c) = this + 0x20;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xc0000;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x50001;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x11;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x158))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),this + 0x28);
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x40,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    F_004cefe0(this_00 GEN_EDX_ARG);
    *(undefined * PTR32 * PTR32 *)this_00 = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
    pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)(this_00 + 0x18) = pvVar1;
    pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
    *(HANDLE *)(this_00 + 0x1c) = pvVar1;
    *(undefined4 *)(this_00 + 0x38) = 0;
  }
  *(undefined * PTR32 *)(this + 0x2c) = this_00;
  F_004cf9e0(this_00 GEN_EDX_ARG,0,0xfffffffe,0x1000,((char *)REFP(0x1096950)));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x30) = 2;
  **(undefined4 * PTR32 *)(this + 0x1c) = 0;
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::Finalize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004db7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = *(undefined * PTR32 *)(this + 0x2c);
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 4))))(this_00 GEN_EDX_FWD);
    gen_imp_SetEvent(*(HANDLE *)(this_00 + 0x18));
    F_004cf020(this_00 GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)(this + 0x2c);
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x2c) = 0;
    }
  }
  piVar2 = *(int * PTR32 *)(this + 0x28);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x28) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x24);
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x24) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x18);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x18) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x14);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x14) = 0;
  }
  piVar2 = *(int * PTR32 *)(this + 0x10);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return uVar3;
}

/* ref: Global::BeginCapture */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004db880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4db880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = this;
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) != 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x18)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((int *)GEN_TOP(((int)this + 0x3c))) = iVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = uVar2;
  *((uint *)GEN_TOP(((int)this + 0x44))) = iVar1 * 4 + 0xfU & 0xfffffff0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    return 0;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40)));
  uVar4 = F_004d9f60(*((undefined4 *)GEN_TOP((param_1 + 0x28))));
  if (uVar4 == 0x15) {
    uVar4 = 0x16;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x70))))
                    (piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x18))),*((undefined4 *)GEN_TOP((param_1 + 0x1c))),uVar4,0,
                     0,1,&(*(int * PTR32 *)(gen_frame + 0x0)),0);
  if ((int)uVar4 < 0) {
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x250))) != ((code *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 1;
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x250))))(((undefined4 *)GEN_TOP(((int)this + 0x30))));
    }
    return 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x88))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x34))),0,(*(int * PTR32 *)(gen_frame + 0x0)),0,0);
  if ((int)uVar4 < 0) {
    if (*((gen_code32 *)GEN_TOP(((int)this + 0x250))) != ((code *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 2;
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x250))))(((undefined4 *)GEN_TOP(((int)this + 0x30))));
    }
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 8))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    return 0;
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(int * PTR32 *)(gen_frame + 0x0));
  return 1;
}

/* ref: Global::RenderCapture */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_004db9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4db9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  float10 fVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) != 0) {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x24)));
  if (iVar4 == 0) {
    return 0;
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x3c)));
  iVar6 = *((int *)GEN_TOP(((int)this + 0x40)));
  iVar7 = *((int *)GEN_TOP(((int)this + 0x18)));
  fVar11 = (float10)iVar5;
  if (iVar5 < 0) {
    fVar11 = GEN_X87(fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar12 = (float10)*((int *)GEN_TOP((iVar7 + 0x18)));
  if (*((int *)GEN_TOP((iVar7 + 0x18))) < 0) {
    fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar9 = (float10)1;
  fVar13 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar14 = (float10)*((int *)GEN_TOP((iVar7 + 0x1c)));
  if (*((int *)GEN_TOP((iVar7 + 0x1c))) < 0) {
    fVar14 = GEN_X87(fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  fVar15 = GEN_X87((float10)(float)((float10)REFG(double, 0x1094890) / (float10)(float)fVar11));
  fVar1 = (float)(fVar15 - fVar9);
  fVar16 = GEN_X87((float10)(float)(fVar9 / (float10)(float)fVar13));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  fVar2 = (float)(fVar16 - fVar9);
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 / ((float10)(float)fVar11 *
                                                             (float10)REFG(double, 0x1088108))))) - fVar9))) +
                 fVar15)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = ((float)GEN_TOF((fVar16 + (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar14 / ((float10)(float)fVar13 *
                                                                      (float10)REFG(double, 0x1088108))))) -
                                           fVar9))))));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x58)) = fVar2;
  (*(float *)(gen_frame + 0x54)) = fVar3;
  (*(undefined4 *)(gen_frame + 0x5c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  piVar8 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x94))))(piVar8 GEN_EDX_FWD,0,iVar4);
  uVar10 = 1;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x94))))(piVar8 GEN_EDX_ARG,uVar10,0);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x9c))))(piVar8 GEN_EDX_ARG,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xa4))))(piVar8 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x8)) = iVar5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0xc)) = iVar6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xbc))))(piVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0x34,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,7,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0x1b,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xab,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0x13,5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0x14,6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xd1,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xcf,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xd0,6);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xce,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xa8,0xf);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xbe,0xf);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xbf,0xf);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xc0,0xf);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,8,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0x16,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xae,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xc3,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xe4))))(piVar8 GEN_EDX_ARG,0xaf,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x104))))(piVar8 GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x30))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,1,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,2,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,3,3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,5,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,6,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,7,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,8,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,9,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,10,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x114))))(piVar8 GEN_EDX_ARG,0,0xb,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x15c))))(piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x170))))(piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x2c))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x1ac))))(piVar8 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x28))));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14c))))(piVar8 GEN_EDX_ARG,5,2,&(*(float *)(gen_frame + 0x18)),0x14);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xa8))))(piVar8 GEN_EDX_ARG);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = 3;
  return 1;
}

/* ref: Global::UpdateCapture */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dbf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dbf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  DWORD DVar4;
  
  if (**((uint * PTR32 *)GEN_TOP(((int)this + 0x1c))) < 3) {
    return (uint)*((uint * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  }
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) == 3) {
    if (*((int *)GEN_TOP(((int)this + 0x34))) == 0) {
      return 3;
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = 4;
  }
  if (**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) == 4) {
    F_004d91b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD,(int)this + 0x30,*((undefined4 *)GEN_TOP(((int)this + 0x24)))
              );
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = 5;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    return uVar3;
  }
  DVar4 = gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0x1c))),0);
  if (DVar4 != 0) {
    return DVar4;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP(((int)this + 0x250)));
  uVar3 = 0;
  if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0x3c))) < 0) {
    if (pcVar2 == ((code *)GEN_TOP(0x0))) goto LAB_004dbfb6;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 2;
  }
  else {
    if (pcVar2 == ((code *)GEN_TOP(0x0))) goto LAB_004dbfb6;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  }
  uVar3 = (*pcVar2)((int)this + 0x30);
LAB_004dbfb6: ;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return uVar3;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dbff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dbff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  byte bVar2;
  
  if (1 < (param_2 >> 6 & 1) + (param_2 >> 3 & 1) + (param_2 >> 2 & 1) + (param_2 >> 1 & 1) +
          (param_2 & 1)) {
    return 0;
  }
  *(undefined4 *)(this + 0x18) = param_1;
  *(uint *)(this + 0x1c) = param_2;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  if (((((((byte)this[0x1c] & 0x4c) != 0) || (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004d9500(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9460(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc090 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4dc090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x20))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if ((((((*((byte *)GEN_TOP(((int)this + 0x20))) & 0x4c) != 0) ||
        (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004d9730(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9690(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc130 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dc130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  if ((param_2 >> 6 & 1) + (param_2 >> 3 & 1) + (param_2 >> 2 & 1) + (param_2 >> 1 & 1) +
      (param_2 & 1) < 2) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = param_1 + 0xfU & 0xfffffff0;
    *((uint *)GEN_TOP(((int)this + 0x10))) = param_2;
    if ((param_2 & 2) != 0) {
      return 1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
    if (uVar1 != 0) {
      if ((*((byte *)GEN_TOP(((int)this + 0x10))) & 1) == 0) {
        *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
        *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
        return 1;
      }
      uVar1 = 1;
      puVar3 = ((uint *)GEN_TOP(((int)this + 0x18)));
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
        *puVar3 = uVar2;
        if (uVar2 == 0) {
          F_004d98b0(this GEN_EDX_ARG);
          return 0;
        }
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar1 < 3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::InputLayout::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dc210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x20);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Kernel::VertexShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dc250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x2c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  uVar2 = F_004d9c00((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::Kernel::VertexShader::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4dc280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * pVVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this GEN_EDX_FWD,param_3,param_4);
  if (bVar3 == 0) {
    return 0;
  }
  *(int *)(this + 0x24) = param_2 - 4;
  *(undefined4 *)(this + 0x28) = *param_1;
  pVVar1 = this + 0x2c;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x16c))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,param_1 + 1,pVVar1);
  if ((int)uVar4 < 0) {
    piVar2 = *(int * PTR32 *)pVVar1;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      *(int *)pVVar1 = 0;
    }
    F_004d9c00((undefined *)this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::PixelShader::Release */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dc300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x28) = 0;
  }
  uVar2 = F_004d9c00((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::Kernel::PixelShader::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4dc330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * pPVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this GEN_EDX_FWD,param_3,param_4);
  if (bVar3 == 0) {
    piVar2 = *(int * PTR32 *)(this + 0x28);
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x28) = 0;
    }
    F_004d9c00((undefined *)this GEN_EDX_ARG);
    return 0;
  }
  *(undefined4 *)(this + 0x24) = param_2;
  pPVar1 = this + 0x28;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x1a8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,param_1,pPVar1);
  if ((int)uVar4 < 0) {
    piVar2 = *(int * PTR32 *)pPVar1;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      *(int *)pPVar1 = 0;
    }
    F_004d9c00((undefined *)this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Texture::Initialize2D */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc3d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  int iVar1;
  byte bVar2;
  
  if (1 < (param_5 >> 6 & 1) + (param_5 >> 3 & 1) + (param_5 >> 2 & 1) + (param_5 >> 1 & 1) +
          (param_5 & 1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  param_1[0x24] = param_3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 0x2c) = param_5 & 0xfcbfffff | 0x800000;
  if ((((((param_5 & 0x4c) != 0) || (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(param_1 GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(param_1 GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc480 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x4dc480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  int iVar1;
  byte bVar2;
  undefined * _Dst;
  
  if (1 < (param_5 >> 6 & 1) + (param_5 >> 3 & 1) + (param_5 >> 2 & 1) + (param_5 >> 1 & 1) +
          (param_5 & 1)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_2;
  *((char *)GEN_TOP(((int)this + 0x24))) = (char)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 0x25))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = param_5 & 0xfd3fffff | 0x1000000;
  if ((param_5 & 4) != 0) {
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_3 * 0xc,0x10)));
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44))) = _Dst;
    F_00c48350(_Dst,0,param_3 * 0xc);
  }
  if ((((((*((byte *)GEN_TOP(((int)this + 0x2c))) & 0x4c) != 0) ||
        (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004da150(this GEN_EDX_ARG), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Texture::InitializeCube */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc560(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dc560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  int iVar1;
  byte bVar2;
  
  if (1 < (param_5 >> 6 & 1) + (param_5 >> 3 & 1) + (param_5 >> 2 & 1) + (param_5 >> 1 & 1) +
          (param_5 & 1)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  param_1[0x24] = param_3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(uint *)(param_1 + 0x2c) = param_5 & 0xfe3fffff | 0x2000000;
  if ((((((param_5 & 0x4c) != 0) || (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(param_1 GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(param_1 GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4dc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x24))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = param_3 & 0xfcbfffff | 0x900000;
  if ((((((param_3 & 0x4c) != 0) || (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004da150(this GEN_EDX_FWD), bVar2 == 0)) {
    F_004d9cc0(this GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Query::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dc6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)(this + 0x18) = param_1;
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38)));
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) && (bVar3 = F_004da760(this GEN_EDX_FWD), bVar3 == 0)
     ) {
    piVar2 = *(int * PTR32 *)(this + 0x1c);
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x1c) = 0;
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc730 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004dc730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4dc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *param_2 = 0;
  if (uVar2 == 0) {
    return 0;
  }
  if (0x30000 < (int)(uVar2 * 0x8000)) {
    uVar2 = F_004da960(this GEN_EDX_FWD,param_2);
    return uVar2;
  }
  uVar3 = F_004e1760(REFG(undefined4, 0x1370b90) GEN_EDX_ARG,uVar2 * 0x8000);
  uVar1 = uVar3 + uVar2 * 0x4000;
  (*(uint *)(gen_frame + 0x0)) = uVar3;
  iVar4 = (uVar2 & 0x3ffff) * 0x800 - *((int *)GEN_TOP(((int)this + 0x1c)));
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  *param_2 = iVar4;
  (*(int *)(gen_frame + 0x1c)) = iVar4;
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  (*(undefined4 *)(gen_frame + 0xc)) = 0x4000;
  (*(undefined4 *)(gen_frame + 0x10)) = 8;
  (*(int *)(gen_frame + 0x14)) = uVar2 * 0x4000;
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  F_00a1a9d0(param_1,&(*(uint *)(gen_frame + 0x0)),param_3);
  return uVar1;
}

/* ref: FUN_004dc830 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dc830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  *param_1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  param_1[1] = *((uint *)GEN_TOP(((int)this + 0x34)));
  param_1[2] = *((uint *)GEN_TOP(((int)this + 0x38))) & 0x7ffffff;
  param_1[3] = *((uint *)GEN_TOP(((int)this + 0x3c))) & 0x7fffffff;
  param_1[4] = *((uint *)GEN_TOP(((int)this + 0x40)));
  param_1[5] = *((uint *)GEN_TOP(((int)this + 0x44)));
  param_1[6] = *((uint *)GEN_TOP(((int)this + 0x48)));
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x4c)));
  param_1[7] = uVar7;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  *param_1 = *((uint *)GEN_TOP(((int)this + 0x58))) & 0xfe000000;
  param_1[1] = uVar4 & 0xfffffffc;
  *param_1 = *param_1 | *((uint *)GEN_TOP(((int)this + 0x50))) & 0x1f;
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60)));
  if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = *((uint *)GEN_TOP(((int)this + 8))) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *((char *)GEN_TOP((uVar4 + 0xc + (int)pvVar3))), -1 < cVar2)) &&
       ((int)cVar2 < *((int *)GEN_TOP(((int)pvVar3 + 8))))) {
      uVar4 = F_004e3c00(pvVar3 GEN_EDX_FWD,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[4] = uVar4;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x60)));
    uVar4 = *((uint *)GEN_TOP(((int)this + 8))) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *((char *)GEN_TOP((uVar4 + 0xc + (int)pvVar3))), -1 < cVar2)) &&
       ((int)cVar2 < *((int *)GEN_TOP(((int)pvVar3 + 8))))) {
      uVar4 = F_004e3c40(pvVar3 GEN_EDX_ARG,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[5] = uVar4;
  }
  uVar7 = *((int *)GEN_TOP((uVar7 + 0x14))) + 1;
  iVar1 = uVar7 * 8;
  puVar5 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_ARG,iVar1 + *((int *)GEN_TOP((param_1[5] + 0x20))) + *((int *)GEN_TOP((param_1[4] + 0x20))))));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  param_1[8] = uVar7;
  param_1[9] = (uint)puVar5;
  if (uVar7 != 0) {
    puVar6 = ((undefined4 *)GEN_TOP(((int)this + 0x68)));
    do {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = F_004daad0(this GEN_EDX_ARG,param_1[4],param_1[9] + iVar1,param_1 + 10,param_1 + 0xb);
  F_004daad0(this GEN_EDX_ARG,param_1[5],uVar7,param_1 + 0xc,param_1 + 0xd);
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::InitializeDummyTexture */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dc980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dc980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  bVar4 = 1;
  if (*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_004db340(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD);
    if (bVar2 == 0) {
      bVar4 = 0;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pcVar6 = ((char *)REFP(0x10968e0));
  puVar5 = &(*(undefined4 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x4)) = 0x746578;
  uVar3 = F_004ff310(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0);
  uVar3 = F_00513d70(uVar3,puVar5,pcVar6,uVar7,uVar8,uVar9);
  *(uint *)(this + 0xd0) = uVar3;
  if (uVar3 == 0) {
    bVar4 = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((uVar3 + 0xfc)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
  }
  *(undefined4 *)(this + 0xd4) = *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xfc)));
  return bVar4;
}

/* ref: Global::CreateKernelTexture2D */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dca20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  byte bVar1;
  undefined * this;
  int * piVar2;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_004d6c80(this GEN_EDX_ARG)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      piVar2[2] = piVar2[2] ^ (piVar2[2] ^ param_5) & 0xf;
      bVar1 = F_004dc3d0(piVar2 GEN_EDX_ARG,param_1,(undefined1)param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)piVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Global::CreateKernelTexture3D */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dca90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x4dca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((int *)GEN_TOP(F_004d6c80(this GEN_EDX_ARG)));
    if (this_00 != ((int *)GEN_TOP(0x0))) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_6) & 0xf;
      bVar1 = F_004dc480(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Global::CreateKernelTextureCube */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcb00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  byte bVar1;
  undefined * this;
  int * piVar2;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_004d6c80(this GEN_EDX_ARG)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      piVar2[2] = piVar2[2] ^ (piVar2[2] ^ param_5) & 0xf;
      bVar1 = F_004dc560(piVar2 GEN_EDX_ARG,param_1,(undefined1)param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)piVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Global::CreateKernelVertexShader */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcb70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  byte bVar1;
  undefined * this;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x30,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00b1b490(this GEN_EDX_ARG);
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096afc));
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(uint *)(this + 8) = *(uint *)(this + 8) ^ param_5 & 0xf;
    bVar1 = F_004dc280(this GEN_EDX_ARG,param_1,param_2,param_3,param_4)
    ;
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Global::CreateKernelPixelShader */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcc00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dcc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  byte bVar1;
  undefined * this;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x2c,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00b1b490(this GEN_EDX_ARG);
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b14));
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(uint *)(this + 8) = *(uint *)(this + 8) ^ param_5 & 0xf;
    bVar1 = F_004dc330(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Global::CreateKernelVertexBuffer */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcc90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4dcc90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  byte bVar1;
  undefined * pVVar2;
  
  pVVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x34,0x10)));
  if (pVVar2 != ((undefined *)GEN_TOP(0x0))) {
    pVVar2 = ((undefined *)GEN_TOP(F_004d6830(pVVar2 GEN_EDX_ARG)));
    if (pVVar2 != ((undefined *)GEN_TOP(0x0))) {
      *(uint *)(pVVar2 + 8) = *(uint *)(pVVar2 + 8) ^ (*(uint *)(pVVar2 + 8) ^ param_3) & 0xf;
      bVar1 = F_004dbff0(pVVar2 GEN_EDX_ARG,param_1,param_2);
      if (bVar1 != 0) {
        return (uint)pVVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pVVar2 + 0xc))))(pVVar2 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Global::CreateIndexBuffer */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dccf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4dccf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x38,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((int *)GEN_TOP(F_004d69a0(this GEN_EDX_ARG)));
    if (this_00 != ((int *)GEN_TOP(0x0))) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_4) & 0xf;
      bVar1 = F_004dc090(this_00 GEN_EDX_ARG,param_1,param_2,param_3);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Global::CreateConstantBuffer */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcd60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4dcd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x2c,0x10)));
  if (this != ((int *)GEN_TOP(0x0))) {
    F_00b1b490(this GEN_EDX_ARG);
    this[2] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096ab4));
    this[3] = 0;
    this[4] = 0;
    this[8] = 0;
    this[9] = 0;
    this[10] = 0;
    this[2] = this[2] ^ param_3 & 0xf;
    bVar1 = F_004dc130(this GEN_EDX_ARG,param_1,param_2);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xc))))(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dcde0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004dcde0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4dcde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this;
  undefined * this_00;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                           (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x20,0x10)));
  if ((this != ((undefined *)GEN_TOP(0x0))) && (this_00 = ((undefined *)GEN_TOP(F_004d6f50(this GEN_EDX_ARG))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) ^ (*(uint *)(this_00 + 8) ^ param_2) & 0xf;
    if (param_1 != 0) {
      *(int *)(this_00 + 0x18) = param_1;
      iVar1 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38)));
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
        return (uint)this_00;
      }
      bVar3 = F_004da760(this_00 GEN_EDX_ARG);
      if (bVar3 != 0) {
        return (uint)this_00;
      }
      piVar2 = *(int * PTR32 *)(this_00 + 0x1c);
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        *(undefined4 *)(this_00 + 0x1c) = 0;
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_004dce70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004dce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  uint * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined * this_01;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
  uVar7 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x11ac)));
  this_00 = ((undefined *)GEN_TOP(F_00a1abd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x11ac))) GEN_EDX_FWD)));
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this_00;
  if (uVar3 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = ((undefined4 *)GEN_TOP(0x0));
    do {
      puVar1 = ((uint *)(gen_frame + 0x68)) + uVar7;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar3 = F_004da960(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))) GEN_EDX_ARG,puVar1);
      }
      else {
        uVar3 = F_004dc730(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x60)),puVar1,
                             uVar7 + 1 & 7);
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + *puVar1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x5b0)));
      ((uint *)(gen_frame + 0x0))[(int)(uVar7)] = uVar3;
      uVar7 = uVar7 + 1;
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while (uVar7 < (*(uint *)(gen_frame + 0x58)));
  }
  this_01 = ((undefined *)GEN_TOP(0x0));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00b1af80(this_00 GEN_EDX_ARG);
    this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
  }
  puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xbc))) + *((int *)GEN_TOP(((int)this + 0xb8))) + (*(uint *)(gen_frame + 0x5c)) * -8)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = puVar8;
  if ((*(uint *)(gen_frame + 0x5c)) != 0) {
    do {
      iVar6 = 0;
      uVar7 = 0xffffffff;
      uVar5 = 0;
      if (uVar3 != 0) {
        do {
          iVar4 = uVar3 - uVar5;
          if ((((uint *)(gen_frame + 0x68))[(int)(iVar4 - 1)] != 0) && (*((uint *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar4 - 1)])) <= uVar7)) {
            iVar6 = iVar4 - 1;
            uVar7 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar4 - 1)]));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      piVar2 = ((int *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar6)]));
      (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)(gen_frame + 0x68)) + iVar6;
      uVar3 = ((uint *)(gen_frame + 0x68))[(int)(iVar6)];
      uVar7 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = ((uint *)(gen_frame + 0x0)) + iVar6;
      do {
        uVar7 = uVar7 + 1;
        if (uVar7 == uVar3) break;
      } while (*piVar2 == piVar2[uVar7 * 2]);
      if (uVar7 != 0) {
        if (((*(undefined * PTR32 *)(gen_frame + 0x60)) == ((undefined *)GEN_TOP(0x0))) || (uVar7 < 0x401)) {
          if (0 < (int)uVar7) {
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
            do {
              *puVar8 = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + (int)puVar8)));
              puVar8[1] = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + 4 + (int)puVar8)));
              puVar8 = puVar8 + 2;
              uVar5 = (*(uint *)(gen_frame + 0x48)) - 1;
              (*(uint *)(gen_frame + 0x48)) = uVar5;
            } while (uVar5 != 0);
          }
        }
        else {
          F_00a1a5d0((*(undefined * PTR32 *)(gen_frame + 0x60)),(*(undefined4 * PTR32 *)(gen_frame + 0x64)),piVar2,uVar7 * 8);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x64)) + uVar7 * 2;
        *(*(uint * PTR32 *)(gen_frame + 0x40)) = uVar3 - uVar7;
        *(*(uint * PTR32 *)(gen_frame + 0x54)) = (uint)(piVar2 + uVar7 * 2);
      }
      this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while ((uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x4c))) >> 3) < (*(uint *)(gen_frame + 0x5c)));
  }
  uVar3 = (*(uint *)(gen_frame + 0x5c));
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  if (this_01 == ((undefined *)GEN_TOP(0x0))) {
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x5c));
  }
  else {
    F_00b1af80(this_01 GEN_EDX_ARG);
    F_00a1ac10((*(undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x60)));
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = uVar3;
  }
  return (uint)puVar8;
}

/* ref: FUN_004dd050 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dd050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) != ((undefined *)GEN_TOP(0x0))) {
    F_004db7e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x230))) GEN_EDX_FWD);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x230)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x230))) = 0;
    }
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x22c)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x228)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x224)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x220)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return uVar3;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteSetRenderTargets */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004dd100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dd100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x40, 0, 4);
  undefined * pIVar1;
  int iVar2;
  int * piVar3;
  uint * puVar4;
  byte bVar5;
  code * pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c));
  (*(int *)(gen_frame + 0x18)) = param_1;
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this + 0x24;
  uVar10 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP((param_1 + 8)));
  iVar8 = param_1;
  do {
    iVar2 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    if (iVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar10,0);
    }
    else {
      piVar3 = ((int *)GEN_TOP((iVar8 + 0x1c)));
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))
                  (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar10,*((undefined4 *)GEN_TOP((iVar2 + 0x34))));
      }
      else {
        iVar8 = (*(int *)(gen_frame + 0x18));
        if (((*((uint *)GEN_TOP((iVar2 + 0x2c))) & 0x3c00000) == 0x800000) &&
           ((*((uint *)GEN_TOP((iVar2 + 0x2c))) & 0x100000) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar2 + 0x30))) + 0x48))))(*((int * PTR32 *)GEN_TOP((iVar2 + 0x30))) GEN_EDX_ARG,*piVar3,&(*(int * PTR32 *)(gen_frame + 0x14)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar10,(*(int * PTR32 *)(gen_frame + 0x14)));
          iVar8 = (*(int *)(gen_frame + 0x18));
          if ((*(int * PTR32 *)(gen_frame + 0x14)) != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
            iVar8 = (*(int *)(gen_frame + 0x18));
          }
        }
      }
    }
    *(int *)(*(undefined * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x1c));
    uVar10 = uVar10 + 1;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) + 4;
  } while (uVar10 < 4);
  piVar3 = *(int * PTR32 *)(this + 0x1c);
  if (*((int *)GEN_TOP((iVar8 + 0x18))) == 0) {
    pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x9c)));
    uVar12 = 0;
  }
  else {
    uVar12 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0x18))) + 0x34)));
    pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x9c)));
  }
  (*pcVar6)(piVar3,uVar12);
  *(undefined4 *)(this + 0x34) = *((undefined4 *)GEN_TOP((iVar8 + 0x18)));
  uVar12 = *((undefined4 *)GEN_TOP((iVar8 + 0x1c)));
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)(this + 0x38) = uVar12;
  *(undefined4 *)(this + 0x3c) = *((undefined4 *)GEN_TOP((iVar8 + 0x20)));
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  bVar5 = (byte)uVar12;
  uVar7 = *((uint *)GEN_TOP((iVar2 + 0x18))) >> GEN_SHC(bVar5, bVar5);
  uVar11 = *((uint *)GEN_TOP((iVar2 + 0x18))) >> GEN_SHC(bVar5, bVar5);
  uVar9 = *((uint *)GEN_TOP((iVar2 + 0x1c))) >> GEN_SHC(bVar5, bVar5);
  uVar10 = *((uint *)GEN_TOP((iVar2 + 0x1c))) >> GEN_SHC(bVar5, bVar5);
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  pIVar1 = this + 8;
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar7;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar7 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar7 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar7 >> 0x18);
  (*(uint *)(gen_frame + 0x30)) = uVar11;
  (*(uint *)(gen_frame + 0x34)) = uVar9;
  (*(uint *)(gen_frame + 0xc)) = uVar10;
  *(undefined4 *)pIVar1 = 0;
  *(undefined4 *)(this + 0xc) = 0;
  puVar4 = &(*(uint *)(gen_frame + 0x30));
  if ((int)uVar7 <= (int)uVar11) {
    puVar4 = (uint *)(((byte *)(gen_frame + 0x0)) + 8);
  }
  uVar7 = *puVar4;
  *(uint *)(this + 0x10) = uVar7;
  puVar4 = &(*(uint *)(gen_frame + 0x34));
  if ((int)uVar10 <= (int)uVar9) {
    puVar4 = &(*(uint *)(gen_frame + 0xc));
  }
  uVar10 = *puVar4;
  *(uint *)(this + 0x14) = uVar10;
  if ((int)uVar7 < 0) {
    *(undefined4 *)pIVar1 = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if ((int)uVar10 < 0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 300))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,pIVar1);
  piVar3 = *(int * PTR32 *)(this + 0x1c);
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar11;
  (*(uint *)(gen_frame + 0x2c)) = uVar9;
  (*(uint *)(gen_frame + 0x34)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xbc))))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
  return uVar10;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteCallback */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dd310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dd310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((param_1 + 0xc))) & 1) != 0) {
    F_004db500(this GEN_EDX_FWD);
    if (this[0x20] == (undefined1)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
      this[0x20] = (undefined1)0x1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x34,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x38,8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x39,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x3a,0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x3b,0xff);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x35,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x36,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x37,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,8,3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0x16,3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0xae,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0xc3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xe4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0xaf,0);
    ((code *)*((gen_code32 *)GEN_TOP((param_1 + 4))))(*((undefined4 *)GEN_TOP((param_1 + 8))));
    F_004d61f0(this GEN_EDX_ARG);
    uVar1 = F_004db500((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 4))))(*((undefined4 *)GEN_TOP((param_1 + 8))));
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::FlushSaveTextureWork */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dd470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  bVar1 = F_004db9a0(*(undefined * PTR32 *)(this + 0x230) GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (this[0x20] == (undefined1)0x0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
    this[0x20] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::QueueSaveTexture */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dd4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dd4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  bVar1 = F_004db880(*(undefined * PTR32 *)(this + 0x230) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 8))),
                     *((undefined4 *)GEN_TOP((param_1 + 4))),*((undefined4 *)GEN_TOP((param_1 + 0x10))));
  return bVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ApplyDrawState */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dd4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4dd4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  if (this[0x20] == (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x1;
  }
  if (*(uint *)(this + 0x40) != (param_1[2] & 0x7ffffff)) {
    F_004d75c0(this GEN_EDX_ARG,param_1[2] & 0x7ffffff);
  }
  if (*(uint *)(this + 0x44) != (*param_1 & 0x1f)) {
    F_004d7720(this GEN_EDX_ARG,*param_1 & 0x1f);
  }
  if ((*(uint *)(this + 0x48) != (*param_1 & 0xfe000000)) ||
     (*(uint *)(this + 0x4c) != (param_1[1] & 0xfffffffc))) {
    F_004d7790(this GEN_EDX_ARG,*param_1 & 0xfe000000,param_1[1] & 0xfffffffc);
  }
  if (*(uint *)(this + 0x50) != (param_1[3] & 0x7fffffff)) {
    F_004d7890(this GEN_EDX_ARG,param_1[3] & 0x7fffffff);
  }
  F_004d79a0(this GEN_EDX_ARG,param_1[7],param_1[9],param_1[8],param_1[4],param_2);
  uVar2 = param_1[6];
  if (*(uint *)(this + 0x54) != uVar2) {
    if (uVar2 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x1a0))))
                (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar2 + 0x24 + REFG(int, 0x1375a3c) * 4))));
    }
    *(uint *)(this + 0x54) = uVar2;
  }
  uVar2 = param_1[10];
  uVar1 = param_1[4];
  if (*(uint *)(this + 0x5c) == 1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x170))))
              (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar1 + 0x2c))));
    *(uint *)(this + 0x5c) = uVar1;
    F_004d7d30(this GEN_EDX_ARG,uVar1,uVar2);
  }
  else {
    if (*(uint *)(this + 0x5c) != uVar1) {
      F_004d7da0(this GEN_EDX_ARG,uVar1);
    }
    F_004d7c80(this GEN_EDX_ARG,uVar1,uVar2);
  }
  F_004d7ee0(this GEN_EDX_ARG,param_1[4],param_1[0xb]);
  F_004e3d40(this GEN_EDX_ARG,param_1[5],param_1[0xc]);
  uVar2 = F_004d83c0(this GEN_EDX_ARG,param_1[5],param_1[0xd]);
  return uVar2;
}

/* ref: Client::Graphics::Kernel::SwapChain::InitFromSwapChain */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dd630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dd630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined * pTVar4;
  
  *(int * PTR32 *)(param_1 + 0x3c) = (*(int * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x3c) + 0x14))))(*(int * PTR32 *)(param_1 + 0x3c) GEN_EDX_ARG,0,0,&(*(int * PTR32 *)&gen_args[0]));
  if ((int)uVar3 < 0) {
    F_004da5a0(param_1 GEN_EDX_ARG);
    return 0;
  }
  pTVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
  if ((pTVar4 != ((undefined *)GEN_TOP(0x0))) &&
     (pTVar4 = ((undefined *)GEN_TOP(F_004d6c80(pTVar4 GEN_EDX_ARG))), pTVar4 != ((undefined *)GEN_TOP(0x0)))) {
    bVar2 = F_004d6d10(pTVar4 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),8);
    if (bVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pTVar4 + 0xc))))(pTVar4 GEN_EDX_ARG);
      if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      }
      F_004da5a0(param_1 GEN_EDX_ARG);
      return 0;
    }
    *(undefined * PTR32 *)(param_1 + 0x34) = pTVar4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(pTVar4 + 0x18);
    uVar1 = *(undefined4 *)(pTVar4 + 0x1c);
    param_1[0x28] = (*(undefined1 *)&gen_args[2]);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = (*(undefined4 *)&gen_args[1]);
    *(undefined4 *)(param_1 + 0x24) = 1;
    *(undefined4 *)(param_1 + 0x2c) = (*(undefined4 *)&gen_args[3]);
    *(undefined4 *)(param_1 + 0x30) = 8;
    if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
    }
    if (param_1[0x28] != (undefined1)0x0) {
      uVar3 = F_004dca20(param_1 + 0x18,1,*(undefined4 *)(param_1 + 0x2c),
                         *(uint *)(param_1 + 0x30) | 0x200000,1);
      if (uVar3 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x38) = uVar3;
    }
    return 1;
  }
  if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  }
  F_004da5a0(param_1 GEN_EDX_ARG);
  return 0;
}

/* ref: Client::Graphics::Kernel::SwapChain::CreateD3DSwapChain */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_004dd770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined * pTVar8;
  undefined * pSVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x0)),0,0x38);
  uVar1 = *(undefined4 *)(this + 0x20);
  uVar2 = *(undefined4 *)(this + 0x1c);
  pSVar9 = this + 0x18;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pSVar9;
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x18);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  uVar7 = F_004d9f60(uVar1);
  (*(uint *)(gen_frame + 0x8)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x24);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x80000000;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),this + 0x3c);
  if ((int)uVar7 < 0) {
    return 0;
  }
  piVar3 = *(int * PTR32 *)(this + 0x3c);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,0,0,&(*(int * PTR32 *)(gen_frame + 0x40)));
  if ((int)uVar7 < 0) {
    return 0;
  }
  iVar4 = *(int *)(this + 0x34);
  if (iVar4 == 0) {
    pTVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x48,0x10)));
    if ((pTVar8 != ((undefined *)GEN_TOP(0x0))) &&
       (pTVar8 = ((undefined *)GEN_TOP(F_004d6c80(pTVar8 GEN_EDX_ARG))), pTVar8 != ((undefined *)GEN_TOP(0x0)))) {
      bVar6 = F_004d6d10(pTVar8 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x40)),*(undefined4 *)(this + 0x20),8);
      if (bVar6 != 0) {
        *(undefined * PTR32 *)(this + 0x34) = pTVar8;
        goto LAB_004dd8b9;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pTVar8 + 0xc))))(pTVar8 GEN_EDX_ARG);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x40)) != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 8))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
    }
    return 0;
  }
  iVar5 = *(int *)(this + 0x20);
  (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x40));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)));
  *((undefined4 *)GEN_TOP((iVar4 + 0x18))) = (*(undefined4 *)(gen_frame + 0x5c));
  *((undefined4 *)GEN_TOP((iVar4 + 0x1c))) = (*(undefined4 *)(gen_frame + 0x60));
  if (iVar5 != 0) {
    *((int *)GEN_TOP((iVar4 + 0x28))) = iVar5;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 0x34))) = (*(int * PTR32 *)(gen_frame + 0x38));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 4))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
  pSVar9 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
LAB_004dd8b9: ;
  if ((*(int * PTR32 *)(gen_frame + 0x40)) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 8))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP(0x0));
  }
  if (this[0x28] != (undefined1)0x0) {
    if (*(int *)(this + 0x38) != 0) {
      F_004da550(*(int *)(this + 0x38) GEN_EDX_ARG,pSVar9,1,*(undefined4 *)(this + 0x2c));
      return 1;
    }
    uVar7 = F_004dca20(pSVar9,1,*(undefined4 *)(this + 0x2c),*(uint *)(this + 0x30) | 0x200000,1);
    if (uVar7 == 0) {
      return 0;
    }
    *(uint *)(this + 0x38) = uVar7;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::SwapChain::OnDeviceRestore */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004dd940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (((byte)this[0x24] & 0x4c) != 0) {
    return 1;
  }
  bVar1 = F_004dd770(this - 0xc GEN_EDX_FWD);
  if (bVar1 == 0) {
    F_004da5a0(this - 0xc GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::SwapChain::Resize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dd970(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4dd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  undefined4 uVar1;
  byte bVar2;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  uVar1 = param_2[1];
  param_1[0x28] = param_3;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (param_4 != 0) {
    *(int *)(param_1 + 0x20) = param_4;
  }
  if (param_5 != 0) {
    *(int *)(param_1 + 0x2c) = param_5;
  }
  bVar2 = F_004dd770(param_1 GEN_EDX_FWD);
  if (bVar2 == 0) {
    F_004da5a0(param_1 GEN_EDX_ARG);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dd9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004dd9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dd9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  undefined * this_00;
  byte bVar1;
  HWND pHVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
    return 1;
  }
  if ((*((char *)GEN_TOP(((int)this + 0x4c))) != '\0') &&
     (pHVar2 = gen_imp_GetActiveWindow(), pHVar2 != *((HWND *)GEN_TOP(((int)this + 0x5c))))) {
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG);
  if (uVar3 == 0x88760868) {
    return 1;
  }
  F_004db190(this GEN_EDX_ARG);
  F_004db060(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x40))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar3) {
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 4;
    if (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0') {
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c)));
      *(undefined4 *)(this_00 + 0x18) = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
      *(undefined4 *)(this_00 + 0x1c) = *((undefined4 *)GEN_TOP(((int)this + 0x94)));
      this_00[0x28] = (undefined1)0x1;
      bVar1 = F_004dd770(this_00 GEN_EDX_ARG);
      if (bVar1 == 0) {
        F_004da5a0(this_00 GEN_EDX_ARG);
        return 4;
      }
    }
    else {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x40))) + 0x38))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x38)));
      if ((int)uVar3 < 0) {
        return 4;
      }
      bVar1 = F_004da660(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x38)));
      if (bVar1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x38)) != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
        }
        return 4;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x38)) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG);
      }
    }
    bVar1 = F_004d6710();
    if (bVar1 == 0) {
      return 4;
    }
    F_004d93c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG);
    if ((*((char *)GEN_TOP(((int)this + 0x4e))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x4c))) == '\0')) {
      *((undefined1 *)GEN_TOP(((int)this + 0x4e))) = 0;
    }
    F_004d6140(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x31))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
    return 0;
  }
  if ((int)uVar3 < -0x7789f7d8) {
    if ((uVar3 != 0x88760827) && ((uVar3 == 0x8007000e || (uVar3 == 0x8876017c)))) {
      return 4;
    }
  }
  else {
    if (uVar3 == 0x88760868) {
      return 1;
    }
    if (uVar3 == 0x8876086c) {
      return 3;
    }
  }
  return 2;
}

/* ref: Client::Graphics::Kernel::Device::RestoreAfterReset */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004ddb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ddb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  
  if (this[0x4c] == (undefined1)0x0) {
    this_00 = *(undefined * PTR32 *)(this + 0x2c);
    *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(this + 0x90);
    *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x94);
    this_00[0x28] = (undefined1)0x1;
    bVar1 = F_004dd770(this_00 GEN_EDX_FWD);
    if (bVar1 == 0) {
      F_004da5a0(this_00 GEN_EDX_ARG);
      return 0;
    }
  }
  bVar1 = F_004d67a0();
  if (bVar1 == 0) {
    return 0;
  }
  F_004d93c0(*(undefined * PTR32 *)(this + 0x80) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteDrawPrimitive */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ddbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ddbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x10,0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP((param_1 + 4))))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x144))))
                    (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096c78) + *((int *)GEN_TOP((param_1 + 4))) * 4),
                     *((undefined4 *)GEN_TOP((param_1 + 8))),uVar1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteDrawIndexedPrimitive */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ddc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ddc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x1c,0);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP((param_1 + 4))))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096c94) + *((int *)GEN_TOP((param_1 + 4))) * 4),
                     *((undefined4 *)GEN_TOP((param_1 + 8))),*((undefined4 *)GEN_TOP((param_1 + 0xc))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x10))),*((undefined4 *)GEN_TOP((param_1 + 0x14))),uVar1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteDrawIndexedInstanced */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ddcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ddcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_004dd4e0(this GEN_EDX_FWD,param_1 + 0x20,*((undefined4 *)GEN_TOP((param_1 + 0x1c))));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP((param_1 + 4))))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,
                     *(undefined4 *)(&REFG(undefined, 0x1096cb0) + *((int *)GEN_TOP((param_1 + 4))) * 4),
                     *((undefined4 *)GEN_TOP((param_1 + 8))),*((undefined4 *)GEN_TOP((param_1 + 0xc))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x10))),*((undefined4 *)GEN_TOP((param_1 + 0x14))),uVar1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::CopyDepthWithNullTarget */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ddd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(0x0));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x70))))
            (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x18))),*((undefined4 *)GEN_TOP((iVar1 + 0x1c))),
             0x4c4c554e,0,0,0,&(*(int * PTR32 *)(gen_frame + 0x48)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,0,(*(int * PTR32 *)(gen_frame + 0x48)));
  uVar4 = 1;
  do {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar4,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x9c))))
            (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((piVar3[1] + 0x34))));
  iVar1 = piVar3[5];
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x22c);
  (*(int *)(gen_frame + 0x38)) = iVar1;
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  uVar2 = *(undefined4 *)(this + 0x220);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x1302368) & 0xfe000000 | REFG(undefined4, 0x130235c) & 0x1d | 2;
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1302370) & 0x7ffffffb;
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x1302350) & 0x7fffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(this + 0x228);
  (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x224);
  (*(undefined4 *)(gen_frame + 0x44)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x40));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x34)) = &(*(int *)(gen_frame + 0x38));
  F_004dd4e0(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x144))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,4,0,1);
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
    this[0x20] = (undefined1)0x0;
  }
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this + 0x24;
  do {
    iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x4c));
    if (iVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar4,0);
    }
    else if (*(int *)(this + 0x38) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))
                (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar4,*((undefined4 *)GEN_TOP((iVar1 + 0x34))));
    }
    else if (((*((uint *)GEN_TOP((iVar1 + 0x2c))) & 0x3c00000) == 0x800000) &&
            ((*((uint *)GEN_TOP((iVar1 + 0x2c))) & 0x100000) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x30))) + 0x48))))
                (*((int * PTR32 *)GEN_TOP((iVar1 + 0x30))) GEN_EDX_ARG,*(int *)(this + 0x38),&(*(int * PTR32 *)&gen_args[0]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x94))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,uVar4,(*(int * PTR32 *)&gen_args[0]));
      if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (*(undefined * PTR32 *)(gen_frame + 0x4c)) + 4;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  piVar3 = *(int * PTR32 *)(this + 0x1c);
  if (*(int *)(this + 0x34) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x9c))))(piVar3 GEN_EDX_ARG,0);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x9c))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x34) + 0x34))));
  }
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x48)) != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x48)) + 8))))((*(int * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: Client::Graphics::Kernel::Device::PurgeUnreferenced */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004ddf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ddf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x20)));
  if (piVar5 != *(int * PTR32 *)(this + 0x20)) {
    do {
      piVar4 = ((int *)GEN_TOP(piVar5[4]));
      if (piVar4[1] == 1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
        piVar4 = piVar5;
        if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
            piVar2 = ((int *)GEN_TOP(*piVar4));
            if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
              do {
                piVar4 = piVar2;
                piVar2 = ((int *)GEN_TOP(*piVar4));
              } while (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0');
              F_004e4af0(this + 0x1c GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar5);
              piVar5 = piVar4;
              goto LAB_004de057;
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            piVar2 = piVar5;
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
              piVar3 = ((int *)GEN_TOP(piVar4[1]));
              piVar2 = piVar4;
            }
          }
        }
        F_004e4af0(this + 0x1c GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar5);
        piVar5 = piVar4;
      }
      else if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar5 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
            piVar5 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          piVar4 = piVar5;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
            piVar2 = ((int *)GEN_TOP(piVar5[1]));
            piVar4 = piVar5;
          }
        }
      }
LAB_004de057: ;
    } while (piVar5 != *(int * PTR32 *)(this + 0x20));
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: Client::Graphics::Kernel::SwapChain::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004de070(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x4de070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  param_1[0x28] = param_5;
  *(uint *)(param_1 + 0x30) = param_7;
  if (((((param_7 & 0x4c) != 0) || (iVar2 = *((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))), iVar2 == 0)) ||
      (iVar2 == 1)) || (iVar2 == 4)) {
    bVar3 = F_004dd770(param_1 GEN_EDX_FWD);
    if (bVar3 == 0) {
      F_004da5a0(param_1 GEN_EDX_ARG);
      return 0;
    }
  }
  return 1;
}

/* ref: Global::CreateSwapChain */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004de0e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x4de0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  byte bVar1;
  undefined * this;
  int * piVar2;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                           (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x40,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_004d6ec0(this GEN_EDX_ARG)));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      piVar2[2] = piVar2[2] ^ (piVar2[2] ^ param_7) & 0xf;
      bVar1 = F_004de070(piVar2 GEN_EDX_ARG,param_1,param_2,param_3,(undefined1)param_4,param_5,param_6);
      if (bVar1 != 0) {
        return (uint)piVar2;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::CheckDeviceState */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004de150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_004dd9c0(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    return 1;
  case 2: ;
    F_00429940(1,1,0x1000000d,0xffffffff);
    return 0;
  case 3: ;
    bVar1 = F_004db220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00429940(1,1,0x1000003d,0xffffffff);
    }
    break;
  case 4: ;
    bVar1 = F_004db220(this GEN_EDX_ARG);
    if (bVar1 == 0) {
      F_00429940(1,1,0x10000001,0xffffffff);
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteCopyTexture */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004de1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4de1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x0;
  }
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x2c)));
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x2c)));
  if ((uVar2 & uVar1 & 0x200000) != 0) {
    uVar2 = F_004ddd40(this GEN_EDX_ARG,param_1);
    return uVar2;
  }
  if ((uVar1 & 0x100000) != 0) {
    uVar2 = F_004d89e0(this GEN_EDX_ARG,param_1);
    return uVar2;
  }
  uVar3 = param_1;
  if (((uVar1 & 0x200000) == 0) && ((uVar2 & 0x300000) == 0)) {
    uVar3 = F_004d8b40(param_1);
  }
  return uVar3;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::ExecuteCommands */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004de260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4de260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  F_004d61f0(this GEN_EDX_FWD);
  F_004db500((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG);
  if (param_2 != 0) {
    piVar5 = ((int *)GEN_TOP((param_1 + 4)));
    iVar4 = param_2;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(*piVar5));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        switch((unsigned int)(uintptr_t)(*puVar1)) {
        case 0: ;
          F_004dd100(this GEN_EDX_ARG,puVar1);
          break;
        case 1: ;
          F_004d7550(this GEN_EDX_ARG,puVar1 + 1,GEN_ARGF(gen_bits2f(puVar1[5])),GEN_ARGF(gen_bits2f(puVar1[6])));
          break;
        case 2: ;
          F_004db440(this GEN_EDX_ARG,puVar1);
          break;
        case 3: ;
          F_004d8900(this GEN_EDX_ARG,puVar1);
          break;
        case 4: ;
          F_004ddbb0(this GEN_EDX_ARG,puVar1);
          break;
        case 5: ;
          F_004ddc30(this GEN_EDX_ARG,puVar1);
          break;
        case 6: ;
          F_004ddcb0(this GEN_EDX_ARG,puVar1);
          break;
        case 7: ;
          F_004d89a0(this GEN_EDX_ARG,puVar1);
          break;
        case 8: ;
          F_004de1e0(this GEN_EDX_ARG,puVar1);
          break;
        case 9: ;
          F_004d8dd0(this GEN_EDX_ARG,puVar1);
          break;
        case 10: ;
          F_004d8ef0(this GEN_EDX_ARG,puVar1);
          break;
        case 0xb: ;
          F_004dd310(this GEN_EDX_ARG,puVar1);
          break;
        case 0xc: ;
          if (*((int *)GEN_TOP((puVar1[1] + 0x1c))) != 0) {
            piVar2 = *((int * PTR32 *)GEN_TOP((puVar1[1] + 0x1c)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,puVar1[2]);
          }
          break;
        case 0xd: ;
          F_004d8f50(puVar1);
          break;
        case 0xe: ;
          F_004db880(*(undefined * PTR32 *)(this + 0x230) GEN_EDX_ARG,puVar1[2],puVar1[1],puVar1[4]);
          break;
        case 0xf: ;
          F_004db4c0(this GEN_EDX_ARG,puVar1);
        }
        F_004dbf10(*(undefined * PTR32 *)(this + 0x230) GEN_EDX_ARG);
      }
      piVar5 = piVar5 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  if (this[0x20] != (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
    this[0x20] = (undefined1)0x0;
  }
  F_004db9a0(*(undefined * PTR32 *)(this + 0x230) GEN_EDX_ARG);
  if (this[0x20] == (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
    this[0x20] = (undefined1)0x1;
    if (this[0x20] == (undefined1)0x0) goto LAB_004de3f9;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG);
  this[0x20] = (undefined1)0x0;
LAB_004de3f9: ;
  piVar5 = *(int * PTR32 *)(this + 0x1c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0x94)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 300))))(piVar5 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: Client::Graphics::Kernel::Device::InputLayoutManager::ReleaseUnused */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004de480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  (*(int *)(gen_frame + 0x4)) = 0;
  do {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
    piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x20)));
    if (piVar6 != *(int * PTR32 *)(this + 0x20)) {
      do {
        piVar5 = ((int *)GEN_TOP(piVar6[4]));
        if (piVar5[1] == 1) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
          piVar5 = piVar6;
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            piVar5 = ((int *)GEN_TOP(piVar6[2]));
            if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
              piVar2 = ((int *)GEN_TOP(*piVar5));
              if (*((char *)GEN_TOP((*piVar5 + 0x15))) == '\0') {
                do {
                  piVar5 = piVar2;
                  piVar2 = ((int *)GEN_TOP(*piVar5));
                } while (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0');
                F_004e4af0(this + 0x1c GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar6);
                piVar6 = piVar5;
                goto LAB_004de567;
              }
            }
            else {
              cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
              piVar4 = ((int *)GEN_TOP(piVar6[1]));
              piVar2 = piVar6;
              while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar5[2]))))) {
                cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
                piVar4 = ((int *)GEN_TOP(piVar5[1]));
                piVar2 = piVar5;
              }
            }
          }
          F_004e4af0(this + 0x1c GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar6);
          piVar6 = piVar5;
        }
        else if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
          piVar5 = ((int *)GEN_TOP(piVar6[2]));
          if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar5 + 0x15)));
            piVar6 = piVar5;
            piVar5 = ((int *)GEN_TOP(*piVar5));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar5 + 0x15)));
              piVar6 = piVar5;
              piVar5 = ((int *)GEN_TOP(*piVar5));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
            piVar2 = ((int *)GEN_TOP(piVar6[1]));
            piVar5 = piVar6;
            while ((piVar6 = piVar2, cVar1 == '\0' && (piVar5 == ((int *)GEN_TOP(piVar6[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
              piVar2 = ((int *)GEN_TOP(piVar6[1]));
              piVar5 = piVar6;
            }
          }
        }
LAB_004de567: ;
      } while (piVar6 != *(int * PTR32 *)(this + 0x20));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
    iVar3 = *(int *)(this + 0x24);
    if ((iVar3 == 0) || ((*(int *)(gen_frame + 0x4)) == iVar3)) {
      return 0;
    }
    (*(int *)(gen_frame + 0x4)) = iVar3;
  } while( true );
}

/* ref: FUN_004de5a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004de5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0) {
    F_004e5780(*((int *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD,3);
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  uVar1 = F_004e5010(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::Run */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004de600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4de600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined1 RVar1;
  
  RVar1 = this[0x14];
  while ((RVar1 == (undefined1)0x0 &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)(this + 0x18),0xffffffff),
         this[0x14] == (undefined1)0x0))) {
    if (*((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x38))) == 1) {
      F_004de260(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 200))),
                 *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0xcc))));
    }
    else {
      F_004db680(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 200))),
                   *((undefined4 *)GEN_TOP((REFG(int, 0x1370b90) + 0xcc))));
    }
    gen_imp_SetEvent(*(undefined4 *)(this + 0x1c));
    RVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_004de670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004de670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4de670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x1c)
  ;
  puVar1 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,0)));
  if (puVar1 == ((uint *)GEN_TOP(0x0))) {
    puVar2 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = param_1;
    puVar1 = puVar2;
    uVar3 = param_1;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      puVar1[5] = 0xf;
      puVar1[4] = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1 = puVar1 + 7;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x2c))) = puVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  if (puVar2 == ((uint *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    F_004e5010(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
    return 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x34))) = param_1;
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::QueueDelayedCall */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004de750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4de750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  iVar1 = *(int *)(this + 0x7c);
  this_00 = this + iVar1 * 0x10 + 0x4c;
  uVar2 = (*(int *)(this + iVar1 * 0x10 + 0x50) - *(int *)(this + iVar1 * 0x10 + 0x4c)) / 0xc;
  if ((uint)((*(int *)(this_00 + 8) - *(int *)(this + iVar1 * 0x10 + 0x4c)) / 0xc) <= uVar2) {
    F_004e5840(this_00 GEN_EDX_ARG,uVar2 * 2 + 2);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  F_004e6210(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: Client::Graphics::Kernel::Device::InputLayoutManager::GetInputLayout */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004de7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4de7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined * this_00;
  byte * pbVar1;
  char cVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)(this + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  uVar5 = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(0x811c9dc5));
  if (param_2 * 4 != 0) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar5 + (int)param_1)));
      uVar5 = uVar5 + 1;
      (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(((uint)*pbVar1 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x18))) * 0x1000193)));
    } while (uVar5 < (uint)(param_2 * 4));
  }
  this_00 = this + 0x1c;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_004e41b0(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x10)));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
  do {
    if (piVar6 == (*(int * PTR32 *)(gen_frame + 0x4))) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x24,0x10)));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        F_00b1b490(piVar6 GEN_EDX_ARG);
        piVar6[2] = 0;
        *piVar6 = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096acc));
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        piVar6[8] = 0;
        bVar4 = F_004d99c0(piVar6 GEN_EDX_ARG,param_1,param_2);
        if (bVar4 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
          (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x18));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
          F_004e5d50(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x0)));
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
          return (uint)piVar6;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      }
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
      return 0;
    }
    piVar3 = ((int *)GEN_TOP(piVar6[4]));
    if (param_2 == piVar3[4]) {
      uVar5 = param_2 * 4;
      piVar7 = param_1;
      if (piVar3[4] == 0) {
        piVar8 = ((int *)GEN_TOP(0x0));
      }
      else {
        piVar8 = ((int *)GEN_TOP(piVar3[3]));
      }
      for (; 3 < uVar5; uVar5 = uVar5 - 4) {
        if (*piVar7 != *piVar8) goto LAB_004de8bd;
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((uVar5 == 0) ||
         (((char)*piVar8 == (char)*piVar7 &&
          ((uVar5 < 2 ||
           ((*((char *)GEN_TOP(((int)piVar8 + 1))) == *((char *)GEN_TOP(((int)piVar7 + 1))) &&
            ((uVar5 < 3 || (*((char *)GEN_TOP(((int)piVar8 + 2))) == *((char *)GEN_TOP(((int)piVar7 + 2))))))))))))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        return (uint)piVar3;
      }
    }
LAB_004de8bd: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
      piVar3 = ((int *)GEN_TOP(piVar6[2]));
      if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP((*piVar3 + 0x15)));
        piVar6 = piVar3;
        piVar3 = ((int *)GEN_TOP(*piVar3));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP((*piVar3 + 0x15)));
          piVar6 = piVar3;
          piVar3 = ((int *)GEN_TOP(*piVar3));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
        piVar7 = ((int *)GEN_TOP(piVar6[1]));
        piVar3 = piVar6;
        while ((piVar6 = piVar7, cVar2 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar6[2]))))) {
          cVar2 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
          piVar7 = ((int *)GEN_TOP(piVar6[1]));
          piVar3 = piVar6;
        }
      }
    }
  } while( true );
}

/* ref: Client::Graphics::Kernel::Device::Device */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004de9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4de9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1096cd4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cd0));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined2 *)(this + 0x30) = 0x101;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 1;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = GEN_FLT_TO(*(undefined4 *)(this + 0x9c), REFG(float, 0x1087f04));
  *(undefined4 *)(this + 0xa0) = 1;
  *(undefined4 *)(this + 0xa4) = 1;
  this[0xa8] = (undefined1)0x1;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::GetInputLayout */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004deb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4deb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004de7e0(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Global::EnumerateDisplayModes */
GEN_OWN_GS GEN_FRAME byte F_004deb50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4deb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x3c)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_1,0x16);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,param_1,0x16,uVar4,((byte *)(gen_frame + 0x0)));
      if (-1 < (int)uVar3) {
        ((byte *)(gen_frame + 0x14))[0] = ((byte *)(gen_frame + 0x0))[4];
        ((byte *)(gen_frame + 0x14))[1] = ((byte *)(gen_frame + 0x0))[5];
        ((byte *)(gen_frame + 0x14))[2] = ((byte *)(gen_frame + 0x0))[6];
        ((byte *)(gen_frame + 0x14))[3] = ((byte *)(gen_frame + 0x0))[7];
        ((byte *)(gen_frame + 0x18))[0] = ((byte *)(gen_frame + 0x0))[8];
        ((byte *)(gen_frame + 0x18))[1] = ((byte *)(gen_frame + 0x0))[9];
        ((byte *)(gen_frame + 0x18))[2] = ((byte *)(gen_frame + 0x0))[10];
        ((byte *)(gen_frame + 0x18))[3] = ((byte *)(gen_frame + 0x0))[0xb];
        ((byte *)(gen_frame + 0x10))[0] = ((byte *)(gen_frame + 0x0))[0];
        ((byte *)(gen_frame + 0x10))[1] = ((byte *)(gen_frame + 0x0))[1];
        ((byte *)(gen_frame + 0x10))[2] = ((byte *)(gen_frame + 0x0))[2];
        ((byte *)(gen_frame + 0x10))[3] = ((byte *)(gen_frame + 0x0))[3];
        F_004e6640(param_2 GEN_EDX_ARG,((byte *)(gen_frame + 0x10)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::Initialize */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dec40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dec40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int * piVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  undefined * pVVar9;
  undefined4 * puVar10;
  undefined * this_01;
  undefined4 uVar11;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x3c)));
  *(int * PTR32 *)(this + 0x18) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD);
  piVar2 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x40)));
  *(int * PTR32 *)(this + 0x1c) = piVar2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x14)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x230000;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)&REFG(undefined, 0x8220c00);
  uVar8 = F_004de7e0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),2);
  *(uint *)(this + 0x228) = uVar8;
  pVVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x34,0x10)));
  if (pVVar9 != ((undefined *)GEN_TOP(0x0))) {
    pVVar9 = ((undefined *)GEN_TOP(F_004d6830(pVVar9 GEN_EDX_ARG)));
    if (pVVar9 != ((undefined *)GEN_TOP(0x0))) {
      *(uint *)(pVVar9 + 8) = *(uint *)(pVVar9 + 8) & 0xfffffff0;
      bVar7 = F_004dbff0(pVVar9 GEN_EDX_ARG,0x3c,4);
      if (bVar7 != 0) goto LAB_004decde;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pVVar9 + 0xc))))(pVVar9 GEN_EDX_ARG);
    }
  }
  pVVar9 = ((undefined *)GEN_TOP(0x0));
LAB_004decde: ;
  *(undefined * PTR32 *)(this + 0x22c) = pVVar9;
  if (*(int *)(pVVar9 + REFG(int, 0x1375a38) * 4 + 0x20) != 0) {
    uVar11 = 0;
    if (((byte)pVVar9[0x1c] & 1) != 0) {
      if (REFG(int, 0x1375a38) == *(int *)(pVVar9 + 0x30)) {
        uVar11 = 0x1000;
      }
      else {
        *(int *)(pVVar9 + 0x30) = REFG(int, 0x1375a38);
        uVar11 = 0x2000;
      }
    }
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pVVar9 + REFG(int, 0x1375a38) * 4 + 0x20) + 0x2c))))
                      (*(int * PTR32 *)(pVVar9 + REFG(int, 0x1375a38) * 4 + 0x20) GEN_EDX_ARG,0,*(undefined4 *)(pVVar9 + 0x18),
                       &(*(undefined4 * PTR32 *)(gen_frame + 0x4)),uVar11);
    if ((int)uVar8 < 0) {
      puVar10 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      _InterlockedExchangeAdd((volatile gen_long *)(((int *)(pVVar9 + 0x2c))), (gen_long)(1));
      puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
    uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    uVar11 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087ef8)));
    if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar10 = GEN_FLT_TO(*puVar10, REFG(float, 0x1090708));
      puVar10[1] = uVar5;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = uVar4;
      puVar10[5] = uVar11;
      puVar10[6] = uVar5;
      puVar10[7] = 0;
      puVar10[8] = uVar6;
      puVar10[9] = uVar4;
      puVar10[10] = uVar5;
      puVar10[0xb] = uVar11;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = uVar5;
      iVar3 = *(int *)(this + 0x22c);
      if (*((int *)GEN_TOP((iVar3 + 0x20 + REFG(int, 0x1375a38) * 4))) != 0) {
        piVar2 = ((int *)GEN_TOP((iVar3 + 0x2c)));
        iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar2), (gen_long)(-1));
        if (iVar1 == 1) {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar3 + 0x20 + REFG(int, 0x1375a38) * 4)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG);
        }
      }
    }
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x254,0x10)));
  if (this_01 == ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    *(undefined * PTR32 * PTR32 *)this_01 = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
    *(undefined4 *)(this_01 + 4) = 0;
    *(undefined4 *)(this_01 + 8) = 0;
    *(undefined4 *)(this_01 + 0xc) = 0;
    *(undefined4 *)(this_01 + 0x10) = 0;
    *(undefined4 *)(this_01 + 0x14) = 0;
    *(undefined4 *)(this_01 + 0x18) = 0;
    *(undefined4 *)(this_01 + 0x1c) = 0;
    *(undefined4 *)(this_01 + 0x20) = 0;
    *(undefined4 *)(this_01 + 0x24) = 0;
    *(undefined4 *)(this_01 + 0x28) = 0;
    *(undefined4 *)(this_01 + 0x2c) = 0;
    F_00429f90(this_01 + 0x48 GEN_EDX_ARG);
    *(undefined4 *)(this_01 + 0x30) = 2;
    *(undefined4 *)(this_01 + 0x3c) = 0;
    *(undefined4 *)(this_01 + 0x40) = 0;
    *(undefined4 *)(this_01 + 0x44) = 0;
  }
  *(undefined * PTR32 *)(this + 0x230) = this_01;
  bVar7 = F_004db6f0(this_01 GEN_EDX_ARG);
  if (bVar7 == 0) {
    puVar10 = *(undefined4 * PTR32 *)(this + 0x230);
    if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x230) = 0;
    }
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::DelayedReleaseManager */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004deef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4deef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 1;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::QueueRelease */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004def50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4def50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  iVar1 = *(int *)(this + 0x7c);
  this_00 = this + iVar1 * 0x10 + 0x1c;
  uVar2 = *(int *)(this_00 + 4) - *(int *)(this + iVar1 * 0x10 + 0x1c) >> 2;
  if ((uint)(*(int *)(this + iVar1 * 0x10 + 0x24) - *(int *)(this + iVar1 * 0x10 + 0x1c) >> 2) <=
      uVar2) {
    F_004e6090(this_00 GEN_EDX_ARG,uVar2 * 2 + 2);
  }
  F_004e6760(this_00 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::ProcessReleases */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004defb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4defb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  iVar1 = *(int *)(this + 0x80);
  uVar5 = *(int *)(this + iVar1 * 0x10 + 0x20) - *(int *)(this + iVar1 * 0x10 + 0x1c) >> 2;
  local_8 = 0;
  if (uVar5 != 0) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + iVar1 * 0x10 + 0x1c) + local_8 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  F_004e66d0(this + iVar1 * 0x10 + 0x1c GEN_EDX_ARG,0);
  iVar1 = *(int *)(this + 0x80);
  local_8 = (*(int *)(this + iVar1 * 0x10 + 0x50) - *(int *)(this + iVar1 * 0x10 + 0x4c)) / 0xc;
  if (local_8 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(this + iVar1 * 0x10 + 0x4c);
      if (*((gen_code32 *)GEN_TOP((iVar3 + iVar4))) != ((code *)GEN_TOP(0x0))) {
        ((code *)*((gen_code32 *)GEN_TOP((iVar3 + iVar4))))
                  (*((undefined4 *)GEN_TOP((iVar3 + 4 + iVar4))),*((undefined4 *)GEN_TOP((iVar3 + 8 + iVar4))));
      }
      iVar4 = iVar4 + 0xc;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  F_004e6140(this + iVar1 * 0x10 + 0x4c GEN_EDX_ARG,0);
  *(int *)(this + 0x7c) = *(int *)(this + 0x80);
  *(uint *)(this + 0x80) = (*(int *)(this + 0x80) + 1U) % 3;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: Client::Graphics::Kernel::Device::FlipFrame */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004df0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined * pSVar2;
  code * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  LPCRITICAL_SECTION p_Var7;
  uint uVar8;
  LPCRITICAL_SECTION p_Var9;
  
  uVar6 = F_004dada0(this GEN_EDX_FWD,&(*(LPCRITICAL_SECTION *)(gen_frame + 0x0)));
  F_004ddf80(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_ARG);
  if (this[0x30] != (undefined1)0x0) {
    if (*(int *)(this + 0x38) == 1) {
      gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)(this + 0xc) + 0x1c))),0xffffffff);
      if (0 < REFG(int, 0x1375a60)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x40) + 0xac))))
                  (*(int * PTR32 *)(this + 0x40) GEN_EDX_ARG,0,0,1,0,(undefined4)gen_fl2bits((float)(float10)1),0);
        REFG(int, 0x1375a60) = REFG(int, 0x1375a60) - 1;
      }
      F_004d72d0(this GEN_EDX_ARG);
    }
    F_004daee0(this GEN_EDX_ARG);
    F_004defb0(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_ARG);
    if ((*(int *)(this + 0x38) == 2) || (*(int *)(this + 0x38) == 5)) {
      F_004db190(this GEN_EDX_ARG);
    }
    if (this[0x50] == (undefined1)0x0) goto LAB_004df329;
    *(undefined4 *)(this + 0x38) = 6;
    F_004db2c0(this GEN_EDX_ARG);
    if (this[0x4c] == (undefined1)0x0) {
      pSVar2 = *(undefined * PTR32 *)(this + 0x2c);
      *(undefined4 *)(pSVar2 + 0x18) = *(undefined4 *)(this + 0x90);
      *(undefined4 *)(pSVar2 + 0x1c) = *(undefined4 *)(this + 0x94);
      pSVar2[0x28] = (undefined1)0x1;
      bVar5 = F_004dd770(pSVar2 GEN_EDX_ARG);
      if (bVar5 != 0) goto LAB_004df300;
      F_004da5a0(pSVar2 GEN_EDX_ARG);
    }
    else {
LAB_004df300: ;
      bVar5 = F_004d67a0();
      if (bVar5 != 0) {
        F_004d93c0(*(undefined * PTR32 *)(this + 0x80) GEN_EDX_ARG);
      }
    }
    *(undefined4 *)(this + 0x38) = 1;
    this[0x50] = (undefined1)0x0;
    REFG(int, 0x1375a60) = 10;
LAB_004df329: ;
    iVar1 = *(int *)(this + 0xb4);
    if (*(int *)(this + 0xbc) == iVar1) {
      *(int *)(this + 0xbc) = *(int *)(this + 0xb8) + iVar1;
    }
    else {
      *(int *)(this + 0xbc) = iVar1;
    }
    *(LPCRITICAL_SECTION *)(this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x0));
    *(uint *)(this + 200) = uVar6;
    REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
    REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
    iVar1 = *(int *)(this + 0x18);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    p_Var7 = *((LPCRITICAL_SECTION *)GEN_TOP((iVar1 + 0x20)));
    iVar4 = *((int *)GEN_TOP((iVar1 + 0x1c)));
    p_Var9 = (LPCRITICAL_SECTION)0x0;
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x0)) = p_Var7;
    if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
      do {
        pcVar3 = *((gen_code32 *)GEN_TOP((iVar4 + (int)p_Var9 * 8)));
        if (pcVar3 != ((code *)GEN_TOP(0x0))) {
          (*pcVar3)(*((undefined4 *)GEN_TOP((iVar4 + 4 + (int)p_Var9 * 8))));
          p_Var7 = (*(LPCRITICAL_SECTION *)(gen_frame + 0x0));
        }
        p_Var9 = (LPCRITICAL_SECTION)((int)&(*(undefined * PTR32 *)((char *)(p_Var9))) + 1);
      } while (p_Var9 < p_Var7);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    if (*(int *)(this + 0x38) == 0) {
      *(undefined4 *)(this + 0x38) = 1;
    }
    if (*(int *)(this + 0x38) == 1) {
      uVar6 = gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)(this + 0xc) + 0x18))));
    }
    else {
      uVar6 = F_004db680(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 200),
                           *(undefined4 *)(this + 0xcc));
    }
    if (*(int *)(this + 0x38) == 3) {
      bVar5 = F_004de150(this GEN_EDX_ARG);
      uVar6 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        uVar6 = F_00429940(1,1,0x1000000f,0xffffffff);
      }
      REFG(int, 0x1375a60) = 0x1e;
    }
    return uVar6;
  }
  iVar1 = *(int *)(this + 0xb4);
  if (*(int *)(this + 0xbc) == iVar1) {
    *(int *)(this + 0xbc) = *(int *)(this + 0xb8) + iVar1;
  }
  else {
    *(int *)(this + 0xbc) = iVar1;
  }
  *(LPCRITICAL_SECTION *)(this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x0));
  *(uint *)(this + 200) = uVar6;
  REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
  REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
  if (*(int *)(this + 0x38) == 0) {
    *(undefined4 *)(this + 0x38) = 1;
  }
  if (*(int *)(this + 0x38) == 1) {
    F_004de260(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 200),
               *(undefined4 *)(this + 0xcc));
  }
  else {
    F_004db680(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 200),*(undefined4 *)(this + 0xcc));
  }
  if (*(int *)(this + 0x38) == 1) {
    F_004d72d0(this GEN_EDX_ARG);
  }
  F_004daee0(this GEN_EDX_ARG);
  F_004defb0(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_ARG);
  if ((*(int *)(this + 0x38) == 2) || (*(int *)(this + 0x38) == 5)) {
    F_004db190(this GEN_EDX_ARG);
  }
  if (*(int *)(this + 0x38) == 3) {
    bVar5 = F_004de150(this GEN_EDX_ARG);
    if (bVar5 == 0) {
      F_00429940(1,1,0x1000000f,0xffffffff);
    }
  }
  if (this[0x50] == (undefined1)0x0) goto LAB_004df207;
  *(undefined4 *)(this + 0x38) = 6;
  F_004db2c0(this GEN_EDX_ARG);
  if (this[0x4c] == (undefined1)0x0) {
    pSVar2 = *(undefined * PTR32 *)(this + 0x2c);
    *(undefined4 *)(pSVar2 + 0x18) = *(undefined4 *)(this + 0x90);
    *(undefined4 *)(pSVar2 + 0x1c) = *(undefined4 *)(this + 0x94);
    pSVar2[0x28] = (undefined1)0x1;
    bVar5 = F_004dd770(pSVar2 GEN_EDX_ARG);
    if (bVar5 != 0) goto LAB_004df1ec;
    F_004da5a0(pSVar2 GEN_EDX_ARG);
  }
  else {
LAB_004df1ec: ;
    bVar5 = F_004d67a0();
    if (bVar5 != 0) {
      F_004d93c0(*(undefined * PTR32 *)(this + 0x80) GEN_EDX_ARG);
    }
  }
  *(undefined4 *)(this + 0x38) = 1;
  this[0x50] = (undefined1)0x0;
LAB_004df207: ;
  iVar1 = *(int *)(this + 0x18);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x0)) = (LPCRITICAL_SECTION)(iVar1 + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  uVar6 = *((uint *)GEN_TOP((iVar1 + 0x20)));
  iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)));
  uVar8 = 0;
  if (uVar6 != 0) {
    do {
      pcVar3 = *((gen_code32 *)GEN_TOP((iVar1 + uVar8 * 8)));
      if (pcVar3 != ((code *)GEN_TOP(0x0))) {
        (*pcVar3)(*((undefined4 *)GEN_TOP((iVar1 + 4 + uVar8 * 8))));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x0)));
  return extraout_EAX;
}

/* ref: Client::Graphics::Kernel::Device::Initialize */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_004df430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4df430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0x6c, 4, 4);
  undefined * pDVar1;
  byte bVar2;
  undefined4 uVar3;
  int * PTR32 * ppiVar4;
  DWORD DVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined * this_00;
  int * piVar8;
  uint * puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x68));
  *(undefined4 *)(this + 0x5c) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *(undefined4 *)(this + 0x68) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *(undefined4 *)(this + 0x6c) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  this[0x4c] = *((undefined *)GEN_TOP((param_1 + 0x10)));
  this[0x4d] = *((undefined *)GEN_TOP((param_1 + 0x10)));
  uVar3 = gen_imp_Direct3DCreate9(0x20);
  *(undefined4 *)(this + 0x3c) = uVar3;
  uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar3;
  gen_imp_D3DPERF_SetOptions(1);
  *(undefined4 *)(this + 0x58) = uVar3;
  pDVar1 = this + 0x70;
  bVar2 = F_004deb50((*(undefined4 *)(gen_frame + 0x3c)),pDVar1);
  if (bVar2 == 0) {
    return 0;
  }
  uVar6 = (*(int *)(this + 0x74) - *(int *)pDVar1) / 0xc;
  uVar10 = 0;
  if (uVar6 != 0) {
    piVar8 = *(int * PTR32 *)pDVar1;
    do {
      if (((*((int *)GEN_TOP((param_1 + 0x24))) == *piVar8) && (*((int *)GEN_TOP((param_1 + 0x28))) == piVar8[1])) &&
         (*((int *)GEN_TOP((param_1 + 0x2c))) == piVar8[2])) {
        if (-1 < (int)uVar10) goto LAB_004df52c;
        goto LAB_004df4df;
      }
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 3;
    } while (uVar10 < uVar6);
  }
  uVar10 = 0xffffffff;
LAB_004df4df: ;
  (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(0x0));
  if (uVar6 != 0) {
    puVar9 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 4)));
    uVar11 = uVar6;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x44)) <= ((int *)GEN_TOP(*puVar9))) {
        (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)GEN_TOP(*puVar9));
      }
      puVar9 = puVar9 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = 0;
  (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP(0x0));
  if (uVar6 != 0) {
    puVar9 = *(uint * PTR32 *)(this + 0x70);
    do {
      if (((*(int * PTR32 *)(gen_frame + 0x44)) == ((int *)GEN_TOP(puVar9[1]))) && ((*(int * PTR32 *)(gen_frame + 0x40)) <= ((int *)GEN_TOP(*puVar9)))) {
        (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP(*puVar9));
        uVar10 = uVar11;
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar11 < uVar6);
  }
LAB_004df52c: ;
  *(uint *)(this + 0x60) = uVar10;
  *(uint *)(this + 100) = uVar10;
  if (this[0x4c] == (undefined1)0x0) {
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(this + 0x6c);
  }
  else {
    *(undefined4 *)(this + 0x90) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x70) + uVar10 * 0xc)));
    *(undefined4 *)(this + 0x94) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x70) + 4 + uVar10 * 0xc)));
  }
  fVar12 = (float10)*(int *)(this + 0x90);
  if (*(int *)(this + 0x90) < 0) {
    fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(float *)(gen_frame + 0x38)) = (float)fVar12;
  fVar13 = (float10)*(int *)(this + 0x94);
  if (*(int *)(this + 0x94) < 0) {
    fVar13 = GEN_X87(fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  (*(int * PTR32 *)(gen_frame + 0x44)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
  (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x44));
  if (!((float10)1 < (float10)(float)fVar13)) {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x40));
  }
  piVar8 = *ppiVar4;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
  *(float *)(this + 0x98) = (float)((float10)(float)fVar12 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar8))));
  DVar5 = gen_imp_timeGetTime();
  *(DWORD *)(this + 0xac) = DVar5;
  *(undefined4 *)(this + 0xb0) = 0;
  F_004db060(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x3c));
  pDVar1 = this + 0x40;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x3c) + 0x40))))
                    (*(int * PTR32 *)(this + 0x3c) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x3c)),1,*(undefined4 *)(this + 0x5c),0x54,((undefined1 *)(gen_frame + 0x0)),
                     pDVar1);
  if ((int)uVar6 < 0) {
    return 0;
  }
  F_004d5f50(this GEN_EDX_ARG,uVar3,1);
  if ((*(int *)(this + 0x44) == 0x10de) && (uVar6 = F_00b1b540(), uVar6 == 0)) {
    uVar3 = *(undefined4 *)pDVar1;
    this[0x51] = (undefined1)0x1;
    ((undefined4 *)(gen_frame + 0x48))[0] = 0x1001c;
    uVar6 = F_00b32cf0(uVar3,((undefined4 *)(gen_frame + 0x48)));
    if (uVar6 == 0) {
      *(undefined4 *)(this + 0x8c) = (*(undefined4 *)(gen_frame + 0x50));
    }
  }
  uVar6 = F_00b1b420();
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  if (*(uint *)(this + 0x8c) < uVar6) {
    *(uint *)(this + 0x8c) = uVar6;
  }
  if (this[0x4c] != (undefined1)0x0) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pDVar1 + 0x38))))(*(int * PTR32 *)pDVar1 GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x44)));
    if ((int)uVar6 < 0) {
      return 0;
    }
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                               (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x40,0x10)));
    if (pvVar7 == ((undefined *)GEN_TOP(0x0))) {
      uVar6 = 0;
    }
    else {
      uVar6 = F_004d6ec0(pvVar7 GEN_EDX_ARG);
    }
    *(uint *)(this + 0x2c) = uVar6;
    if ((uVar6 != 0) &&
       (bVar2 = F_004dd630(uVar6 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x44)),0x1451,0,0x4250), bVar2 != 0)) {
      if ((*(int * PTR32 *)(gen_frame + 0x44)) == ((int *)GEN_TOP(0x0))) {
        return 1;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      return 1;
    }
    if ((*(int * PTR32 *)(gen_frame + 0x44)) == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
    return 0;
  }
  pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x40,0x10)));
  if ((pvVar7 != ((undefined *)GEN_TOP(0x0))) &&
     (this_00 = ((undefined *)GEN_TOP(F_004d6ec0(pvVar7 GEN_EDX_ARG))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
    *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) & 0xfffffff0;
    *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(this + 0x90);
    *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x94);
    *(undefined4 *)(this_00 + 0x20) = 0x1451;
    *(undefined4 *)(this_00 + 0x24) = 1;
    this_00[0x28] = (undefined1)0x0;
    *(undefined4 *)(this_00 + 0x2c) = 0x4250;
    *(undefined4 *)(this_00 + 0x30) = 8;
    bVar2 = F_004dd770(this_00 GEN_EDX_ARG);
    if (bVar2 != 0) goto LAB_004df784;
    F_004da5a0(this_00 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0xc))))(this_00 GEN_EDX_ARG);
  }
  this_00 = ((undefined *)GEN_TOP(0x0));
LAB_004df784: ;
  *(undefined * PTR32 *)(this + 0x2c) = this_00;
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::FlushAll */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004df7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 3;
    do {
      F_004defb0(this GEN_EDX_FWD);
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
    iVar2 = (*(int *)(this + 0x70) - *(int *)(this + 0x6c)) / 0xc +
            (*(int *)(this + 0x40) - *(int *)(this + 0x3c) >> 2) +
            (*(int *)(this + 0x30) - *(int *)(this + 0x2c) >> 2) +
            (*(int *)(this + 0x50) - *(int *)(this + 0x4c)) / 0xc +
            (*(int *)(this + 0x20) - *(int *)(this + 0x1c) >> 2) +
            (*(int *)(this + 0x60) - *(int *)(this + 0x5c)) / 0xc;
  } while ((iVar2 != 0) && (bVar3 = iVar1 != iVar2, iVar1 = iVar2, bVar3));
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::InputLayoutManager::InputLayoutManager */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004df840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x24) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)(this + 0x20) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x20) + 4))) = *(int *)(this + 0x20);
  *((int *)GEN_TOP((*(int *)(this + 0x20) + 8))) = *(int *)(this + 0x20);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x20) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x20) + 0x15))) = 1;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::HandleManager::HandleManager */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004df890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4df890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  *(undefined4 *)(this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)(this + 8) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*(int *)(this + 8) + 4))) = *(int *)(this + 8);
  *((int *)GEN_TOP((*(int *)(this + 8) + 8))) = *(int *)(this + 8);
  *((undefined1 *)GEN_TOP((*(int *)(this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)(this + 8) + 0x15))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return (uint)this;
}

/* ref: Global::GetOrAddNameIndex */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004df8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4df8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x44, 12, 4);
  byte bVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  byte * pbVar7;
  byte * pbVar8;
  int iVar9;
  uint uVar10;
  int * piVar11;
  bool bVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x18)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)this + 0x14);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(0x811c9dc5));
  uVar10 = 0;
  pbVar8 = param_1;
  if (pbVar7 != param_1 + 1) {
    do {
      pbVar8 = pbVar8 + uVar10;
      uVar10 = uVar10 + 1;
      (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(((uint)*pbVar8 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x1c))) * 0x1000193)));
      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x18));
    } while (uVar10 < (uint)((int)pbVar7 - (int)(param_1 + 1)));
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x1c));
  F_004e4280(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x14)));
  uVar10 = ((uint *)(gen_frame + 0x20))[0];
  if ((*(int * PTR32 *)(gen_frame + 0xc)) != (*(int * PTR32 *)(gen_frame + 0x10))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
    piVar11 = (*(int * PTR32 *)(gen_frame + 0xc));
    do {
      uVar4 = piVar11[4];
      pbVar7 = (byte *)(piVar3 + uVar4 * 7);
      pbVar8 = (*(byte * PTR32 *)(gen_frame + 0x18));
      if (0xf < (uint)piVar3[uVar4 * 7 + 5]) {
        pbVar7 = *(byte * PTR32 *)pbVar7;
      }
      do {
        bVar1 = *pbVar8;
        bVar12 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004df9c2: ;
          iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_004df9c7;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar12 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004df9c2;
        pbVar8 = pbVar8 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar9 = 0;
LAB_004df9c7: ;
      if (iVar9 == 0) {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
        return uVar4;
      }
      if (*((char *)GEN_TOP(((int)piVar11 + 0x15))) == '\0') {
        piVar5 = ((int *)GEN_TOP(piVar11[2]));
        if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
          cVar2 = *((char *)GEN_TOP((*piVar5 + 0x15)));
          piVar11 = piVar5;
          piVar5 = ((int *)GEN_TOP(*piVar5));
          while (cVar2 == '\0') {
            cVar2 = *((char *)GEN_TOP((*piVar5 + 0x15)));
            piVar11 = piVar5;
            piVar5 = ((int *)GEN_TOP(*piVar5));
          }
        }
        else {
          cVar2 = *((char *)GEN_TOP((piVar11[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar11[1]));
          piVar5 = piVar11;
          while ((piVar11 = piVar6, cVar2 == '\0' && (piVar5 == ((int *)GEN_TOP(piVar11[2]))))) {
            cVar2 = *((char *)GEN_TOP((piVar11[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar11[1]));
            piVar5 = piVar11;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x4));
    } while (piVar11 != (*(int * PTR32 *)(gen_frame + 0x10)));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x30)));
  (*(uint *)(gen_frame + 0x34)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x20))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x20))[0] = uVar10 & 0xffffff00;
  pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x18));
  do {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar1 != 0);
  F_004e5c20(((uint *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(byte * PTR32 *)(gen_frame + 0x18)),(int)pbVar7 - (int)((*(byte * PTR32 *)(gen_frame + 0x18)) + 1));
  F_004e54d0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + uVar4 * 0x1c))) GEN_EDX_ARG,((uint *)(gen_frame + 0x20)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x34))) {
    F_00429760(((uint *)(gen_frame + 0x20))[0],(*(uint *)(gen_frame + 0x34)) + 1,0x32);
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0x1c));
  (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(uVar4));
  F_004e5df0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0xc)));
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + 1;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return uVar4;
}

/* ref: Client::Graphics::Kernel::Device::Finalize */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004dfaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4dfaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)(this + 0xc) + 0x18))));
    F_004cf020(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xc);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xc) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) {
    F_004dd050(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 8);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 8) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0xd4) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x2c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 4);
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar2[-1] == 0) {
      F_00406b30(puVar2 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  if (*(int *)(this + 0xb4) != 0) {
    F_00406810(*(int *)(this + 0xb4));
    *(undefined4 *)(this + 0xb4) = 0;
  }
  iVar3 = *(int *)(this + 0x20);
  if (iVar3 != 0) {
    if (*((int *)GEN_TOP((iVar3 + 0x2c))) != 0) {
      F_004e5780(*((int *)GEN_TOP((iVar3 + 0x2c))) GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP((iVar3 + 0x2c))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0x34))) = 0;
    F_004e5010(((undefined *)GEN_TOP((iVar3 + 4))) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x20);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  iVar3 = *(int *)(this + 0x1c);
  if (iVar3 != 0) {
    if (*((int *)GEN_TOP((iVar3 + 0x2c))) != 0) {
      F_004e5780(*((int *)GEN_TOP((iVar3 + 0x2c))) GEN_EDX_ARG,3);
      *((undefined4 *)GEN_TOP((iVar3 + 0x2c))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0x34))) = 0;
    F_004e5010(((undefined *)GEN_TOP((iVar3 + 4))) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x1c);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x1c) = 0;
    }
  }
  iVar3 = *(int *)(this + 0x18);
  if (iVar3 != 0) {
    if (*((int *)GEN_TOP((iVar3 + 0x1c))) != 0) {
      F_00406b30(*((int *)GEN_TOP((iVar3 + 0x1c))));
      *((undefined4 *)GEN_TOP((iVar3 + 0x1c))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x20))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0x24))) = 0;
    puVar2 = *(undefined4 * PTR32 *)(this + 0x18);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x18) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x14) != ((undefined *)GEN_TOP(0x0))) {
    F_004de480(*(undefined * PTR32 *)(this + 0x14) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x14);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x10) != ((undefined *)GEN_TOP(0x0))) {
    F_004df7a0(*(undefined * PTR32 *)(this + 0x10) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x10);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 != 0) {
    if (*((int *)GEN_TOP((iVar3 + 0x1c))) != 0) {
      F_00406b30(*((int *)GEN_TOP((iVar3 + 0x1c))));
      *((undefined4 *)GEN_TOP((iVar3 + 0x1c))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x20))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0x24))) = 0;
    puVar2 = *(undefined4 * PTR32 *)(this + 0x84);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x84) = 0;
    }
  }
  iVar3 = *(int *)(this + 0x80);
  if (iVar3 != 0) {
    if (*((int *)GEN_TOP((iVar3 + 0x1c))) != 0) {
      F_00406b30(*((int *)GEN_TOP((iVar3 + 0x1c))));
      *((undefined4 *)GEN_TOP((iVar3 + 0x1c))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x20))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0x24))) = 0;
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)(this + 0x40);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x40) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x3c);
  uVar4 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return uVar4;
}

/* ref: Client::Graphics::Kernel::Device::Initialize_004dfd30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004dfd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4dfd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * pDVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * PTR32 * ppiVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint * puVar8;
  undefined * this_00;
  undefined * this_01;
  undefined * pvVar9;
  undefined * pCVar10;
  undefined * pIVar11;
  undefined * this_02;
  uint * puVar12;
  
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  uVar7 = *param_1;
  piVar3 = ((int *)GEN_TOP(F_00406520()));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,uVar7,0x80);
  *(uint *)(this + 0xb4) = uVar4;
  *(uint *)(this + 0xbc) = uVar4;
  ppiVar5 = (int * PTR32 *)(param_1 + 1);
  *(uint *)(this + 0xb8) = uVar7 >> 1;
  piVar3 = *ppiVar5;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x10));
  if (((int *)GEN_TOP(0xf)) < piVar3) {
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x0));
  }
  *(int * PTR32 *)(this + 0x24) = *ppiVar5;
  this[0x30] = *(undefined *)(param_1 + 2);
  REFG(undefined4, 0x1375a3c) = 2;
  REFG(undefined4, 0x1375a38) = 0;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x38,0x10)));
  if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar6 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
    puVar6[3] = 0;
    uVar7 = F_004296a0(0x18,0,0xc9);
    puVar6[2] = uVar7;
    *((uint *)GEN_TOP(uVar7)) = uVar7;
    *((undefined4 *)GEN_TOP((puVar6[2] + 4))) = puVar6[2];
    *((undefined4 *)GEN_TOP((puVar6[2] + 8))) = puVar6[2];
    *((undefined1 *)GEN_TOP((puVar6[2] + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((puVar6[2] + 0x15))) = 1;
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar6 + 5));
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
  }
  *(undefined4 * PTR32 *)(this + 0x1c) = puVar6;
  if ((puVar6 != ((undefined4 *)GEN_TOP(0x0))) && (bVar2 = F_004de670(puVar6 GEN_EDX_ARG,0x80), bVar2 != 0)) {
    puVar6 = *(undefined4 * PTR32 *)(this + 0x24);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar6;
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((uint *)GEN_TOP(F_00406a50(4)));
    }
    else {
      piVar3 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
      uVar7 = -(uint)((int)(ZEXT48(puVar6) * 0x5b0 >> 0x20) != 0) | (uint)(ZEXT48(puVar6) * 0x5b0);
      puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))
                                 (piVar3 GEN_EDX_ARG,-(uint)(0xfffffffb < uVar7) | uVar7 + 4,0x10)));
    }
    if (puVar8 == ((uint *)GEN_TOP(0x0))) {
      puVar8 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = (uint)puVar6;
      puVar8 = puVar8 + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - 1)));
      puVar12 = puVar8;
      while (-1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4))) {
        *puVar12 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1096a04));
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0x14] = REFG(undefined4, 0x1302360);
        puVar12[0x16] = REFG(undefined4, 0x1302368);
        puVar12[0x17] = REFG(undefined4, 0x130236c);
        puVar12[0x18] = 0;
        F_00401500(puVar12 + 0xaa,8,0x60,((code *)REFP(0x4e1f20)));
        puVar12[0x16a] = 0x20003c0;
        puVar12 = puVar12 + 0x16c;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - 1)));
      }
    }
    *(uint * PTR32 *)(this + 4) = puVar8;
    if (puVar8 != ((uint *)GEN_TOP(0x0))) {
      pDVar1 = this + 0x28;
      uVar7 = _InterlockedExchangeAdd((volatile gen_long *)(((uint *)pDVar1)), (gen_long)(1));
      if (uVar7 < *(uint *)(this + 0x24)) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8))) =
             uVar7 * 0x5b0 + *(int *)(this + 4);
      }
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                         (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x84,0x10)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
        gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar6 + 1));
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0x13] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x17] = 0;
        puVar6[0x18] = 0;
        puVar6[0x19] = 0;
        puVar6[0x1b] = 0;
        puVar6[0x1c] = 0;
        puVar6[0x1d] = 0;
        puVar6[0x1f] = 0;
        puVar6[0x20] = 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar6;
      }
      *(undefined4 * PTR32 *)(this + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x13;
        (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x3));
        do {
          F_004e6090(puVar6 - 0xc GEN_EDX_ARG,0x20);
          F_004e5840(puVar6 GEN_EDX_ARG,0x20);
          puVar6 = puVar6 + 4;
          piVar3 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x0)) - 1)));
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
        } while (piVar3 != ((int *)GEN_TOP(0x0)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4))[0x1f] = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4))[0x20] = 1;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x2c,0x10)));
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          uVar7 = 0;
        }
        else {
          uVar7 = F_004df840(this_00 GEN_EDX_ARG);
        }
        *(uint *)(this + 0x14) = uVar7;
        if (uVar7 != 0) {
          puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x28,0x10)));
          if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
            puVar6 = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
            gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar6 + 1));
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[9] = 0;
          }
          *(undefined4 * PTR32 *)(this + 0x18) = puVar6;
          if ((puVar6 != ((undefined4 *)GEN_TOP(0x0))) && (bVar2 = F_004d64d0(puVar6 GEN_EDX_ARG,4), bVar2 != 0)) {
            this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x38,0x10)));
            if (this_01 == ((undefined *)GEN_TOP(0x0))) {
              pvVar9 = ((undefined *)GEN_TOP(0x0));
            }
            else {
              pvVar9 = ((undefined *)GEN_TOP(F_004df890(this_01 GEN_EDX_ARG)));
            }
            *(undefined * PTR32 *)(this + 0x20) = pvVar9;
            if ((pvVar9 != ((undefined *)GEN_TOP(0x0))) && (bVar2 = F_004de670(pvVar9 GEN_EDX_ARG,0x60), bVar2 != 0)) {
              pCVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x28,0x10)));
              if (pCVar10 == ((undefined *)GEN_TOP(0x0))) {
                pvVar9 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar9 = ((undefined *)GEN_TOP(F_004d92f0(pCVar10 GEN_EDX_ARG)));
              }
              *(undefined * PTR32 *)(this + 0x80) = pvVar9;
              if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
                return 0;
              }
              bVar2 = F_004d64d0(pvVar9 GEN_EDX_ARG,4);
              if (bVar2 == 0) {
                return 0;
              }
              pCVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x28,0x10)));
              if (pCVar10 == ((undefined *)GEN_TOP(0x0))) {
                pvVar9 = ((undefined *)GEN_TOP(0x0));
              }
              else {
                pvVar9 = ((undefined *)GEN_TOP(F_004d92f0(pCVar10 GEN_EDX_ARG)));
              }
              *(undefined * PTR32 *)(this + 0x84) = pvVar9;
              if (pvVar9 == ((undefined *)GEN_TOP(0x0))) {
                return 0;
              }
              bVar2 = F_004d64d0(pvVar9 GEN_EDX_ARG,4);
              if (bVar2 == 0) {
                return 0;
              }
              bVar2 = F_004df430(this GEN_EDX_ARG,param_1);
              if ((bVar2 != 0) && (bVar2 = F_004da7c0(), bVar2 != 0)) {
                pIVar11 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x238,0x10)));
                if (pIVar11 == ((undefined *)GEN_TOP(0x0))) {
                  pIVar11 = ((undefined *)GEN_TOP(0x0));
                }
                else {
                  pIVar11 = ((undefined *)GEN_TOP(F_004d74a0(pIVar11 GEN_EDX_ARG)));
                }
                *(undefined * PTR32 *)(this + 8) = pIVar11;
                if ((pIVar11 != ((undefined *)GEN_TOP(0x0))) &&
                   (bVar2 = F_004dec40(pIVar11 GEN_EDX_ARG,param_1), bVar2 != 0)) {
                  this_02 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))
                                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,0x20,0x10)));
                  if (this_02 == ((undefined *)GEN_TOP(0x0))) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = F_004d92b0(this_02 GEN_EDX_ARG);
                  }
                  *(uint *)(this + 0xc) = uVar7;
                  if (uVar7 != 0) {
                    F_004cf9e0(uVar7 GEN_EDX_ARG,0,0xffffffff,param_1[3],((char *)REFP(0x10968d0)));
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  F_004dfaf0(this GEN_EDX_ARG);
  return 0;
}

/* ref: Global::EnumerateAdapterNames */
GEN_OWN_GS GEN_FRAME byte F_004e0250(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x474, 12, 4);
  char cVar1;
  char * PTR32 * PTR32 * pppcVar2;
  int * piVar3;
  uint uVar4;
  char * pcVar5;
  char * PTR32 * PTR32 * PTR32 * ppppcVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  uint uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x46c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x470));
  F_004e7090(param_1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),*param_1,param_1[1]);
  piVar3 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x3c)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  if (uVar4 != 0) {
    do {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,uVar8,0,((undefined1 *)(gen_frame + 0x4)));
      pppcVar2 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0];
      if (-1 < (int)uVar4) {
        pcVar5 = ((char *)(gen_frame + 0x204));
        (*(uint *)(gen_frame + 0x464)) = 0xf;
        (*(int *)(gen_frame + 0x460)) = 0;
        (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0] + 0)) = 0;
        ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0] = ((char * PTR32 * PTR32 *)GEN_TOP(((uint)pppcVar2 & 0xffffff00)));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_004e5c20(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)(gen_frame + 0x204)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x204)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1096904),1);
        pcVar5 = ((char *)(gen_frame + 0x404));
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450)) GEN_EDX_ARG,((char *)(gen_frame + 0x404)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x404)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450)) GEN_EDX_ARG,&REFG(undefined, 0x1096908),1);
        ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0];
        if ((*(uint *)(gen_frame + 0x464)) < 0x10) {
          ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450));
        }
        ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar7 + (*(int *)(gen_frame + 0x460)))));
        ppppcVar6 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0];
        if ((*(uint *)(gen_frame + 0x464)) < 0x10) {
          ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450));
        }
        for (; ppppcVar6 != ppppcVar7; ppppcVar6 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar6 + 1)))) {
          if (*(char *)ppppcVar6 == ' ') {
            *(char *)ppppcVar6 = '_';
          }
        }
        F_004e7380(param_1 GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450)));
        if (0xf < (*(uint *)(gen_frame + 0x464))) {
          F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x450))[0],(*(uint *)(gen_frame + 0x464)) + 1,0x32);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (*(uint *)(gen_frame + 0x0)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  return 1;
}

/* ref: Global::FindAdapterIndexByName */
GEN_OWN GEN_FRAME uint F_004e03e0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e03e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint * puVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x0)) = ((uint *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0;
  F_004e0250(&(*(uint * PTR32 *)(gen_frame + 0x0)));
  uVar7 = ((int)(*(uint * PTR32 *)(gen_frame + 0x4)) - (int)(*(uint * PTR32 *)(gen_frame + 0x0))) / 0x1c;
  (*(uint *)(gen_frame + 0x10)) = uVar7;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (uVar7 != 0) {
    puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 4;
    do {
      pcVar3 = param_1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)(param_1 + 1);
      uVar7 = *puVar8;
      uVar6 = uVar7;
      if (uVar4 <= uVar7) {
        uVar6 = uVar4;
      }
      if (puVar8[1] < 0x10) {
        puVar5 = puVar8 - 4;
      }
      else {
        puVar5 = ((uint *)GEN_TOP(puVar8[-4]));
      }
      uVar6 = F_0040d320(puVar5,param_1,uVar6);
      if (((uVar6 == 0) && (uVar4 <= uVar7)) && (uVar7 == uVar4)) {
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x18));
        break;
      }
      uVar7 = (*(uint *)(gen_frame + 0x18)) + 1;
      puVar8 = puVar8 + 7;
      (*(uint *)(gen_frame + 0x18)) = uVar7;
    } while (uVar7 < (*(uint *)(gen_frame + 0x10)));
  }
  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0));
  if ((*(uint * PTR32 *)(gen_frame + 0x0)) != ((uint *)GEN_TOP(0x0))) {
    if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (*(uint * PTR32 *)(gen_frame + 0x4))) {
      puVar5 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 5;
      do {
        if (0xf < *puVar5) {
          F_00429760(puVar5[-5],*puVar5 + 1,0x32);
        }
        *puVar5 = 0xf;
        puVar5[-1] = 0;
        *(undefined1 *)(puVar5 - 5) = 0;
        puVar1 = puVar5 + 2;
        puVar5 = puVar5 + 7;
      } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x4)));
    }
    F_00429760(puVar8,(((*(int *)(gen_frame + 0x8)) - (int)puVar8) / 0x1c) * 0x1c,0xc9);
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_004e0540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0540(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0580(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e05d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e05d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e05d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_004e0640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0640(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0680(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e06d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e06d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e06d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0700(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0750(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e07a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e07a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e07a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e08e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e08e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e08e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e0910 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0910(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0950(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0980(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e09b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e09b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e09f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e09f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0a00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e0a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0a30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0a40(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0a60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0af0 */
GEN_OWN GEN_FRAME uint F_004e0af0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b00 */
GEN_OWN GEN_FRAME uint F_004e0b00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b10 */
GEN_OWN GEN_FRAME uint F_004e0b10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b20 */
GEN_OWN GEN_FRAME uint F_004e0b20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b30 */
GEN_OWN GEN_FRAME uint F_004e0b30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b40 */
GEN_OWN GEN_FRAME uint F_004e0b40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b50 */
GEN_OWN GEN_FRAME uint F_004e0b50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b60 */
GEN_OWN GEN_FRAME uint F_004e0b60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0b90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0b90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_004e0bc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004e0be0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e0be0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_004e0c10 */
GEN_OWN GEN_FRAME unsigned int F_004e0c10(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4e0c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  char * pcVar1;
  
  for (pcVar1 = param_1; pcVar1 != param_2; pcVar1 = pcVar1 + 1) {
    if (*pcVar1 == *param_3) {
      *pcVar1 = *param_4;
    }
  }
  return 0;
}

/* ref: FUN_004e0c40 */
GEN_OWN GEN_FRAME uint F_004e0c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0c50 */
GEN_OWN GEN_FRAME uint F_004e0c50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0c80 */
GEN_OWN GEN_FRAME uint F_004e0c80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0cb0 */
GEN_OWN GEN_FRAME uint F_004e0cb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0cc0 */
GEN_OWN GEN_FRAME uint F_004e0cc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0cd0 */
GEN_OWN GEN_FRAME uint F_004e0cd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0cf0 */
GEN_OWN GEN_FRAME uint F_004e0cf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d00 */
GEN_OWN GEN_FRAME uint F_004e0d00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d20 */
GEN_OWN GEN_FRAME uint F_004e0d20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d30 */
GEN_OWN GEN_FRAME uint F_004e0d30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d40 */
GEN_OWN GEN_FRAME uint F_004e0d40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d50 */
GEN_OWN GEN_FRAME uint F_004e0d50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0d60 */
GEN_OWN GEN_FRAME uint F_004e0d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_004e0d90 */
GEN_OWN GEN_FRAME uint F_004e0d90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0dc0 */
GEN_OWN GEN_FRAME uint F_004e0dc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0e20 */
GEN_OWN GEN_FRAME uint F_004e0e20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0e30 */
GEN_OWN GEN_FRAME uint F_004e0e30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0e40 */
GEN_OWN GEN_FRAME uint F_004e0e40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0e70 */
GEN_OWN GEN_FRAME uint F_004e0e70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0ef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0f10 */
GEN_OWN GEN_FRAME uint F_004e0f10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0f20 */
GEN_OWN GEN_FRAME uint F_004e0f20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0f30 */
GEN_OWN GEN_FRAME uint F_004e0f30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e0f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e0f60 */
GEN_OWN GEN_FRAME uint F_004e0f60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0x811c9dc5;
  if (param_2 != 0) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar3 + param_1)));
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (uint)*pbVar1;
    } while (uVar3 < param_2);
  }
  return uVar2;
}

/* ref: FUN_004e0fb0 */
GEN_OWN GEN_FRAME uint F_004e0fb0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_1 = *param_2 >> GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
  param_1[1] = param_2[1] >> GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
  return (uint)param_1;
}

/* ref: FUN_004e0fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e0fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e0fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1000 */
GEN_OWN GEN_FRAME uint F_004e1000(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2 >> GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
  param_1[1] = uVar1 >> GEN_SHC((byte)param_3, (unsigned int)(uintptr_t)param_3);
  return (uint)param_1;
}

/* ref: FUN_004e1020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4e1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  return (uint)this;
}

/* ref: FUN_004e1060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_2);
  return uVar2;
}

/* ref: FUN_004e1080 */
GEN_OWN GEN_FRAME float10 F_004e1080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: Global::HalfToFloat */
GEN_OWN GEN_FRAME float GEN_THISCALL F_004e10d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e10d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  
  uVar1 = *(ushort *)this;
  if (uVar1 == 0) {
    return 0.0;
  }
  return gen_bits2f(((uVar1 & 0xffff8000) * 8 | uVar1 & 0x3ff) << 0xd |
                    ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000);
}

/* ref: FUN_004e1160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1160(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2 & 0x1f;
  return (uint)in_ecx;
}

/* ref: FUN_004e1180 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e1180(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7), GEN_P(uint param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x4e1180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  GEN_PIN(uint param_9 = (uint)gen_a8;)
  param_1[1] = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 7))) = param_6;
  *param_1 = 0;
  *param_1 = ((param_3 & 7 | param_7 * 8) * 2 | (uint)(param_2 != '\0')) << 0x19 |
             *param_1 & 0x1ffffff;
  param_1[1] = ((param_9 & 7) * 8 | param_8 & 7) * 4 | param_1[1] & 0xffffff03;
  return 0;
}

/* ref: FUN_004e1200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *(uint *)this = param_1 & 0xfe000000;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 & 0xfffffffc;
  return (uint)this;
}

/* ref: FUN_004e1220 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_004e1220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((short)uVar1 == 0) {
    return 0.0;
  }
  return gen_bits2f(((uVar1 & 0x8000) * 8 | uVar1 & 0x3ff) << 0xd |
                    (((uVar1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000);
}

/* ref: FUN_004e1280 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_004e1280(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD(((int)((*in_ecx >> 0x15) << 0x16) >> 0x16))) *
                         (float10)*(double *)&REFG(double, 0x10969f8)))));
}

/* ref: FUN_004e12b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e12b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e12b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  return (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*in_ecx >> 10) << 0x16) >> 0x16))) *
                                  (float10)*(double *)&REFG(double, 0x10969f8)))));
}

/* ref: Global::CopyEntries8 */
GEN_OWN GEN_FRAME unsigned int F_004e12e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e12e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_004e1310 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((uint)param_1[1] <= *((uint *)GEN_TOP(((int)this + 4))) && *(int *)this == *param_1) {
    *((int *)GEN_TOP(((int)this + 4))) = param_1[1];
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e1390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((in_ecx + 8))) ^ param_2) & 0xf;
  *((uint *)GEN_TOP((in_ecx + 8))) = *((uint *)GEN_TOP((in_ecx + 8))) ^ uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Texture::GetMipSize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e13e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e13e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x18) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  uVar2 = *(uint *)(this + 0x1c) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004e14d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e14d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e14d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x10))) + param_2 * 8;
}

/* ref: FUN_004e14f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e14f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e14f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x18))) + param_2 * 8;
}

/* ref: FUN_004e1540 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  return *(short *)this == *param_1 && (ushort)param_1[1] <= *((ushort *)GEN_TOP(((int)this + 2)));
}

/* ref: FUN_004e1570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e15f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e15f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e15f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*((uint *)GEN_TOP((in_ecx + 0x10))) <= param_2) {
    return 0;
  }
  return *((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4;
}

/* ref: FUN_004e16d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e16d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e16d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (uint)((*((uint *)GEN_TOP(((int)this + 0x34))) & 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) != 0);
}

/* ref: FUN_004e16f0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004e16f0(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e16f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  return (param_1 & 0x4c) == 0;
}

/* ref: FUN_004e1710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  undefined4 in_EAX = 0;
  
  if ((param_2 & 0x4c) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x38)));
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::Device::AddCounter */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * pDVar1;
  uint uVar2;
  
  pDVar1 = this + param_1 * 4 + 0xd8;
  uVar2 = _InterlockedExchangeAdd((volatile gen_long *)(((uint *)pDVar1)), (gen_long)(param_2));
  return uVar2;
}

/* ref: Client::Graphics::Kernel::Device::AllocateFrameMemory */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pDVar1;
  int iVar2;
  
  pDVar1 = this + 0xc4;
  iVar2 = _InterlockedExchangeAdd((volatile gen_long *)(((int *)pDVar1)), (gen_long)(param_1));
  if (*(uint *)(this + 0xb8) < (uint)(*(int *)(this + 0xc0) + *(int *)(this + 0xc4))) {
    return 0;
  }
  return ((*(int *)(this + 0xbc) - iVar2) - param_1) + *(uint *)(this + 0xb8);
}

/* ref: Client::Graphics::Kernel::Device::SetIndexBuffer */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004e17b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e17b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0x1a0))))
              (*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x24 + REFG(int, 0x1375a3c) * 4))));
  }
  *(int *)(this + 0x54) = param_1;
  return;
}

/* ref: Client::Graphics::Kernel::Device::BeginScene */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e17e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e17e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[0x20] == (undefined1)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 0xa4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_FWD);
    this[0x20] = (undefined1)0x1;
  }
  return;
}

/* ref: Global::EndSceneIfBegun */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e1800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 0x20))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0xa8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
    *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  return;
}

/* ref: FUN_004e1880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1880(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e18a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e18a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e18a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Singleton_VDevice_Kernel_Graphics_Client_Graphics::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e18b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e18b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10969f4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::GetStringData */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e18e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e18e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = ((undefined4 *)GEN_TOP(*in_ecx));
  }
  return (uint)in_ecx;
}

/* ref: FUN_004e1920 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x32);
  return (uint)uVar1;
}

/* ref: FUN_004e1950 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1990 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e19d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e19d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e19d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: Global::TreeIteratorEquals_004e1ad0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::TreeIteratorNotEquals */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::TreeIteratorEquals2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::TreeIteratorNotEquals2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e1b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::TreeNodeColorRef */
GEN_OWN GEN_FRAME uint F_004e1b60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeNodeIsNilRef */
GEN_OWN GEN_FRAME uint F_004e1b70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: Global::TreeNodeLeftRef */
GEN_OWN GEN_FRAME uint F_004e1b80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParentRef */
GEN_OWN GEN_FRAME uint F_004e1b90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRightRef */
GEN_OWN GEN_FRAME uint F_004e1ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValueRef */
GEN_OWN GEN_FRAME uint F_004e1bb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMaxNode_004e1bc0 */
GEN_OWN GEN_FRAME uint F_004e1bc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: Global::TreeMinNode_004e1be0 */
GEN_OWN GEN_FRAME uint F_004e1be0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: Global::TreeNodeColorRef2 */
GEN_OWN GEN_FRAME uint F_004e1c00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeNodeIsNilRef2 */
GEN_OWN GEN_FRAME uint F_004e1c10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: Global::TreeNodeLeftRef2 */
GEN_OWN GEN_FRAME uint F_004e1c20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParentRef2 */
GEN_OWN GEN_FRAME uint F_004e1c30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRightRef2 */
GEN_OWN GEN_FRAME uint F_004e1c40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValueRef2 */
GEN_OWN GEN_FRAME uint F_004e1c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMaxNode2 */
GEN_OWN GEN_FRAME uint F_004e1c60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x15)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x15)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: Global::TreeMinNode2 */
GEN_OWN GEN_FRAME uint F_004e1c80(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x15)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_004e1cc0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004e1cc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x32);
  return uVar1;
}

/* ref: Global::TreeIteratorInit */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1cf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrement_004e1d00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e1d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: Global::TreeIteratorInit2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1d50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e1d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrement2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e1d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x15))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x15)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_004e1db0 */
GEN_OWN GEN_FRAME uint F_004e1db0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e1dc0 */
GEN_OWN GEN_FRAME uint F_004e1dc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e1dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_004e1df0 */
GEN_OWN GEN_FRAME byte F_004e1df0(void)
{
  GEN_ENTER(0x4e1df0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e00 */
GEN_OWN GEN_FRAME byte F_004e1e00(void)
{
  GEN_ENTER(0x4e1e00u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e20 */
GEN_OWN GEN_FRAME byte F_004e1e20(void)
{
  GEN_ENTER(0x4e1e20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004e1e30 */
GEN_OWN GEN_FRAME byte F_004e1e30(void)
{
  GEN_ENTER(0x4e1e30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: Client::Graphics::Kernel::Notifier::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_004e1e60(void)
{
  GEN_ENTER(0x4e1e60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Kernel::Notifier::vf2 */
GEN_OWN GEN_NOFRAME byte F_004e1e70(void)
{
  GEN_ENTER(0x4e1e70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e2be0(this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e2c70(this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Texture::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e2a30(this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::SwapChain::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e2ac0(this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Query::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004e2d60(this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_004e1f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e1f20(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: Global::CopyBitfieldDesc32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((uint *)GEN_TOP(((int)this + 8))) = param_1[2] & 0x7ffffff;
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1[3] & 0x7fffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1[7];
  return (uint)this;
}

/* ref: Global::CopyBitfieldDesc8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e1f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e1f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_1[1] & 0xfffffff;
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::~SaveThread */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e1fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x18));
  F_004cf880((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::~RenderThread */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e2010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x18));
  F_004cf880((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: FUN_004e2060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::ComputeVectorGrowth12 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
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

/* ref: Global::ComputeVectorGrowth4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: Global::ComputeVectorGrowth12_004e21a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e21a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e21a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0xc;
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

/* ref: FUN_004e21e0 */
GEN_OWN GEN_FRAME uint F_004e21e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e21e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_004e21f0 */
GEN_OWN GEN_FRAME uint F_004e21f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e21f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::ComputeVectorGrowth28 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1c;
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

/* ref: FUN_004e2270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2270(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2280(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e22b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e22b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e22b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e22c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e22c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e22c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e22e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e22e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e22e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::StringContainsPointer_004e22f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e22f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e22f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    pvVar1 = this;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004e2370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e2370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_004e2390 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e2390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e23b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e23b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004e23d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e23d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e23f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e23f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2430 */
GEN_OWN GEN_FRAME uint F_004e2430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2450 */
GEN_OWN GEN_FRAME uint F_004e2450(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2470 */
GEN_OWN GEN_FRAME uint F_004e2470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructU32At */
GEN_OWN GEN_FRAME uint F_004e2490(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::Construct12ByteAt */
GEN_OWN GEN_FRAME uint F_004e24b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e24b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: Global::Construct12ByteAt2 */
GEN_OWN GEN_FRAME uint F_004e24d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e24d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: Global::CopyU32Range */
GEN_OWN GEN_FRAME uint F_004e24f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e24f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Global::ConstructPairU32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ConstructPairU32_2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::StringCompareSubstr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x4e2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x10))) < param_1) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10))) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: Global::ReturnArgument */
GEN_OWN GEN_FRAME uint F_004e25d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e25d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::Copy12ByteRange */
GEN_OWN GEN_FRAME unsigned int F_004e25e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e25e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: Global::Copy12ByteRange2 */
GEN_OWN GEN_FRAME unsigned int F_004e2610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: Global::ConstructPairU32Bool */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrement_004e26a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e26a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e26a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrement_004e2700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004e2700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x15))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x15))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x15)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x15))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_004e2760 */
GEN_OWN GEN_FRAME uint F_004e2760(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e27a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e27a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4e27a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2820 */
GEN_OWN GEN_FRAME uint F_004e2820(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004e2850 */
GEN_OWN GEN_FRAME uint F_004e2850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e2850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_004e2870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::IntersectRectangles */
GEN_OWN GEN_FRAME unsigned int F_004e28b0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4e28b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  
  piVar1 = param_2;
  if (*param_2 <= *param_3) {
    piVar1 = param_3;
  }
  *param_1 = *piVar1;
  piVar1 = param_3 + 1;
  if (*piVar1 < param_2[1]) {
    piVar1 = param_2 + 1;
  }
  param_1[1] = *piVar1;
  piVar1 = param_3;
  if (param_2[2] < param_3[2]) {
    piVar1 = param_2;
  }
  param_1[2] = piVar1[2];
  piVar1 = param_2;
  if (param_3[3] <= param_2[3]) {
    piVar1 = param_3;
  }
  param_1[3] = piVar1[3];
  if (param_1[2] < *param_1) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  if (param_1[3] < param_1[1]) {
    param_1[1] = 0;
    param_1[3] = 0;
  }
  return 0;
}

/* ref: Global::GraphicsAlloc */
GEN_OWN GEN_FRAME uint F_004e2930(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::GraphicsFree */
GEN_OWN GEN_FRAME uint F_004e2950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Resource::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::Buffer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e29a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e29a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::Texture::~Texture */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e29d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e29d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b44));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b2c));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8))) = *(undefined4 *)(this + 0x14);
  }
  if (*(int *)(this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 4))) = *(undefined4 *)(this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2a30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e29d0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::SwapChain::~SwapChain */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e2a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b74));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b5c));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8))) = *(undefined4 *)(this + 0x14);
  }
  if (*(int *)(this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 4))) = *(undefined4 *)(this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::SwapChain::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2ac0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e2a60(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::Shader::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2af0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::VertexShader::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::PixelShader::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::~VertexBuffer */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e2b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a54));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a6c));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8))) = *(undefined4 *)(this + 0x14);
  }
  if (*(int *)(this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 4))) = *(undefined4 *)(this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2be0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e2b80(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::~IndexBuffer */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e2c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a84));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a9c));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8))) = *(undefined4 *)(this + 0x14);
  }
  if (*(int *)(this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 4))) = *(undefined4 *)(this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2c70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e2c10(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::ConstantBuffer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::InputLayout::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2cd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::Query::~Query */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004e2d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4e2d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8))) = *(undefined4 *)(this + 0x14);
  }
  if (*(int *)(this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 4))) = *(undefined4 *)(this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Query::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004e2d60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4e2d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004e2d00(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::KernelAlloc */
GEN_OWN GEN_FRAME uint F_004e2d90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::KernelFree */
GEN_OWN GEN_FRAME uint F_004e2db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4e2db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 8))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

