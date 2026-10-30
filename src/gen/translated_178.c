#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ddf8f0 */
GEN_LIB GEN_FRAME uint F_00ddf8f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddf8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00ddf920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ddf920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xddf920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexFloatDataChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddf970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddf970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf9e0 */
GEN_LIB GEN_FRAME uint F_00ddf9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddf9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ddfa00 */
GEN_LIB GEN_FRAME uint F_00ddfa00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfa00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfa10 */
GEN_LIB GEN_FRAME uint F_00ddfa10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfa10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a630));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfa30 */
GEN_LIB GEN_NOFRAME uint F_00ddfa30(void)
{
  GEN_ENTER(0xddfa30u, 0u, 0u, 0u, 0u);
  return 0x114a630;
}

/* ref: FUN_00ddfa50 */
GEN_LIB GEN_FRAME uint F_00ddfa50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00ddfa80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ddfa80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfa80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxTriangleSelectionChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddfad0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfb40 */
GEN_LIB GEN_FRAME uint F_00ddfb40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ddfb60 */
GEN_LIB GEN_FRAME uint F_00ddfb60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfb70 */
GEN_LIB GEN_FRAME unsigned int F_00ddfb70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 7 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfba0 */
GEN_LIB GEN_NOFRAME uint F_00ddfba0(void)
{
  GEN_ENTER(0xddfba0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x18, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  return 0x114a6e4;
}

/* ref: FUN_00ddfbe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddfbe0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
  F_00d91350(in_ecx + 6 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 7 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddfc10 */
GEN_LIB GEN_FRAME uint F_00ddfc10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00ddfc40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ddfc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxTextureInplace::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddfca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  F_00d91510(param_1 + 7 GEN_EDX_FWD);
  F_00d91510(param_1 + 6 GEN_EDX_ARG);
  uVar1 = param_1[5];
  param_1[4] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[3],uVar1 & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfd20 */
GEN_LIB GEN_FRAME uint F_00ddfd20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ddfd30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddfd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xddfd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  F_00d91350((int)this + 0xc GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x10 GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00ddfd70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ddfd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xddfd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD);
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00ddfdb0 */
GEN_LIB GEN_FRAME unsigned int F_00ddfdb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ddfdf0 */
GEN_LIB GEN_FRAME uint F_00ddfdf0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddfe00 */
GEN_LIB GEN_NOFRAME uint F_00ddfe00(void)
{
  GEN_ENTER(0xddfe00u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x28, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  return 0x114a754;
}

/* ref: FUN_00ddfe50 */
GEN_LIB GEN_FRAME uint F_00ddfe50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfe50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxTextureFile::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ddfe80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 + 4 GEN_EDX_FWD);
  F_00d91510(param_1 + 3 GEN_EDX_ARG);
  F_00d91510(param_1 + 2 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfed0 */
GEN_LIB GEN_FRAME uint F_00ddfed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xddfed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ddfef0 */
GEN_LIB GEN_FRAME uint F_00ddfef0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddfef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ddff00 */
GEN_LIB GEN_FRAME uint F_00ddff00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddff00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a7ac));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddff20 */
GEN_LIB GEN_NOFRAME uint F_00ddff20(void)
{
  GEN_ENTER(0xddff20u, 0u, 0u, 0u, 0u);
  return 0x114a7ac;
}

/* ref: FUN_00ddff40 */
GEN_LIB GEN_FRAME uint F_00ddff40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xddff40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00ddff70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ddff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xddff70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSparselyAnimatedString::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0000(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00ddff70(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0040 */
GEN_LIB GEN_FRAME uint F_00de0040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de0060 */
GEN_LIB GEN_FRAME uint F_00de0060(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0070 */
GEN_LIB GEN_FRAME uint F_00de0070(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0090 */
GEN_LIB GEN_NOFRAME uint F_00de0090(void)
{
  GEN_ENTER(0xde0090u, 0u, 0u, 0u, 0u);
  return 0x114a2d8;
}

/* ref: FUN_00de00a0 */
GEN_LIB GEN_FRAME uint F_00de00a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde00a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de00c0 */
GEN_LIB GEN_FRAME uint F_00de00c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde00c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de00d0 */
GEN_LIB GEN_FRAME uint F_00de00d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde00d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a860));
  }
  return (uint)param_1;
}

/* ref: FUN_00de00f0 */
GEN_LIB GEN_NOFRAME uint F_00de00f0(void)
{
  GEN_ENTER(0xde00f0u, 0u, 0u, 0u, 0u);
  return 0x114a860;
}

