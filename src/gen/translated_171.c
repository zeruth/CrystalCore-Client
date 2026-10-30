#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d9a110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a110(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
  F_00d91350(in_ecx + 0x19 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: hkSimpleLocalFrame::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x5c)));
}

/* ref: hkSimpleLocalFrame::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x5c))) = param_2;
  return param_2;
}

/* ref: hkSimpleLocalFrame::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: FUN_00d9a160 */
GEN_LIB GEN_FRAME uint F_00d9a160(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSimpleLocalFrame::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 100))) & 0xfffffffe;
}

/* ref: hkSimpleLocalFrame::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a1a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da9830(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a1e0 */
GEN_LIB GEN_FRAME uint F_00d9a1e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a1f0 */
GEN_LIB GEN_FRAME uint F_00d9a1f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a200 */
GEN_LIB GEN_FRAME uint F_00d9a200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a210 */
GEN_LIB GEN_FRAME uint F_00d9a210(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a220 */
GEN_LIB GEN_FRAME uint F_00d9a220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9a240 */
GEN_LIB GEN_FRAME unsigned int F_00d9a240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00da9ae0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9a270 */
GEN_LIB GEN_FRAME unsigned int F_00d9a270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dada40(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9a2c0 */
GEN_LIB GEN_FRAME uint F_00d9a2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d9a2d0 */
GEN_LIB GEN_FRAME unsigned int F_00d9a2d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9a2f0 */
GEN_LIB GEN_FRAME unsigned int F_00d9a2f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9a310 */
GEN_LIB GEN_FRAME uint F_00d9a310(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9a320 */
GEN_LIB GEN_FRAME uint F_00d9a320(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9a330 */
GEN_LIB GEN_FRAME uint F_00d9a330(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9a340 */
GEN_LIB GEN_FRAME uint F_00d9a340(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1139470));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a360 */
GEN_LIB GEN_NOFRAME uint F_00d9a360(void)
{
  GEN_ENTER(0xd9a360u, 0u, 0u, 0u, 0u);
  return 0x1139470;
}

/* ref: FUN_00d9a370 */
GEN_LIB GEN_FRAME uint F_00d9a370(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9a9d0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9a410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9a410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d9a440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d9a460 */
GEN_LIB GEN_FRAME unsigned int F_00d9a460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00d9a490 */
GEN_LIB GEN_FRAME unsigned int F_00d9a490(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00d9a4c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9a4c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x24);
  }
  return;
}

/* ref: FUN_00d9a4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a4f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00d9a510 */
GEN_LIB GEN_FRAME unsigned int F_00d9a510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00d9a540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a540(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: FUN_00d9a560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a560(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return param_1;
}

/* ref: FUN_00d9a5a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a5a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x24);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a5e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a630 */
GEN_LIB GEN_FRAME unsigned int F_00d9a630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + 8 + iVar1 * 0x10)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x10)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00d9a660 */
GEN_LIB GEN_FRAME unsigned int F_00d9a660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00d9a690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + 8 + iVar2 * 0x10)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00d9a6c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      uVar1 = F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00d9a6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
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

/* ref: FUN_00d9a7b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
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

/* ref: FUN_00d9a870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a8d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
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

/* ref: FUN_00d9a940 */
GEN_LIB GEN_FRAME uint F_00d9a940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9a940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9a970 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
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

/* ref: FUN_00d9a9d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9a9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9a9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + 8 + iVar2 * 0x10)));
    do {
      F_00d91510(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x10)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMonitorStreamColorTable::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aa30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9a970(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9aa70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aa70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9a9d0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9aac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aac0(void)
{
  GEN_ENTER(0xd9aac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9aae0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aae0(void)
{
  GEN_ENTER(0xd9aae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab00 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab00(void)
{
  GEN_ENTER(0xd9ab00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab20 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab20(void)
{
  GEN_ENTER(0xd9ab20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab40 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab40(void)
{
  GEN_ENTER(0xd9ab40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab60 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab60(void)
{
  GEN_ENTER(0xd9ab60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ab80 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ab80(void)
{
  GEN_ENTER(0xd9ab80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9aba0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9aba0(void)
{
  GEN_ENTER(0xd9aba0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9abc0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9abc0(void)
{
  GEN_ENTER(0xd9abc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9abe0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9abe0(void)
{
  GEN_ENTER(0xd9abe0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac00 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac00(void)
{
  GEN_ENTER(0xd9ac00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac20 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac20(void)
{
  GEN_ENTER(0xd9ac20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac40 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac40(void)
{
  GEN_ENTER(0xd9ac40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac60 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac60(void)
{
  GEN_ENTER(0xd9ac60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac80 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9ac80(void)
{
  GEN_ENTER(0xd9ac80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9ac90 */
GEN_LIB GEN_FRAME uint F_00d9ac90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9acb0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9acb0(void)
{
  GEN_ENTER(0xd9acb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9acc0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9acc0(void)
{
  GEN_ENTER(0xd9acc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9acd0 */
GEN_LIB GEN_FRAME uint F_00d9acd0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9acd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9ad20 */
GEN_LIB GEN_FRAME uint F_00d9ad20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ad20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9ad70 */
GEN_LIB GEN_FRAME uint F_00d9ad70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ad70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9ad80 */
GEN_LIB GEN_FRAME unsigned int F_00d9ad80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ad80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00d9adb0 */
GEN_LIB GEN_FRAME unsigned int F_00d9adb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9adb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00d9ade0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ade0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ae20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ae20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ae60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ae60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9aef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9aef0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9aef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9af60 */
GEN_LIB GEN_FRAME uint F_00d9af60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9af60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9af70 */
GEN_LIB GEN_FRAME uint F_00d9af70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9af70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9afa0 */
GEN_LIB GEN_FRAME unsigned int F_00d9afa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9afa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00db19a0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9afc0 */
GEN_LIB GEN_FRAME uint F_00d9afc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9afc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d9afd0 */
GEN_LIB GEN_NOFRAME uint F_00d9afd0(void)
{
  GEN_ENTER(0xd9afd0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00db19a0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d9b000 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b000(void)
{
  GEN_ENTER(0xd9b000u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b010 */
GEN_LIB GEN_FRAME unsigned int F_00d9b010(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  }
  *param_1 = 0;
  return;
}

/* ref: FUN_00d9b030 */
GEN_LIB GEN_FRAME unsigned int F_00d9b030(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return;
}

/* ref: FUN_00d9b070 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d9b090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b090(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b0e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b0e0(void)
{
  GEN_ENTER(0xd9b0e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b0f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b0f0(void)
{
  GEN_ENTER(0xd9b0f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b100 */
GEN_LIB GEN_FRAME uint F_00d9b100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b130 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b130(void)
{
  GEN_ENTER(0xd9b130u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b150 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b150(void)
{
  GEN_ENTER(0xd9b150u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b170 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b170(void)
{
  GEN_ENTER(0xd9b170u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b180 */
GEN_LIB GEN_FRAME uint F_00d9b180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b1a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b1a0(void)
{
  GEN_ENTER(0xd9b1a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b1c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9b1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00db2110(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00d9b1e0 */
GEN_LIB GEN_FRAME uint F_00d9b1e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9b340(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d9b210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9b210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d9b240 */
GEN_LIB GEN_FRAME unsigned int F_00d9b240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return;
}

/* ref: FUN_00d9b280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b280u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9b2c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b2c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),iVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d9b3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b3c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9b340(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b410 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b410(void)
{
  GEN_ENTER(0xd9b410u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b430 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b430(void)
{
  GEN_ENTER(0xd9b430u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b450 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b450(void)
{
  GEN_ENTER(0xd9b450u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b470 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b470(void)
{
  GEN_ENTER(0xd9b470u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b490 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b490(void)
{
  GEN_ENTER(0xd9b490u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4b0(void)
{
  GEN_ENTER(0xd9b4b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4d0(void)
{
  GEN_ENTER(0xd9b4d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b4f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b4f0(void)
{
  GEN_ENTER(0xd9b4f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b510 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b510(void)
{
  GEN_ENTER(0xd9b510u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b530 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b530(void)
{
  GEN_ENTER(0xd9b530u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b550 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b550(void)
{
  GEN_ENTER(0xd9b550u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b570 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b570(void)
{
  GEN_ENTER(0xd9b570u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b580 */
GEN_LIB GEN_FRAME uint F_00d9b580(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b5a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b5a0(void)
{
  GEN_ENTER(0xd9b5a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b5b0 */
GEN_LIB GEN_FRAME uint F_00d9b5b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9b600 */
GEN_LIB GEN_FRAME unsigned int F_00d9b600(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00d9b630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b630u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b700 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b700(void)
{
  GEN_ENTER(0xd9b700u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b720 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b720(void)
{
  GEN_ENTER(0xd9b720u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b740 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b740(void)
{
  GEN_ENTER(0xd9b740u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00d9b750 */
GEN_LIB GEN_FRAME uint F_00d9b750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9b770 */
GEN_LIB GEN_FRAME uint F_00d9b770(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109944c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b790 */
GEN_LIB GEN_FRAME uint F_00d9b790(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d9b7a0 */
GEN_LIB GEN_NOFRAME uint F_00d9b7a0(void)
{
  GEN_ENTER(0xd9b7a0u, 0u, 0u, 0u, 0u);
  return 0x109944c;
}

/* ref: FUN_00d9b7c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b7c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x10e15e4));
  return;
}

/* ref: hkMemoryAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,*param_1);
  return uVar1;
}

/* ref: hkMemoryAllocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd9b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: hkMemoryAllocator::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9b800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_3);
      *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

/* ref: hkMemoryAllocator::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9b830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *((int *)GEN_TOP((param_1 + iVar2 * 4)));
      if (iVar1 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,iVar1,param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

/* ref: hkMemoryAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9b880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_3);
  if (uVar1 != 0) {
    iVar2 = *param_3;
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    F_00da3710(uVar1,param_1,iVar2);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9b8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9b8d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d9b8e0 */
GEN_LIB GEN_FRAME uint F_00d9b8e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9b8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15da498) = param_1;
  return param_1;
}

/* ref: FUN_00d9b8f0 */
GEN_LIB GEN_NOFRAME uint F_00d9b8f0(void)
{
  GEN_ENTER(0xd9b8f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15da498);
}

/* ref: FUN_00d9b910 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b910(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9b910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[24])REFP(0x113bcdc));
  return;
}

/* ref: hkMemorySystem::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf14 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b930(void)
{
  GEN_ENTER(0xd9b930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkMemorySystem::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf6 */
GEN_LIB GEN_NOFRAME uint F_00d9b950(void)
{
  GEN_ENTER(0xd9b950u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkMemorySystem::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9b960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf8 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9b970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xd9b980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,pvVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: hkMemorySystem::vf16 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9b9c0(void)
{
  GEN_ENTER(0xd9b9c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkMemorySystem::vf17 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: hkMemorySystem::vf18 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkMemorySystem::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9b9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9ba00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ba00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkMemorySystem::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9ba10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ba10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkMemorySystem::vf22 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ba20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd9ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return 1;
}

/* ref: hkMemorySystem::vf23 */
GEN_LIB GEN_NOFRAME uint F_00d9ba30(void)
{
  GEN_ENTER(0xd9ba30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkMemorySystem::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ba40(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ba40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  
  F_00d9b910(in_ecx GEN_EDX_FWD);
  return ((uint)(uint)(in_ecx));
}

/* ref: FUN_00d9ba60 */
GEN_LIB GEN_FRAME uint F_00d9ba60(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ba60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00d92510(param_1);
  F_00da1340();
  return 0;
}

/* ref: FUN_00d9ba80 */
GEN_LIB GEN_FRAME uint F_00d9ba80(GEN_P(undefined1 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9ba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  *param_1 = REFG(undefined1, 0x15da4a0);
  return (uint)param_1;
}

/* ref: FUN_00d9baa0 */
GEN_LIB GEN_FRAME unsigned int F_00d9baa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9baa0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0xc28, 8, 4);
  DWORD * pDVar1;
  DWORD DVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  DWORD * pDVar4;
  
  gen_imp_GetSystemInfo(&(*(_SYSTEM_INFO *)(gen_frame + 0xc00)));
  pDVar1 = (*(DWORD * PTR32 *)&gen_args[0]);
  DVar2 = (*(_SYSTEM_INFO *)(gen_frame + 0xc00)).dwNumberOfProcessors;
  if (0xb < (int)(*(_SYSTEM_INFO *)(gen_frame + 0xc00)).dwNumberOfProcessors) {
    DVar2 = 0xc;
  }
  *(*(DWORD * PTR32 *)&gen_args[0]) = DVar2;
  hModule = gen_imp_LoadLibraryA(((char *)REFP(0x113bd94)));
  if (hModule != (HMODULE)0x0) {
    pFVar3 = gen_imp_GetProcAddress(hModule,((char *)REFP(0x113bd74)));
    if (pFVar3 != (FARPROC)0x0) {
      (*(DWORD * PTR32 *)&gen_args[0]) = ((DWORD *)GEN_TOP(0x0));
      ((code *)pFVar3)(0,&(*(DWORD * PTR32 *)&gen_args[0]));
      if ((*(DWORD * PTR32 *)&gen_args[0]) < ((DWORD *)GEN_TOP(0xc01))) {
        ((code *)pFVar3)(((undefined1 *)(gen_frame + 0x0)),&(*(DWORD * PTR32 *)&gen_args[0]));
        pDVar4 = ((DWORD *)GEN_TOP(0x0));
        DVar2 = 0;
        if ((*(DWORD * PTR32 *)&gen_args[0]) != ((DWORD *)GEN_TOP(0x0))) {
          do {
            if (*((int *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + (int)pDVar4))) == 0) {
              DVar2 = DVar2 + 1;
            }
            pDVar4 = pDVar4 + 6;
          } while (pDVar4 < (*(DWORD * PTR32 *)&gen_args[0]));
        }
        *pDVar1 = DVar2;
      }
    }
    gen_imp_FreeLibrary(hModule);
  }
  return 0;
}

/* ref: FUN_00d9bb50 */
GEN_LIB GEN_NOFRAME uint F_00d9bb50(void)
{
  GEN_ENTER(0xd9bb50u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  if (pvVar1 != (LPVOID)0x0) {
    F_00da1380(pvVar1);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (pvVar1 != (LPVOID)0x0) {
    F_00d92510(0);
  }
  return 0;
}

/* ref: FUN_00d9bb90 */
GEN_LIB GEN_NOFRAME uint F_00d9bb90(void)
{
  GEN_ENTER(0xd9bb90u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,8)));
  puVar2[1] = 0x10008;
  *puVar2 = (*(undefined * PTR32 (*)[4])REFP(0x113bda8));
  return (uint)puVar2;
}

/* ref: FUN_00d9bbc0 */
GEN_LIB GEN_FRAME uint F_00d9bbc0(void)
{
  GEN_ENTER(0xd9bbc0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  piVar6 = &REFG(int, 0x15dff80);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  iVar5 = REFG(int, 0x15dff80);
  if (REFG(int, 0x15dff80) != 0) {
    do {
      if ((**((int * PTR32 *)GEN_TOP((iVar5 + 0xc))) == 0) && (*((gen_code32 *)GEN_TOP((iVar5 + 4))) != ((code *)GEN_TOP(0x0)))) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 4))))();
        if (uVar3 != 0) {
          **((uint * PTR32 *)GEN_TOP((iVar5 + 0xc))) = uVar3;
          goto LAB_00d9bc04;
        }
        if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),4);
        }
        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4))) = iVar5;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
        *((undefined4 *)GEN_TOP((*piVar6 + 8))) = 0;
        *piVar6 = iVar5;
      }
      else {
LAB_00d9bc04: ;
        piVar6 = ((int *)GEN_TOP((iVar5 + 8)));
        iVar5 = *piVar6;
      }
      uVar3 = (*(uint *)(gen_frame + 0x4));
    } while (iVar5 != 0);
    while (uVar2 = uVar3, uVar3 != 0) {
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar2 * 4)));
        pcVar1 = *((gen_code32 *)GEN_TOP((iVar5 + 4)));
        uVar4 = (*pcVar1)((*(int *)(gen_frame + 0x0)));
        uVar3 = (*(uint *)(gen_frame + 0x4));
        if (uVar4 != 0) {
          **((uint * PTR32 *)GEN_TOP((iVar5 + 0xc))) = uVar4;
          *piVar6 = iVar5;
          uVar3 = (*(uint *)(gen_frame + 0x4)) - 1;
          piVar6 = ((int *)GEN_TOP((iVar5 + 8)));
          (*(uint *)(gen_frame + 0x4)) = uVar3;
          uVar3 = (*(uint *)(gen_frame + 0x4));
          if (uVar3 != uVar2) {
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar2 * 4))) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + uVar3 * 4)));
          }
        }
      }
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: FUN_00d9bcd0 */
GEN_LIB GEN_FRAME uint F_00d9bcd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9bcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  
  if (REFG(char, 0x15da4a0) == '\0') {
    F_00d9ba60(param_1);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,8)));
    puVar2[1] = 0x10008;
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x113bd5c));
    if (REFG(undefined4 * PTR32, 0x15dffa8) != ((undefined4 *)GEN_TOP(0x0))) {
      F_00d91840(REFG(undefined4 * PTR32, 0x15dffa8) GEN_EDX_ARG);
    }
    REFG(undefined4 * PTR32, 0x15dffa8) = puVar2;
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x28)));
    *((undefined2 *)GEN_TOP(((int)pvVar3 + 4))) = 0x28;
    pvVar3 = ((undefined *)GEN_TOP(F_00db2ca0(pvVar3 GEN_EDX_ARG,param_2,param_3)));
    if (REFG(void * PTR32, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(void * PTR32, 0x15dff78) GEN_EDX_ARG);
    }
    REFG(void * PTR32, 0x15dff78) = pvVar3;
    F_00d9bbc0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da49c) + 0xc))))(REFG(int * PTR32, 0x15da49c) GEN_EDX_ARG);
    F_009f0b80();
    REFG(char, 0x15da4a0) = '\x01';
  }
  return 0;
}

