#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00de2970 */
uint F_00de2970(unsigned int gen_a0)
{
  GEN_ENTER(0xde2970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2980 */
unsigned int F_00de2980(unsigned int gen_a0)
{
  GEN_ENTER(0xde2980u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b188));
  }
  return 0;
}

/* ref: FUN_00de29a0 */
uint F_00de29a0(void)
{
  GEN_ENTER(0xde29a0u, 0u, 0u, 0u, 0u);
  return 0x114b188;
}

/* ref: FUN_00de29c0 */
uint F_00de29c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde29c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de29f0 */
uint F_00de29f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde29f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEdgeSelectionChannel::vf0 */
uint F_00de2a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ab0 */
uint F_00de2ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2af0 */
unsigned int F_00de2af0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2af0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b284));
  }
  return 0;
}

/* ref: FUN_00de2b10 */
uint F_00de2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2b20 */
uint F_00de2b20(void)
{
  GEN_ENTER(0xde2b20u, 0u, 0u, 0u, 0u);
  return 0x114b284;
}

/* ref: FUN_00de2b30 */
uint F_00de2b30(unsigned int gen_a0)
{
  GEN_ENTER(0xde2b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxCamera::vf0 */
uint F_00de2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ba0 */
uint F_00de2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2bc0 */
uint F_00de2bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2bd0 */
uint F_00de2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
    param_1[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
    uVar1 = F_00d91350(param_1 + 7,param_2);
  }
  return uVar1;
}

/* ref: FUN_00de2c00 */
uint F_00de2c00(void)
{
  GEN_ENTER(0xde2c00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0xc)),0);
  return 0x114b2e0;
}

/* ref: FUN_00de2c50 */
uint F_00de2c50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de2c80 */
uint F_00de2c80(unsigned int gen_a0)
{
  GEN_ENTER(0xde2c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de2cd0 */
uint F_00de2cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x114b2e0));
  in_ecx[2] = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  F_00d91350(in_ecx + 7,param_2);
  return (uint)in_ecx;
}

/* ref: hkxBlobMeshShape::vf3 */
uint F_00de2d00(void)
{
  GEN_ENTER(0xde2d00u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkxBlobMeshShape::vf4 */
unsigned int F_00de2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkxBlobMeshShape::vf5 */
unsigned int F_00de2d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkxBlobMeshShape::vf7 */
uint F_00de2d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0x1c,param_1);
  return uVar1;
}

/* ref: hkxBlobMeshShape::vf2 */
uint F_00de2d40(void)
{
  GEN_ENTER(0xde2d40u, 0u, 0u, 0u, 0u);
  return 0x15e32e4;
}

/* ref: FUN_00de2d50 */
uint F_00de2d50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxBlobMeshShape::vf6 */
uint F_00de2d80(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c) & 0xfffffffe;
}

/* ref: FUN_00de2d90 */
uint F_00de2d90(unsigned int gen_a0)
{
  GEN_ENTER(0xde2d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c));
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxBlob::vf0 */
uint F_00de2de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < (int)*(uint *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(uint *)(this + 0x10) & 0x3fffffff);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxBlobMeshShape::vf0 */
uint F_00de2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x1c);
  *(undefined4 *)(this + 0x14) = 0;
  if (-1 < (int)*(uint *)(this + 0x18)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x10),
               *(uint *)(this + 0x18) & 0x3fffffff);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de2ed0 */
uint F_00de2ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2ef0 */
uint F_00de2ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2f00 */
unsigned int F_00de2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b2d0));
  }
  return 0;
}

/* ref: FUN_00de2f20 */
uint F_00de2f20(void)
{
  GEN_ENTER(0xde2f20u, 0u, 0u, 0u, 0u);
  return 0x114b2d0;
}

/* ref: FUN_00de2f30 */
uint F_00de2f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2f50 */
uint F_00de2f50(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2f60 */
unsigned int F_00de2f60(unsigned int gen_a0)
{
  GEN_ENTER(0xde2f60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  }
  return 0;
}

/* ref: FUN_00de2f80 */
uint F_00de2f80(void)
{
  GEN_ENTER(0xde2f80u, 0u, 0u, 0u, 0u);
  return 0x1149bf4;
}

/* ref: FUN_00de2f90 */
uint F_00de2f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde2f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de2fb0 */
uint F_00de2fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de2fc0 */
unsigned int F_00de2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde2fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b378));
  }
  return 0;
}

/* ref: FUN_00de2fe0 */
uint F_00de2fe0(void)
{
  GEN_ENTER(0xde2fe0u, 0u, 0u, 0u, 0u);
  return 0x114b378;
}

/* ref: FUN_00de3010 */
uint F_00de3010(unsigned int gen_a0)
{
  GEN_ENTER(0xde3010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de3040 */
uint F_00de3040(unsigned int gen_a0)
{
  GEN_ENTER(0xde3040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedVector::vf0 */
uint F_00de3090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3100 */
uint F_00de3100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3120 */
uint F_00de3120(unsigned int gen_a0)
{
  GEN_ENTER(0xde3120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de3130 */
unsigned int F_00de3130(unsigned int gen_a0)
{
  GEN_ENTER(0xde3130u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3c0));
  }
  return 0;
}

/* ref: FUN_00de3150 */
uint F_00de3150(void)
{
  GEN_ENTER(0xde3150u, 0u, 0u, 0u, 0u);
  return 0x114b3c0;
}

/* ref: FUN_00de3190 */
uint F_00de3190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00de31e0 */
uint F_00de31e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde31e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de3220 */
uint F_00de3220(unsigned int gen_a0)
{
  GEN_ENTER(0xde3220u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de3260 */
uint F_00de3260(unsigned int gen_a0)
{
  GEN_ENTER(0xde3260u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de32b0 */
uint F_00de32b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde32b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de32e0 */
uint F_00de32e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde32e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedQuaternion::vf0 */
uint F_00de3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de33a0 */
uint F_00de33a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde33a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de33c0 */
uint F_00de33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de33d0 */
unsigned int F_00de33d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde33d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b3e8));
  }
  return 0;
}

/* ref: FUN_00de33f0 */
uint F_00de33f0(void)
{
  GEN_ENTER(0xde33f0u, 0u, 0u, 0u, 0u);
  return 0x114b3e8;
}

/* ref: FUN_00de3410 */
uint F_00de3410(unsigned int gen_a0)
{
  GEN_ENTER(0xde3410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de3440 */
uint F_00de3440(unsigned int gen_a0)
{
  GEN_ENTER(0xde3440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
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

/* ref: hkxAnimatedMatrix::vf0 */
uint F_00de3490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 6);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3500 */
uint F_00de3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3520 */
uint F_00de3520(unsigned int gen_a0)
{
  GEN_ENTER(0xde3520u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de3530 */
unsigned int F_00de3530(unsigned int gen_a0)
{
  GEN_ENTER(0xde3530u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114b40c));
  }
  return 0;
}

/* ref: FUN_00de3550 */
uint F_00de3550(void)
{
  GEN_ENTER(0xde3550u, 0u, 0u, 0u, 0u);
  return 0x114b40c;
}

/* ref: FUN_00de3570 */
uint F_00de3570(unsigned int gen_a0)
{
  GEN_ENTER(0xde3570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de35a0 */
uint F_00de35a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde35a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxAnimatedFloat::vf0 */
uint F_00de35f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde35f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de3660 */
uint F_00de3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de3680 */
unsigned int F_00de3680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de80b0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00de36a0 */
uint F_00de36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde36a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de36b0 */
uint F_00de36b0(void)
{
  GEN_ENTER(0xde36b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de80b0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00de3700 */
uint F_00de3700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3700u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3730 */
uint F_00de3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3750 */
uint F_00de3750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3750u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (short)param_3;
  return param_2;
}

/* ref: FUN_00de3780 */
byte F_00de3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != param_1[1]) {
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    piVar2 = *(int * PTR32 *)this;
    psVar3 = (short *)(*param_1 + 6);
    iVar4 = *param_1 - (int)piVar2;
    do {
      if (((((short)piVar2[1] != psVar3[-1]) || (*(short *)((int)piVar2 + 6) != *psVar3)) ||
          (*piVar2 != *(int *)(iVar4 + (int)piVar2))) ||
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
uint F_00de37f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde37f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00de3800 */
uint F_00de3800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3800u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3810 */
uint F_00de3810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3810u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3830 */
uint F_00de3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3830u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de3840 */
uint F_00de3840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3840u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (short)param_3;
  return param_2;
}

/* ref: FUN_00de3860 */
uint F_00de3860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de3890 */
uint F_00de3890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)((short)param_1[1])) {
  case 1: ;
    return *param_1 + *(int *)((int)this + 0x38);
  case 2: ;
    return *param_1 + *(int *)((int)this + 0x2c);
  case 3: ;
    return *param_1 + *(int *)((int)this + 0x20);
  case 4: ;
    bVar1 = *(byte *)(param_1 + 3);
    if ((bVar1 == 3) || (bVar1 == 4)) {
      return *param_1 + *(int *)((int)this + 8);
    }
    if (bVar1 < 3) {
      return *param_1 + *(int *)((int)this + 0x14);
    }
  }
  return 0;
}

/* ref: FUN_00de3910 */
uint F_00de3910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de3890(this,param_1);
  return uVar1;
}

/* ref: FUN_00de3920 */
uint F_00de3920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde3920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = F_00de3780((undefined *)((int)this + 0x5c),(int)param_1 + 0x5c);
  (*(byte *)(gen_frame + 0x42b)) = bVar1;
  uVar2 = F_00da1030(((int *)(gen_frame + 0xc)),0,0x404);
  if ((param_3 < *(int *)((int)this + 0x44)) && (param_2 < *(int *)((int)param_1 + 0x44))) {
    if ((*(byte *)(gen_frame + 0x42b)) == 0) {
      uVar2 = 0;
      (*(uint *)(gen_frame + 0x414)) = 0;
      if (0 < *(int *)((int)this + 0x60)) {
        (*(int *)(gen_frame + 0x424)) = 0;
        do {
          iVar6 = *(int *)((int)this + 0x5c) + (*(int *)(gen_frame + 0x424));
          (*(int *)(gen_frame + 0x410)) = ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))];
          iVar3 = 0;
          (*(int *)(gen_frame + 0x420)) = 0;
          if (0 < *(int *)((int)param_1 + 0x60)) {
            iVar4 = *(int *)((int)param_1 + 0x5c);
            (*(uint *)(gen_frame + 0x41c)) = iVar4;
            (*(short * PTR32 *)(gen_frame + 0x418)) = (short *)(iVar4 + 6);
            do {
              if (*(*(short * PTR32 *)(gen_frame + 0x418)) == *(short *)(iVar6 + 6)) {
                if ((*(int *)(gen_frame + 0x420)) == ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))]) {
                  iVar4 = iVar3 * 0x10 + iVar4;
                  if ((iVar4 != 0) && (*(short *)(iVar6 + 4) == *(short *)(iVar4 + 4))) {
                    ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))] = ((int *)(gen_frame + 0xc))[(int)(*(ushort *)(iVar6 + 6))] + 1;
                    uVar2 = F_00de3890(this,iVar6);
                    (*(uint *)(gen_frame + 0x41c)) = uVar2;
                    uVar5 = F_00de3910(param_1,iVar4);
                    uVar2 = 0;
                    switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar6 + 4))) {
                    case 1: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc);
                      break;
                    case 2: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc) * 2;
                      break;
                    case 3: ;
                      uVar2 = (uint)*(byte *)(iVar4 + 0xc) * 4;
                      break;
                    case 4: ;
                      bVar1 = *(byte *)(iVar4 + 0xc);
                      if ((bVar1 == 3) || (bVar1 == 4)) {
                        uVar2 = 0x10;
                      }
                      else if (bVar1 < 3) {
                        uVar2 = (uint)bVar1 * 4;
                      }
                    }
                    F_00da1010(*(int *)(iVar6 + 8) * param_3 + (*(uint *)(gen_frame + 0x41c)),
                                 *(int *)(iVar4 + 8) * param_2 + uVar5,uVar2);
                  }
                  break;
                }
                (*(int *)(gen_frame + 0x420)) = (*(int *)(gen_frame + 0x420)) + 1;
              }
              (*(short * PTR32 *)(gen_frame + 0x418)) = (*(short * PTR32 *)(gen_frame + 0x418)) + 8;
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)((int)param_1 + 0x60));
          }
          (*(int *)(gen_frame + 0x424)) = (*(int *)(gen_frame + 0x424)) + 0x10;
          uVar2 = (*(uint *)(gen_frame + 0x414)) + 1;
          (*(uint *)(gen_frame + 0x414)) = uVar2;
        } while ((int)uVar2 < *(int *)((int)this + 0x60));
      }
    }
    else {
      iVar3 = *(int *)((int)this + 0x58);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x38),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x38),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x54);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x2c),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x2c),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x50);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x20),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x20),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x4c);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 0x14),
                             iVar3 * param_2 + *(int *)((int)param_1 + 0x14),iVar3);
      }
      iVar3 = *(int *)((int)this + 0x48);
      if (iVar3 != 0) {
        uVar2 = F_00da1010(iVar3 * param_3 + *(int *)((int)this + 8),
                             iVar3 * param_2 + *(int *)((int)param_1 + 8),iVar3);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00de3b80 */
uint F_00de3b80(unsigned int gen_a0)
{
  GEN_ENTER(0xde3b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined4 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x44) = 0;
  *(undefined4 *)(in_ecx + 0x48) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined4 *)(in_ecx + 0x50) = 0;
  return 0;
}