/* ref: FUN_00de0130 */
GEN_LIB GEN_FRAME uint F_00de0130(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de0160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de0160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxSparselyAnimatedBool::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de01d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde01d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de0160(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0210 */
GEN_LIB GEN_FRAME uint F_00de0210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de0230 */
GEN_LIB GEN_FRAME uint F_00de0230(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de0240 */
GEN_LIB GEN_FRAME uint F_00de0240(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a90c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0260 */
GEN_LIB GEN_NOFRAME uint F_00de0260(void)
{
  GEN_ENTER(0xde0260u, 0u, 0u, 0u, 0u);
  return 0x114a90c;
}

/* ref: FUN_00de0280 */
GEN_LIB GEN_FRAME uint F_00de0280(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de02b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de02b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde02b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),iVar2 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2 * 4)));
    do {
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 4)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxSkinBinding::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0350(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de02b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0390 */
GEN_LIB GEN_FRAME uint F_00de0390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de03b0 */
GEN_LIB GEN_FRAME uint F_00de03b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde03b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de03c0 */
GEN_LIB GEN_FRAME unsigned int F_00de03c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde03c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 3 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de03f0 */
GEN_LIB GEN_NOFRAME uint F_00de03f0(void)
{
  GEN_ENTER(0xde03f0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xb8, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  return 0x114ab70;
}

/* ref: FUN_00de0540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde0540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde0570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de05a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde05a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de05d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de05d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde05d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde0600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde0630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde0660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de0680 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de0680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de06a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de06c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de06e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de06e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde06e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0700 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de0720 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de0720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde0720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de07b0 */
GEN_LIB GEN_FRAME unsigned int F_00de07b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde07b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de07e0 */
GEN_LIB GEN_FRAME unsigned int F_00de07e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde07e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0810 */
GEN_LIB GEN_FRAME unsigned int F_00de0810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0840 */
GEN_LIB GEN_FRAME unsigned int F_00de0840(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0870 */
GEN_LIB GEN_FRAME unsigned int F_00de0870(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde0870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08a0 */
GEN_LIB GEN_FRAME unsigned int F_00de08a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde08a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de08d0 */
GEN_LIB GEN_FRAME unsigned int F_00de08d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde08d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de0900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de09c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de09c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde09c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0a00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0a40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0a80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de0ac0 */
GEN_LIB GEN_FRAME unsigned int F_00de0ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0af0 */
GEN_LIB GEN_FRAME unsigned int F_00de0af0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0b20 */
GEN_LIB GEN_FRAME unsigned int F_00de0b20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0b50 */
GEN_LIB GEN_FRAME unsigned int F_00de0b50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0b80 */
GEN_LIB GEN_FRAME unsigned int F_00de0b80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0bb0 */
GEN_LIB GEN_FRAME unsigned int F_00de0bb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0be0 */
GEN_LIB GEN_FRAME unsigned int F_00de0be0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde0be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de0dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde0dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde0e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde0eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde0f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de0f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde0f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde1000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde1070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de10e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de10e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde10e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de11c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de11c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde11c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de12a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de12a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde12a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de13f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de13f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde13f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de14d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de14d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde14d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de15b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de15b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde15b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1700(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 3 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1730 */
GEN_LIB GEN_FRAME uint F_00de1730(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxScene::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1760(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de6840(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de17a0 */
GEN_LIB GEN_FRAME uint F_00de17a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde17a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de17c0 */
GEN_LIB GEN_FRAME uint F_00de17c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde17c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de17d0 */
GEN_LIB GEN_FRAME uint F_00de17d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde17d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
    uVar1 = F_00d91350(param_1 + 8 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de17f0 */
GEN_LIB GEN_NOFRAME uint F_00de17f0(void)
{
  GEN_ENTER(0xde17f0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x20, 0);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x114abcc;
}

/* ref: FUN_00de1830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1830(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114abcc));
  F_00d91350(in_ecx + 8 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1850 */
GEN_LIB GEN_FRAME uint F_00de1850(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de1880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar2 = F_00de47a0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkxNodeSelectionSet::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1900(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de1880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1940 */
GEN_LIB GEN_FRAME uint F_00de1940(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de1950 */
GEN_LIB GEN_FRAME uint F_00de1950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de1970 */
GEN_LIB GEN_FRAME uint F_00de1970(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1990 */
GEN_LIB GEN_FRAME unsigned int F_00de1990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00de74e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de19b0 */
GEN_LIB GEN_FRAME uint F_00de19b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde19b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de19c0 */
GEN_LIB GEN_NOFRAME uint F_00de19c0(void)
{
  GEN_ENTER(0xde19c0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00de74e0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de19f0 */
GEN_LIB GEN_FRAME unsigned int F_00de19f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde19f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de1a20 */
GEN_LIB GEN_NOFRAME uint F_00de1a20(void)
{
  GEN_ENTER(0xde1a20u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x1c, 4);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  return 0x114ac88;
}

/* ref: FUN_00de1a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1a60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ac88));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 6 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de1a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  uVar1 = F_00de47a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00de1ab0 */
GEN_LIB GEN_FRAME uint F_00de1ab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxMesh::UserChannelInfo::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1ae0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 0x18))) GEN_EDX_FWD);
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 0x14))) GEN_EDX_ARG);
  F_00de47a0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1b30 */
GEN_LIB GEN_FRAME uint F_00de1b30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de1b50 */
GEN_LIB GEN_FRAME uint F_00de1b50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de1b60 */
GEN_LIB GEN_FRAME uint F_00de1b60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de1b80 */
GEN_LIB GEN_NOFRAME uint F_00de1b80(void)
{
  GEN_ENTER(0xde1b80u, 0u, 0u, 0u, 0u);
  return 0x114ad4c;
}

/* ref: FUN_00de1bc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de1bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde1c20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde1c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de1c70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de1c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de1c90 */
GEN_LIB GEN_FRAME unsigned int F_00de1c90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1ce0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de1d20 */
GEN_LIB GEN_FRAME unsigned int F_00de1d20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde1d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de1d50 */
GEN_LIB GEN_FRAME unsigned int F_00de1d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de1d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de1e00 */
GEN_LIB GEN_FRAME unsigned int F_00de1e00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de1e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde1e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de1f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde1f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de1fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de1fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde1fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de2030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de20a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de20a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde20a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de2120 */
GEN_LIB GEN_FRAME uint F_00de2120(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de2150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkxMeshSection::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2250(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de2150(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2290 */
GEN_LIB GEN_FRAME uint F_00de2290(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de22b0 */
GEN_LIB GEN_FRAME unsigned int F_00de22b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde22b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00de7f70(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de22d0 */
GEN_LIB GEN_FRAME uint F_00de22d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde22d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de22e0 */
GEN_LIB GEN_NOFRAME uint F_00de22e0(void)
{
  GEN_ENTER(0xde22e0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00de7f70(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de2310 */
GEN_LIB GEN_FRAME uint F_00de2310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2330 */
GEN_LIB GEN_FRAME uint F_00de2330(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2340 */
GEN_LIB GEN_FRAME unsigned int F_00de2340(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
    F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 5 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 6 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de2380 */
GEN_LIB GEN_NOFRAME uint F_00de2380(void)
{
  GEN_ENTER(0xde2380u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
  return 0x114ae9c;
}

/* ref: FUN_00de23f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de23f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde23f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ae9c));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  F_00d91350((int)this + 0x10 GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x14 GEN_EDX_ARG,param_1);
  F_00d91350((int)this + 0x18 GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00de2440 */
GEN_LIB GEN_FRAME uint F_00de2440(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de2470 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialShader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de24e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde24e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de2470(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2520 */
GEN_LIB GEN_FRAME uint F_00de2520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2540 */
GEN_LIB GEN_FRAME uint F_00de2540(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2550 */
GEN_LIB GEN_FRAME uint F_00de2550(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
    uVar1 = F_00d91350(param_1 + 2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2570 */
GEN_LIB GEN_NOFRAME uint F_00de2570(void)
{
  GEN_ENTER(0xde2570u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x28, 8);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x114afbc;
}

/* ref: FUN_00de25c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de25c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde25c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114afbc));
  F_00d91350(in_ecx + 2 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de25e0 */
GEN_LIB GEN_FRAME uint F_00de25e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde25e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de2610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxMaterialEffect::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[6];
  param_1[5] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[4],uVar1 & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  F_00d91510(param_1 + 2 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de26e0 */
GEN_LIB GEN_FRAME uint F_00de26e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde26e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2700 */
GEN_LIB GEN_FRAME uint F_00de2700(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2710 */
GEN_LIB GEN_FRAME uint F_00de2710(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b044));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2730 */
GEN_LIB GEN_NOFRAME uint F_00de2730(void)
{
  GEN_ENTER(0xde2730u, 0u, 0u, 0u, 0u);
  return 0x114b044;
}

/* ref: FUN_00de2770 */
GEN_LIB GEN_FRAME uint F_00de2770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxLight::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de27a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde27a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de27e0 */
GEN_LIB GEN_FRAME uint F_00de27e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde27e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2800 */
GEN_LIB GEN_FRAME uint F_00de2800(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2810 */
GEN_LIB GEN_FRAME uint F_00de2810(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b124));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2830 */
GEN_LIB GEN_NOFRAME uint F_00de2830(void)
{
  GEN_ENTER(0xde2830u, 0u, 0u, 0u, 0u);
  return 0x114b124;
}

/* ref: FUN_00de2860 */
GEN_LIB GEN_FRAME uint F_00de2860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de2890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
                       (uVar2 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxIndexBuffer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2910(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de2890(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2950 */
GEN_LIB GEN_FRAME uint F_00de2950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2970 */
GEN_LIB GEN_FRAME uint F_00de2970(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2980 */
GEN_LIB GEN_FRAME uint F_00de2980(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b188));
  }
  return (uint)param_1;
}

/* ref: FUN_00de29a0 */
GEN_LIB GEN_NOFRAME uint F_00de29a0(void)
{
  GEN_ENTER(0xde29a0u, 0u, 0u, 0u, 0u);
  return 0x114b188;
}

/* ref: FUN_00de29c0 */
GEN_LIB GEN_FRAME uint F_00de29c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde29c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de29f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de29f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde29f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEdgeSelectionChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2a40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2ab0 */
GEN_LIB GEN_FRAME uint F_00de2ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2af0 */
GEN_LIB GEN_FRAME uint F_00de2af0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b284));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2b10 */
GEN_LIB GEN_FRAME uint F_00de2b10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2b20 */
GEN_LIB GEN_NOFRAME uint F_00de2b20(void)
{
  GEN_ENTER(0xde2b20u, 0u, 0u, 0u, 0u);
  return 0x114b284;
}

/* ref: FUN_00de2b30 */
GEN_LIB GEN_FRAME uint F_00de2b30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxCamera::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2ba0 */
GEN_LIB GEN_FRAME uint F_00de2ba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2bc0 */
GEN_LIB GEN_FRAME uint F_00de2bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2bd0 */
GEN_LIB GEN_FRAME uint F_00de2bd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
    param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
    uVar1 = F_00d91350(param_1 + 7 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2c00 */
GEN_LIB GEN_NOFRAME uint F_00de2c00(void)
{
  GEN_ENTER(0xde2c00u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x14, 12);
  
  F_00d91350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x114b2e0;
}

/* ref: FUN_00de2c50 */
GEN_LIB GEN_FRAME uint F_00de2c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de2c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de2cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
  in_ecx[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  F_00d91350(in_ecx + 7 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: hkxBlobMeshShape::vf3 */
GEN_LIB GEN_NOFRAME uint F_00de2d00(void)
{
  GEN_ENTER(0xde2d00u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkxBlobMeshShape::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: hkxBlobMeshShape::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de2d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde2d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkxBlobMeshShape::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde2d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x1c GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkxBlobMeshShape::vf2 */
GEN_LIB GEN_NOFRAME uint F_00de2d40(void)
{
  GEN_ENTER(0xde2d40u, 0u, 0u, 0u, 0u);
  return 0x15e32e4;
}

/* ref: FUN_00de2d50 */
GEN_LIB GEN_FRAME uint F_00de2d50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxBlobMeshShape::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c))) & 0xfffffffe;
}

/* ref: FUN_00de2d90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de2d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde2d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxBlob::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2de0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],uVar1 & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkxBlobMeshShape::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de2e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  F_00d91510(param_1 + 7 GEN_EDX_FWD);
  uVar1 = param_1[6];
  param_1[5] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[4],uVar1 & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2ed0 */
GEN_LIB GEN_FRAME uint F_00de2ed0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2ef0 */
GEN_LIB GEN_FRAME uint F_00de2ef0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2f00 */
GEN_LIB GEN_FRAME uint F_00de2f00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2f20 */
GEN_LIB GEN_NOFRAME uint F_00de2f20(void)
{
  GEN_ENTER(0xde2f20u, 0u, 0u, 0u, 0u);
  return 0x114b2d0;
}

/* ref: FUN_00de2f30 */
GEN_LIB GEN_FRAME uint F_00de2f30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2f50 */
GEN_LIB GEN_FRAME uint F_00de2f50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2f60 */
GEN_LIB GEN_FRAME uint F_00de2f60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2f80 */
GEN_LIB GEN_NOFRAME uint F_00de2f80(void)
{
  GEN_ENTER(0xde2f80u, 0u, 0u, 0u, 0u);
  return 0x1149bf4;
}

/* ref: FUN_00de2f90 */
GEN_LIB GEN_FRAME uint F_00de2f90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde2f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de2fb0 */
GEN_LIB GEN_FRAME uint F_00de2fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de2fc0 */
GEN_LIB GEN_FRAME uint F_00de2fc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde2fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b378));
  }
  return (uint)param_1;
}

/* ref: FUN_00de2fe0 */
GEN_LIB GEN_NOFRAME uint F_00de2fe0(void)
{
  GEN_ENTER(0xde2fe0u, 0u, 0u, 0u, 0u);
  return 0x114b378;
}

/* ref: FUN_00de3010 */
GEN_LIB GEN_FRAME uint F_00de3010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de3040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedVector::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3100 */
GEN_LIB GEN_FRAME uint F_00de3100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de3120 */
GEN_LIB GEN_FRAME uint F_00de3120(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de3130 */
GEN_LIB GEN_FRAME uint F_00de3130(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3c0));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3150 */
GEN_LIB GEN_NOFRAME uint F_00de3150(void)
{
  GEN_ENTER(0xde3150u, 0u, 0u, 0u, 0u);
  return 0x114b3c0;
}

/* ref: FUN_00de3190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde3190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00de31e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de31e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde31e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de3220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de3220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde3220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de3260 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de3260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde3260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de32b0 */
GEN_LIB GEN_FRAME uint F_00de32b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde32b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de32e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de32e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde32e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedQuaternion::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 << 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de33a0 */
GEN_LIB GEN_FRAME uint F_00de33a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde33a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de33c0 */
GEN_LIB GEN_FRAME uint F_00de33c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de33d0 */
GEN_LIB GEN_FRAME uint F_00de33d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde33d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3e8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de33f0 */
GEN_LIB GEN_NOFRAME uint F_00de33f0(void)
{
  GEN_ENTER(0xde33f0u, 0u, 0u, 0u, 0u);
  return 0x114b3e8;
}

/* ref: FUN_00de3410 */
GEN_LIB GEN_FRAME uint F_00de3410(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de3440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de3440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde3440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedMatrix::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 << 6);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3500 */
GEN_LIB GEN_FRAME uint F_00de3500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de3520 */
GEN_LIB GEN_FRAME uint F_00de3520(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de3530 */
GEN_LIB GEN_FRAME uint F_00de3530(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b40c));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3550 */
GEN_LIB GEN_NOFRAME uint F_00de3550(void)
{
  GEN_ENTER(0xde3550u, 0u, 0u, 0u, 0u);
  return 0x114b40c;
}

/* ref: FUN_00de3570 */
GEN_LIB GEN_FRAME uint F_00de3570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde3570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de35a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de35a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde35a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedFloat::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de35f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde35f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[4];
  param_1[3] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],iVar1 * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de3660 */
GEN_LIB GEN_FRAME uint F_00de3660(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00de3680 */
GEN_LIB GEN_FRAME unsigned int F_00de3680(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00de80b0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00de36a0 */
GEN_LIB GEN_FRAME uint F_00de36a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde36a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00de36b0 */
GEN_LIB GEN_NOFRAME uint F_00de36b0(void)
{
  GEN_ENTER(0xde36b0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00de80b0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de3700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3700(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde3700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3730(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3750(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde3750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3780 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00de3780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde3780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 != param_1[1]) {
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    piVar2 = *(int * PTR32 *)this;
    psVar3 = ((short *)GEN_TOP((*param_1 + 6)));
    iVar4 = *param_1 - (int)piVar2;
    do {
      if (((((short)piVar2[1] != psVar3[-1]) || (*((short *)GEN_TOP(((int)piVar2 + 6))) != *psVar3)) ||
          (*piVar2 != *((int *)GEN_TOP((iVar4 + (int)piVar2))))) ||
         ((piVar2[2] != *(int *)(psVar3 + 1) || ((char)piVar2[3] != (char)psVar3[3])))) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      psVar3 = psVar3 + 8;
      piVar2 = piVar2 + 4;
    } while (iVar5 < iVar1);
  }
  return 1;
}

/* ref: FUN_00de37f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de37f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde37f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: FUN_00de3800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3800(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3810(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde3810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3830(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3840(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde3840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3860(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde3890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)((short)param_1[1])) {
  case 1: ;
    return *param_1 + *((int *)GEN_TOP(((int)this + 0x38)));
  case 2: ;
    return *param_1 + *((int *)GEN_TOP(((int)this + 0x2c)));
  case 3: ;
    return *param_1 + *((int *)GEN_TOP(((int)this + 0x20)));
  case 4: ;
    bVar1 = *(byte *)(param_1 + 3);
    if ((bVar1 == 3) || (bVar1 == 4)) {
      return *param_1 + *((int *)GEN_TOP(((int)this + 8)));
    }
    if (bVar1 < 3) {
      return *param_1 + *((int *)GEN_TOP(((int)this + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00de3910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde3910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de3890(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00de3920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde3920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL(0x424, 12);
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = F_00de3780(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_FWD,(int)param_1 + 0x5c);
  (*(byte *)(gen_frame + 0x41f)) = bVar1;
  uVar2 = F_00da1030(((int *)(gen_frame + 0x0)),0,0x404);
  if ((param_3 < *((int *)GEN_TOP(((int)this + 0x44)))) && (param_2 < *((int *)GEN_TOP(((int)param_1 + 0x44))))) {
    if ((*(byte *)(gen_frame + 0x41f)) == 0) {
      uVar2 = 0;
      (*(uint *)(gen_frame + 0x408)) = 0;
      if (0 < *((int *)GEN_TOP(((int)this + 0x60)))) {
        (*(int *)(gen_frame + 0x418)) = 0;
        do {
          iVar6 = *((int *)GEN_TOP(((int)this + 0x5c))) + (*(int *)(gen_frame + 0x418));
          (*(int *)(gen_frame + 0x404)) = ((int *)(gen_frame + 0x0))[(int)(*((ushort *)GEN_TOP((iVar6 + 6))))];
          iVar3 = 0;
          (*(int *)(gen_frame + 0x414)) = 0;
          if (0 < *((int *)GEN_TOP(((int)param_1 + 0x60)))) {
            iVar4 = *((int *)GEN_TOP(((int)param_1 + 0x5c)));
            (*(uint *)(gen_frame + 0x410)) = iVar4;
            (*(short * PTR32 *)(gen_frame + 0x40c)) = ((short *)GEN_TOP((iVar4 + 6)));
            do {
              if (*(*(short * PTR32 *)(gen_frame + 0x40c)) == *((short *)GEN_TOP((iVar6 + 6)))) {
                if ((*(int *)(gen_frame + 0x414)) == ((int *)(gen_frame + 0x0))[(int)(*((ushort *)GEN_TOP((iVar6 + 6))))]) {
                  iVar4 = iVar3 * 0x10 + iVar4;
                  if ((iVar4 != 0) && (*((short *)GEN_TOP((iVar6 + 4))) == *((short *)GEN_TOP((iVar4 + 4))))) {
                    ((int *)(gen_frame + 0x0))[(int)(*((ushort *)GEN_TOP((iVar6 + 6))))] = ((int *)(gen_frame + 0x0))[(int)(*((ushort *)GEN_TOP((iVar6 + 6))))] + 1;
                    uVar2 = F_00de3890(this GEN_EDX_ARG,iVar6);
                    (*(uint *)(gen_frame + 0x410)) = uVar2;
                    uVar5 = F_00de3910(param_1 GEN_EDX_ARG,iVar4);
                    uVar2 = 0;
                    switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((iVar6 + 4))))) {
                    case 1: ;
                      uVar2 = (uint)*((byte *)GEN_TOP((iVar4 + 0xc)));
                      break;
                    case 2: ;
                      uVar2 = (uint)*((byte *)GEN_TOP((iVar4 + 0xc))) * 2;
                      break;
                    case 3: ;
                      uVar2 = (uint)*((byte *)GEN_TOP((iVar4 + 0xc))) * 4;
                      break;
                    case 4: ;
                      bVar1 = *((byte *)GEN_TOP((iVar4 + 0xc)));
                      if ((bVar1 == 3) || (bVar1 == 4)) {
                        uVar2 = 0x10;
                      }
                      else if (bVar1 < 3) {
                        uVar2 = (uint)bVar1 * 4;
                      }
                    }
                    F_00da1010(*((int *)GEN_TOP((iVar6 + 8))) * param_3 + (*(uint *)(gen_frame + 0x410)),
                                 *((int *)GEN_TOP((iVar4 + 8))) * param_2 + uVar5,uVar2);
                  }
                  break;
                }
                (*(int *)(gen_frame + 0x414)) = (*(int *)(gen_frame + 0x414)) + 1;
              }
              (*(short * PTR32 *)(gen_frame + 0x40c)) = (*(short * PTR32 *)(gen_frame + 0x40c)) + 8;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *((int *)GEN_TOP(((int)param_1 + 0x60))));
          }
          (*(int *)(gen_frame + 0x418)) = (*(int *)(gen_frame + 0x418)) + 0x10;
          uVar2 = (*(uint *)(gen_frame + 0x408)) + 1;
          (*(uint *)(gen_frame + 0x408)) = uVar2;
        } while ((int)uVar2 < *((int *)GEN_TOP(((int)this + 0x60))));
      }
    }
    else {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x58)));
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *((int *)GEN_TOP(((int)this + 0x38))),
                             iVar3 * param_2 + *((int *)GEN_TOP(((int)param_1 + 0x38))),iVar3);
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x54)));
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *((int *)GEN_TOP(((int)this + 0x2c))),
                             iVar3 * param_2 + *((int *)GEN_TOP(((int)param_1 + 0x2c))),iVar3);
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x50)));
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *((int *)GEN_TOP(((int)this + 0x20))),
                             iVar3 * param_2 + *((int *)GEN_TOP(((int)param_1 + 0x20))),iVar3);
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x4c)));
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *((int *)GEN_TOP(((int)this + 0x14))),
                             iVar3 * param_2 + *((int *)GEN_TOP(((int)param_1 + 0x14))),iVar3);
      }
      iVar3 = *((int *)GEN_TOP(((int)this + 0x48)));
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *((int *)GEN_TOP(((int)this + 8))),
                             iVar3 * param_2 + *((int *)GEN_TOP(((int)param_1 + 8))),iVar3);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00de3b80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de3b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde3b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = 0;
  return 0;
}

/* ref: FUN_00de3bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde3bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar6;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 0x50))) * param_1;
  *((int *)GEN_TOP(((int)this + 0x3c))) = param_1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x38))) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,iVar3,1);
  }
  *((int *)GEN_TOP(((int)this + 0x34))) = iVar5;
  uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x4c))) * param_1) >> 1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x24,uVar2,2);
  }
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar6;
  uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x48))) * param_1) >> 2;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x20))) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x18,uVar2,4);
  }
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar6;
  uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x44))) * param_1) >> 2;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0xc,uVar2,4);
  }
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar6;
  uVar6 = (uint)(*((int *)GEN_TOP(((int)this + 0x40))) * param_1) >> 4;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar4 = uVar2 * 2;
    if (uVar2 * 2 <= uVar6) {
      uVar4 = uVar6;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar4,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
  return uVar2;
}

/* ref: FUN_00de3cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3cd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde3cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b528));
  F_00de37f0(in_ecx + 0x17 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de3cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde3cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  if (param_1 == *((int *)GEN_TOP(((int)this + 0x44)))) {
    bVar2 = F_00de3780(param_2 GEN_EDX_FWD,(int)this + 0x5c);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  piVar1 = ((int *)GEN_TOP(((int)this + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  F_00de3b80((int)this + 8 GEN_EDX_ARG);
  local_c = 0;
  if (0 < param_2[1]) {
    local_8 = 0;
    do {
      iVar9 = *param_2 + local_8;
      if (*((uint *)GEN_TOP(((int)this + 0x60))) == (*((uint *)GEN_TOP(((int)this + 100))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0x10);
      }
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x60))) * 0x10 + *piVar1)));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
        *((undefined2 *)GEN_TOP(((int)puVar3 + 6))) = 0;
        puVar3[2] = 0;
      }
      iVar5 = *((int *)GEN_TOP(((int)this + 0x60)));
      *((int *)GEN_TOP(((int)this + 0x60))) = iVar5 + 1;
      puVar3 = ((undefined4 *)GEN_TOP((iVar5 * 0x10 + *piVar1)));
      *(undefined2 *)(puVar3 + 1) = *((undefined2 *)GEN_TOP((iVar9 + 4)));
      *((undefined2 *)GEN_TOP(((int)puVar3 + 6))) = *((undefined2 *)GEN_TOP((iVar9 + 6)));
      *(undefined1 *)(puVar3 + 3) = *((undefined1 *)GEN_TOP((iVar9 + 0xc)));
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((iVar9 + 4))))) {
      case 1: ;
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) + (uint)*((byte *)GEN_TOP((iVar9 + 0xc)));
        break;
      case 2: ;
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
        *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) + (uint)*((byte *)GEN_TOP((iVar9 + 0xc))) * 2;
        break;
      case 3: ;
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
        *((int *)GEN_TOP(((int)this + 0x50))) = *((int *)GEN_TOP(((int)this + 0x50))) + (uint)*((byte *)GEN_TOP((iVar9 + 0xc))) * 4;
        break;
      case 4: ;
        bVar2 = *((byte *)GEN_TOP((iVar9 + 0xc)));
        if ((bVar2 == 3) || (bVar2 == 4)) {
          *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
          *((int *)GEN_TOP(((int)this + 0x48))) = *((int *)GEN_TOP(((int)this + 0x48))) + 0x10;
        }
        else if (bVar2 < 3) {
          *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
          *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) + (uint)*((byte *)GEN_TOP((iVar9 + 0xc))) * 4
          ;
        }
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + 1;
    } while (local_c < param_2[1]);
  }
  iVar9 = 0;
  local_c = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x60)))) {
    do {
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((*piVar1 + 4 + iVar9))))) {
      case 1: ;
        uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
        break;
      case 2: ;
        uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
        break;
      case 3: ;
        uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
        break;
      case 4: ;
        bVar2 = *((byte *)GEN_TOP((*param_2 + 0xc + iVar9)));
        if ((bVar2 == 3) || (bVar2 == 4)) {
          uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
        }
        else {
          if (2 < bVar2) goto switchD_00de3e46_default;
          uVar7 = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
        }
        break;
      default: ;
        goto switchD_00de3e46_default;
      }
      *((undefined4 *)GEN_TOP((*piVar1 + iVar9 + 8))) = uVar7;
switchD_00de3e46_default: ;
      local_c = local_c + 1;
      iVar9 = iVar9 + 0x10;
    } while (local_c < *((int *)GEN_TOP(((int)this + 0x60))));
  }
  iVar9 = *((int *)GEN_TOP(((int)this + 0x58))) * param_1;
  *((int *)GEN_TOP(((int)this + 0x44))) = param_1;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x40))) & 0x3fffffff;
  if ((int)uVar4 < iVar9) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x38,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 0x3c))) = iVar9;
  uVar8 = (uint)(*((int *)GEN_TOP(((int)this + 0x54))) * param_1) >> 1;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x34))) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x2c,uVar4,2);
  }
  *((uint *)GEN_TOP(((int)this + 0x30))) = uVar8;
  uVar8 = (uint)(*((int *)GEN_TOP(((int)this + 0x50))) * param_1) >> 2;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x28))) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,uVar4,4);
  }
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar8;
  uVar8 = (uint)(*((int *)GEN_TOP(((int)this + 0x4c))) * param_1) >> 2;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x14,uVar4,4);
  }
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar8;
  uVar8 = (uint)(*((int *)GEN_TOP(((int)this + 0x48))) * param_1) >> 4;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar6 = uVar4 * 2;
    if (uVar4 * 2 <= uVar8) {
      uVar6 = uVar8;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 8,uVar6,0x10);
    uVar4 = CONCAT31(extraout_var_00,bVar2);
  }
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar8;
  return uVar4;
}

/* ref: FUN_00de3fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de3fc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00de3780(((undefined *)GEN_TOP(((int)param_1 + 0x5c))) GEN_EDX_FWD,param_2 + 0x5c);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (param_3 != '\0') {
    uVar2 = F_00de3cf0(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_2 + 0x44))),((undefined *)GEN_TOP(((int)param_1 + 0x5c))));
  }
  if (bVar1 == 0) {
    uVar3 = 0;
    if (*((int *)GEN_TOP((param_2 + 0x44))) != 0) {
      do {
        uVar2 = F_00de3920(param_1 GEN_EDX_ARG,param_2,uVar3,uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *((uint *)GEN_TOP((param_2 + 0x44))));
    }
  }
  else {
    uVar3 = *((uint *)GEN_TOP((param_2 + 0x44)));
    if (*((uint *)GEN_TOP(((int)param_1 + 0x44))) <= *((uint *)GEN_TOP((param_2 + 0x44)))) {
      uVar3 = *((uint *)GEN_TOP(((int)param_1 + 0x44)));
    }
    if (*((int *)GEN_TOP(((int)param_1 + 0x58))) != 0) {
      F_00da1010(*((undefined4 *)GEN_TOP(((int)param_1 + 0x38))),*((undefined4 *)GEN_TOP((param_2 + 0x38))),
                   *((int *)GEN_TOP(((int)param_1 + 0x58))) * uVar3);
    }
    if (*((int *)GEN_TOP(((int)param_1 + 0x54))) != 0) {
      F_00da1010(*((undefined4 *)GEN_TOP(((int)param_1 + 0x2c))),*((undefined4 *)GEN_TOP((param_2 + 0x2c))),
                   *((int *)GEN_TOP(((int)param_1 + 0x54))) * uVar3);
    }
    if (*((int *)GEN_TOP(((int)param_1 + 0x50))) != 0) {
      F_00da1010(*((undefined4 *)GEN_TOP(((int)param_1 + 0x20))),*((undefined4 *)GEN_TOP((param_2 + 0x20))),
                   *((int *)GEN_TOP(((int)param_1 + 0x50))) * uVar3);
    }
    if (*((int *)GEN_TOP(((int)param_1 + 0x4c))) != 0) {
      F_00da1010(*((undefined4 *)GEN_TOP(((int)param_1 + 0x14))),*((undefined4 *)GEN_TOP((param_2 + 0x14))),
                   *((int *)GEN_TOP(((int)param_1 + 0x4c))) * uVar3);
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)param_1 + 0x48))) != 0) {
      uVar2 = F_00da1010(*((undefined4 *)GEN_TOP(((int)param_1 + 8))),*((undefined4 *)GEN_TOP((param_2 + 8))),
                           *((int *)GEN_TOP(((int)param_1 + 0x48))) * uVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00de40e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de40e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde40e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    psVar2 = ((short *)GEN_TOP((*(int *)this + 6)));
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: FUN_00de4130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    psVar2 = ((short *)GEN_TOP((*(int *)this + 6)));
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: FUN_00de4180 */
GEN_LIB GEN_FRAME unsigned int F_00de4180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined2 *)GEN_TOP((param_1 + 6)));
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined2 *)&REFG(undefined, 0x6)) {
        *(undefined4 *)(puVar1 - 3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
      }
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00de41c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de41c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde41c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de4210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00de4250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de4250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde4250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de42a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de42a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde42a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00de42e0 */
GEN_LIB GEN_FRAME uint F_00de42e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde42e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de4310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de4310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde4310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 100)));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x5c))),iVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0x80000000;
  uVar2 = F_00ddd4c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxVertexBuffer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[0x19];
  param_1[0x18] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[0x17],iVar1 << 4);
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0x80000000;
  F_00ddd4c0(param_1 + 2 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00de4420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4420(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de4440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00de4480 */
GEN_LIB GEN_FRAME unsigned int F_00de4480(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde4480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined * this;
  
  if (0 < param_3) {
    iVar1 = param_3;
    this = param_1;
    do {
      F_00de8a20(this GEN_EDX_ARG,(param_2 - (int)param_1) + (int)this);
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00de44b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de44b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde44b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de44e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde44e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de4510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + 8)));
      uVar2 = *((uint *)GEN_TOP((iVar1 + iVar3)));
      if ((uVar2 & 0xfffffffe) != 0) {
        uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1);
        if (uVar2 == 0) {
          return iVar1 + iVar3;
        }
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_8 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return 0;
}

/* ref: FUN_00de4580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (0 < *((int *)GEN_TOP(((int)this + 0xc))))) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      F_00de8230(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == ((undefined *)GEN_TOP(0x0))) {
          return (uint)param_1;
        }
        F_00d91a80((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_01059650(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: FUN_00de4610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * pvVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  F_00de4580(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  in_ecx = (*(int *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  if ((*(int *)&gen_args[1]) != 0) {
    uVar2 = F_010596b0(&(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    uVar3 = F_00d92610(in_ecx GEN_EDX_ARG);
    uVar2 = F_00da0d70(uVar3,uVar2);
    if (uVar2 != 0) {
      if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return 0;
    }
  }
  pvVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  int local_10;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  piVar1 = ((int *)GEN_TOP(((int)this + 8)));
  *piVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  iVar6 = *((int *)GEN_TOP(((int)this + 0xc)));
  iVar3 = *((int *)GEN_TOP((param_1 + 0xc)));
  local_8 = iVar6;
  if (iVar3 <= iVar6) {
    local_8 = iVar3;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar5,0x10);
  }
  iVar6 = (iVar6 - iVar3) - 1;
  if (-1 < iVar6) {
    pvVar7 = ((undefined *)GEN_TOP((iVar6 * 0x10 + iVar3 * 0x10 + *piVar1)));
    do {
      F_00dddf50(pvVar7 GEN_EDX_ARG);
      pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 - 0x10)));
      iVar6 = iVar6 - 1;
    } while (-1 < iVar6);
  }
  pvVar7 = ((undefined *)GEN_TOP(*piVar1));
  if (0 < local_8) {
    iVar6 = *((int *)GEN_TOP((param_1 + 8))) - (int)pvVar7;
    local_10 = local_8;
    do {
      F_00de8a20(pvVar7 GEN_EDX_ARG,iVar6 + (int)pvVar7);
      pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x10)));
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  piVar2 = ((int *)GEN_TOP((param_1 + 8)));
  pvVar7 = ((undefined *)GEN_TOP((*piVar1 + local_8 * 0x10)));
  param_1 = iVar3 - local_8;
  if (0 < param_1) {
    iVar6 = (*piVar2 + local_8 * 0x10) - (int)pvVar7;
    do {
      if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
        F_00d91340(pvVar7 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 4))) = 0;
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 8))) = 0;
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 0xc))) = 0x80000000;
        F_00de8a20(pvVar7 GEN_EDX_ARG,iVar6 + (int)pvVar7);
      }
      pvVar7 = ((undefined *)GEN_TOP(((int)pvVar7 + 0x10)));
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = iVar3;
  return (uint)this;
}

/* ref: FUN_00de47a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de47a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde47a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x10 + *((int *)GEN_TOP(((int)this + 8))))));
    do {
      F_00dddf50(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de4850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d91340(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  F_00de8a20(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00de4880 */
GEN_LIB GEN_FRAME uint F_00de4880(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde4880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * this;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    uVar2 = param_2;
    this = param_1;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d91340(this GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
        uVar1 = F_00de8a20(this GEN_EDX_ARG,(param_3 - (int)param_1) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00de48d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de48d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde48d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this)));
    do {
      F_00dddf50(pvVar4 GEN_EDX_ARG);
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x10)));
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_2 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4 GEN_EDX_ARG,iVar6 + (int)pvVar4);
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x10)));
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  pvVar4 = ((undefined *)GEN_TOP((*(int *)this + iVar3 * 0x10)));
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_2 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91340(pvVar4 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 8))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0xc))) = 0x80000000;
      F_00de8a20(pvVar4 GEN_EDX_ARG,iVar3 + (int)pvVar4);
    }
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x10)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de49e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de49e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde49e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar5 = *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this)));
    do {
      F_00dddf50(pvVar4 GEN_EDX_ARG);
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 - 0x10)));
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_1 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4 GEN_EDX_ARG,iVar6 + (int)pvVar4);
      pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x10)));
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  pvVar4 = ((undefined *)GEN_TOP((*(int *)this + iVar3 * 0x10)));
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_1 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91340(pvVar4 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 8))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0xc))) = 0x80000000;
      F_00de8a20(pvVar4 GEN_EDX_ARG,iVar3 + (int)pvVar4);
    }
    pvVar4 = ((undefined *)GEN_TOP(((int)pvVar4 + 0x10)));
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de4af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4af0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4b00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b60 */
GEN_LIB GEN_FRAME unsigned int F_00de4b60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde4b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00de4b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00de4bb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de4bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (*(undefined * PTR32 *)this != param_1) {
    if (param_1 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(param_1 GEN_EDX_FWD);
    }
    if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)this = param_1;
  }
  return;
}