/* ref: FUN_00d9bda0 */
GEN_LIB GEN_FRAME uint F_00d9bda0(void)
{
  GEN_ENTER(0xd9bda0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  int iVar1;
  undefined * this;
  code * pcVar2;
  uint uVar3;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  for (iVar1 = REFG(int, 0x15dff80); uVar3 = (*(uint *)(gen_frame + 0x4)), iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 8)))) {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    *(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = iVar1;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  }
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    this = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4) + 0xc)))));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(this GEN_EDX_ARG);
      **((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4) + 0xc))) = 0;
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*(uint *)(gen_frame + 0x8)) = (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00d9be90 */
GEN_LIB GEN_NOFRAME uint F_00d9be90(void)
{
  GEN_ENTER(0xd9be90u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x15da4a0) != '\0') {
    F_00d918e0(0);
    F_00d9bda0();
    if ((REFG(char, 0x15dffac) != '\0') && (REFG(undefined * PTR32, 0x135278c) != ((undefined *)GEN_TOP(0x0)))) {
      (*(code *)REFG(undefined * PTR32, 0x135278c))();
      REFG(char, 0x15dffac) = '\0';
    }
    if (REFG(void * PTR32, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(void * PTR32, 0x15dff78) GEN_EDX_ARG);
    }
    REFG(void * PTR32, 0x15dff78) = ((undefined *)GEN_TOP(0x0));
    if (REFG(void * PTR32, 0x15dffa8) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91840(REFG(void * PTR32, 0x15dffa8) GEN_EDX_ARG);
    }
    REFG(void * PTR32, 0x15dffa8) = ((undefined *)GEN_TOP(0x0));
    F_00d9bb50();
    REFG(char, 0x15da4a0) = '\0';
  }
  return 0;
}