/* ref: FUN_00de3bb0 */
uint F_00de3bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)((int)this + 0x50) * param_1;
  *(int *)((int)this + 0x3c) = param_1;
  uVar2 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,iVar3,1);
  }
  *(int *)((int)this + 0x34) = iVar5;
  uVar6 = (uint)(*(int *)((int)this + 0x4c) * param_1) >> 1;
  uVar2 = *(uint *)((int)this + 0x2c) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x24,uVar2,2);
  }
  *(uint *)((int)this + 0x28) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x48) * param_1) >> 2;
  uVar2 = *(uint *)((int)this + 0x20) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x18,uVar2,4);
  }
  *(uint *)((int)this + 0x1c) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x44) * param_1) >> 2;
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0xc,uVar2,4);
  }
  *(uint *)((int)this + 0x10) = uVar6;
  uVar6 = (uint)(*(int *)((int)this + 0x40) * param_1) >> 4;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (uVar2 < uVar6) {
    uVar4 = uVar2 * 2;
    if (uVar2 * 2 <= uVar6) {
      uVar4 = uVar6;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar4,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(uint *)((int)this + 4) = uVar6;
  return uVar2;
}

/* ref: FUN_00de3cd0 */
uint F_00de3cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde3cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b528));
  F_00de37f0(in_ecx + 0x17,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de3cf0 */
uint F_00de3cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
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
  
  if (param_1 == *(int *)((int)this + 0x44)) {
    bVar2 = F_00de3780(param_2,(int)this + 0x5c);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  piVar1 = (int *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00de3b80((int)this + 8);
  local_c = 0;
  if (0 < param_2[1]) {
    local_8 = 0;
    do {
      iVar9 = *param_2 + local_8;
      if (*(uint *)((int)this + 0x60) == (*(uint *)((int)this + 100) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0x10);
      }
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x60) * 0x10 + *piVar1)));
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        *(undefined2 *)(puVar3 + 1) = 0;
        *(undefined2 *)((int)puVar3 + 6) = 0;
        puVar3[2] = 0;
      }
      iVar5 = *(int *)((int)this + 0x60);
      *(int *)((int)this + 0x60) = iVar5 + 1;
      puVar3 = (undefined4 *)(iVar5 * 0x10 + *piVar1);
      *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar9 + 4);
      *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)(iVar9 + 6);
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(iVar9 + 0xc);
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(iVar9 + 4))) {
      case 1: ;
        *puVar3 = *(undefined4 *)((int)this + 0x58);
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + (uint)*(byte *)(iVar9 + 0xc);
        break;
      case 2: ;
        *puVar3 = *(undefined4 *)((int)this + 0x54);
        *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + (uint)*(byte *)(iVar9 + 0xc) * 2;
        break;
      case 3: ;
        *puVar3 = *(undefined4 *)((int)this + 0x50);
        *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + (uint)*(byte *)(iVar9 + 0xc) * 4;
        break;
      case 4: ;
        bVar2 = *(byte *)(iVar9 + 0xc);
        if ((bVar2 == 3) || (bVar2 == 4)) {
          *puVar3 = *(undefined4 *)((int)this + 0x48);
          *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 0x10;
        }
        else if (bVar2 < 3) {
          *puVar3 = *(undefined4 *)((int)this + 0x4c);
          *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + (uint)*(byte *)(iVar9 + 0xc) * 4
          ;
        }
      }
      local_8 = local_8 + 0x10;
      local_c = local_c + 1;
    } while (local_c < param_2[1]);
  }
  iVar9 = 0;
  local_c = 0;
  if (0 < *(int *)((int)this + 0x60)) {
    do {
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(*piVar1 + 4 + iVar9))) {
      case 1: ;
        uVar7 = *(undefined4 *)((int)this + 0x58);
        break;
      case 2: ;
        uVar7 = *(undefined4 *)((int)this + 0x54);
        break;
      case 3: ;
        uVar7 = *(undefined4 *)((int)this + 0x50);
        break;
      case 4: ;
        bVar2 = *(byte *)(*param_2 + 0xc + iVar9);
        if ((bVar2 == 3) || (bVar2 == 4)) {
          uVar7 = *(undefined4 *)((int)this + 0x48);
        }
        else {
          if (2 < bVar2) goto switchD_00de3e46_default;
          uVar7 = *(undefined4 *)((int)this + 0x4c);
        }
        break;
      default: ;
        goto switchD_00de3e46_default;
      }
      *(undefined4 *)(*piVar1 + iVar9 + 8) = uVar7;
switchD_00de3e46_default: ;
      local_c = local_c + 1;
      iVar9 = iVar9 + 0x10;
    } while (local_c < *(int *)((int)this + 0x60));
  }
  iVar9 = *(int *)((int)this + 0x58) * param_1;
  *(int *)((int)this + 0x44) = param_1;
  uVar4 = *(uint *)((int)this + 0x40) & 0x3fffffff;
  if ((int)uVar4 < iVar9) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x38,iVar5,1);
  }
  *(int *)((int)this + 0x3c) = iVar9;
  uVar8 = (uint)(*(int *)((int)this + 0x54) * param_1) >> 1;
  uVar4 = *(uint *)((int)this + 0x34) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x2c,uVar4,2);
  }
  *(uint *)((int)this + 0x30) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x50) * param_1) >> 2;
  uVar4 = *(uint *)((int)this + 0x28) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x20,uVar4,4);
  }
  *(uint *)((int)this + 0x24) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x4c) * param_1) >> 2;
  uVar4 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x14,uVar4,4);
  }
  *(uint *)((int)this + 0x18) = uVar8;
  uVar8 = (uint)(*(int *)((int)this + 0x48) * param_1) >> 4;
  uVar4 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar6 = uVar4 * 2;
    if (uVar4 * 2 <= uVar8) {
      uVar6 = uVar8;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 8,uVar6,0x10);
    uVar4 = CONCAT31(extraout_var_00,bVar2);
  }
  *(uint *)((int)this + 0xc) = uVar8;
  return uVar4;
}

/* ref: FUN_00de3fc0 */
uint F_00de3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00de3780((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((char)param_2 != '\0') {
    uVar2 = F_00de3cf0(this,*(undefined4 *)(param_1 + 0x44),(undefined *)((int)this + 0x5c));
  }
  if (bVar1 == 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      do {
        uVar2 = F_00de3920(this,param_1,uVar3,uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x44));
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x44);
    if (*(uint *)((int)this + 0x44) <= *(uint *)(param_1 + 0x44)) {
      uVar3 = *(uint *)((int)this + 0x44);
    }
    if (*(int *)((int)this + 0x58) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x38),*(undefined4 *)(param_1 + 0x38),
                   *(int *)((int)this + 0x58) * uVar3);
    }
    if (*(int *)((int)this + 0x54) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x2c),*(undefined4 *)(param_1 + 0x2c),
                   *(int *)((int)this + 0x54) * uVar3);
    }
    if (*(int *)((int)this + 0x50) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x20),*(undefined4 *)(param_1 + 0x20),
                   *(int *)((int)this + 0x50) * uVar3);
    }
    if (*(int *)((int)this + 0x4c) != 0) {
      F_00da1010(*(undefined4 *)((int)this + 0x14),*(undefined4 *)(param_1 + 0x14),
                   *(int *)((int)this + 0x4c) * uVar3);
    }
    uVar2 = 0;
    if (*(int *)((int)this + 0x48) != 0) {
      uVar2 = F_00da1010(*(undefined4 *)((int)this + 8),*(undefined4 *)(param_1 + 8),
                           *(int *)((int)this + 0x48) * uVar3);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00de40e0 */
uint F_00de40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde40e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    psVar2 = (short *)(*(int *)this + 6);
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00de4130 */
uint F_00de4130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    psVar2 = (short *)(*(int *)this + 6);
    do {
      if (*psVar2 == (short)param_1) {
        if (iVar3 == param_2) {
          return iVar1 * 0x10 + *(int *)this;
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 8;
    } while (iVar1 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00de4180 */
unsigned int F_00de4180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined2 *)(param_1 + 6);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined2 *)&REFG(undefined, 0x6)) {
        *(undefined4 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
      }
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00de41c0 */
uint F_00de41c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde41c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de4210 */
uint F_00de4210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4210u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00de4250 */
uint F_00de4250(unsigned int gen_a0)
{
  GEN_ENTER(0xde4250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00de42a0 */
uint F_00de42a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde42a0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00de42e0 */
uint F_00de42e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde42e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de4310 */
uint F_00de4310(unsigned int gen_a0)
{
  GEN_ENTER(0xde4310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x60) = 0;
  if (-1 < *(int *)((int)this + 100)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),
               *(int *)((int)this + 100) << 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  uVar1 = F_00ddd4c0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxVertexBuffer::vf0 */
uint F_00de4360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0x60) = 0;
  if (-1 < *(int *)(this + 100)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x5c),*(int *)(this + 100) << 4);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0x80000000;
  F_00ddd4c0(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de4420 */
uint F_00de4420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de4440 */
uint F_00de4440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4440u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00de4480 */
unsigned int F_00de4480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined * this;
  
  if (0 < param_3) {
    iVar1 = param_3;
    this = param_1;
    do {
      F_00de8a20(this,(param_2 - (int)param_1) + (int)this);
      this = (undefined *)((int)this + 0x10);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de44b0 */
uint F_00de44b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de44e0 */
uint F_00de44e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde44e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de4510 */
uint F_00de4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  iVar3 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_8 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar1 = *(int *)((int)this + 8);
      uVar2 = *(uint *)(iVar1 + iVar3);
      if ((uVar2 & 0xfffffffe) != 0) {
        uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1);
        if (uVar2 == 0) {
          return iVar1 + iVar3;
        }
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_8 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00de4580 */
uint F_00de4580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) && (0 < *(int *)((int)this + 0xc))) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      F_00de8230(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
        F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x8)));
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x0) {
          return (uint)param_1;
        }
        F_00d91a80((*(undefined * PTR32 *)(gen_frame + 0x8)));
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_01059650(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: FUN_00de4610 */
uint F_00de4610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4610u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return 0;
  }
  F_00de4580((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[1]));
  in_ecx = (*(int *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return 0;
  }
  if ((*(int *)&gen_args[2]) != 0) {
    uVar2 = F_010596b0(&(*(undefined * PTR32 *)&gen_args[1]));
    uVar2 = F_00d92610(uVar2);
    uVar3 = F_00d92610(in_ecx);
    uVar2 = F_00da0d70(uVar3,uVar2);
    if (uVar2 != 0) {
      if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
        return 0;
      }
      F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
      return 0;
    }
  }
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4680 */
uint F_00de4680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
  *(undefined2 *)((int)this + 6) = 1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  iVar6 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)(param_1 + 0xc);
  local_8 = iVar6;
  if (iVar3 <= iVar6) {
    local_8 = iVar3;
  }
  uVar4 = *(uint *)((int)this + 0x10) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar5,0x10);
  }
  iVar6 = (iVar6 - iVar3) + -1;
  if (-1 < iVar6) {
    pvVar7 = (undefined *)(iVar6 * 0x10 + iVar3 * 0x10 + *piVar1);
    do {
      F_00dddf50(pvVar7);
      pvVar7 = (undefined *)((int)pvVar7 + -0x10);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  pvVar7 = (undefined *)*piVar1;
  if (0 < local_8) {
    iVar6 = *(int *)(param_1 + 8) - (int)pvVar7;
    local_10 = local_8;
    do {
      F_00de8a20(pvVar7,iVar6 + (int)pvVar7);
      pvVar7 = (undefined *)((int)pvVar7 + 0x10);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar2 = (int *)(param_1 + 8);
  pvVar7 = (undefined *)(*piVar1 + local_8 * 0x10);
  param_1 = iVar3 - local_8;
  if (0 < param_1) {
    iVar6 = (*piVar2 + local_8 * 0x10) - (int)pvVar7;
    do {
      if (pvVar7 != (undefined *)0x0) {
        F_00d91340(pvVar7);
        *(undefined4 *)((int)pvVar7 + 4) = 0;
        *(undefined4 *)((int)pvVar7 + 8) = 0;
        *(undefined4 *)((int)pvVar7 + 0xc) = 0x80000000;
        F_00de8a20(pvVar7,iVar6 + (int)pvVar7);
      }
      pvVar7 = (undefined *)((int)pvVar7 + 0x10);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(int *)((int)this + 0xc) = iVar3;
  return (uint)this;
}

/* ref: FUN_00de47a0 */
uint F_00de47a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149bf4));
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x10 + *(int *)((int)this + 8))));
    do {
      F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de4850 */
uint F_00de4850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d91340(this);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  F_00de8a20(this,param_1);
  return (uint)this;
}

/* ref: FUN_00de4880 */
uint F_00de4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    uVar2 = param_2;
    this = param_1;
    do {
      if (this != (undefined *)0x0) {
        F_00d91340(this);
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0x80000000;
        uVar1 = F_00de8a20(this,(param_3 - (int)param_1) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00de48d0 */
uint F_00de48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde48d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = (undefined *)(iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this);
    do {
      F_00dddf50(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -0x10);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_2 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4,iVar6 + (int)pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar4 = (undefined *)(*(int *)this + iVar3 * 0x10);
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_2 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != (undefined *)0x0) {
      F_00d91340(pvVar4);
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0x80000000;
      F_00de8a20(pvVar4,iVar3 + (int)pvVar4);
    }
    pvVar4 = (undefined *)((int)pvVar4 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de49e0 */
uint F_00de49e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde49e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  iVar3 = iVar1;
  if (iVar5 < iVar1) {
    iVar3 = iVar5;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = (undefined *)(iVar5 * 0x10 + iVar1 * 0x10 + *(int *)this);
    do {
      F_00dddf50(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -0x10);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  pvVar4 = *(undefined * PTR32 *)this;
  if (0 < iVar3) {
    iVar6 = *param_1 - (int)pvVar4;
    iVar5 = iVar3;
    do {
      F_00de8a20(pvVar4,iVar6 + (int)pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar4 = (undefined *)(*(int *)this + iVar3 * 0x10);
  iVar5 = iVar1 - iVar3;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar3 = (*param_1 + iVar3 * 0x10) - (int)pvVar4;
  do {
    if (pvVar4 != (undefined *)0x0) {
      F_00d91340(pvVar4);
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      *(undefined4 *)((int)pvVar4 + 0xc) = 0x80000000;
      F_00de8a20(pvVar4,iVar3 + (int)pvVar4);
    }
    pvVar4 = (undefined *)((int)pvVar4 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00de4af0 */
uint F_00de4af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4af0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b00 */
uint F_00de4b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4b00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de4b60 */
unsigned int F_00de4b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4b60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de4b90 */
uint F_00de4b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00de4bb0 */
unsigned int F_00de4bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(undefined * PTR32 *)this != param_1) {
    if (param_1 != (undefined *)0x0) {
      F_00d919e0(param_1);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = param_1;
  }
  return 0;
}

/* ref: FUN_00de4be0 */
uint F_00de4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4be0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[2]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (this_00 == (*(undefined * PTR32 *)&gen_args[2])) {
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)))) {
    do {
      F_00de4be0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + iVar2 * 4))),&(*(undefined * PTR32 *)&gen_args[2]),pvVar1);
      if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
        F_00d919e0((*(undefined * PTR32 *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 *)&gen_args[2]);
        if ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) {
          F_00d91a80((*(undefined * PTR32 *)&gen_args[2]));
        }
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))));
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00de4c60 */
uint F_00de4c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x18);
  if ((pvVar1 == param_1) && (pvVar1 != param_2)) {
    if (param_2 != (undefined *)0x0) {
      pvVar1 = (undefined *)F_00d919e0(param_2);
    }
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      pvVar1 = (undefined *)F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
    }
    *(undefined * PTR32 *)((int)this + 0x18) = param_2;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      pvVar1 = (undefined *)F_00de4c60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))),param_1,
                                    param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x2c));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de4cc0 */