/* ref: FUN_00de4be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * this_00;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (this_00 == (*(undefined * PTR32 *)&gen_args[1])) {
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this_00 GEN_EDX_FWD);
    }
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    do {
      F_00de4be0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 4))) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[1]),pvVar1);
      if ((*(undefined * PTR32 *)&gen_args[1]) != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)&gen_args[1]);
        if ((*(undefined * PTR32 *)&gen_args[1]) != ((undefined *)GEN_TOP(0x0))) {
          F_00d91a80((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        }
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00de4c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if ((pvVar1 == param_1) && (pvVar1 != param_2)) {
    if (param_2 != ((undefined *)GEN_TOP(0x0))) {
      pvVar1 = ((undefined *)GEN_TOP(F_00d919e0(param_2 GEN_EDX_FWD)));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
      pvVar1 = ((undefined *)GEN_TOP(F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG)));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) = param_2;
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    do {
      pvVar1 = ((undefined *)GEN_TOP(F_00de4c60(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 4))) GEN_EDX_ARG,param_1,
                                    param_2)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de4cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde4cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *((uint *)GEN_TOP((in_ecx + 0x2c)));
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar1 = F_00de4cc0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x28))) + iVar3 * 4))) GEN_EDX_FWD);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + uVar1;
    } while (iVar3 < *((int *)GEN_TOP((in_ecx + 0x2c))));
  }
  return uVar2;
}

/* ref: FUN_00de4cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    do {
      uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar3 * 4)));
      uVar2 = *((uint *)GEN_TOP((uVar1 + 0x14)));
      if (((uVar2 & 0xfffffffe) != 0) &&
         (uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1), uVar2 == 0)) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  return 0;
}

/* ref: FUN_00de4d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 4)));
      if (((*((uint *)GEN_TOP(((int)this_00 + 0x14))) & 0xfffffffe) != 0) &&
         (uVar1 = F_00da0d70(*((uint *)GEN_TOP(((int)this_00 + 0x14))) & 0xfffffffe,param_1), uVar1 == 0)) {
        return (uint)this_00;
      }
      uVar1 = F_00de4d50(this_00 GEN_EDX_ARG,param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x2c))));
  }
  return 0;
}

/* ref: FUN_00de4dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
  }
  *((undefined * PTR32 *)GEN_TOP((*param_2 + param_2[1] * 4))) = this;
  uVar1 = 1;
  param_2[1] = param_2[1] + 1;
  if (this != param_1) {
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
      do {
        uVar1 = F_00de4dc0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 4))) GEN_EDX_ARG,param_1,param_2);
        if (uVar1 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x2c))));
    }
    param_2[1] = param_2[1] - 1;
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de4e40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de4e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde4e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x38))) - 1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4 + iVar3 * 8)));
    do {
      F_00d91510(pvVar2 GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 8)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x3c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x34))),iVar3 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x2c))) - 1;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x28)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar3 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar4 * 4))) = 0;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x28))),uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x24))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),
               *((uint *)GEN_TOP(((int)this + 0x24))) << 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  uVar1 = F_00de47a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00de4f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde4f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00de4f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde4f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de4fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de4fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde4fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de5020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5020(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde5020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00de5060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5060(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (this != param_1) {
    this_00 = ((undefined *)GEN_TOP(*param_1));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00d919e0(this_00 GEN_EDX_FWD)));
    }
    if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG)));
    }
    *(undefined * PTR32 *)this = this_00;
  }
  return (uint)puVar1;
}

/* ref: FUN_00de50c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00de50c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde50c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if ((*((int *)GEN_TOP((param_3 + 4))) <= *((int *)GEN_TOP((param_2 + 4)))) &&
     ((*((int *)GEN_TOP((param_2 + 4))) != *((int *)GEN_TOP((param_3 + 4))) ||
      (*((int *)GEN_TOP((param_3 + 8))) <= *((int *)GEN_TOP((param_2 + 8))))))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00de5100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + iVar1 * 8)));
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar2 = piVar2 - 2;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00de5130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + iVar1 * 8)));
    do {
      if (*piVar2 == param_2) {
        *param_1 = 1;
        return (uint)param_1;
      }
      piVar2 = piVar2 - 2;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00de5170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde5170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00de5560(*((undefined4 *)GEN_TOP(((int)this + 0x18))),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),this);
  return uVar1;
}

/* ref: FUN_00de5190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = (*(undefined4 *)&gen_args[0]);
  pcVar4 = ((char *)GEN_TOP(F_00de5130(this GEN_EDX_FWD,(int)&(*(undefined4 *)&gen_args[0]) + 3,(*(undefined4 *)&gen_args[0]))));
  if (*pcVar4 == '\0') {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x84)));
    iVar1 = iVar2 + 1;
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x88))) & 0x3fffffff;
    if ((int)uVar5 < iVar1) {
      iVar6 = uVar5 * 2;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x80))),iVar6,8);
    }
    *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
    pcVar4 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + iVar2 * 8)));
    *(undefined4 *)pcVar4 = uVar3;
    *(undefined4 *)(pcVar4 + 4) = (*(undefined4 *)&gen_args[1]);
  }
  return (uint)pcVar4;
}

/* ref: FUN_00de5200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de5200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde5200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if (-1 < iVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x80))),iVar4 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7c))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x7c))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x74))) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x70)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar4 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar4 + 4 + iVar3 * 4))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x78)));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  if (-1 < iVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x70))),iVar4 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  if (-1 < iVar4) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + iVar4 * 0xc)));
    do {
      if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
      }
      *puVar2 = 0;
      puVar2 = puVar2 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  uVar1 = F_00de47a0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00de5330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de5360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (this != param_1) {
    this_00 = ((undefined *)GEN_TOP(*param_1));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(this_00 GEN_EDX_FWD);
    }
    if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)this = this_00;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de53a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de53a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde53a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
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

/* ref: FUN_00de53e0 */
GEN_LIB GEN_FRAME uint F_00de53e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * PTR32 * ppvVar4;
  int iVar5;
  undefined * pvVar6;
  int iVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = ((undefined4 *)GEN_TOP((param_1 - 0xc + param_2 * 0xc)));
  if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(puVar2[2]));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(puVar2[1]));
  iVar7 = param_3 / 2;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(*puVar2));
  (*(int *)(gen_frame + 0xc)) = iVar7;
  iVar9 = param_2;
  if (param_2 <= iVar7) {
    do {
      iVar10 = iVar9 * 2;
      if (iVar10 < param_3) {
        iVar5 = *((int *)GEN_TOP((param_1 - 8 + iVar9 * 0x18)));
        iVar1 = param_1 + iVar9 * 0x18;
        if ((iVar5 < *((int *)GEN_TOP((iVar1 + 4)))) ||
           ((iVar5 == *((int *)GEN_TOP((iVar1 + 4))) && (*((int *)GEN_TOP((iVar1 - 4))) < *((int *)GEN_TOP((iVar1 + 8))))))) {
          iVar10 = iVar10 + 1;
        }
      }
      puVar2 = ((undefined4 *)GEN_TOP((param_1 - 0xc + iVar10 * 0xc)));
      if (((int)puVar2[1] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) &&
         (((*(undefined * PTR32 *)(gen_frame + 0x4)) != ((undefined *)GEN_TOP(puVar2[1])) || ((int)puVar2[2] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x8)))))) break;
      puVar3 = ((undefined4 *)GEN_TOP((param_1 - 0xc + iVar9 * 0xc)));
      if (puVar3 != puVar2) {
        pvVar6 = ((undefined *)GEN_TOP(*puVar2));
        if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(pvVar6 GEN_EDX_ARG);
          iVar7 = (*(int *)(gen_frame + 0xc));
        }
        if (((undefined *)GEN_TOP(*puVar3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d91a80(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
          iVar7 = (*(int *)(gen_frame + 0xc));
        }
        *puVar3 = pvVar6;
      }
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      iVar9 = iVar10;
    } while (iVar10 <= iVar7);
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  ppvVar4 = ((undefined * PTR32 *)GEN_TOP((param_1 - 0xc + iVar9 * 0xc)));
  if (ppvVar4 != &(*(undefined * PTR32 *)(gen_frame + 0x0))) {
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if (*ppvVar4 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(*ppvVar4 GEN_EDX_ARG);
    }
    *ppvVar4 = pvVar6;
  }
  ppvVar4[1] = (*(undefined * PTR32 *)(gen_frame + 0x4));
  ppvVar4[2] = (*(undefined * PTR32 *)(gen_frame + 0x8));
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
    pvVar8 = ((undefined *)GEN_TOP(F_00d91a80(pvVar6 GEN_EDX_ARG)));
  }
  return (uint)pvVar8;
}