/* ref: FUN_00d9bf00 */
GEN_LIB GEN_FRAME unsigned int F_00d9bf00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(void * PTR32, 0x15dff78) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(void * PTR32, 0x15dff78) GEN_EDX_ARG);
    REFG(void * PTR32, 0x15dff78) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(void * PTR32, 0x15dff78) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: FUN_00d9bf30 */
GEN_LIB GEN_FRAME unsigned int F_00d9bf30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9bf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(void * PTR32, 0x15dffa8) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(void * PTR32, 0x15dffa8) GEN_EDX_ARG);
    REFG(void * PTR32, 0x15dffa8) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(void * PTR32, 0x15dffa8) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: FUN_00d9bfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9bfc0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d9bfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9c020 */
GEN_LIB GEN_FRAME unsigned int F_00d9c020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c020u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9c060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d9c0a0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00d9c0a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00d9c0d0 */
GEN_LIB GEN_FRAME uint F_00d9c0d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d9c100 */
GEN_LIB GEN_FRAME uint F_00d9c100(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkNativeFileSystem::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbea40(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9c170 */
GEN_LIB GEN_FRAME uint F_00d9c170(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9c1b0 */
GEN_LIB GEN_FRAME uint F_00d9c1b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkDummySingleton::vf3 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9c210(void)
{
  GEN_ENTER(0xd9c210u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDummySingleton::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 != param_1) {
    uVar1 = *((uint *)GEN_TOP((*(int *)this + uVar1 * 4)));
    *((uint *)GEN_TOP((*(int *)this + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d9c2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c2b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9c2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9c310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c350 */
GEN_LIB GEN_FRAME uint F_00d9c350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9c380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c380(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkNativeFileSystem::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c3c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c3c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9c480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c480u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c4c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9c500 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c500u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9c580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00d9c5a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9c5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9c5a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c610 */
GEN_LIB GEN_FRAME uint F_00d9c610(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9c6a0 */
GEN_LIB GEN_FRAME uint F_00d9c6a0(GEN_P(LPCSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9c6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: FUN_00d9c6f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9c6f0(void)
{
  GEN_ENTER(0xd9c6f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = &REFG(undefined * PTR32, 0x1352290);
  return;
}

/* ref: FUN_00d9c700 */
GEN_LIB GEN_NOFRAME uint F_00d9c700(void)
{
  GEN_ENTER(0xd9c700u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  
  if (REFG(undefined * PTR32 * PTR32, 0x15da4a4) == &REFG(undefined * PTR32, 0x13522a0)) {
    in_EAX = F_00db48c0(&REFG(undefined * PTR32, 0x13522a0) GEN_EDX_ARG);
  }
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = ((undefined * PTR32 *)GEN_TOP(0x0));
  return in_EAX;
}

/* ref: FUN_00d9c720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00da5ee0(this GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00d9c780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c780(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 <= param_4) {
    iVar2 = param_1[1] - 1;
  }
  if ((int)param_3 < iVar2) {
    uVar1 = param_3;
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00da0ee0(*(int *)this + param_2,param_1);
  if (uVar1 != 0) {
    return uVar1 - *(int *)this;
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char * pcVar6;
  uint local_8;
  
  pcVar6 = *(char * PTR32 *)this;
  cVar4 = *pcVar6;
  local_8 = 0;
  uVar2 = local_8;
  do {
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar5 = 0;
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      cVar3 = pcVar6[iVar5];
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if (cVar3 != cVar4) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar4 = param_1[iVar1];
    }
    if (param_1[iVar5] == '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  } while( true );
}

/* ref: FUN_00d9c880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c880(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 < param_4) {
    iVar2 = param_1[1] - 1;
  }
  uVar1 = iVar2 - 1;
  if (param_3 <= (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 - 1;
    } while (param_3 <= (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (uVar1 = F_00da0ee0(*(undefined4 *)this,param_1); uVar1 != 0;
      uVar1 = F_00da0ee0(uVar1 + 1,param_1)) {
    uVar2 = uVar1 - *(int *)this;
  }
  return uVar2;
}

/* ref: FUN_00d9c900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d9c920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d70(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d9c940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9c940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 < 0;
  return param_1;
}

/* ref: FUN_00d9c960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d9c900(this GEN_EDX_FWD,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00d9c980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*((char *)GEN_TOP((iVar3 + param_1))) != '\0'))) {
    if (pcVar2[iVar3] != *((char *)GEN_TOP((iVar3 + param_1)))) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return (uint)(*((char *)GEN_TOP((iVar3 + param_1))) == '\0');
}

/* ref: FUN_00d9c9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9c9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar3 = *(char * PTR32 *)this;
  cVar2 = *pcVar3;
  pcVar4 = param_1;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *pcVar4, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

/* ref: FUN_00d9ca20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ca20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar1) - 1 + iVar2))) !=
          *((char *)GEN_TOP((iVar2 + param_1)))) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: FUN_00d9ca70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar2) - 1 + iVar4)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *((char *)GEN_TOP((iVar4 + param_1)));
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00d9caf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9caf0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1[1] == 1 || param_1[1] - 1 < 0) {
    return 0;
  }
  do {
    if (*((char *)GEN_TOP((*param_1 + iVar1))) == param_2) {
      *((undefined1 *)GEN_TOP((*param_1 + iVar1))) = param_3;
      uVar2 = 1;
      if (param_4 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1[1] - 1);
  return uVar2;
}

/* ref: FUN_00d9cb40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9cb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: FUN_00d9cb80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 - 0x20;
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: FUN_00d9cbc0 */
GEN_LIB GEN_NOFRAME uint F_00d9cbc0(void)
{
  GEN_ENTER(0xd9cbc0u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x15da4a4) == 0) {
    F_00d9c6f0();
  }
  return REFG(undefined4, 0x15da4a4);
}

/* ref: FUN_00d9cbe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9cbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar3 = param_1;
  if (iVar1 <= param_1) {
    iVar3 = iVar1;
  }
  if (0 < iVar3) {
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - iVar3;
    puVar2 = *(undefined1 * PTR32 *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (0 < iVar1) {
      do {
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00d9cc60 */
GEN_LIB GEN_NOFRAME uint F_00d9cc60(GEN_P(undefined4 in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xd9cc60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(in_edi);
  iVar2 = uVar1 + 1;
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,iVar2);
  F_00da0e20(uVar1,in_edi);
  return uVar1;
}

/* ref: FUN_00d9cc90 */
GEN_LIB GEN_FRAME uint F_00d9cc90(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(param_2);
  if ((int)in_eax < (int)uVar1) {
    uVar1 = in_eax;
  }
  iVar3 = uVar1 + 1;
  uVar2 = F_00d9cbc0();
  uVar2 = F_00d92460(uVar2,iVar3);
  F_00da0e40(uVar2,param_2,uVar1);
  *((undefined1 *)GEN_TOP((uVar2 + uVar1))) = 0;
  return uVar2;
}

/* ref: FUN_00d9cce0 */
GEN_LIB GEN_FRAME uint F_00d9cce0(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint * in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = *in_esi;
  if ((uVar2 & 0xfffffffe) != in_eax) {
    if ((uVar2 & 1) != 0) {
      iVar1 = uVar2 - 1;
      uVar2 = F_00d9cbc0();
      uVar2 = F_00d924b0(uVar2,iVar1);
    }
    if (in_eax != 0) {
      if (param_3 == -1) {
        uVar2 = F_00d9cc60(in_eax);
        *in_esi = uVar2 + 1;
        return uVar2 + 1;
      }
      uVar2 = F_00d9cc90(param_3,in_eax);
      *in_esi = uVar2 + 1;
      return uVar2 + 1;
    }
    *in_esi = 0;
  }
  return uVar2;
}

/* ref: FUN_00d9cd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9cd60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,param_2);
  return (uint)this;
}

/* ref: FUN_00d9cd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9cde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9ce00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9ce20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ce20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d9cce0(param_1,this,param_2);
  return uVar1;
}

/* ref: FUN_00d9ce40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xfffffffe;
  if (uVar1 != param_1) {
    uVar1 = F_00d9cce0(0,this,0xffffffff);
    *(uint *)this = param_1;
  }
  return uVar1;
}

/* ref: FUN_00d9ce80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ce80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ce80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00d9cf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9cf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9cf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)this;
  uVar3 = F_00d9cbc0();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(uVar3,param_2,4);
  }
  *((undefined4 *)GEN_TOP((*param_2 + param_2[1] * 4))) = uVar1;
  param_2[1] = param_2[1] + 1;
  uVar3 = param_2[1];
  for (uVar4 = F_00d9c780(this GEN_EDX_ARG,(undefined1)param_1,0,0x7fffffff); -1 < (int)uVar4;
      uVar4 = F_00d9c780(this GEN_EDX_ARG,(undefined1)param_1,uVar4 + 1,0x7fffffff)) {
    *((undefined1 *)GEN_TOP((uVar4 + *(int *)this))) = 0;
    iVar2 = *(int *)this;
    uVar3 = F_00d9cbc0();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(uVar3,param_2,4);
    }
    *((uint *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar2 + uVar4 + 1;
    param_2[1] = param_2[1] + 1;
    uVar3 = param_2[1];
  }
  return uVar3;
}

/* ref: FUN_00d9cff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9cff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00d9d030 */
GEN_LIB GEN_FRAME uint F_00d9d030(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  
  while( true ) {
    while( true ) {
      uVar5 = param_1[2] & 0x3fffffff;
      uVar3 = F_00da0cd0(*param_1,uVar5,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar5 = uVar5 * 2;
      if (uVar5 < 0x100) {
        uVar5 = 0xff;
      }
      iVar1 = uVar5 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(uVar3,param_1,iVar4,1);
      }
      param_1[1] = iVar1;
      *((undefined1 *)GEN_TOP((uVar5 + *param_1))) = 0;
    }
    if ((int)uVar3 < (int)uVar5) break;
    iVar1 = uVar3 + 1;
    uVar5 = F_00d9cbc0();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar5,param_1,iVar4,1);
    }
    param_1[1] = iVar1;
    *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  }
  iVar1 = uVar3 + 1;
  uVar5 = F_00d9cbc0();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(uVar5,param_1,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar2);
  }
  param_1[1] = iVar1;
  *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  return uVar5;
}

/* ref: FUN_00d9d120 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = param_1;
  ((int *)(gen_frame + 0x0))[2] = param_3;
  ((int *)(gen_frame + 0x0))[1] = param_2;
  ((int *)(gen_frame + 0x0))[4] = param_5;
  iVar7 = 0;
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  ((int *)(gen_frame + 0x0))[3] = param_4;
  iVar6 = 0;
  (*(undefined8 *)(gen_frame + 0x1c)) = 0;
  (*(undefined8 *)(gen_frame + 0x24)) = 0;
  (*(undefined8 *)(gen_frame + 0x2c)) = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_6;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar3 = iVar5;
  iVar4 = param_1;
  while (iVar4 != 0) {
    uVar2 = F_00da0e60(iVar4);
    iVar3 = iVar3 + uVar2;
    iVar6 = iVar6 + 1;
    *((uint *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7))) = uVar2;
    iVar7 = iVar6 * 4;
    iVar4 = ((int *)(gen_frame + 0x0))[(int)(iVar6)];
  }
  iVar7 = iVar3 + 1;
  uVar2 = F_00d9cbc0();
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar8 < iVar7) {
    iVar4 = uVar8 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  *((undefined1 *)GEN_TOP((iVar3 + *(int *)this))) = 0;
  iVar7 = 0;
  param_1 = 0;
  iVar3 = param_1;
  while (iVar1 != 0) {
    iVar4 = *((int *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7)));
    iVar7 = *(int *)this;
    F_00da1010(iVar7 + iVar5,iVar1,iVar4);
    iVar3 = iVar3 + 1;
    iVar7 = iVar3 * 4;
    iVar5 = iVar5 + iVar4;
    iVar1 = ((int *)(gen_frame + 0x0))[(int)(iVar3)];
  }
  return 0;
}

/* ref: FUN_00d9d230 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_00d9cff0(this GEN_EDX_FWD);
  F_00d9d120(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

/* ref: FUN_00d9d260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < param_1) {
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    uVar3 = F_00d9cbc0();
    uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar4 < iVar1) {
      iVar5 = uVar4 * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar3,this,iVar5,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  }
  return;
}

/* ref: FUN_00d9d2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    F_00da38f0(*(int *)this,param_1 + *(int *)this,param_2);
  }
  iVar1 = param_2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,this,iVar5,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  return uVar3;
}

/* ref: FUN_00d9d320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_00da0e60(param_1);
  }
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  uVar2 = F_00da3710(*(undefined4 *)this,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00d9d390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = F_00da0e60(param_1);
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 4))) - 1;
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
    uVar2 = F_00d9cbc0();
    uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar2,this,iVar4,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar5 + param_2 + *(int *)this))) = 0;
    uVar2 = F_00da3710(*(int *)this + iVar5,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00d9d490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9ee80(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00d9d4b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = F_00da0e60(param_1);
    iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this GEN_EDX_ARG,uVar2,iVar3,param_1,uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00d9d4f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9d4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = F_00da0e60(param_2);
    }
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this GEN_EDX_ARG,uVar2,param_1,param_2,uVar1);
  }
  return;
}

/* ref: FUN_00d9d530 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9d530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00d9d4f0(this GEN_EDX_FWD,0,param_1,param_2);
  return;
}

/* ref: FUN_00d9d550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00d9d610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  F_00d9ce80(this GEN_EDX_FWD,*param_1 & 0xfffffffe);
  return (uint)this;
}

/* ref: FUN_00d9d640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xd9d640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined1 * PTR32 *)this = ((undefined1 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  F_00d9d120(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return (uint)this;
}

/* ref: FUN_00d9d690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9d690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  iVar1 = param_2 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00d9d700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9d700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  F_00d9ee80(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00d9d730 */
GEN_LIB GEN_FRAME uint F_00d9d730(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  uVar2 = F_00d9cbc0();
  if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1,1);
  }
  (*(int *)(gen_frame + 0x4)) = 1;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  while( true ) {
    while( true ) {
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar3 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar2 = uVar2 * 2;
      if (uVar2 < 0x100) {
        uVar2 = 0xff;
      }
      iVar1 = uVar2 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
        iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        F_00d95690(uVar3,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x4)) = iVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar2] = 0;
    }
    if ((int)uVar3 < (int)uVar2) break;
    iVar1 = uVar3 + 1;
    uVar2 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
      iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
    }
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  }
  iVar1 = uVar3 + 1;
  uVar2 = F_00d9cbc0();
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
    iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  F_00d9d390(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar4;
}

/* ref: FUN_00d9d910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9d910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9d910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xb0, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  F_00d9d700(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,this);
  F_00d9caf0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x5c,0x2f,1);
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  F_00d9cf30((((undefined *)GEN_TOP((uint)(&(*(undefined4 *)(gen_frame + 0x0)))))) GEN_EDX_ARG,0x2f,&(*(int *)(gen_frame + 0x90)));
  iVar5 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4))));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x8c)) = iVar5;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (*(int *)(gen_frame + 0x94)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  iVar5 = (*(int *)(gen_frame + 0x94));
  while (iVar5 = iVar5 - 1, -1 < iVar5) {
    uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4)));
    uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),uVar2);
    if (uVar3 == 0) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 1;
    }
    else if ((*(int *)(gen_frame + 0x9c)) < 1) {
      puVar1 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar5 * 4)));
      uVar3 = F_00d9cbc0();
      if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
        F_00d95710(uVar3,&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),4);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[(*(uint *)(gen_frame + 0xa4))] = *puVar1;
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
    }
    else {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) - 1;
    }
  }
  F_00d9cff0(this GEN_EDX_ARG);
  uVar3 = (*(uint *)(gen_frame + 0xa4));
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    while (uVar3 = uVar3 - 1, 0 < (int)uVar3) {
      uVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[uVar3];
      F_00d9d120(this GEN_EDX_ARG,uVar2,&REFG(undefined, 0x1080808),0,0,0,0);
    }
    uVar2 = *(*(undefined4 * PTR32 *)(gen_frame + 0xa0));
    F_00d9d390(this GEN_EDX_ARG,uVar2,0xffffffff);
    iVar5 = (*(int *)(gen_frame + 0x8c));
    if (0 < (*(int *)(gen_frame + 0x8c))) {
      do {
        F_00d9d530(this GEN_EDX_ARG,&REFG(undefined, 0x113be30),0xffffffff);
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 4);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(int *)(gen_frame + 0x94)) = 0;
  if (((*(uint *)(gen_frame + 0x98)) & 0x80000000) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) * 4);
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  piVar4 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar4;
}

/* ref: FUN_00d9db00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9db00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x90)) = uVar1;
  uVar2 = F_00da0e60(param_2);
  (*(uint *)(gen_frame + 0x94)) = uVar2;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  if ((int)uVar1 < (int)uVar2) {
    F_00d9d700(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
    F_00d9cff0(this GEN_EDX_ARG);
    iVar6 = 0;
    uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,0,0x7fffffff);
    if (-1 < (int)uVar1) {
      (*(uint *)(gen_frame + 0x9c)) = 1;
      do {
        F_00d9d390(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,uVar1 - iVar6);
        F_00d9d390(this GEN_EDX_ARG,param_2,(*(uint *)(gen_frame + 0x94)));
        iVar6 = uVar1 + (*(uint *)(gen_frame + 0x90));
        if (param_3 == 0) break;
        uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,iVar6,0x7fffffff);
      } while (-1 < (int)uVar1);
    }
    F_00d9d390(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,((*(int *)(gen_frame + 0x4)) - iVar6) - 1);
    piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      return (*(uint *)(gen_frame + 0x9c));
    }
  }
  else {
    iVar6 = *(int *)this;
    iVar7 = 0;
    (*(int *)(gen_frame + 0x98)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = F_00d9c7c0(this GEN_EDX_ARG,param_1,0,0x7fffffff);
    while (iVar5 = (*(int *)(gen_frame + 0x98)), (*(uint *)(gen_frame + 0x8c)) != 0xffffffff) {
      for (; iVar5 < (int)(*(uint *)(gen_frame + 0x8c)); iVar5 = iVar5 + 1) {
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        iVar7 = iVar7 + 1;
      }
      iVar4 = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0x94))) {
        do {
          *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar4 + param_2)));
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x94)));
      }
      (*(int *)(gen_frame + 0x98)) = iVar5 + (*(uint *)(gen_frame + 0x90));
      if (param_3 == 0) break;
      (*(uint *)(gen_frame + 0x8c)) = F_00d9c7c0(this GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x8c)) + (*(uint *)(gen_frame + 0x90)),0x7fffffff);
    }
    iVar5 = (*(int *)(gen_frame + 0x98));
    if ((*(int *)(gen_frame + 0x98)) < *((int *)GEN_TOP(((int)this + 4))) - 1) {
      do {
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar5 < *((int *)GEN_TOP(((int)this + 4))) - 1);
    }
    *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = 0;
    iVar6 = iVar7 + 1;
    uVar1 = F_00d9cbc0();
    uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar2 < iVar6) {
      iVar5 = uVar2 * 2;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      F_00d95690(uVar1,this,iVar5,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar6;
    *((undefined1 *)GEN_TOP((iVar7 + *(int *)this))) = 0;
  }
  return (*(uint *)(gen_frame + 0x9c));
}

/* ref: FUN_00d9dd00 */
GEN_LIB GEN_FRAME uint F_00d9dd00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9dd00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x110, 0, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x800000ff;
  while( true ) {
    while( true ) {
      uVar4 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar2 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar4,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar2) break;
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      uVar4 = F_00d9cbc0();
      if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < uVar2) {
        uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (uVar2 < uVar1) {
          uVar2 = uVar1;
        }
        F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
      }
    }
    if ((int)uVar2 < (int)uVar4) break;
    uVar4 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
      uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 < (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
    }
  }
  F_00d9cde0(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d9cde0(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar3;
}

/* ref: FUN_00d9de40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9de40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9de40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d20(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00d9de60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9de60(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9de60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar3 = 0;
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x1f;
    cVar2 = *pcVar1;
  }
  return uVar3 & 0x7fffffff;
}

/* ref: FUN_00d9de90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9de90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9de90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  F_00db3820(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  F_00d9b7c0(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00d9deb0 */
GEN_LIB GEN_FRAME uint F_00d9deb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9deb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9dec0 */
GEN_LIB GEN_FRAME uint F_00d9dec0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9dec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9df30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d9df50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00d9df60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9df60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9df60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00d9dfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9dfe0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9dfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 0xc)));
}

/* ref: FUN_00d9e000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00d9e020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00d9e040 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 0xc)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00d9e070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00d9e090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar2 + uVar5 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 & 0x7fffffff;
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00d9ecf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & uVar5;
  iVar4 = uVar8 * 0xc;
  iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  while (iVar3 != -1) {
    if ((*((uint *)GEN_TOP((iVar4 + *(int *)this))) == uVar5) &&
       (uVar6 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)this)))), uVar6 == 0))
    goto LAB_00d9e122;
    uVar8 = uVar8 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar4 = uVar8 * 0xc;
    iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
LAB_00d9e122: ;
  uVar8 = uVar8 * 0xc;
  *((uint *)GEN_TOP((uVar8 + *(int *)this))) = uVar5;
  *((char * PTR32 *)GEN_TOP((uVar8 + 4 + *(int *)this))) = param_1;
  *((undefined4 *)GEN_TOP((uVar8 + 8 + *(int *)this))) = param_2;
  return uVar8;
}

/* ref: FUN_00d9e150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  uint * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar3 = *param_1;
  pcVar6 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar3 + uVar4 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 8))) & uVar4 & 0x7fffffff;
  puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
  uVar5 = *puVar2;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return *((int *)GEN_TOP(((int)this + 8))) + 1;
    }
    if ((uVar5 == (uVar4 & 0x7fffffff)) && (uVar5 = F_00da0d20(param_1,puVar2[1]), uVar5 == 0))
    break;
    uVar7 = uVar7 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
    uVar5 = *puVar2;
  }
  return uVar7;
}

/* ref: FUN_00d9e1e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar3 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2)));
  uVar4 = (*(uint *)&gen_args[1]);
  if (*pcVar3 != '\0') {
    uVar4 = F_00d9e000(this GEN_EDX_ARG,uVar2);
    return uVar4;
  }
  F_00d9e090(this GEN_EDX_ARG,uVar1,(*(uint *)&gen_args[1]));
  return uVar4;
}

/* ref: FUN_00d9e230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    uVar1 = F_00d9e000(this GEN_EDX_ARG,uVar1);
    *(*(uint * PTR32 *)&gen_args[1]) = uVar1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00d9e280 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = uVar5 + param_1 & uVar5;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar6 = param_1;
  while (iVar1 != -1) {
    uVar5 = *((uint *)GEN_TOP((*(int *)this + iVar2))) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      iVar1 = uVar6 * 0xc;
      *((uint *)GEN_TOP((iVar1 + *(int *)this))) = *((uint *)GEN_TOP((*(int *)this + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: FUN_00d9e350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  local_c = 0;
  if (-1 < (int)uVar4) {
    local_8 = 0;
    do {
      iVar1 = *(int *)this;
      if (*((int *)GEN_TOP((iVar1 + local_8))) != -1) {
        uVar2 = *((uint *)GEN_TOP((iVar1 + local_8)));
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + local_8)));
        uVar4 = uVar4 & uVar2;
        while ((*((uint *)GEN_TOP((*(int *)this + uVar4 * 0xc))) != uVar2 ||
               (uVar5 = F_00da0d20(uVar3,*((undefined4 *)GEN_TOP((*(int *)this + uVar4 * 0xc + 4)))),
               uVar5 != 0))) {
          uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
        }
      }
      uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d9e420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d9e450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    iVar2 = 0;
    iVar3 = uVar1 + 1;
    do {
      uVar1 = *param_1;
      if (*((int *)GEN_TOP((uVar1 + iVar2))) != -1) {
        uVar1 = F_00d9e090(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((uVar1 + 4 + iVar2))),
                             *((undefined4 *)GEN_TOP((uVar1 + 8 + iVar2))));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00d9e4c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e4c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e4c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9e4f0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e4f0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d9e510 */
GEN_LIB GEN_FRAME unsigned int F_00d9e510(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined1 *)GEN_TOP((iVar1 + param_1))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d9e540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0xc);
  return uVar1;
}