uint F_00de4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde4cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(in_ecx + 0x2c);
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar1 = F_00de4cc0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x28) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + uVar1;
    } while (iVar3 < *(int *)(in_ecx + 0x2c));
  }
  return uVar2;
}

/* ref: FUN_00de4cf0 */
uint F_00de4cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + iVar3 * 4)));
      uVar2 = *(uint *)(uVar1 + 0x14);
      if (((uVar2 & 0xfffffffe) != 0) &&
         (uVar2 = F_00da0d70(uVar2 & 0xfffffffe,param_1), uVar2 == 0)) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_00de4d50 */
uint F_00de4d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4)));
      if (((*(uint *)((int)this_00 + 0x14) & 0xfffffffe) != 0) &&
         (uVar1 = F_00da0d70(*(uint *)((int)this_00 + 0x14) & 0xfffffffe,param_1), uVar1 == 0)) {
        return (uint)this_00;
      }
      uVar1 = F_00de4d50(this_00,param_1);
      if (uVar1 != 0) {
        return uVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_00de4dc0 */
uint F_00de4dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
  }
  *(undefined * PTR32 *)(*param_2 + param_2[1] * 4) = this;
  uVar1 = 1;
  param_2[1] = param_2[1] + 1;
  if (this != param_1) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      do {
        uVar1 = F_00de4dc0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))),param_1,param_2);
        if (uVar1 == 0) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 0x2c));
    }
    param_2[1] = param_2[1] + -1;
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de4e40 */
uint F_00de4e40(unsigned int gen_a0)
{
  GEN_ENTER(0xde4e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91510((undefined *)((int)this + 0x40));
  iVar3 = *(int *)((int)this + 0x38) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x34) + 4 + iVar3 * 8)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -8);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < *(int *)((int)this + 0x3c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),
               *(int *)((int)this + 0x3c) * 8);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x2c) + -1;
  iVar3 = *(int *)((int)this + 0x28);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar3 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar3 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((*(uint *)((int)this + 0x30) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(uint *)((int)this + 0x30) * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((*(uint *)((int)this + 0x24) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(uint *)((int)this + 0x24) << 6);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00d91510((undefined *)((int)this + 0x14));
  uVar1 = F_00de47a0(this);
  return uVar1;
}

/* ref: FUN_00de4f70 */
uint F_00de4f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00de4f80 */
uint F_00de4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde4f80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de4fc0 */
uint F_00de4fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde4fc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de5020 */
uint F_00de5020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5020u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00de5060 */
uint F_00de5060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5060u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5090 */
uint F_00de5090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (this != param_1) {
    this_00 = (undefined *)*param_1;
    if (this_00 != (undefined *)0x0) {
      puVar1 = (undefined4 *)F_00d919e0(this_00);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      puVar1 = (undefined4 *)F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = this_00;
  }
  return (uint)puVar1;
}

/* ref: FUN_00de50c0 */
uint F_00de50c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde50c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((*(int *)(param_3 + 4) <= *(int *)(param_2 + 4)) &&
     ((*(int *)(param_2 + 4) != *(int *)(param_3 + 4) ||
      (*(int *)(param_3 + 8) <= *(int *)(param_2 + 8))))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00de5100 */
uint F_00de5100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x80) + iVar1 * 8)));
    do {
      if (*piVar2 == param_1) {
        return piVar2[1];
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00de5130 */
uint F_00de5130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x84) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x80) + iVar1 * 8)));
    do {
      if (*piVar2 == param_2) {
        *param_1 = 1;
        return (uint)param_1;
      }
      piVar2 = piVar2 + -2;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00de5170 */
uint F_00de5170(unsigned int gen_a0)
{
  GEN_ENTER(0xde5170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00de5560(*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),this);
  return uVar1;
}

/* ref: FUN_00de5190 */
uint F_00de5190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = (*(undefined4 *)&gen_args[1]);
  pcVar4 = (char *)F_00de5130((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,(*(undefined4 *)&gen_args[1]));
  if (*pcVar4 == '\0') {
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
    iVar1 = iVar2 + 1;
    uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) & 0x3fffffff;
    if ((int)uVar5 < iVar1) {
      iVar6 = uVar5 * 2;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),iVar6,8);
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 1;
    pcVar4 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + iVar2 * 8)));
    *(undefined4 *)pcVar4 = uVar3;
    *(undefined4 *)(pcVar4 + 4) = (*(undefined4 *)&gen_args[2]);
  }
  return (uint)pcVar4;
}

/* ref: FUN_00de5200 */
uint F_00de5200(unsigned int gen_a0)
{
  GEN_ENTER(0xde5200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  *(undefined4 *)((int)this + 0x84) = 0;
  if (-1 < *(int *)((int)this + 0x88)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),
               *(int *)((int)this + 0x88) * 8);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x7c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x7c));
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  iVar3 = *(int *)((int)this + 0x74) + -1;
  iVar4 = *(int *)((int)this + 0x70);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar4 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 4 + iVar3 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  if (-1 < *(int *)((int)this + 0x78)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x70),
               *(int *)((int)this + 0x78) * 4);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar4) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 0xc)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               (*(uint *)((int)this + 0x20) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  F_00d91510((undefined *)((int)this + 0x14));
  uVar1 = F_00de47a0(this);
  return uVar1;
}

/* ref: FUN_00de5330 */
uint F_00de5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de5360 */
uint F_00de5360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (this != param_1) {
    this_00 = (undefined *)*param_1;
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)this);
    }
    *(undefined * PTR32 *)this = this_00;
  }
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00de53a0 */
uint F_00de53a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde53a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de53e0 */
uint F_00de53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
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
  
  puVar2 = (undefined4 *)(param_1 + -0xc + param_2 * 0xc);
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    F_00d919e0((undefined *)*puVar2);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)puVar2[2];
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)puVar2[1];
  iVar7 = param_3 / 2;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)*puVar2;
  (*(int *)(gen_frame + 0x18)) = iVar7;
  iVar9 = param_2;
  if (param_2 <= iVar7) {
    do {
      iVar10 = iVar9 * 2;
      if (iVar10 < param_3) {
        iVar5 = *(int *)(param_1 + -8 + iVar9 * 0x18);
        iVar1 = param_1 + iVar9 * 0x18;
        if ((iVar5 < *(int *)(iVar1 + 4)) ||
           ((iVar5 == *(int *)(iVar1 + 4) && (*(int *)(iVar1 + -4) < *(int *)(iVar1 + 8))))) {
          iVar10 = iVar10 + 1;
        }
      }
      puVar2 = (undefined4 *)(param_1 + -0xc + iVar10 * 0xc);
      if (((int)puVar2[1] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x10))) &&
         (((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)puVar2[1] || ((int)puVar2[2] <= (int)(*(undefined * PTR32 *)(gen_frame + 0x14)))))) break;
      puVar3 = (undefined4 *)(param_1 + -0xc + iVar9 * 0xc);
      if (puVar3 != puVar2) {
        pvVar6 = (undefined *)*puVar2;
        if (pvVar6 != (undefined *)0x0) {
          F_00d919e0(pvVar6);
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        if ((undefined *)*puVar3 != (undefined *)0x0) {
          F_00d91a80((undefined *)*puVar3);
          iVar7 = (*(int *)(gen_frame + 0x18));
        }
        *puVar3 = pvVar6;
      }
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      iVar9 = iVar10;
    } while (iVar10 <= iVar7);
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  ppvVar4 = (undefined * PTR32 *)(param_1 + -0xc + iVar9 * 0xc);
  if (ppvVar4 != &(*(undefined * PTR32 *)(gen_frame + 0xc))) {
    if ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0xc)));
    }
    if (*ppvVar4 != (undefined *)0x0) {
      F_00d91a80(*ppvVar4);
    }
    *ppvVar4 = pvVar6;
  }
  ppvVar4[1] = (*(undefined * PTR32 *)(gen_frame + 0x10));
  ppvVar4[2] = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if (pvVar6 != (undefined *)0x0) {
    pvVar8 = (undefined *)F_00d91a80(pvVar6);
  }
  return (uint)pvVar8;
}

/* ref: FUN_00de5510 */
uint F_00de5510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5510u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00d95690(param_1,this,iVar4,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de5560 */
uint F_00de5560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * this;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 - (param_2 >> 0x1f);
  (*(int *)(gen_frame + 0x14)) = param_2;
  for (iVar3 = param_2 / 2; 0 < iVar3; iVar3 = iVar3 + -1) {
    uVar2 = F_00de53e0(param_1,iVar3,param_2,param_3);
  }
  if (0 < param_2) {
    param_2 = param_2 * 0xc;
    do {
      if ((undefined *)*param_1 != (undefined *)0x0) {
        F_00d919e0((undefined *)*param_1);
      }
      this = (undefined *)*param_1;
      puVar1 = (undefined4 *)(param_2 + -0xc + (int)param_1);
      (*(undefined4 *)(gen_frame + 0xc)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = param_1[2];
      if (param_1 != puVar1) {
        this_00 = (undefined *)*puVar1;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_00;
        if (this_00 != (undefined *)0x0) {
          F_00d919e0(this_00);
        }
        if ((undefined *)*param_1 != (undefined *)0x0) {
          F_00d91a80((undefined *)*param_1);
        }
        *param_1 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      param_1[1] = puVar1[1];
      param_1[2] = puVar1[2];
      if (puVar1 != &(*(undefined4 *)(gen_frame + 0x8))) {
        if (this != (undefined *)0x0) {
          F_00d919e0(this);
        }
        if ((undefined *)*puVar1 != (undefined *)0x0) {
          F_00d91a80((undefined *)*puVar1);
        }
        *puVar1 = this;
      }
      param_2 = param_2 + -0xc;
      puVar1[1] = (*(undefined4 *)(gen_frame + 0xc));
      puVar1[2] = (*(undefined4 *)(gen_frame + 0x10));
      iVar3 = (*(int *)(gen_frame + 0x14)) + -1;
      (*(int *)(gen_frame + 0x14)) = iVar3;
      uVar2 = F_00de53e0(param_1,1,iVar3,param_3);
      if (this != (undefined *)0x0) {
        uVar2 = F_00d91a80(this);
      }
    } while (0 < iVar3);
  }
  return uVar2;
}

/* ref: FUN_00de5670 */
uint F_00de5670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5670u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00de56c0 */
uint F_00de56c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde56c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  F_00d91340(in_ecx + 4);
  return in_ecx;
}

/* ref: FUN_00de56e0 */
byte F_00de56e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde56e0u, gen_a0, 0u, 0u, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
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
uint F_00de5700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)((int)this + 0xc));
  }
  return 0xffffffff;
}

/* ref: FUN_00de5760 */
uint F_00de5760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de5780 */
uint F_00de5780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 4 + param_2 * 8))) & 0xfffffffe;
}

/* ref: FUN_00de57a0 */
uint F_00de57a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde57a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  uint in_ecx;
  undefined1 * puVar5;
  
  uVar2 = F_00da4850(param_1);
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar4 * 8))) & 0xfffffffe;
      in_ecx = *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar4 * 8))) & 0xfffffffe;
      bVar1 = F_00de56e0(uVar2);
      puVar5 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar5 = &REFG(undefined1, 0x107fc63);
      }
      bVar1 = F_00de56e0(in_ecx);
      puVar3 = &REFG(undefined, 0x114b548);
      if (bVar1 == 0) {
        puVar3 = &REFG(undefined1, 0x107fc63);
      }
      uVar2 = F_00da53f0(param_1,"%s%s%s=%s%s%s",puVar5,uVar2,puVar5,puVar3,in_ecx,puVar3);
      if (iVar4 < *(int *)((int)this + 0xc) + -1) {
        uVar2 = F_00da4d70(param_1,&REFG(undefined, 0x114b534));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0xc));
  }
  return uVar2;
}