/* ref: FUN_00de5510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,8);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de5560 */
GEN_LIB GEN_FRAME uint F_00de5560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde5560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 - (param_2 >> 0x1f);
  (*(int *)(gen_frame + 0xc)) = param_2;
  for (iVar3 = param_2 / 2; 0 < iVar3; iVar3 = iVar3 - 1) {
    uVar2 = F_00de53e0(param_1,iVar3,param_2,param_3);
  }
  if (0 < param_2) {
    param_2 = param_2 * 0xc;
    do {
      if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
      }
      this = ((undefined *)GEN_TOP(*param_1));
      puVar1 = ((undefined4 *)GEN_TOP((param_2 - 0xc + (int)param_1)));
      (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
      if (param_1 != puVar1) {
        this_00 = ((undefined *)GEN_TOP(*puVar1));
        (*(undefined * PTR32 *)(gen_frame + 0x10)) = this_00;
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(this_00 GEN_EDX_ARG);
        }
        if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
        }
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      }
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
      if (puVar1 != &(*(undefined4 *)(gen_frame + 0x0))) {
        if (this != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(this GEN_EDX_ARG);
        }
        if (((undefined *)GEN_TOP(*puVar1)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d91a80(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_ARG);
        }
        *puVar1 = this;
      }
      param_2 = param_2 - 0xc;
      puVar1[1] = (*(undefined4 *)(gen_frame + 0x4));
      puVar1[2] = (*(undefined4 *)(gen_frame + 0x8));
      iVar3 = (*(int *)(gen_frame + 0xc)) - 1;
      (*(int *)(gen_frame + 0xc)) = iVar3;
      uVar2 = F_00de53e0(param_1,1,iVar3,param_3);
      if (this != ((undefined *)GEN_TOP(0x0))) {
        uVar2 = F_00d91a80(this GEN_EDX_ARG);
      }
    } while (0 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_00de5670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,8);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de56c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de56c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde56c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00de56e0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00de56e0(GEN_P(char * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde56e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  
  cVar1 = *in_ecx;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (((cVar1 < '!') || (cVar1 == '=')) || (cVar1 == ';')) break;
    cVar1 = in_ecx[1];
    in_ecx = in_ecx + 1;
  }
  return 1;
}