/* ref: FUN_00d9e560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d9e580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d9e5a0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e5a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d9e5c0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e5c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = puVar1[param_3 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d9e5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = (*pcVar1)(this,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00d9e650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e650(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[3] = param_2;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0x80000000;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00d9e680 */
GEN_LIB GEN_FRAME unsigned int F_00d9e680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return;
}

/* ref: FUN_00d9e6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e6b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x113bdd4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: hkMallocAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e6d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d9b7c0(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00d9e6e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9e6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113be04));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,0);
  return (uint)this;
}

/* ref: hkLeakDetectAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9e720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  F_00db3820(this + 8 GEN_EDX_ARG);
  F_00d9b7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d9e750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e750(GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  gen_imp_DeleteCriticalSection(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (LPCRITICAL_SECTION)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return (uint)param_1;
}

/* ref: FUN_00d9e7b0 */
GEN_LIB GEN_FRAME uint F_00d9e7b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00d9e7d0 */
GEN_LIB GEN_FRAME unsigned int F_00d9e7d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00d9e800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,param_2);
  F_00d9e070(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00d9e830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9e850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e850u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9e890 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9e890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - param_2;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - param_1;
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + param_1)));
  if (0 < iVar2) {
    do {
      *puVar1 = puVar1[param_2];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d9e8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9e8f0 */
GEN_LIB GEN_FRAME uint F_00d9e8f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e910 */
GEN_LIB GEN_FRAME uint F_00d9e910(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9e910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d924b0(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  F_00d9e230(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d9e950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9e950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00d9e070(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    F_00d9e280(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00d9e990 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9e990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xd9e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar5 = (iVar4 - param_3) + param_5;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  F_00da38f0(param_2 + *(int *)this + param_5,param_3 + param_2 + *(int *)this,
               (iVar4 - param_2) - param_3);
  puVar2 = ((undefined1 *)GEN_TOP((*(int *)this + param_2)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = puVar2[iVar3];
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  return 0;
}

/* ref: FUN_00d9ea20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ea20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9ea20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)this,uVar3);
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc)));
    uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d9eac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9eac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(uVar2,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9eb00 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00d9eb00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9eb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int in_ECX = 0;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00d9cbc0();
  uVar4 = *((uint *)GEN_TOP((in_ECX + 8))) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar1 = uVar4 * 2;
    iVar5 = param_1;
    if (param_1 < iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,in_ECX,iVar5,1);
    return CONCAT31(extraout_var,bVar2);
  }
  return 0;
}

/* ref: FUN_00d9eb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9eb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < param_1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(uVar2,this,iVar4,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00d9eb80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9eb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xd9eb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00d9e990(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: FUN_00d9eba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*(undefined4 *)this,uVar4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
    uVar4 = (*pcVar1)(piVar3,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar4;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar7 = piVar2[1];
  puVar5 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  if (0 < iVar7) {
    iVar6 = *piVar2 - (int)puVar5;
    do {
      *puVar5 = puVar5[iVar6];
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d9ec20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ec20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ec20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0xc0);
  *(uint *)this = uVar2;
  F_00da1030(uVar2,0xff,0xc0);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xf;
  return (uint)this;
}

/* ref: FUN_00d9ec80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ec80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ec80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(F_00d9cbc0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  iVar1 = param_1[2];
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,(iVar1 * 3 + 3) * 4);
  *(uint *)this = uVar3;
  F_00da1010(uVar3,*param_1,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  return (uint)this;
}

/* ref: FUN_00d9ecf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)this;
  iVar4 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  piVar2 = ((int *)GEN_TOP(F_00d9cbc0()));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1 * 0xc);
  *(uint *)this = uVar3;
  F_00da1030(uVar3,0xff,param_1 * 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 - 1;
  if (0 < iVar4) {
    puVar5 = ((undefined4 *)GEN_TOP((iVar1 + 4)));
    param_1 = iVar4;
    do {
      if (puVar5[-1] != -1) {
        F_00d9e090(this GEN_EDX_ARG,*puVar5,puVar5[1]);
      }
      puVar5 = puVar5 + 3;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,iVar1,iVar4 * 0xc);
  return uVar3;
}

/* ref: FUN_00d9ed90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9ed90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9ed90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9edd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9edd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9edd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9ee10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ee10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ee10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  uVar2 = *(uint *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_1 + uVar2))) = 0;
  return uVar2;
}

/* ref: FUN_00d9ee60 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00d9ee60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ee60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * in_ECX = 0;
  
  uVar1 = F_00d9cbc0();
  F_00d9eb80(in_ECX GEN_EDX_ARG,uVar1,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00d9ee80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9ee80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(F_00d9cbc0()));
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*(undefined4 *)this,uVar4);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
    uVar4 = (*pcVar1)(piVar3,&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar4;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar7 = piVar2[1];
  puVar5 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  if (0 < iVar7) {
    iVar6 = *piVar2 - (int)puVar5;
    do {
      *puVar5 = puVar5[iVar6];
      puVar5 = puVar5 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  return 0;
}

/* ref: FUN_00d9eef0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9eef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9eef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9ef30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9ef30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00d9ecf0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar3 = uVar7 * 0xc;
    if ((*((uint *)GEN_TOP((*(int *)this + iVar3))) == uVar4) &&
       (uVar5 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar3)))), uVar5 == 0)) break;
    if (*((int *)GEN_TOP((iVar3 + *(int *)this))) == -1) {
      iVar3 = uVar7 * 0xc;
      *((uint *)GEN_TOP((iVar3 + *(int *)this))) = uVar4;
      *((char * PTR32 *)GEN_TOP((iVar3 + 4 + *(int *)this))) = param_1;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_2;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

/* ref: FUN_00d9efe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9efe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9efe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < param_1 * 2);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) + 1 < (int)uVar1) {
    uVar1 = F_00d9ecf0(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00d9f010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((int *)GEN_TOP(((int)this + 8))) * 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f050 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xd9f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9f0f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((int *)GEN_TOP(((int)this + 8))) * 4)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00d9cbc0()));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                              (piVar1 GEN_EDX_ARG,*(undefined4 *)this,*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f1f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  uVar1 = F_00d9cbc0();
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(uVar1,this,1,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  **(undefined1 * PTR32 *)this = 0;
  **(undefined1 * PTR32 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00d9f250 */
GEN_LIB GEN_FRAME uint F_00d9f250(GEN_P(LPCSTR param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: FUN_00d9f270 */
GEN_LIB GEN_NOFRAME uint F_00d9f270(void)
{
  GEN_ENTER(0xd9f270u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15da4a8) != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da4a8) + 8))))(REFG(int * PTR32, 0x15da4a8) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x15da4a8))))(REFG(int * PTR32, 0x15da4a8) GEN_EDX_ARG,0);
    REFG(int * PTR32, 0x15da4a8) = ((int *)GEN_TOP(0x0));
    F_00d9b8e0(0);
  }
  if (REFG(undefined * PTR32, 0x15da4ac) != ((code *)GEN_TOP(0x0))) {
    ((code *)REFG(gen_code32, 0x15da4ac))();
    REFG(undefined * PTR32, 0x15da4ac) = ((code *)GEN_TOP(0x0));
  }
  return uVar1;
}

/* ref: FUN_00d9f360 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00da3670(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0,0xc);
  return (uint)this;
}

/* ref: FUN_00d9f380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00db60b0((int)this + 8 GEN_EDX_FWD);
  F_00da3670(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,0,1);
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: hkCpuJobThreadPool::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x248) = param_1;
  this[600] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x250) - 1;
  if (-1 < iVar1) {
    this_00 = this + iVar1 * 0x30 + 0x2c;
    do {
      F_00da36c0(this_00 GEN_EDX_FWD,1);
      this_00 = this_00 - 0x30;
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: hkCpuJobThreadPool::vf5 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00d9f400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 600))) != '\0';
}

/* ref: hkCpuJobThreadPool::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x250)));
}

/* ref: FUN_00d9f420 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  *((int *)GEN_TOP(((int)this + 0x250))) = *((int *)GEN_TOP(((int)this + 0x250))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x250))) * 0x30;
  *((undefined1 *)GEN_TOP(((int)this + iVar1 + 0x28))) = 1;
  F_00da36c0(((undefined *)GEN_TOP(((int)this + iVar1 + 0x2c))) GEN_EDX_FWD,1);
  F_00da36b0(((undefined *)GEN_TOP(((int)this + 0x24c))) GEN_EDX_ARG);
  F_00db60c0(((undefined *)GEN_TOP(((int)this + iVar1 + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: hkCpuJobThreadPool::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (this[600] != (undefined1)0x0) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x250)) {
      do {
        F_00da36b0(this + 0x24c GEN_EDX_FWD);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x250));
    }
    this[600] = (undefined1)0x0;
  }
  return;
}

/* ref: hkCpuJobThreadPool::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * phVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar1 = this + 0x34;
    do {
      *(undefined4 *)phVar1 = *(undefined4 *)(phVar1 - 4);
      phVar1[-0xb] = (undefined1)0x1;
      iVar2 = iVar2 + 1;
      phVar1 = phVar1 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: FUN_00d9f4d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  F_00d9f460(this GEN_EDX_FWD);
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x250)))) {
    pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x2c)));
    do {
      *((undefined1 *)GEN_TOP(((int)pvVar2 - 4))) = 1;
      F_00da36c0(pvVar2 GEN_EDX_ARG,1);
      iVar1 = iVar1 + 1;
      pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x30)));
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x250))));
  }
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x250)))) {
    do {
      F_00da36b0(((undefined *)GEN_TOP(((int)this + 0x24c))) GEN_EDX_ARG);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x250))));
  }
  F_00d918e0(0);
  F_00da36a0(((undefined *)GEN_TOP(((int)this + 0x24c))) GEN_EDX_ARG);
  iVar1 = 0xb;
  pvVar2 = ((undefined *)GEN_TOP(((int)this + 0x250)));
  do {
    F_00da36a0(((undefined *)GEN_TOP(((int)pvVar2 - 0x14))) GEN_EDX_ARG);
    F_00db60c0(((undefined *)GEN_TOP(((int)pvVar2 - 0x30))) GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
    pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 - 0x30)));
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkCpuJobThreadPool::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9f570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined * phVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar3 = this + 0x34;
    do {
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        F_00d95710(param_2,param_1,8);
      }
      puVar1 = ((undefined4 *)GEN_TOP((*param_1 + param_1[1] * 8)));
      param_1[1] = param_1[1] + 1;
      *puVar1 = *(undefined4 *)(phVar3 - 4);
      iVar2 = iVar2 + 1;
      puVar1[1] = *(undefined4 *)phVar3;
      phVar3 = phVar3 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: FUN_00d9f5e0 */
GEN_LIB GEN_FRAME uint F_00d9f5e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  char cVar1;
  undefined4 * puVar2;
  HANDLE hThread;
  int * piVar3;
  LPVOID pvVar4;
  DWORD dwIdealProcessor;
  
  puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  MXCSR = MXCSR | 0x8000;
  dwIdealProcessor = param_1[7];
  hThread = gen_imp_GetCurrentThread();
  gen_imp_SetThreadIdealProcessor(hThread,dwIdealProcessor);
  F_00d92530(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  piVar3 = ((int *)GEN_TOP(F_00d9b8f0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113be90)),3);
  F_00d9ba60(((undefined1 *)(gen_frame + 0x0)));
  gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a8c),(LPVOID)param_1[6]);
  if (0 < (int)puVar2[3]) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    F_00da13f0(pvVar4,puVar2[3]);
  }
  piVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[10] = *piVar3;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
  F_00da36b0(param_1 + 9 GEN_EDX_ARG);
  cVar1 = (char)param_1[8];
  while (cVar1 == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0x21))) != '\0') {
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      F_00da1330(pvVar4);
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
    }
    F_00d969a0(*puVar2 GEN_EDX_ARG,1);
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    param_1[0xb] = *((int *)GEN_TOP(((int)pvVar4 + 4)));
    F_00da36c0(puVar2 + 1 GEN_EDX_ARG,1);
    F_00da36b0(param_1 + 9 GEN_EDX_ARG);
    cVar1 = (char)param_1[8];
  }
  F_00d9bb50();
  piVar3 = ((int *)GEN_TOP(F_00d9b8f0()));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),3);
  F_00da36c0(puVar2 + 1 GEN_EDX_ARG,1);
  F_00d9b7c0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00d9f740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9f740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  this_00 = ((undefined *)GEN_TOP(((int)this + 8)));
  iVar3 = 0xb;
  do {
    F_00d9f380(this_00 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x30)));
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00d9f360(((undefined *)GEN_TOP(((int)this + 0x248))) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 600))) = 0;
  *((int *)GEN_TOP(((int)this + 0x25c))) = param_1[6];
  *((int *)GEN_TOP(((int)this + 0x260))) = param_1[1];
  *((int *)GEN_TOP(((int)this + 0x254))) = param_1[2];
  (*(int *)(gen_frame + 0x8)) = *param_1;
  if (0xb < *param_1) {
    (*(int *)(gen_frame + 0x8)) = 0xb;
  }
  iVar3 = (*(int *)(gen_frame + 0x8));
  *((int *)GEN_TOP(((int)this + 0x250))) = (*(int *)(gen_frame + 0x8));
  F_00d9baa0(&(*(int *)(gen_frame + 0x0)));
  if (0 < iVar3) {
    (*(int *)(gen_frame + 0x4)) = 0;
    iVar3 = 1;
    puVar2 = this;
    do {
      puVar2[2] = (int)this + 0x248;
      puVar2[8] = iVar3;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined2 *)(puVar2 + 10) = 0;
      if (param_1[4] < 1) {
        puVar2[9] = iVar3 % (*(int *)(gen_frame + 0x0));
      }
      else {
        puVar2[9] = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + param_1[3])));
      }
      F_00db60e0(puVar2 + 4 GEN_EDX_ARG,((code *)REFP(0xd9f5e0)),puVar2 + 2,*((undefined4 *)GEN_TOP(((int)this + 0x25c))),
                   *((undefined4 *)GEN_TOP(((int)this + 0x260))));
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 4;
      iVar3 = iVar3 + 1;
      iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
      (*(int *)(gen_frame + 0x8)) = iVar1;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 != 0);
  }
  F_00d918e0(1);
  return (uint)this;
}