/* ref: FUN_00de5840 */
uint F_00de5840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de5700(this,param_1);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + uVar1 * 8))) & 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_00de5870 */
uint F_00de5870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar1 = F_00de5700(this,param_1);
  if (param_2 == 0) {
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 8)));
    F_00d91510((undefined *)((int)pvVar6 + 4));
    F_00d91510(pvVar6);
    uVar2 = *(int *)((int)this + 0xc) - 1;
    *(uint *)((int)this + 0xc) = uVar2;
    if (uVar2 != uVar1) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar1 * 8)));
      iVar4 = (*(int *)((int)this + 8) + uVar2 * 8) - (int)puVar3;
      iVar5 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xffffffff) {
      F_00d91520(((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4 + uVar1 * 8))),param_2);
      return 0;
    }
    F_00d91340(((undefined1 *)(gen_frame + 0x4)));
    F_00d91340(((undefined1 *)(gen_frame + 0x8)));
    F_00d91520(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_00d91520(((undefined1 *)(gen_frame + 0x8)),param_2);
    if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),8);
    }
    pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 8)));
    if (pvVar6 != (undefined *)0x0) {
      F_00d914e0(pvVar6,((undefined1 *)(gen_frame + 0x4)));
      F_00d914e0((undefined *)((int)pvVar6 + 4),((undefined1 *)(gen_frame + 0x8)));
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    F_00d91510(((undefined1 *)(gen_frame + 0x8)));
    F_00d91510(((undefined1 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_00de59a0 */
uint F_00de59a0(unsigned int gen_a0)
{
  GEN_ENTER(0xde59a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00de5db0 */
uint F_00de5db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7d4));
  return (uint)in_ecx;
}

/* ref: FUN_00de5e00 */
uint F_00de5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e10 */
uint F_00de5e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de5e40 */
uint F_00de5e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d914e0(this,param_1);
  F_00d914e0((undefined *)((int)this + 4),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00de5e70 */
uint F_00de5e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00de5e90 */
uint F_00de5e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5e90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00de5ed0 */
unsigned int F_00de5ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00d914e0(this,param_3);
        F_00d914e0((undefined *)((int)this + 4),param_3 + 4);
      }
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de5f10 */
uint F_00de5f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde5f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_2);
    uVar1 = F_00d914e0((undefined *)((int)this_00 + 4),param_2 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00de5f70 */
uint F_00de5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_1);
    uVar1 = F_00d914e0((undefined *)((int)this_00 + 4),param_1 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00de5fd0 */
unsigned int F_00de5fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde5fd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510((undefined *)((int)this + 4));
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00de6000 */
uint F_00de6000(unsigned int gen_a0)
{
  GEN_ENTER(0xde6000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00de6030 */
unsigned int F_00de6030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = (undefined *)(*(int *)this + param_1 * 8);
  F_00d91510((undefined *)((int)this_00 + 4));
  F_00d91510(this_00);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + param_1 * 8);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00de6090 */
uint F_00de6090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6100 */
uint F_00de6100(unsigned int gen_a0)
{
  GEN_ENTER(0xde6100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6170 */
uint F_00de6170(unsigned int gen_a0)
{
  GEN_ENTER(0xde6170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de61e0 */
uint F_00de61e0(unsigned int gen_a0)
{
  GEN_ENTER(0xde61e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de6210 */
uint F_00de6210(unsigned int gen_a0)
{
  GEN_ENTER(0xde6210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
    do {
      F_00d91510((undefined *)((int)this_00 + 4));
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEnvironment::vf0 */
uint F_00de6280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de6210(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de62c0 */
unsigned int F_00de62c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde62c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_01059680((undefined *)((int)this + 4),param_1,param_2);
  return 0;
}

/* ref: FUN_00de62d0 */
uint F_00de62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde62d0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx);
  *(undefined4 *)(in_ecx + 4) = 0;
  return in_ecx;
}

/* ref: FUN_00de62f0 */
uint F_00de62f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde62f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00de6330 */
uint F_00de6330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6330u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00de6450 */
uint F_00de6450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6450u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6470 */
uint F_00de6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de64a0 */
uint F_00de64a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde64a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de64d0 */
uint F_00de64d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde64d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00de4dc0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00de64e0 */
uint F_00de64e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde64e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0x14) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar1 = F_00da0d70(uVar1 & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *(uint *)((int)this + 0x14);
      }
    }
    uVar1 = F_00de4d50(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de6760 */
uint F_00de6760(unsigned int gen_a0)
{
  GEN_ENTER(0xde6760u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91340(in_ecx + 2);
  F_00d91340(in_ecx + 3);
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
  *(undefined8 *)(in_ecx + 0x20) = REFG(float, 0x1138c70);
  *(undefined8 *)(in_ecx + 0x22) = REFG(undefined8, 0x1138c78);
  *(undefined8 *)(in_ecx + 0x24) = REFG(float, 0x1138c80);
  *(undefined8 *)(in_ecx + 0x26) = REFG(undefined8, 0x1138c88);
  *(undefined8 *)(in_ecx + 0x28) = REFG(float, 0x1138c90);
  *(undefined8 *)(in_ecx + 0x2a) = REFG(undefined8, 0x1138c98);
  return (uint)in_ecx;
}

/* ref: FUN_00de6840 */
uint F_00de6840(unsigned int gen_a0)
{
  GEN_ENTER(0xde6840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  iVar4 = *(int *)((int)this + 0x70) + -1;
  iVar1 = *(int *)((int)this + 0x6c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  if (-1 < *(int *)((int)this + 0x74)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x6c),
               *(int *)((int)this + 0x74) * 4);
  }
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0x80000000;
  iVar4 = *(int *)((int)this + 100) + -1;
  iVar1 = *(int *)((int)this + 0x60);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 100) = 0;
  if (-1 < *(int *)((int)this + 0x68)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x60),
               *(int *)((int)this + 0x68) * 4);
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x58) + -1;
  iVar1 = *(int *)((int)this + 0x54);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  if (-1 < *(int *)((int)this + 0x5c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x54),
               *(int *)((int)this + 0x5c) * 4);
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x4c) + -1;
  iVar1 = *(int *)((int)this + 0x48);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (-1 < *(int *)((int)this + 0x50)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),
               *(int *)((int)this + 0x50) * 4);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x40) + -1;
  iVar1 = *(int *)((int)this + 0x3c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if (-1 < *(int *)((int)this + 0x44)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x3c),
               *(int *)((int)this + 0x44) * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x34) + -1;
  iVar1 = *(int *)((int)this + 0x30);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  if (-1 < *(int *)((int)this + 0x38)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(int *)((int)this + 0x38) * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x28) + -1;
  iVar1 = *(int *)((int)this + 0x24);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < *(int *)((int)this + 0x2c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               *(int *)((int)this + 0x2c) * 4);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  iVar1 = *(int *)((int)this + 0x18);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < *(int *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(int *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00d91510((undefined *)((int)this + 0xc));
  uVar3 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de6c70 */
uint F_00de6c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00de6dc0 */
uint F_00de6dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de6e00 */
uint F_00de6e00(unsigned int gen_a0)
{
  GEN_ENTER(0xde6e00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6e40 */
uint F_00de6e40(unsigned int gen_a0)
{
  GEN_ENTER(0xde6e40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6e80 */
uint F_00de6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00de6ea0 */
uint F_00de6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xde6ea0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00de6f10 */
uint F_00de6f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f20 */
uint F_00de6f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde6f20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de6f90 */
uint F_00de6f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00de7000 */
unsigned int F_00de7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7000u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de7040 */
uint F_00de7040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7070 */
uint F_00de7070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7090 */
unsigned int F_00de7090(unsigned int gen_a0)
{
  GEN_ENTER(0xde7090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de70b0 */
unsigned int F_00de70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde70b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de7110 */
uint F_00de7110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7110u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de7150 */
uint F_00de7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xde7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 * puVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 4);
  iVar6 = (iVar4 - param_3) + param_5;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  puVar1 = (undefined8 *)
           F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                        (param_3 + param_2) * 0x10 + *(int *)this,
                        ((iVar4 - param_2) - param_3) * 0x10);
  puVar5 = (undefined8 *)(param_2 * 0x10 + *(int *)this);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar5;
    puVar1 = puVar5;
    iVar4 = param_5;
    do {
      *puVar1 = *(undefined8 *)(iVar3 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar1);
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar6;
  return (uint)puVar1;
}

/* ref: FUN_00de7200 */
unsigned int F_00de7200(unsigned int gen_a0)
{
  GEN_ENTER(0xde7200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7230 */
unsigned int F_00de7230(unsigned int gen_a0)
{
  GEN_ENTER(0xde7230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7260 */
unsigned int F_00de7260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      F_00de9210(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 4))),param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  return 0;
}

/* ref: FUN_00de7290 */
unsigned int F_00de7290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x18))) {
    iVar2 = *(int *)((int)this + 0x14);
    iVar1 = param_1 * 4;
    pvVar3 = *(undefined * PTR32 *)(iVar2 + iVar1);
    if (pvVar3 != (undefined *)0x0) {
      F_00d91a80(pvVar3);
    }
    *(undefined4 *)(iVar2 + iVar1) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
    if (*(int *)((int)this + 0x18) != param_1) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar1))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18) * 4)));
    }
    iVar1 = *(int *)((int)this + 0xc);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 4)));
      iVar4 = *(int *)(iVar2 + 0x1c);
      pvVar3 = *(undefined * PTR32 *)(iVar4 + param_1 * 4);
      if (pvVar3 != (undefined *)0x0) {
        F_00d91a80(pvVar3);
      }
      *(undefined4 *)(iVar4 + param_1 * 4) = 0;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + -1;
      if (*(int *)(iVar2 + 0x20) != param_1) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1c) + param_1 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1c) + *(int *)(iVar2 + 0x20) * 4)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00de7350 */
unsigned int F_00de7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      iVar4 = *(int *)((int)param_1 + 4);
      if (param_2 != (int *)0x0) {
        iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8) + (*(int *)(gen_frame + 0x28)) * 4))) + 0x18)));
        uVar1 = param_2[1];
        uVar2 = 0;
        if (0 < (int)uVar1) {
          piVar6 = (int *)*param_2;
          do {
            if (*piVar6 == iVar5) {
              (*(uint *)(gen_frame + 0x24)) = uVar2;
              if (uVar2 != 0xffffffff) goto LAB_00de73e3;
              break;
            }
            uVar2 = uVar2 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar2 < (int)uVar1);
        }
        (*(uint *)(gen_frame + 0x24)) = uVar1;
        if (uVar1 == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
        }
        *(int *)(*param_2 + param_2[1] * 4) = iVar5;
        param_2[1] = param_2[1] + 1;
      }
LAB_00de73e3: ;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x10)) = 0x80000000;
      (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
      F_00de92f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8) + (*(int *)(gen_frame + 0x28)) * 4))),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x24)));
      iVar5 = 0;
      if (0 < (*(int *)(gen_frame + 0x18))) {
        iVar3 = 0;
        do {
          *(int *)(iVar3 + (*(int *)(gen_frame + 0x14))) = *(int *)(iVar3 + (*(int *)(gen_frame + 0x14))) + iVar4;
          piVar6 = (int *)(iVar3 + 4 + (*(int *)(gen_frame + 0x14)));
          *piVar6 = *piVar6 + iVar4;
          piVar6 = (int *)(iVar3 + 8 + (*(int *)(gen_frame + 0x14)));
          *piVar6 = *piVar6 + iVar4;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar5 < (*(int *)(gen_frame + 0x18)));
      }
      F_00de7780(param_1,&REFG(undefined * PTR32, 0x13516ac),iVar4,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
      F_00de7600((undefined *)((int)param_1 + 0xc),&REFG(undefined * PTR32, 0x13516ac),
                   *(undefined4 *)((int)param_1 + 0x10),(*(int *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x18)));
      (*(int *)(gen_frame + 0x18)) = 0;
      if (((*(uint *)(gen_frame + 0x1c)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x1c)) << 4);
      }
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      if (((*(uint *)(gen_frame + 0x10)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) << 4);
      }
      iVar4 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar4;
    } while (iVar4 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xc));
  }
  return 0;
}

/* ref: FUN_00de74e0 */
uint F_00de74e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde74e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  return (uint)in_ecx;
}