/* ref: FUN_00de5700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return 0xffffffff;
}

/* ref: FUN_00de5760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de5780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + 4 + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de57a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de57a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde57a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint in_ecx;
  undefined1 * puVar5;
  
  uVar2 = F_00da4850(param_1 GEN_EDX_FWD);
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar4 * 8))) & 0xfffffffe;
      in_ecx = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar4 * 8))) & 0xfffffffe;
      bVar1 = F_00de56e0(uVar2 GEN_EDX_ARG);
      puVar5 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar5 = &REFG(undefined1, 0x107fc63);
      }
      bVar1 = F_00de56e0(in_ecx GEN_EDX_ARG);
      puVar3 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar3 = &REFG(undefined1, 0x107fc63);
      }
      uVar2 = F_00da53f0(param_1,((char *)REFP(0x114b538)),puVar5,uVar2,puVar5,puVar3,in_ecx,puVar3);
      if (iVar4 < *((int *)GEN_TOP(((int)this + 0xc))) - 1) {
        uVar2 = F_00da4d70(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114b534));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return uVar2;
}

/* ref: FUN_00de5840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de5700(this GEN_EDX_FWD,param_1);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + uVar1 * 8))) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00de5870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar1 = F_00de5700(this GEN_EDX_FWD,param_1);
  if (param_2 == 0) {
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    pvVar6 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar1 * 8)));
    F_00d91510(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG);
    F_00d91510(pvVar6 GEN_EDX_ARG);
    uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    if (uVar2 != uVar1) {
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar1 * 8)));
      iVar4 = (*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 8) - (int)puVar3;
      iVar5 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xffffffff) {
      F_00d91520(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + uVar1 * 8))) GEN_EDX_ARG,param_2);
      return 0;
    }
    F_00d91340(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00d91340(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00d91520(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    F_00d91520(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_2);
    if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 8))),8);
    }
    pvVar6 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))) * 8)));
    if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
      F_00d914e0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d914e0(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    F_00d91510(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00d91510(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00de59a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde59a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00de59e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde59e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x338, 8);
  char cVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 * puVar11;
  undefined * puVar12;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
  (*(uint *)(gen_frame + 0x208)) = 0x80000080;
  (*(uint *)(gen_frame + 0x294)) = 0x80000080;
  (*(undefined * PTR32 *)(gen_frame + 0x328)) = this;
  iVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 1;
  ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)(gen_frame + 0x298));
  (*(undefined4 *)(gen_frame + 0x290)) = 1;
  ((undefined1 *)(gen_frame + 0x298))[0] = 0;
  uVar3 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x324)) = uVar3;
  iVar8 = 0;
  do {
    iVar7 = 4;
    if (iVar10 < (int)(*(uint *)(gen_frame + 0x324))) {
      cVar1 = *((char *)GEN_TOP((iVar10 + param_1)));
      if (cVar1 < '!') {
        iVar7 = 0;
      }
      if (cVar1 == '\"') {
        iVar7 = 1;
      }
      else if (cVar1 == '=') {
        iVar7 = 2;
      }
      else if (cVar1 == ';') {
        iVar7 = 3;
      }
    }
    else {
      iVar7 = 5;
    }
    iVar6 = 6;
    iVar9 = 9;
    piVar4 = &REFG(undefined4, 0x114b5d4);
    do {
      if ((piVar4[-1] == iVar8) && (*piVar4 == iVar7)) {
        iVar9 = piVar4[1];
        iVar6 = piVar4[2];
      }
      if ((piVar4[3] == iVar8) && (piVar4[4] == iVar7)) {
        iVar9 = piVar4[5];
        iVar6 = piVar4[6];
      }
      if ((piVar4[7] == iVar8) && (piVar4[8] == iVar7)) {
        iVar9 = piVar4[9];
        iVar6 = piVar4[10];
      }
      if ((piVar4[0xb] == iVar8) && (piVar4[0xc] == iVar7)) {
        iVar9 = piVar4[0xd];
        iVar6 = piVar4[0xe];
      }
      piVar4 = piVar4 + 0x10;
    } while ((int)piVar4 < 0x114b7d4);
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 0: ;
      break;
    case 1: ;
      (*(undefined1 *)(gen_frame + 0x32c)) = *((undefined1 *)GEN_TOP((iVar10 + param_1)));
      (*(undefined1 *)(gen_frame + 0x32d)) = 0;
      F_00da4d70(&(*(undefined1 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x32c)));
      break;
    case 2: ;
      (*(undefined1 *)(gen_frame + 0x330)) = *((undefined1 *)GEN_TOP((iVar10 + param_1)));
      (*(undefined1 *)(gen_frame + 0x331)) = 0;
      F_00da4d70(&(*(undefined1 * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x330)));
      break;
    case 3: ;
      puVar11 = (*(undefined1 * PTR32 *)(gen_frame + 0x28c));
      goto LAB_00de5b4e;
    case 4: ;
      puVar11 = ((undefined1 *)GEN_TOP(0x0));
LAB_00de5b4e: ;
      F_00de5870((*(undefined * PTR32 *)(gen_frame + 0x328)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x200)),puVar11);
      uVar3 = F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
      F_00da4cf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,uVar3);
      break;
    case 5: ;
      goto switchD_00de5af2_caseD_5;
    case 6: ;
      F_00da0a80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      puVar12 = &REFG(undefined, 0x11264a4);
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((char *)REFP(0x114b5ac)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,param_1)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,puVar12);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba7881,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b58c)),0x134);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      goto joined_r0x00de5cf7;
    default: ;
      F_00da0a80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      puVar12 = &REFG(undefined, 0x11264a4);
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,
                                    ((char *)REFP(0x114b54c)))))
      ;
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,param_1)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,puVar12);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba0032,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b58c)),0x140);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
joined_r0x00de5cf7: ;
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x294))) {
        (*(undefined4 *)(gen_frame + 0x290)) = 0;
        pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)));
        (*pcVar2)(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x28c)),(*(uint *)(gen_frame + 0x294)) & 0x3fffffff);
      }
      (*(undefined4 *)(gen_frame + 0x204)) = 0;
      (*(uint *)(gen_frame + 0x294)) = 0x80000000;
      (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)GEN_TOP(0x0));
      if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
      }
      return 1;
    }
    iVar10 = iVar10 + 1;
switchD_00de5af2_caseD_5: ;
    iVar8 = iVar9;
    if (iVar9 == 8) {
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x294))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x28c)),(*(uint *)(gen_frame + 0x294)) & 0x3fffffff);
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x294)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x204)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00de5db0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de5db0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7d4));
  return (uint)in_ecx;
}

/* ref: FUN_00de5e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d914e0(this GEN_EDX_FWD,param_1);
  F_00d914e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00de5e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00de5e90 */