/* ref: FUN_00d9f870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9f870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x250))) * 0x30 + 8)));
  *piVar1 = (int)this + 0x248;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x250)));
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[6] = iVar2 + 1;
  gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x0)));
  piVar1[7] = piVar1[6] % (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20));
  uVar3 = F_00db60e0(piVar1 + 2 GEN_EDX_ARG,((code *)REFP(0xd9f5e0)),piVar1,*((undefined4 *)GEN_TOP(((int)this + 0x25c))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x260))));
  *((int *)GEN_TOP(((int)this + 0x250))) = *((int *)GEN_TOP(((int)this + 0x250))) + 1;
  return uVar3;
}

/* ref: hkCpuJobThreadPool::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00d9f8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9f8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (0xb < param_1) {
    iVar3 = 0xb;
  }
  iVar1 = *(int *)(this + 0x250);
  iVar2 = iVar1 - iVar3;
  while (iVar1 < iVar3) {
    F_00d9f870(this GEN_EDX_FWD);
    iVar1 = *(int *)(this + 0x250);
    iVar2 = iVar1 - iVar3;
  }
  if (iVar1 != iVar3 && SBORROW4(iVar1,iVar3) == iVar2 < 0) {
    do {
      F_00d9f420(this GEN_EDX_ARG);
    } while (iVar3 < *(int *)(this + 0x250));
  }
  return;
}

/* ref: FUN_00d9f940 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9f940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0x80000000;
  in_ecx[6] = ((char *)REFP(0x113bea4));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d9f990 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00d9f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9f990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00da36a0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD);
  F_00db60c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d9f9e0 */