/* ref: FUN_00de74f0 */
uint F_00de74f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  iVar4 = *(int *)((int)this + 0x18) + -1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00de75c0 */
uint F_00de75c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde75c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de7600 */
uint F_00de7600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde7600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00de7150(this,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00de7620 */
unsigned int F_00de7620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xde7620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)((int)this + 4);
  iVar9 = (iVar8 - param_3) + param_5;
  uVar6 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar6 < iVar9) {
    iVar5 = uVar6 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(param_1,this,iVar5,0x10);
  }
  F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,(param_2 + param_3) * 0x10 + *(int *)this,
               ((iVar8 - param_2) - param_3) * 0x10);
  puVar7 = (undefined4 *)(param_2 * 0x10 + *(int *)this);
  if (0 < param_5) {
    iVar5 = param_4 - (int)puVar7;
    iVar8 = param_5;
    do {
      puVar1 = (undefined4 *)(iVar5 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(int *)((int)this + 4) = iVar9;
    return 0;
  }
  *(int *)((int)this + 4) = iVar9;
  return 0;
}

/* ref: FUN_00de76e0 */
uint F_00de76e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde76e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de7720 */
uint F_00de7720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de7760 */
uint F_00de7760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde7760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00de7600(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00de7780 */
unsigned int F_00de7780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde7780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00de7620(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00de77a0 */
uint F_00de77a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde77a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar1 + iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 != param_1) {
    uVar3 = *(uint *)(*(int *)this + uVar3 * 4);
    *(uint *)(*(int *)this + iVar2) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00de77e0 */
unsigned int F_00de77e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde77e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00de7850 */
unsigned int F_00de7850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7850u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00de7880 */
unsigned int F_00de7880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde7880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00de7780(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00de78a0 */
uint F_00de78a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde78a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar1 + iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 != param_1) {
    uVar3 = *(uint *)(*(int *)this + uVar3 * 4);
    *(uint *)(*(int *)this + iVar2) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00de78e0 */
uint F_00de78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de79b0 */
uint F_00de79b0(unsigned int gen_a0)
{
  GEN_ENTER(0xde79b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7a20 */
uint F_00de7a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de7a90 */
uint F_00de7a90(unsigned int gen_a0)
{
  GEN_ENTER(0xde7a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7b00 */
uint F_00de7b00(unsigned int gen_a0)
{
  GEN_ENTER(0xde7b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7b70 */
uint F_00de7b70(unsigned int gen_a0)
{
  GEN_ENTER(0xde7b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7be0 */
uint F_00de7be0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMesh::vf0 */
uint F_00de7c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de74f0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de7ca0 */
uint F_00de7ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde7ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7cc0 */
unsigned int F_00de7cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00de7d10 */
unsigned int F_00de7d10(unsigned int gen_a0)
{
  GEN_ENTER(0xde7d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00de7d40 */
uint F_00de7d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00de7d80 */
unsigned int F_00de7d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7d80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00de7df0 */
uint F_00de7df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de7e60 */
uint F_00de7e60(unsigned int gen_a0)
{
  GEN_ENTER(0xde7e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7ed0 */
uint F_00de7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
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

/* ref: FUN_00de7f70 */
uint F_00de7f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde7f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7f4));
  return (uint)in_ecx;
}

/* ref: FUN_00de7f80 */
uint F_00de7f80(unsigned int gen_a0)
{
  GEN_ENTER(0xde7f80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00de7fc0 */
uint F_00de7fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xde7fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxMaterialShaderSet::vf0 */
uint F_00de8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de7fc0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de8080 */
uint F_00de8080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520((undefined *)((int)this + 0x14),param_1);
  return uVar1;
}

/* ref: FUN_00de8090 */
uint F_00de8090(unsigned int gen_a0)
{
  GEN_ENTER(0xde8090u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91340(in_ecx + 5);
  return (uint)in_ecx;
}

/* ref: FUN_00de80b0 */
uint F_00de80b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde80b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91350(in_ecx + 5,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de80d0 */
uint F_00de80d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde80d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de80f0 */
uint F_00de80f0(unsigned int gen_a0)
{
  GEN_ENTER(0xde80f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkAlignSceneToNodeOptions::vf0 */
uint F_00de8120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de8170 */
uint F_00de8170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8170u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00de8180 */
uint F_00de8180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de81b0 */
unsigned int F_00de81b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde81b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00de62d0(in_ecx);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de81e0 */
uint F_00de81e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde81e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)((int)this + 8));
  }
  return 0xffffffff;
}

/* ref: FUN_00de8230 */
uint F_00de8230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8230u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  uVar5 = F_00de81e0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[2]));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if ((int)uVar5 < 0) {
    bVar4 = true;
    bVar3 = false;
    puVar6 = (undefined4 *)F_01059650(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  else {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    pvVar2 = *(undefined * PTR32 *)(iVar1 + 4 + uVar5 * 8);
    bVar4 = false;
    bVar3 = true;
    if (pvVar2 != (undefined *)0x0) {
      F_00d919e0(pvVar2);
    }
    (*(undefined * PTR32 *)&gen_args[2]) = *(undefined * PTR32 *)(iVar1 + 4 + uVar5 * 8);
    puVar6 = &(*(undefined * PTR32 *)&gen_args[2]);
  }
  pvVar2 = (*(undefined * PTR32 *)&gen_args[2]);
  if ((undefined *)*puVar6 != (undefined *)0x0) {
    F_00d919e0((undefined *)*puVar6);
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
  if ((bVar3) && (pvVar2 != (undefined *)0x0)) {
    F_00d91a80(pvVar2);
  }
  if ((bVar4) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0)) {
    F_00d91a80((*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00de82d0 */
uint F_00de82d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde82d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  
  F_00de8230((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[1]));
  in_ecx = (*(int *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    return 0;
  }
  if ((*(int *)&gen_args[2]) != 0) {
    uVar2 = F_010596b0(&(*(undefined * PTR32 *)&gen_args[1]));
    uVar2 = F_00d92610(uVar2);
    uVar3 = F_00d92610(in_ecx);
    uVar2 = F_00da0d70(uVar3,uVar2);
    if (uVar2 != 0) {
      if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
        return 0;
      }
      F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
      return 0;
    }
  }
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
  }
  return (uint)pvVar1;
}

/* ref: FUN_00de8340 */
uint F_00de8340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e2ef4));
  return uVar1;
}

/* ref: FUN_00de8360 */
uint F_00de8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e2eac));
  return uVar1;
}

/* ref: FUN_00de8380 */
uint F_00de8380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e2bc4));
  return uVar1;
}

/* ref: FUN_00de83a0 */
uint F_00de83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde83a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e2e64));
  return uVar1;
}

/* ref: FUN_00de83c0 */
uint F_00de83c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde83c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e3494));
  return uVar1;
}

/* ref: FUN_00de83e0 */
uint F_00de83e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde83e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e33bc));
  return uVar1;
}

/* ref: FUN_00de8400 */
uint F_00de8400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e3404));
  return uVar1;
}

/* ref: FUN_00de8420 */
uint F_00de8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00de82d0(this,param_1,&REFG(undefined, 0x15e344c));
  return uVar1;
}

/* ref: FUN_00de8440 */
uint F_00de8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de8340(this,param_1);
  if (uVar1 != 0) {
    *param_3 = **(undefined1 * PTR32 *)(uVar1 + 8);
    return 0;
  }
  uVar1 = F_00de8360(this,param_1);
  if (uVar1 != 0) {
    *param_3 = **(int * PTR32 *)(uVar1 + 8) != 0;
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = " attribute group";
    pcVar3 = " not found in ";
    pvVar2 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Bool attribute ");
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,param_1);
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar3);
    pvVar2 = (undefined *)F_00da0420(pvVar2,this);
    F_00d9fe80(pvVar2,pcVar4);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0x2f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de8520 */
uint F_00de8520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de8360(this,param_1);
  if (uVar1 == 0) {
    uVar1 = F_00de8340(this,param_1);
    if (uVar1 != 0) {
      *param_3 = (uint)(**(char * PTR32 *)(uVar1 + 8) != '\0');
      return 0;
    }
    uVar1 = F_00de8380(this,param_1);
    if (uVar1 == 0) {
      if ((char)param_2 != '\0') {
        F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
        pcVar4 = " attribute group";
        pcVar3 = " not found in ";
        pvVar2 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Integer attribute ");
        pvVar2 = (undefined *)F_00d9fe80(pvVar2,param_1);
        pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar3);
        pvVar2 = (undefined *)F_00da0420(pvVar2,this);
        F_00d9fe80(pvVar2,pcVar4);
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0x57);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
      }
      return 1;
    }
  }
  *param_3 = **(uint * PTR32 *)(uVar1 + 8);
  return 0;
}

/* ref: FUN_00de8610 */
uint F_00de8610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00de8520(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00de8620 */
uint F_00de8620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de83a0(this,param_1);
  if (uVar1 != 0) {
    *param_3 = **(uint * PTR32 *)(uVar1 + 8) & 0xfffffffe;
    return 0;
  }
  uVar1 = F_00de8380(this,param_1);
  if (uVar1 != 0) {
    F_00de97f0(*(undefined * PTR32 *)(uVar1 + 0x20),**(undefined4 * PTR32 *)(uVar1 + 8),param_3);
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = " attribute group";
    pcVar3 = " not found in ";
    pvVar2 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"String attribute ");
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,param_1);
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar3);
    pvVar2 = (undefined *)F_00da0420(pvVar2,this);
    F_00d9fe80(pvVar2,pcVar4);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0x7d);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de8700 */
uint F_00de8700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de83c0(this,param_1);
  if (uVar1 != 0) {
    *param_3 = **(undefined4 * PTR32 *)(uVar1 + 8);
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = " attribute group";
    pcVar3 = " not found in ";
    pvVar2 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Float attribute ");
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,param_1);
    pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar3);
    pvVar2 = (undefined *)F_00da0420(pvVar2,this);
    F_00d9fe80(pvVar2,pcVar4);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0x8e);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de87c0 */
uint F_00de87c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde87c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de83e0(this,param_1);
  if (uVar5 != 0) {
    puVar1 = *(undefined4 * PTR32 *)(uVar5 + 8);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = " attribute group";
    pcVar7 = " not found in ";
    pvVar6 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Float attribute ");
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,param_1);
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar7);
    pvVar6 = (undefined *)F_00da0420(pvVar6,this);
    F_00d9fe80(pvVar6,pcVar8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0x9f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de8880 */
uint F_00de8880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de8400(this,param_1);
  if (uVar5 != 0) {
    puVar1 = *(undefined4 * PTR32 *)(uVar5 + 8);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = " attribute group";
    pcVar7 = " not found in ";
    pvVar6 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Quaternion attribute ");
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,param_1);
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar7);
    pvVar6 = (undefined *)F_00da0420(pvVar6,this);
    F_00d9fe80(pvVar6,pcVar8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0xb0);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de8940 */
uint F_00de8940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de8420(this,param_1);
  if (uVar5 != 0) {
    puVar1 = *(undefined4 * PTR32 *)(uVar5 + 8);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    param_3[4] = puVar1[4];
    param_3[5] = uVar2;
    param_3[6] = uVar3;
    param_3[7] = uVar4;
    uVar2 = puVar1[9];
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    param_3[8] = puVar1[8];
    param_3[9] = uVar2;
    param_3[10] = uVar3;
    param_3[0xb] = uVar4;
    uVar2 = puVar1[0xd];
    uVar3 = puVar1[0xe];
    uVar4 = puVar1[0xf];
    param_3[0xc] = puVar1[0xc];
    param_3[0xd] = uVar2;
    param_3[0xe] = uVar3;
    param_3[0xf] = uVar4;
    return 0;
  }
  if ((char)param_2 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = " attribute group";
    pcVar7 = " not found in ";
    pvVar6 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Matrix attribute ");
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,param_1);
    pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar7);
    pvVar6 = (undefined *)F_00da0420(pvVar6,this);
    F_00d9fe80(pvVar6,pcVar8);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),"Attributes\\hkxAttributeGroup.cpp",0xc1);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  }
  return 1;
}

/* ref: FUN_00de8a20 */
uint F_00de8a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * this_00;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00d91540(this,param_1);
  this_00 = (int *)((int)this + 4);
  iVar3 = *(int *)((int)this + 8) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*this_00 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 + -1);
      puVar2 = puVar2 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar1 = -*(int *)((int)this + 8);
  iVar3 = *this_00 + *(int *)((int)this + 8) * 8;
  if (0 < iVar1) {
    do {
      if (iVar3 != 0) {
        F_00de62d0(iVar3);
      }
      iVar3 = iVar3 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    F_00de8e10(this_00,&REFG(undefined * PTR32, 0x13516ac),0,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8))
    ;
  }
  return (uint)this;
}

/* ref: FUN_00de8af0 */
uint F_00de8af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8af0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de8b30 */
uint F_00de8b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d914e0(this,param_1);
  if (*(undefined * PTR32 *)(param_1 + 4) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 4));
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00de8b60 */
unsigned int F_00de8b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined * this;
  
  if (0 < param_2) {
    puVar2 = (undefined4 *)(param_3 + 4);
    iVar1 = param_2;
    this = param_1;
    do {
      if (this != (undefined *)0x0) {
        F_00d914e0(this,puVar2 + -1);
        if ((undefined *)*puVar2 != (undefined *)0x0) {
          F_00d919e0((undefined *)*puVar2);
        }
        *((undefined4 *)GEN_TOP((((int)param_1 - param_3) + (int)puVar2))) = *puVar2;
      }
      this = (undefined *)((int)this + 8);
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de8bb0 */
uint F_00de8bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,8);
  }
  iVar3 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*(int *)this + param_2 * 8 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 + -1);
      puVar4 = puVar4 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = param_2 - *(int *)((int)this + 4);
  iVar3 = *(int *)this + *(int *)((int)this + 4) * 8;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00de62d0(iVar3);
      }
      iVar3 = iVar3 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00de8c50 */
uint F_00de8c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xde8c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar2 = *(int *)((int)this + 4);
  uVar3 = (iVar2 - param_3) + param_5;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < (int)uVar3) {
    uVar1 = uVar1 * 2;
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    F_00d95690(param_1,this,uVar1,8);
  }
  iVar5 = param_3 + -1;
  if (-1 < iVar5) {
    puVar4 = (undefined4 *)(*(int *)this + param_2 * 8 + 4 + iVar5 * 8);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 + -1);
      puVar4 = puVar4 + -2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 8,*(int *)this + (param_2 + param_3) * 8,
               ((iVar2 - param_2) - param_3) * 8);
  this_00 = (undefined *)(*(int *)this + param_2 * 8);
  if (param_5 < 1) {
    *(uint *)((int)this + 4) = uVar3;
    return (uint)this_00;
  }
  iVar2 = (int)this_00 - param_4;
  puVar4 = (undefined4 *)(param_4 + 4);
  param_3 = param_5;
  do {
    if (this_00 != (undefined *)0x0) {
      F_00d914e0(this_00,puVar4 + -1);
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d919e0((undefined *)*puVar4);
      }
      *(undefined4 *)(iVar2 + (int)puVar4) = *puVar4;
    }
    this_00 = (undefined *)((int)this_00 + 8);
    puVar4 = puVar4 + 2;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *(uint *)((int)this + 4) = uVar3;
  return uVar3;
}

/* ref: FUN_00de8d70 */
uint F_00de8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
  }
  iVar3 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*(int *)this + param_1 * 8 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar4);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 + -1);
      puVar4 = puVar4 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar2 = param_1 - *(int *)((int)this + 4);
  iVar3 = *(int *)this + *(int *)((int)this + 4) * 8;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00de62d0(iVar3);
      }
      iVar3 = iVar3 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00de8e10 */
uint F_00de8e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde8e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00de8c50(this,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00de8e30 */
uint F_00de8e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde8e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00de8e10(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00de8e90 */
unsigned int F_00de8e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00de8ef0 */
uint F_00de8ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8ef0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de8f00 */
uint F_00de8f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8f00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de8f30 */
unsigned int F_00de8f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00de8f90 */
uint F_00de8f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde8f90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de8fc0 */
unsigned int F_00de8fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00de9000 */
uint F_00de9000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00de9010 */
uint F_00de9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de9040 */
uint F_00de9040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9040u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00de90a0 */
uint F_00de90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde90a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de9100 */
unsigned int F_00de9100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9100u, gen_a0, gen_a1, gen_a2, 0u);
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
          F_00d919e0((undefined *)*param_3);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de9140 */
unsigned int F_00de9140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9140u, gen_a0, gen_a1, gen_a2, 0u);
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
          F_00d919e0((undefined *)*param_3);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00de9180 */