GEN_LIB GEN_FRAME uint F_00de5e90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00de5ed0 */
GEN_LIB GEN_FRAME unsigned int F_00de5ed0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde5ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d914e0(this GEN_EDX_ARG,param_3);
        F_00d914e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_3 + 4);
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00de5f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_2);
    uVar1 = F_00d914e0(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_2 + 4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00de5f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_1);
    uVar1 = F_00d914e0(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_1 + 4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00de5fd0 */
GEN_LIB GEN_FRAME unsigned int F_00de5fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00de6000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00de6030 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de6030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*(int *)this + param_1 * 8)));
  F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
  F_00d91510(this_00 GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00de6090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de61e0 */
GEN_LIB GEN_FRAME uint F_00de61e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde61e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de6210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEnvironment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6280(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de6210(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de62c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de62c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde62c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_01059680(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: FUN_00de62d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de62d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde62d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  return in_ecx;
}

/* ref: FUN_00de62f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de62f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde62f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00de6330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6330(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00de6450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6450(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de64a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde64a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de64d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde64d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00de4dc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00de64e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde64e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((param_1 != 0) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x14)));
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar1 = F_00da0d70(uVar1 & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP(((int)this + 0x14)));
      }
    }
    uVar1 = F_00de4d50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de6760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91340(in_ecx + 2 GEN_EDX_FWD);
  F_00d91340(in_ecx + 3 GEN_EDX_ARG);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0x80000000;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0x80000000;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0x80000000;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0x80000000;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0x80000000;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0x80000000;
  *(undefined8 *)(in_ecx + 0x20) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x20), REFG(float, 0x1138c70));
  *(undefined8 *)(in_ecx + 0x22) = REFG(undefined8, 0x1138c78);
  *(undefined8 *)(in_ecx + 0x24) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x24), REFG(float, 0x1138c80));
  *(undefined8 *)(in_ecx + 0x26) = REFG(undefined8, 0x1138c88);
  *(undefined8 *)(in_ecx + 0x28) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x28), REFG(float, 0x1138c90));
  *(undefined8 *)(in_ecx + 0x2a) = REFG(undefined8, 0x1138c98);
  return (uint)in_ecx;
}

/* ref: FUN_00de6840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x70))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x6c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 100))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x60)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x68)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x60))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x54)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x54))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x4c))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x3c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x34))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x38)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x30))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x28))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  uVar3 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de6c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de6dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6e00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6e40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00de6ea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
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

/* ref: FUN_00de7000 */
GEN_LIB GEN_FRAME unsigned int F_00de7000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde7000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00de7040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7090 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de7090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de70b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de70b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde70b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de7110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de7150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xde7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 * puVar5;
  int iVar6;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar6 = (iVar4 - param_3) + param_5;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP(F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                        (param_3 + param_2) * 0x10 + *(int *)this,
                        ((iVar4 - param_2) - param_3) * 0x10)));
  puVar5 = ((undefined8 *)GEN_TOP((param_2 * 0x10 + *(int *)this)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar5;
    puVar1 = puVar5;
    iVar4 = param_5;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  return (uint)puVar1;
}

/* ref: FUN_00de7200 */
GEN_LIB GEN_FRAME unsigned int F_00de7200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de7230 */
GEN_LIB GEN_FRAME unsigned int F_00de7230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00de7260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      F_00de9210(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1 * 4))) GEN_EDX_FWD,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return;
}