GEN_LIB GEN_FRAME uint F_00d9f9e0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  return *param_1;
}

/* ref: FUN_00d9f9f0 */
GEN_LIB GEN_FRAME uint F_00d9f9f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9f9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9fa20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fa20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fa20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9fa60 */
GEN_LIB GEN_FRAME uint F_00d9fa60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9faa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9faa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkCpuJobThreadPool::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fae0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9f4d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9fb20 */
GEN_LIB GEN_FRAME uint F_00d9fb20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9fb30 */
GEN_LIB GEN_FRAME uint F_00d9fb30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9fb40 */
GEN_LIB GEN_FRAME uint F_00d9fb40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9fb50 */
GEN_LIB GEN_NOFRAME unsigned int F_00d9fb50(void)
{
  GEN_ENTER(0xd9fb50u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4 * PTR32, 0x15dff44) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff44))))(REFG(undefined4 * PTR32, 0x15dff44) GEN_EDX_ARG,0);
    REFG(undefined4 * PTR32, 0x15dff44) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x15dff40) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff40))))(REFG(undefined4 * PTR32, 0x15dff40) GEN_EDX_ARG,0);
    REFG(undefined4 * PTR32, 0x15dff40) = ((undefined4 *)GEN_TOP(0x0));
  }
  return;
}