uint F_00de9180(unsigned int gen_a0)
{
  GEN_ENTER(0xde9180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      uVar1 = F_00de9890(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + uVar1;
    } while (iVar3 < *(int *)((int)this + 0x10));
  }
  return uVar2;
}

/* ref: FUN_00de91b0 */
unsigned int F_00de91b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde91b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  uint local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    while( true ) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4)));
      uVar1 = F_00de9890(this_00);
      if (param_1 < uVar1 + local_8) break;
      iVar2 = iVar2 + 1;
      local_8 = uVar1 + local_8;
      if (*(int *)((int)this + 0x10) <= iVar2) {
        return 0;
      }
    }
    F_00de98c0(this_00,param_1 - local_8,param_2,param_3,param_4);
  }
  return 0;
}

/* ref: FUN_00de9210 */
unsigned int F_00de9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  short * psVar11;
  int iVar12;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  if (this_00 != (undefined *)0x0) {
    iVar12 = 0;
    iVar7 = 0;
    if (0 < *(int *)((int)this_00 + 0x60)) {
      psVar11 = ((short *)GEN_TOP((*(int *)((int)this_00 + 0x5c) + 6)));
      do {
        if (*psVar11 == 1) {
          if (iVar12 == 0) {
            iVar7 = iVar7 * 0x10 + *(int *)((int)this_00 + 0x5c);
            goto LAB_00de924d;
          }
          iVar12 = iVar12 + 1;
        }
        iVar7 = iVar7 + 1;
        psVar11 = psVar11 + 8;
      } while (iVar7 < *(int *)((int)this_00 + 0x60));
    }
    iVar7 = 0;
LAB_00de924d: ;
    iVar12 = *(int *)((int)this_00 + 0x44);
    if ((iVar7 != 0) && (0 < iVar12)) {
      puVar8 = (undefined4 *)F_00de3890(this_00,iVar7);
      iVar2 = *(int *)(iVar7 + 8);
      iVar10 = param_1[1];
      iVar7 = iVar10 + iVar12;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
        iVar9 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar9 <= iVar7) {
          iVar9 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar9,0x10);
      }
      param_1[1] = iVar7;
      if (0 < iVar12) {
        iVar10 = iVar10 << 4;
        do {
          uVar3 = *puVar8;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar8 = (undefined4 *)((int)puVar8 + iVar2);
          puVar1 = (undefined4 *)(*param_1 + iVar10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          iVar10 = iVar10 + 0x10;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
    }
  }
  return 0;
}

/* ref: FUN_00de92f0 */
unsigned int F_00de92f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde92f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  int iVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  undefined8 * puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x210)) = this;
  F_00de9210(this,param_1);
  (*(int *)(gen_frame + 0x214)) = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + (*(int *)(gen_frame + 0x214)) * 4)));
      uVar7 = *(uint *)(iVar6 + 0x1c) | *(uint *)(iVar6 + 0x10);
      cVar8 = 0 < (int)*(uint *)(iVar6 + 0x10);
      iVar9 = 0;
      (*(uint *)(gen_frame + 0x20c)) = uVar7;
      (*(bool *)(gen_frame + 0x22b)) = (bool)cVar8;
      if (0 < (int)uVar7) {
        do {
          (*(undefined4 *)(gen_frame + 0x224)) = param_2;
          if (*(char *)(iVar6 + 8) == '\x01') {
            if (cVar8 == '\0') {
              iVar1 = *(int *)(iVar6 + 0x18);
              (*(uint *)(gen_frame + 0x218)) = *(uint *)(iVar1 + iVar9 * 4);
              uVar4 = *(uint *)(iVar1 + 8 + iVar9 * 4);
              (*(uint *)(gen_frame + 0x21c)) = *(uint *)(iVar1 + 4 + iVar9 * 4);
            }
            else {
              iVar1 = *(int *)(iVar6 + 0xc);
              (*(uint *)(gen_frame + 0x218)) = (uint)*(ushort *)(iVar1 + iVar9 * 2);
              uVar4 = (uint)*(ushort *)(iVar1 + 4 + iVar9 * 2);
              (*(uint *)(gen_frame + 0x21c)) = (uint)*(ushort *)(iVar1 + 2 + iVar9 * 2);
            }
            iVar9 = iVar9 + 3;
LAB_00de940b: ;
            (*(uint *)(gen_frame + 0x220)) = uVar4;
            if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(param_1 + 0xc),0x10);
              uVar7 = (*(uint *)(gen_frame + 0x20c));
              cVar8 = (*(bool *)(gen_frame + 0x22b));
            }
            puVar5 = ((undefined8 *)GEN_TOP((*(int *)(param_1 + 0x10) * 0x10 + *(int *)(param_1 + 0xc))));
            *puVar5 = CONCAT44((*(uint *)(gen_frame + 0x21c)),(*(uint *)(gen_frame + 0x218)));
            puVar5[1] = CONCAT44((*(undefined4 *)(gen_frame + 0x224)),(*(uint *)(gen_frame + 0x220)));
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x210));
          }
          else {
            if (*(char *)(iVar6 + 8) != '\x02') {
              F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
              F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Unsupported index buffer type - Ignoring");
              ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(undefined4, 0x15dff78),1,0xabbaa883,((undefined1 *)(gen_frame + 0x0)),"Mesh\\hkxMeshSection.cpp",0x96);
              F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
              break;
            }
            if (1 < iVar9) {
              if (iVar9 == 2) {
                if (cVar8 == '\0') {
                  puVar3 = *(uint * PTR32 *)(iVar6 + 0x18);
                  (*(uint *)(gen_frame + 0x218)) = *puVar3;
                  uVar4 = puVar3[2];
                  (*(uint *)(gen_frame + 0x21c)) = puVar3[1];
                  iVar9 = 3;
                }
                else {
                  puVar2 = *(ushort * PTR32 *)(iVar6 + 0xc);
                  (*(uint *)(gen_frame + 0x218)) = (uint)*puVar2;
                  uVar4 = (uint)puVar2[2];
                  (*(uint *)(gen_frame + 0x21c)) = (uint)puVar2[1];
                  iVar9 = 3;
                }
              }
              else {
                iVar1 = *(int *)(param_1 + 0xc) + -0x10 + *(int *)(param_1 + 0x10) * 0x10;
                (*(uint *)(gen_frame + 0x218)) = *(uint *)(iVar1 + 8);
                (*(uint *)(gen_frame + 0x21c)) = *(uint *)(iVar1 + 4);
                if (cVar8 == '\0') {
                  uVar4 = *((uint *)GEN_TOP((*(int *)(iVar6 + 0x18) + iVar9 * 4)));
                  iVar9 = iVar9 + 1;
                }
                else {
                  uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xc) + iVar9 * 2)));
                  iVar9 = iVar9 + 1;
                }
              }
              goto LAB_00de940b;
            }
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      iVar6 = (*(int *)(gen_frame + 0x214)) + 1;
      (*(int *)(gen_frame + 0x214)) = iVar6;
    } while (iVar6 < *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00de94d0 */
uint F_00de94d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde94d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  int iVar6;
  int local_c;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  piVar2 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + local_c * 4)));
      if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar4 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x10) * 4)));
      if (puVar4 != (undefined4 *)0x0) {
        pvVar5 = (undefined *)*puVar3;
        if (pvVar5 != (undefined *)0x0) {
          F_00d919e0(pvVar5);
        }
        *puVar4 = *puVar3;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x10));
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + iVar6 * 4)));
      if (*(uint *)((int)this + 0x20) == (*(uint *)((int)this + 0x24) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
      }
      puVar4 = ((undefined4 *)GEN_TOP((*piVar2 + *(int *)((int)this + 0x20) * 4)));
      if (puVar4 != (undefined4 *)0x0) {
        pvVar5 = (undefined *)*puVar3;
        if (pvVar5 != (undefined *)0x0) {
          F_00d919e0(pvVar5);
        }
        *puVar4 = *puVar3;
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  if (*(undefined * PTR32 *)(param_1 + 0x18) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 0x18));
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if (*(undefined * PTR32 *)(param_1 + 8) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 8));
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00de9640 */
uint F_00de9640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00de9690 */
uint F_00de9690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9690u, gen_a0, gen_a1, gen_a2, 0u);
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
      uVar2 = F_00d919e0((undefined *)*param_2);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00de96e0 */
uint F_00de96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde96e0u, gen_a0, gen_a1, gen_a2, 0u);
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
      uVar2 = F_00d919e0((undefined *)*param_2);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00de9730 */
uint F_00de9730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9730u, gen_a0, gen_a1, 0u, 0u);
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
      F_00d919e0((undefined *)*param_1);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00de9780 */
uint F_00de9780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9780u, gen_a0, gen_a1, 0u, 0u);
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
      F_00d919e0((undefined *)*param_1);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00de97d0 */
uint F_00de97d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde97d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00de97f0 */
uint F_00de97f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde97f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    piVar2 = *(int * PTR32 *)((int)this + 8);
    do {
      if (*piVar2 == param_1) {
        *param_2 = (*(int * PTR32 *)((int)this + 8))[iVar1 * 2 + 1] & 0xfffffffe;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  return 1;
}

/* ref: FUN_00de9840 */
uint F_00de9840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar1 = F_00da0d70(param_1,*((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8))) & 0xfffffffe);
      if (uVar1 == 0) {
        *param_2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  return 1;
}

/* ref: FUN_00de9890 */
uint F_00de9890(unsigned int gen_a0)
{
  GEN_ENTER(0xde9890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 0x1c);
  }
  if (*(char *)((int)this + 8) != '\x01') {
    return 0;
  }
  return iVar1 / 3;
}

/* ref: FUN_00de98c0 */
byte F_00de98c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xde98c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  int iVar1;
  
  if (*(int *)((int)this + 0x10) == 0) {
    if (*(int *)((int)this + 0x1c) != 0) {
      if (*(char *)((int)this + 8) == '\x01') {
        iVar1 = param_1 * 0xc;
        *param_2 = *((uint *)GEN_TOP((iVar1 + *(int *)((int)this + 0x18))));
        *param_3 = *((uint *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0x18))));
        *param_4 = *((uint *)GEN_TOP((iVar1 + 8 + *(int *)((int)this + 0x18))));
        return 1;
      }
      if (*(char *)((int)this + 8) == '\x02') {
        *param_2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4)));
        *param_3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + param_1 * 4)));
        *param_4 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8 + param_1 * 4)));
        return 1;
      }
    }
  }
  else {
    if (*(char *)((int)this + 8) == '\x01') {
      iVar1 = param_1 * 6;
      *param_2 = (uint)*((ushort *)GEN_TOP((iVar1 + *(int *)((int)this + 0xc))));
      *param_3 = (uint)*((ushort *)GEN_TOP((iVar1 + 2 + *(int *)((int)this + 0xc))));
      *param_4 = (uint)*((ushort *)GEN_TOP((iVar1 + 4 + *(int *)((int)this + 0xc))));
      return 1;
    }
    if (*(char *)((int)this + 8) == '\x02') {
      *param_2 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 2)));
      *param_3 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 2 + param_1 * 2)));
      *param_4 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + param_1 * 2)));
      return 1;
    }
  }
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  return 0;
}

/* ref: FUN_00de99f0 */
uint F_00de99f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde99f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 8) = param_2;
  return in_ecx;
}

/* ref: hkLoader::vf8 */
uint F_00de9a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,&REFG(undefined, 0x15e36a4),param_2);
  return uVar1;
}

/* ref: hkLoader::vf7 */
uint F_00de9a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,&REFG(undefined, 0x15e36a4),param_2);
  return uVar1;
}

/* ref: hkLoader::vf4 */
uint F_00de9a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde9a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  uint uVar2;
  
  F_01059c30(((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]));
  pcVar1 = (char *)F_01059720(((byte *)(gen_frame + 0x0)),(int)&(*(undefined4 *)&gen_args[1]) + 3);
  if (*pcVar1 != '\0') {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    F_01059700(((byte *)(gen_frame + 0x0)));
    return uVar2;
  }
  F_01059700(((byte *)(gen_frame + 0x0)));
  return 0;
}

/* ref: hkLoader::vf10 */
uint F_00de9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf9 */
uint F_00de9ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_1,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf6 */
uint F_00de9b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf5 */
uint F_00de9b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf3 */
uint F_00de9b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde9b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * phVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * phVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_00d91340(((undefined1 *)(gen_frame + 0x4)));
  piVar3 = (int *)F_00deb6b0(param_1,&(*(undefined4 *)(gen_frame + 0x0)),0,0,param_3);
  if (piVar3 == (int *)0x0) {
    F_00d91510(((undefined1 *)(gen_frame + 0x4)));
    return 0;
  }
  iVar2 = *piVar3;
  uVar4 = F_00d92610(param_2);
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0x18))(piVar3,uVar4,param_3);
  phVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (uVar4 != 0) {
    phVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 8;
    if (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) == (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar5,4);
    }
    *((int * PTR32 *)GEN_TOP((*(int *)phVar5 + *(int *)(phVar1 + 0xc) * 4))) = piVar3;
    phVar1 = phVar1 + 0xc;
    *(int *)phVar1 = *(int *)phVar1 + 1;
  }
  F_00d91510(((undefined1 *)(gen_frame + 0x4)));
  return uVar4;
}

/* ref: FUN_00de9c20 */
uint F_00de9c20(unsigned int gen_a0)
{
  GEN_ENTER(0xde9c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1099dcc));
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + iVar3 * 4)));
      if (*(short *)((int)piVar1 + 6) == 1) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = *(uint *)((int)this + 0x10);
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00de9cf0 */
uint F_00de9cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de9d00 */
uint F_00de9d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de9d10 */
uint F_00de9d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9d10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00de9d30 */
uint F_00de9d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9d30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de9d70 */
unsigned int F_00de9d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9d70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de9db0 */
uint F_00de9db0(unsigned int gen_a0)
{
  GEN_ENTER(0xde9db0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  F_00d91340(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00de9dd0 */
uint F_00de9dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00de9df0 */
uint F_00de9df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9df0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de9e30 */
uint F_00de9e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9e30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00de9e70 */
uint F_00de9e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9e70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de9eb0 */
uint F_00de9eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9eb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00de9ef0 */
uint F_00de9ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00d91520(this,param_1);
  F_01059680((undefined *)((int)this + 8),param_2,param_3);
  uVar1 = F_010596b0((undefined *)((int)this + 8));
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8));
    uVar1 = F_00d92610(uVar1);
    uVar1 = F_00d91520((undefined *)((int)this + 4),uVar1);
    return uVar1;
  }
  uVar1 = F_00d91520((undefined *)((int)this + 4),0);
  return uVar1;
}