/* ref: FUN_00de7290 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < *((int *)GEN_TOP(((int)this + 0x18))))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x14)));
    iVar1 = param_1 * 4;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar3 GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
    if (*((int *)GEN_TOP(((int)this + 0x18))) != param_1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar1))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x18))) * 4)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
    while (iVar1 = iVar1 - 1, -1 < iVar1) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1 * 4)));
      iVar4 = *((int *)GEN_TOP((iVar2 + 0x1c)));
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((iVar4 + param_1 * 4)));
      if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(pvVar3 GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP((iVar4 + param_1 * 4))) = 0;
      *((int *)GEN_TOP((iVar2 + 0x20))) = *((int *)GEN_TOP((iVar2 + 0x20))) - 1;
      if (*((int *)GEN_TOP((iVar2 + 0x20))) != param_1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + param_1 * 4))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + *((int *)GEN_TOP((iVar2 + 0x20))) * 4)));
      }
    }
  }
  return;
}

/* ref: FUN_00de7350 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
      if (param_2 != ((int *)GEN_TOP(0x0))) {
        iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8))) + (*(int *)(gen_frame + 0x20)) * 4))) + 0x18)));
        uVar1 = param_2[1];
        uVar2 = 0;
        if (0 < (int)uVar1) {
          piVar6 = ((int *)GEN_TOP(*param_2));
          do {
            if (*piVar6 == iVar5) {
              (*(uint *)(gen_frame + 0x1c)) = uVar2;
              if (uVar2 != 0xffffffff) goto LAB_00de73e3;
              break;
            }
            uVar2 = uVar2 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar2 < (int)uVar1);
        }
        (*(uint *)(gen_frame + 0x1c)) = uVar1;
        if (uVar1 == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
        }
        *((int *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar5;
        param_2[1] = param_2[1] + 1;
      }
LAB_00de73e3: ;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0x80000000;
      (*(uint *)(gen_frame + 0x14)) = 0x80000000;
      F_00de92f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8))) + (*(int *)(gen_frame + 0x20)) * 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x1c)));
      iVar5 = 0;
      if (0 < (*(int *)(gen_frame + 0x10))) {
        iVar3 = 0;
        do {
          *((int *)GEN_TOP((iVar3 + (*(int *)(gen_frame + 0xc))))) = *((int *)GEN_TOP((iVar3 + (*(int *)(gen_frame + 0xc))))) + iVar4;
          piVar6 = ((int *)GEN_TOP((iVar3 + 4 + (*(int *)(gen_frame + 0xc)))));
          *piVar6 = *piVar6 + iVar4;
          piVar6 = ((int *)GEN_TOP((iVar3 + 8 + (*(int *)(gen_frame + 0xc)))));
          *piVar6 = *piVar6 + iVar4;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar5 < (*(int *)(gen_frame + 0x10)));
      }
      F_00de7780(param_1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      F_00de7600(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),
                   *((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
      if (((*(uint *)(gen_frame + 0x14)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) << 4);
      }
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
      }
      iVar4 = (*(int *)(gen_frame + 0x20)) + 1;
      (*(int *)(gen_frame + 0x20)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xc))));
  }
  return;
}

/* ref: FUN_00de74e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de74e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde74e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  return (uint)in_ecx;
}

/* ref: FUN_00de74f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de75c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde75c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de7600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde7600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00de7150(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