/* ref: FUN_00d9fb90 */
GEN_LIB GEN_FRAME uint F_00d9fb90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00db94b0(&REFG(undefined, 0x15da4b0) GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar1 + 4;
  }
  uVar2 = F_00db7bc0(&REFG(undefined, 0x15da590) GEN_EDX_ARG,uVar1,iVar3,param_3);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar2 + 4;
  }
  piVar4 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,uVar2,iVar3,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar4;
  REFG(undefined4, 0x15dff40) = uVar1;
  REFG(undefined4, 0x15dff44) = uVar2;
  F_00d9b8e0(piVar4);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,param_2,3);
  return uVar1;
}

/* ref: FUN_00d9fc20 */
GEN_LIB GEN_FRAME uint F_00d9fc20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9fc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = F_00db7bc0(&REFG(undefined, 0x15da590) GEN_EDX_ARG,param_1,param_2,param_4);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 + 4;
  }
  piVar3 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,uVar1,iVar2,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar3;
  REFG(undefined4, 0x15dff44) = uVar1;
  F_00d9b8e0(piVar3);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,param_3,3);
  return uVar1;
}

/* ref: FUN_00d9fc90 */
GEN_LIB GEN_FRAME uint F_00d9fc90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,param_2,param_3,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar1;
  F_00d9b8e0(piVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_4,3);
  return uVar2;
}