/* ref: FUN_00de9f70 */
uint F_00de9f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde9f70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00de9fb0 */
uint F_00de9fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00de9fd0 */
uint F_00de9fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xde9fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_010596b0((undefined *)((int)this + 8));
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8));
    uVar1 = F_00d92610(uVar1);
    return uVar1;
  }
  return *(uint *)((int)this + 4) & 0xfffffffe;
}

/* ref: FUN_00dea020 */
uint F_00dea020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*(int *)((int)this + 4) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_2);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar4 = iVar3 * 0xc;
    param_2 = iVar3;
    do {
      iVar3 = *(int *)this;
      this_00 = (undefined *)(iVar3 + 8 + iVar4);
      uVar2 = F_010596b0(this_00);
      if (uVar2 == 0) {
        uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
      }
      else {
        uVar2 = F_010596b0(this_00);
        uVar2 = F_00d92610(uVar2);
      }
      if (uVar2 != 0) {
        iVar3 = *(int *)this;
        uVar2 = F_010596b0((undefined *)(iVar3 + 8 + iVar4));
        if (uVar2 == 0) {
          uVar2 = *(uint *)(iVar3 + 4 + iVar4) & 0xfffffffe;
        }
        else {
          uVar2 = F_010596b0((undefined *)(iVar3 + 8 + iVar4));
          uVar2 = F_00d92610(uVar2);
        }
        uVar2 = F_00da0d20(param_1,uVar2);
        if (uVar2 == 0) {
          return *(uint *)(*(int *)this + 8 + param_2 * 0xc);
        }
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (param_2 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00dea100 */
uint F_00dea100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*(int *)((int)this + 4) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*(int *)(iVar1 + 8) != param_2);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar4 = iVar3 * 0xc;
    do {
      if ((*(uint *)(iVar4 + *(int *)this) & 0xfffffffe) != 0) {
        uVar2 = F_00da0d20(param_1,*(uint *)(iVar4 + *(int *)this) & 0xfffffffe);
        if (uVar2 == 0) {
          return *(uint *)(*(int *)this + 8 + iVar3 * 0xc);
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00dea180 */
uint F_00dea180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdea180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00d91340(this);
  F_00d91340((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91520(this,param_1);
  F_01059680((undefined *)((int)this + 8),param_2,param_3);
  uVar1 = F_010596b0((undefined *)((int)this + 8));
  if (uVar1 != 0) {
    uVar1 = F_010596b0((undefined *)((int)this + 8));
    uVar1 = F_00d92610(uVar1);
    F_00d91520((undefined *)((int)this + 4),uVar1);
    return (uint)this;
  }
  F_00d91520((undefined *)((int)this + 4),0);
  return (uint)this;
}

/* ref: FUN_00dea200 */
uint F_00dea200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea200u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  F_00d91340((*(undefined * PTR32 *)&gen_args[0]));
  F_00d91340((int)(*(undefined * PTR32 *)&gen_args[0]) + 4);
  this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *this_00 = 0;
  F_00d91520((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[1])) {
    if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[1]));
    }
    if ((undefined *)*this_00 != (undefined *)0x0) {
      F_00d91a80((undefined *)*this_00);
    }
    *this_00 = pvVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
  }
  uVar2 = F_010596b0(this_00);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00);
    uVar2 = F_00d92610(uVar2);
    F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar2);
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),0);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dea2b0 */
uint F_00dea2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea2b0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00dea2e0 */
uint F_00dea2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea2e0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00dea300 */
uint F_00dea300(unsigned int gen_a0)
{
  GEN_ENTER(0xdea300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91510((undefined *)((int)this + 4));
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00dea330 */
unsigned int F_00dea330(unsigned int gen_a0)
{
  GEN_ENTER(0xdea330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dea360 */
uint F_00dea360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea360u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  undefined * pvVar1;
  uint uVar2;
  
  F_00d91520((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[1])) {
    if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[1]));
    }
    if ((undefined *)*this_00 != (undefined *)0x0) {
      F_00d91a80((undefined *)*this_00);
    }
    *this_00 = pvVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[1]));
  }
  uVar2 = F_010596b0(this_00);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00);
    uVar2 = F_00d92610(uVar2);
    uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar2);
    return uVar2;
  }
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),0);
  return uVar2;
}

/* ref: FUN_00dea3f0 */
uint F_00dea3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91510((undefined *)((int)this + 4));
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dea450 */
unsigned int F_00dea450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar1);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 + -1);
      F_00d91510(puVar1 + -2);
      puVar1 = puVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00dea4e0 */
uint F_00dea4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 + -1);
      F_00d91510(puVar2 + -2);
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dea660 */
uint F_00dea660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea660u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dea670 */
uint F_00dea670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdea670u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 1) = (undefined1)param_2;
  return in_ecx;
}

/* ref: FUN_00dea690 */
uint F_00dea690(unsigned int gen_a0)
{
  GEN_ENTER(0xdea690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dea6c0 */
uint F_00dea6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdea6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x10;
  param_1 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  return param_1;
}

/* ref: FUN_00dea6f0 */
uint F_00dea6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea6f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) == -0x354ff2e2) && ((*(int *)&gen_args[2]) == -0x2fee0532)) {
LAB_00dea750: ;
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[1]) >> 0x10),(char)((uint)(*(int *)&gen_args[1]) >> 0x18));
  gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)iVar1 >> 8),(undefined2)(*(int *)&gen_args[1]))));
  (*(int *)&gen_args[1]) = CONCAT13((char)iVar1,(undefined3)(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == -0x354ff2e2) {
    (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[2]) >> 0x10),(char)((uint)(*(int *)&gen_args[2]) >> 0x18));
    gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)(*(int *)&gen_args[2]) >> 8),(undefined2)(*(int *)&gen_args[1]))));
    (*(int *)&gen_args[1]) = CONCAT13((char)(*(int *)&gen_args[2]),(undefined3)(*(int *)&gen_args[1]));
    if ((*(int *)&gen_args[1]) == -0x2fee0532) goto LAB_00dea750;
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dea860 */
uint F_00dea860(unsigned int gen_a0)
{
  GEN_ENTER(0xdea860u, gen_a0, 0u, 0u, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  
  cVar2 = *in_eax;
  while ((cVar2 != '\0' && (cVar2 == ' '))) {
    pcVar1 = in_eax + 1;
    in_eax = in_eax + 1;
    cVar2 = *pcVar1;
  }
  return (uint)in_eax;
}

/* ref: FUN_00dea880 */
uint F_00dea880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00da0ee0(in_eax,in_edi);
  if (uVar1 != 0) {
    uVar2 = F_00da0e60(in_edi);
    pcVar3 = (char *)F_00dea860(uVar2 + uVar1);
    if (*pcVar3 == '=') {
      pcVar3 = (char *)F_00dea860(pcVar3 + 1);
      if (*pcVar3 == '\"') {
        pcVar3 = pcVar3 + 1;
        uVar1 = F_00da0ef0(pcVar3,0x22);
        if (uVar1 != 0) {
          F_00d91560(param_3,pcVar3,uVar1 - (int)pcVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00dea8e0 */
uint F_00dea8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_2 + 0x40;
  if (0 < *(int *)(param_2 + 0x14)) {
    do {
      uVar1 = F_00da0d20(iVar5,REFG(undefined * PTR32, 0x135485c));
      if (uVar1 == 0) {
        iVar4 = 0;
        if (*(int *)(iVar5 + 0x18) != 6 && -1 < *(int *)(iVar5 + 0x18) + -6) goto LAB_00dea933;
        goto LAB_00dea983;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *(int *)(param_2 + 0x14));
  }
LAB_00dea910: ;
  *param_1 = 0;
  return (uint)param_1;
  while( true ) {
    if (((*(char *)(iVar2 + 4) != '\t') ||
        (this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3,iVar2 + 5))), this == (undefined *)0x0)) ||
       (uVar3 = F_00d93010(this,0), uVar1 != uVar3)) goto LAB_00dea910;
    uVar1 = F_00da0e60(iVar2 + 5);
    iVar4 = iVar4 + 6 + uVar1;
    if (*(int *)(iVar5 + 0x18) + -6 <= iVar4) break;
LAB_00dea933: ;
    iVar2 = *(int *)(iVar5 + 0x14) + iVar4;
    uVar1 = *(uint *)(iVar2 + param_2);
    iVar2 = iVar2 + param_2;
    if (*(char *)(iVar2 + 5) == -1) break;
  }
LAB_00dea983: ;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dea990 */
uint F_00dea990(unsigned int gen_a0)
{
  GEN_ENTER(0xdea990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738));
    return uVar1;
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00dea9b0 */
uint F_00dea9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdea9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(uint *)((int)this + 8) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(undefined4, 0x15e3738));
    return uVar1;
  }
  return *(uint *)((int)this + 8);
}

/* ref: FUN_00dea9d0 */
uint F_00dea9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdea9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x310];
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  (*(undefined8 *)(gen_frame + 0x2f4)) = *param_4;
  uVar1 = param_4[1];
  (*(undefined8 *)(gen_frame + 0x2fc)) = uVar1;
  if ((param_6 & 2) != 0) {
    gen_piece_set(&(*(undefined8 *)(gen_frame + 0x2fc)), 2, 6, (unsigned long long)((undefined6)((ulonglong)uVar1 >> 0x10)));
    (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 1)) = 1;
    (*(undefined2 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 0)) = CONCAT11(1,(char)uVar1);
  }
  if ((param_6 & 1) == 0) {
    F_00df8880(((undefined1 *)(gen_frame + 0x200)),&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00dfb220(((undefined1 *)(gen_frame + 0x200)),param_1,param_2,param_5);
    uVar2 = F_00df9700((undefined *)((undefined1 *)(gen_frame + 0x200)),param_3,&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00df8900(((undefined1 *)(gen_frame + 0x200)));
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x304)) = 0;
  F_00d91340(&(*(uint *)(gen_frame + 0x308)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0xc))))
                    (REFG(undefined4, 0x15e3754),param_1,param_2,param_3,&(*(undefined8 *)(gen_frame + 0x2f4)),param_5,&(*(undefined4 *)(gen_frame + 0x304)));
  if (uVar2 == 1) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x2e8)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x2e8)),(*(uint *)(gen_frame + 0x308)) & 0xfffffffe);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0x1d25e54f,((undefined1 *)(gen_frame + 0x0)),"Util\\hkSerializeUtil.cpp",0x23a);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x2e8)));
  }
  F_00d91510(&(*(uint *)(gen_frame + 0x308)));
  return uVar2;
}

/* ref: FUN_00deab70 */
uint F_00deab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  uint uVar2;
  undefined4 in_ECX = 0;
  undefined4 * puVar3;
  
  F_00df6600(((undefined1 *)(gen_frame + 0x4)),CONCAT31((int3)((uint)in_ECX >> 8),(char)((*(uint *)&gen_args[4]) >> 1)) & 0xffffff01);
  F_00df64e0(((undefined1 *)(gen_frame + 0x4)),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(undefined4, 0x15e3738));
  (*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar3 = &(*(uint *)&gen_args[4]);
  (*(uint *)(gen_frame + 0xd8)) = uVar2;
  (*(undefined2 *)(gen_frame + 0xce)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba38));
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = ((undefined1 *)(gen_frame + 0x4));
  F_00df6480(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 * PTR32 *)&gen_args[3]));
  uVar2 = F_00deab00((*(undefined * PTR32 *)&gen_args[2]),puVar3);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + -1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]),1);
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00df66f0(((undefined1 *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00deac30 */
uint F_00deac30(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xdeac30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00deab00(param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00deac50 */
uint F_00deac50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdeac50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00deac30(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00deac70 */
uint F_00deac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00deab70(param_1,param_2,param_3,0,param_4);
  return uVar1;
}

/* ref: FUN_00deac90 */
uint F_00deac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  if (*(*(int * PTR32 *)&gen_args[1]) == 2) {
    uVar1 = F_00da1040((*(int * PTR32 *)&gen_args[1]) + 3,&REFG(undefined4, 0x135491c),4);
    if (uVar1 != 0) {
      if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
        *(*(undefined4 * PTR32 *)&gen_args[2]) = 3;
        F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1,"Wrong platform for packfile");
      }
      (*(int *)(gen_frame + 0x10)) = 0;
joined_r0x00deaf07: ;
      if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
        (*(int *)(gen_frame + 0x10)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      }
      return 0;
    }
    uVar1 = F_00e05450();
    uVar1 = F_00dec1f0((*(int * PTR32 *)&gen_args[1]) + 2,uVar1);
    if (uVar1 != 0) {
      iVar4 = (*(int *)(gen_frame + 0x10)) + 0x40;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar4) {
        iVar5 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar4 < iVar5) {
          iVar4 = iVar5;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar4,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x40;
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0xc)),0x40);
      iVar4 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x14);
      iVar8 = iVar4 * 0x30;
      iVar5 = (*(int *)(gen_frame + 0x10)) + iVar8;
      (*(int *)(gen_frame + 0x18)) = 0;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar5) {
        iVar6 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar5 < iVar6) {
          iVar5 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar8;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0xc)) + 0x40;
      (*(int *)(gen_frame + 0x24)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0xc)) + 0x40,iVar8);
      iVar5 = 0;
      if (1 < iVar4) {
        piVar2 = (int *)((*(int *)(gen_frame + 0x20)) + 0x5c);
        iVar6 = (iVar4 - 2U >> 1) + 1;
        iVar5 = iVar6 * 2;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        do {
          iVar7 = iVar7 + piVar2[-0xc];
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + *piVar2;
          piVar2 = piVar2 + 0x18;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = (*(int *)(gen_frame + 0x18));
      if (iVar5 < iVar4) {
        iVar6 = *(int *)((*(int *)(gen_frame + 0x20)) + 0x2c + iVar5 * 0x30);
      }
      iVar6 = iVar6 + iVar7 + (*(int *)(gen_frame + 0x24));
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (*(int *)(gen_frame + 0x10)) + iVar6) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)) + iVar6,1);
      }
      iVar7 = (*(int *)(gen_frame + 0x10)) + iVar6;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar7) {
        iVar4 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar7,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar6;
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),(*(int *)(gen_frame + 0xc)) + 0x40 + iVar8,iVar6);
      iVar7 = (*(int *)(gen_frame + 0xc));
      uVar1 = F_00dea990(&(*(uint *)&gen_args[4]));
      pcVar3 = (char *)F_00dea8e0(&(*(undefined1 *)(gen_frame + 0x2b)),iVar7,uVar1);
      if (*pcVar3 != '\0') {
        uVar1 = F_00e04c50((*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)),(*(undefined4 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x10)) = 0;
        if ((int)(*(uint *)(gen_frame + 0x14)) < 0) {
          return uVar1;
        }
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
        return uVar1;
      }
      if (((*(uint *)&gen_args[4]) & 1) != 0) {
        if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 4;
          F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1,"Class signatures not up to date.");
        }
        (*(int *)(gen_frame + 0x10)) = 0;
        goto joined_r0x00deaf07;
      }
    }
    if ((*(int *)(gen_frame + 0x10)) != 0) {
      F_01059e00(((byte *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(undefined4, 0x15e3754),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
      F_01059700(((byte *)(gen_frame + 0x0)));
      goto LAB_00deaf68;
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(undefined4, 0x15e3754),(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
LAB_00deaf68: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff)
    ;
  }
  return uVar1;
}

/* ref: FUN_00deb100 */
uint F_00deb100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdeb100u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 * this;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x158)) = (*(undefined4 * PTR32 *)&gen_args[1]) + 2;
  F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 2,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x154)) = puVar1 + 3;
  F_00da3720(puVar1 + 3,0,4);
  F_00c48350(&(*(int *)(gen_frame + 0xd4)),0,0x80);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c))))((*(int * PTR32 *)&gen_args[0]),0x80);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),&(*(int *)(gen_frame + 0xd4)),0x80);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20))))((*(int * PTR32 *)&gen_args[0]));
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x94)),0xffffffff,0x40);
  (*(undefined4 *)(gen_frame + 0x94)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x98)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0xbc)) = 0;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  if ((7 < (int)uVar2) &&
     (pcVar3 = (char *)F_00dea6f0((int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3,(*(int *)(gen_frame + 0xd4)),(*(int *)(gen_frame + 0xd8))), *pcVar3 != '\0')) {
    *puVar1 = 4;
    return (uint)pcVar3;
  }
  if (((0x3f < (int)uVar2) && ((*(int *)(gen_frame + 0xd4)) == 0x57e0e057)) && ((*(int *)(gen_frame + 0xd8)) == 0x10c0c010)) {
    *puVar1 = 2;
    F_00d91520((*(undefined4 * PTR32 *)(gen_frame + 0x158)),((undefined1 *)(gen_frame + 0xfc)));
    puVar1[1] = (*(undefined4 *)(gen_frame + 0xe0));
    uVar2 = F_00da3710((*(undefined4 * PTR32 *)(gen_frame + 0x154)),((undefined1 *)(gen_frame + 0xe4)),4);
    return uVar2;
  }
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile ");
  if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile>"), uVar2 == 0)) {
    uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hktagfile ");
    if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hktagfile>"), uVar2 == 0)) {
      return 0;
    }
    *puVar1 = 5;
    return uVar2;
  }
  *puVar1 = 3;
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xd4)),"<hkpackfile");
  F_00da4df0(((byte *)(gen_frame + 0x8)),uVar2);
  F_00d91340(&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),"classversion",&(*(undefined4 * PTR32 *)&gen_args[1]));
  if (uVar2 == 0) {
LAB_00deb338: ;
    pcVar3 = "Havok-3.0.0";
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x158));
  }
  else {
    uVar2 = F_00da0e80((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xfffffffe,0);
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x158));
    puVar1[1] = uVar2;
    if (uVar2 == 1) goto LAB_00deb338;
    if (((int)uVar2 < 2) || (9 < (int)uVar2)) {
      pcVar3 = "error";
    }
    else {
      uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),"contentsversion",(*(undefined4 * PTR32 *)(gen_frame + 0x158)));
      if (uVar2 != 0) goto LAB_00deb345;
      pcVar3 = "Havok-3.1.0";
    }
  }
  F_00d91520(this,pcVar3);
LAB_00deb345: ;
  F_00d91510(&(*(undefined4 * PTR32 *)&gen_args[1]));
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: FUN_00deb390 */
uint F_00deb390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeb390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  F_00dede30(param_3);
  iVar5 = 0;
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(int *)(gen_frame + 0x98)) = ((int)0x80000000);
  ((code *)*(gen_code32 *)(*in_eax + 0x20))(in_eax,&(*(int *)(gen_frame + 0x90)));
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0x90)) + iVar5 * 4);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      piVar1 = *(int * PTR32 *)((*(int *)(gen_frame + 0x90)) + iVar5 * 4);
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar4 = ((code *)*(gen_code32 *)(*param_4 + 0x10))(param_4,uVar2);
      if ((uVar4 == 0) || (uVar4 = F_00d92a10(uVar4), uVar4 != uVar3)) {
        uVar6 = F_00ded530(param_3,uVar2,uVar3);
        uVar4 = F_00dbddc0((undefined *)((int)param_3 + 0x18),(int)uVar6,(int)(uVar6 >> 0x20),
                             0xffffffff,0);
        if (uVar4 == 0xffffffff) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = ((undefined1 *)(gen_frame + 0x10));
          (*(uint *)(gen_frame + 0xc)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x8)) = 1;
          ((undefined1 *)(gen_frame + 0x10))[0] = 0;
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x4)),"Unable to version data of class %s, version 0x%p\n%s",uVar2,uVar3,
                       "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                      );
          *param_2 = 4;
          F_00d91520(param_2 + 1,(*(undefined1 * PTR32 *)(gen_frame + 0x4)));
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) & 0x3fffffff);
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x4)) = (undefined1 *)0x0;
          (*(uint *)(gen_frame + 0xc)) = 0x80000000;
          (*(int *)(gen_frame + 0x94)) = 0;
          if (-1 < (*(int *)(gen_frame + 0x98))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(int *)(gen_frame + 0x98)) * 4);
          }
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (*(int *)(gen_frame + 0x94)));
  }
  (*(int *)(gen_frame + 0x94)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x98))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(int *)(gen_frame + 0x98)) * 4);
  }
  return 1;
}

/* ref: FUN_00deb530 */
uint F_00deb530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeb530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  F_00e09800(((undefined1 *)(gen_frame + 0x10)));
  F_00e09820(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),param_3,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
    }
  }
  if ((in_edi != (undefined4 *)0x0) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(undefined4, 0x15e3734),param_4), uVar2 == 0)) {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x4)),param_4);
  uVar2 = F_00def500(REFG(undefined4, 0x15e3734),in_esi,((byte *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if (in_edi != (undefined4 *)0x0) {
      *in_edi = 4;
      F_00d91520(in_edi + 1,
                   "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
      F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
    F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
  }
  return 0;
}

/* ref: FUN_00deb5f0 */
uint F_00deb5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(undefined2 *)(gen_frame + 0x16)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba24));
  F_00df4940((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),in_ecx,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
    }
  }
  if ((in_edi != (undefined4 *)0x0) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(undefined4, 0x15e3734),param_4), uVar2 == 0)) {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x4)),param_4);
  uVar2 = F_00def500(REFG(undefined4, 0x15e3734),in_esi,((byte *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if (in_edi != (undefined4 *)0x0) {
      *in_edi = 4;
      F_00d91520(in_edi + 1,
                   "Patching to latest version failed. Have you registered the necessary patches? e.g. hkFeature_serializeRegisterKeycodePatches() See the hkError output for more details"
                  );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
      F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) != 0) {
    F_00d91a80((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
  }
  return 0;
}

/* ref: FUN_00deb9e0 */
uint F_00deb9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00deb6b0(*(undefined4 *)(uVar1 + 8),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00deba30 */
uint F_00deba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdeba30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((*(*(int * PTR32 *)&gen_args[0]) == 0x57e0e057) && ((*(int * PTR32 *)&gen_args[0])[1] == 0x10c0c010)) {
    uVar2 = F_00da1040((*(int * PTR32 *)&gen_args[0]) + 4,&REFG(undefined4, 0x135491c),4);
    if (uVar2 == 0) {
      uVar2 = F_00e05450();
      uVar2 = F_00da0d20(piVar1 + 10,uVar2);
      if (uVar2 == 0) {
        uVar2 = F_00dea990(&(*(undefined4 *)&gen_args[3]));
        pcVar3 = (char *)F_00dea8e0((int)&(*(int * PTR32 *)&gen_args[0]) + 3,piVar1,uVar2);
        if (*pcVar3 != '\0') {
          uVar2 = F_00e04c50(piVar1,(*(undefined4 *)&gen_args[1]),0);
          return uVar2;
        }
      }
    }
  }
  uVar2 = F_01059e00(((undefined1 *)(gen_frame + 0x40)),piVar1,(*(undefined4 *)&gen_args[1]));
  uVar2 = F_00deb6b0(*(undefined4 *)(uVar2 + 8),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  F_01059700(((undefined1 *)(gen_frame + 0x40)));
  return uVar2;
}

/* ref: FUN_00debdb0 */
uint F_00debdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdebdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00debb10(*(undefined4 *)(uVar1 + 8),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00debe00 */
uint F_00debe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdebe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_01059e00(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  uVar1 = F_00debb10(*(undefined4 *)(uVar1 + 8),param_3,param_4,param_5,param_6);
  F_01059700(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00debf60 */
uint F_00debf60(unsigned int gen_a0)
{
  GEN_ENTER(0xdebf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00debf80 */
uint F_00debf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdebf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00debfa0 */
uint F_00debfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdebfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00debfb0 */
uint F_00debfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdebfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00debfc0 */
uint F_00debfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdebfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00debfd0 */
uint F_00debfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdebfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00debff0 */
uint F_00debff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdebff0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec000 */
uint F_00dec000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec010 */
uint F_00dec010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec010u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec020 */
uint F_00dec020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec030 */
byte F_00dec030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)(*(undefined * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1])) == (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dec050 */
uint F_00dec050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec060 */
uint F_00dec060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec060u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00dec090 */
uint F_00dec090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdec090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dbddc0(this,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00dec0c0 */
unsigned int F_00dec0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdec0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dec110 */
uint F_00dec110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec110u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dec140 */
unsigned int F_00dec140(unsigned int gen_a0)
{
  GEN_ENTER(0xdec140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dec170 */
unsigned int F_00dec170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    if (this_00 != param_1) {
      F_00d91a80(this_00);
    }
    *(undefined * PTR32 *)this = param_1;
    return 0;
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00dec1c0 */
uint F_00dec1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dec1f0 */
uint F_00dec1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) == 0) {
    return (uint)(param_1 == 0);
  }
  if (param_1 != 0) {
    uVar1 = F_00da0d20(*(uint *)this & 0xfffffffe,param_1);
    return (uint)(uVar1 == 0);
  }
  return 0;
}

/* ref: FUN_00dec240 */
uint F_00dec240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  if ((((*(char *)this == *param_2) && (*(char *)((int)this + 1) == param_2[1])) &&
      (*(char *)((int)this + 2) == param_2[2])) && (*(char *)((int)this + 3) == param_2[3])) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dec290 */
uint F_00dec290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0((undefined *)((int)this + 8),local_8);
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00dec2e0 */
uint F_00dec2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dec2f0 */
uint F_00dec2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdec2f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf3 */
uint F_00dec320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3a20(this + 8,*param_1,param_1);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf4 */
uint F_00dec340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  this_00 = (undefined *)F_00da4190(this + 8,param_2,0);
  if (this_00 != (undefined *)0x0) {
    F_00dc25d0(this_00,param_1,*(undefined4 *)(this + 0x18));
    return (uint)this_00;
  }
  return 0;
}

/* ref: hkTypeInfoRegistry::vf5 */
uint F_00dec380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  
  this_00 = (undefined *)F_00da4190(this + 8,param_2,0);
  if (this_00 != (undefined *)0x0) {
    F_00dc2610(this_00,param_1);
  }
  return (uint)this_00;
}

/* ref: hkTypeInfoRegistry::vf6 */
uint F_00dec3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = (undefined *)((*(int *)&gen_args[1]) + 8);
  uVar1 = F_00da3970(this_00);
  uVar2 = F_00da3e40(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0') {
    do {
      uVar2 = F_00da39b0(this_00,uVar1);
      uVar3 = F_00da3990(this_00,uVar1);
      F_00da3a20((*(undefined * PTR32 *)&gen_args[0]) + 8,uVar3,uVar2);
      uVar1 = F_00da39f0(this_00,uVar1);
      uVar2 = F_00da3e40(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar1);
    } while ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0');
  }
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf7 */
uint F_00dec430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4190(this + 8,param_1,0);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf0 */
uint F_00dec450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da3e20(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dec490 */
uint F_00dec490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  uVar1 = F_00d91520((undefined *)((int)this + 4),param_2);
  return uVar1;
}

/* ref: FUN_00dec4b0 */
uint F_00dec4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdec4b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dec4e0 */
uint F_00dec4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdec4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbddc0((undefined *)((int)this + 0x18),param_1,param_2,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_00dec510 */
unsigned int F_00dec510(unsigned int gen_a0)
{
  GEN_ENTER(0xdec510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00dec550 */
uint F_00dec550(unsigned int gen_a0)
{
  GEN_ENTER(0xdec550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlTagfileReader::vf0 */
uint F_00dec580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdec580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