/* ref: FUN_00d9fce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return (uint)this;
}

/* ref: hkMemoryTrackStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9fd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: FUN_00d9fd40 */
GEN_LIB GEN_NOFRAME uint F_00d9fd40(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (in_esi != 0) {
    iVar1 = *in_edi;
    uVar2 = F_00da0e60(in_esi);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(in_edi,in_esi,uVar2);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x10))))(in_edi GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return uVar2;
}

/* ref: FUN_00d9fd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  in_ecx[2] = param_2;
  if (param_2 != 0) {
    F_00d91830(param_2 GEN_EDX_FWD);
  }
  return (uint)in_ecx;
}

/* ref: FUN_00d9fda0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9fda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00d91840(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return in_EAX;
}

/* ref: FUN_00d9fdc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00d9fde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fded;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf1c),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9fe30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe30(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  char * in_esi;
  
  in_esi = ((char *)REFP(0x113bf28));
  if (param_2 == '\0') {
    in_esi = ((char *)REFP(0x113bf20));
  }
  F_00d9fd40(in_esi,*((undefined4 *)GEN_TOP((param_1 + 8))));
  return param_1;
}

/* ref: FUN_00d9fe60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),1);
  return (uint)this;
}

/* ref: FUN_00d9fe80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9fd40(param_1,*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9fea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fead;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf30),(int)(short)param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9fef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fefd;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x110f840),param_1 & 0xffff);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9ff40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ff40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ff4d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf30),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9ff90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ff9d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x110f840),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00d9ffe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ffe0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd9ffe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ffed;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)param_2),
               (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP((param_1 + 8))));
  return param_1;
}

/* ref: FUN_00da0040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda004d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,((char *)REFP(0x113bf38)),param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00da0090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda009d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,((char *)REFP(0x113bf40)),param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_00da00e0 */
GEN_LIB GEN_FRAME uint F_00da00e0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda00ed;
  F_00da0cd0(((undefined1 *)(gen_frame + 0x10000)),0x2728,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP((param_1 + 8))));
  return uVar1;
}

/* ref: FUN_00da0140 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da0140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,param_2));
}

/* ref: FUN_00da0150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d919e0(param_1 GEN_EDX_FWD);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  return uVar1;
}

/* ref: hkOstream::vf2 */
GEN_LIB GEN_NOFRAME uint F_00da0180(void)
{
  GEN_ENTER(0xda0180u, 0u, 0u, 0u, 0u);
  return 0x15dff48;
}

/* ref: FUN_00da0190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0x10))))(REFG(int * PTR32, 0x15dffa8) GEN_EDX_FWD,param_1);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00da01c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da01c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda01c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  LPVOID pvVar1;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((uVar2 + 4))) = 0x1c;
  uVar2 = F_00dba580(uVar2 GEN_EDX_ARG,param_1,param_2,(undefined1)param_3);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x10)));
  puVar2[1] = 0x10010;
  *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  puVar2[2] = param_1;
  puVar2[3] = 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2;
  return (uint)this;
}

/* ref: FUN_00da0280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x12730, 0, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = ((undefined *)GEN_TOP(0xda028d));
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = this;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x12728));
}

/* ref: FUN_00da02e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  F_00da00e0(this,((char *)REFP(0x113bf48)),(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[1]),
               (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[2]),
               (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[3]),
               (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: FUN_00da0340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  F_00da00e0(this,((char *)REFP(0x113bf58)),(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[1]),
               (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[2]),
               (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[3]),
               (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: FUN_00da03a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da03a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda03a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  float * pfVar2;
  
  pfVar2 = ((float *)GEN_TOP((param_1 + 0x10)));
  iVar1 = 3;
  do {
    F_00da00e0(this,((char *)REFP(0x113bf68)),(int)(ulonglong)gen_d2bits((double)pfVar2[-4]),
                 (int)((ulonglong)gen_d2bits((double)pfVar2[-4]) >> 0x20),
                 (int)(ulonglong)gen_d2bits((double)*pfVar2),
                 (int)((ulonglong)gen_d2bits((double)*pfVar2) >> 0x20),
                 (int)(ulonglong)gen_d2bits((double)pfVar2[4]),
                 (int)((ulonglong)gen_d2bits((double)pfVar2[4]) >> 0x20));
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: FUN_00da0400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x30;
  this_00 = ((undefined *)GEN_TOP(F_00da03a0(this GEN_EDX_FWD,param_1)));
  uVar1 = F_00da02e0(this_00 GEN_EDX_ARG,iVar2);
  return uVar1;
}

/* ref: FUN_00da0420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffe) != 0) {
    iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 8)));
    uVar3 = F_00d91360(param_1 GEN_EDX_FWD);
    ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 & 0xfffffffe,uVar3);
    return (uint)this;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: FUN_00da0470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (*param_1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*param_1,param_1[1] - 1);
    return (uint)this;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: FUN_00da04b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da04b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda04b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x14;
  uVar2 = F_00da0820(this_00 GEN_EDX_ARG,param_1,1);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0540 */
GEN_LIB GEN_FRAME unsigned int F_00da0540(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00da0570 */
GEN_LIB GEN_FRAME uint F_00da0570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00da05c0 */
GEN_LIB GEN_FRAME uint F_00da05c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda05c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkOstream::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da05f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda05f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9fda0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00da0630 */
GEN_LIB GEN_FRAME uint F_00da0630(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkMemoryTrackStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda0660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  return (piVar1[5] - 1 + piVar1[3]) * *piVar1 + piVar1[1];
}

/* ref: FUN_00da0680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0680(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db9df0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00da06c0 */
GEN_LIB GEN_FRAME uint F_00da06c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda06c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da06f0 */
GEN_LIB GEN_FRAME uint F_00da06f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da0720 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da0720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda0720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00db9df0(this_00 GEN_EDX_FWD);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x1c);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkMemoryTrackStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if ((param_1[3] == 0) && (this = ((undefined *)GEN_TOP(param_1[2])), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00db9df0(this GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this,0x1c);
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00da07e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da07e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda07e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  iVar3 = *((int *)GEN_TOP((iVar1 + 4))) + 1;
  uVar4 = *((uint *)GEN_TOP((iVar1 + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  uVar4 = (*((int * PTR32 *)GEN_TOP(((int)this + 8))))[1];
  *((undefined1 *)GEN_TOP((uVar4 + **((int * PTR32 *)GEN_TOP(((int)this + 8)))))) = 0;
  return uVar4;
}

/* ref: FUN_00da0820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bf78));
  *((int *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  iVar2 = *((int *)GEN_TOP((param_1 + 4))) + 1;
  uVar3 = *((uint *)GEN_TOP((param_1 + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar2,1);
  }
  *((undefined1 *)GEN_TOP(((*((int * PTR32 *)GEN_TOP(((int)this + 8))))[1] + **((int * PTR32 *)GEN_TOP(((int)this + 8)))))) = 0;
  return (uint)this;
}

