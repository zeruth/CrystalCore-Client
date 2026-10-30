#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e10c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10c60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe10c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e10c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10c70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe10c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e10c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e10ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10ca0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe10ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e10cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe10cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e10cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_E::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: BasicArrayImplementation_E::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: BasicArrayImplementation_E::vf6 */
GEN_LIB GEN_NOFRAME uint F_00e10d30(void)
{
  GEN_ENTER(0xe10d30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_E::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00e10d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_M::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: BasicArrayImplementation_M::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: BasicArrayImplementation_M::vf6 */
GEN_LIB GEN_NOFRAME uint F_00e10db0(void)
{
  GEN_ENTER(0xe10db0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_M::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00e10dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10e20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf6 */
GEN_LIB GEN_NOFRAME uint F_00e10e30(void)
{
  GEN_ENTER(0xe10e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00e10e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAD::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10e90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: BasicArrayImplementation_PAD::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10ea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: BasicArrayImplementation_PAD::vf6 */
GEN_LIB GEN_NOFRAME uint F_00e10eb0(void)
{
  GEN_ENTER(0xe10eb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: BasicArrayImplementation_PAD::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10ec0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00e10ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  return (uint)this;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf6 */
GEN_LIB GEN_NOFRAME uint F_00e10f30(void)
{
  GEN_ENTER(0xe10f30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e10f40 */
GEN_LIB GEN_FRAME unsigned int F_00e10f40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe10f40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e10f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe10f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00e10f80 */
GEN_LIB GEN_FRAME uint F_00e10f80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe10f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e10fa0 */
GEN_LIB GEN_FRAME unsigned int F_00e10fa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe10fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e10fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e10fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe10fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e11000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe11000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00e11010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe11010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e110d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e110d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe110d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e110f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e110f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe110f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11130u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11170 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe11170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00e111e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e111e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe111e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11220u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e11260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe11260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00e112c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e112c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe112c0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00d95690(param_1,this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e11310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e11330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *((int *)GEN_TOP((iVar1 + 4 + iVar3)));
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *((int *)GEN_TOP((iVar3 + 4 + iVar1)));
      iVar1 = iVar5 * 8;
      iVar4 = *((int *)GEN_TOP((iVar3 + 4 + iVar5 * 8)));
    }
    uVar6 = *((uint *)GEN_TOP(((int)this + 0x18)));
    *((uint *)GEN_TOP((iVar3 + 4 + iVar5 * 8))) = uVar6;
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e113a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e113a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe113a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e113c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e113c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe113c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar6 * 8)));
  uVar6 = F_00dbd9f0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar6);
  if (iVar2 != -1) {
    iVar3 = *(int *)this;
    iVar1 = iVar2 * 8;
    iVar4 = *((int *)GEN_TOP((iVar1 + 4 + iVar3)));
    iVar5 = iVar2;
    while (iVar4 != -1) {
      iVar5 = *((int *)GEN_TOP((iVar3 + 4 + iVar1)));
      iVar1 = iVar5 * 8;
      iVar4 = *((int *)GEN_TOP((iVar3 + 4 + iVar5 * 8)));
    }
    uVar6 = *((uint *)GEN_TOP(((int)this + 0x18)));
    *((uint *)GEN_TOP((iVar3 + 4 + iVar5 * 8))) = uVar6;
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar2;
  }
  return uVar6;
}

/* ref: FUN_00e11440 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 0x18;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0x18)));
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
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e114a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe114a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)this)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x10) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP((iVar2 + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00e114e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e114e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe114e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe11520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,8);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *((uint *)GEN_TOP(((int)this + 4))) = param_2;
    return uVar2;
  }
  do {
    *((undefined4 *)GEN_TOP((iVar1 + uVar2 * 8))) = *param_3;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + uVar2 * 8))) = param_3[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *((uint *)GEN_TOP(((int)this + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00e11590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11590u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00e115d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e115d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe115d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00e11630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 8;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e116d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e116d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe116d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e11710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e11730 */
GEN_LIB GEN_FRAME uint F_00e11730(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe11730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00e11770 */
GEN_LIB GEN_FRAME uint F_00e11770(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe11770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e117c0 */
GEN_LIB GEN_FRAME uint F_00e117c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe117c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00e11800 */
GEN_LIB GEN_FRAME uint F_00e11800(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe11800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e11850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *((undefined4 *)GEN_TOP((uVar1 + 4 + param_1 * 8))) = param_2;
  return uVar1;
}

/* ref: FUN_00e11870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e11870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe11870u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e118c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e118c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe118c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e11930 */
GEN_LIB GEN_FRAME unsigned int F_00e11930(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe11930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x10)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x10))) {
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
GEN_LIB GEN_FRAME unsigned int F_00e11980(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe11980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e119c0 */
GEN_LIB GEN_FRAME unsigned int F_00e119c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe119c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e119f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e119f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe119f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11a30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11a70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11ac0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e11b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11b60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1 + param_1[1] * 4;
  for (; this != ((undefined *)GEN_TOP(0x0)); this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
    iVar4 = *((int *)GEN_TOP(((int)this + 0x28)));
    iVar1 = iVar1 + iVar2 * -4;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        *((int *)GEN_TOP((iVar1 + iVar3 * 4))) = iVar4;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < iVar2);
    }
  }
  return 0;
}

/* ref: FUN_00e11bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD);
  iVar3 = param_1 - uVar1;
  pvVar2 = this;
  do {
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)pvVar2 + 0x2c)));
    if (-1 < iVar3) {
      return *((int *)GEN_TOP(((int)pvVar2 + 0x28))) + iVar3 * 0x18;
    }
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0x18)));
  } while (pvVar2 != ((undefined *)GEN_TOP(0x0)));
  return *((int *)GEN_TOP(((int)this + 0x28))) - 0x18;
}

/* ref: FUN_00e11bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  do {
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    iVar1 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 0x2c)))) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
      do {
        if (*piVar2 == param_1) {
          return *((int *)GEN_TOP(((int)this + 0x28))) + iVar1 * 0x18;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x2c))));
    }
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)));
  } while( true );
}

/* ref: FUN_00e11c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11c40(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe11c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return param_1;
}

/* ref: hkDataObjectDict::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e11c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe11c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkDataObjectDict::vf29 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e11c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e11b60(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00e11c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *((int *)GEN_TOP(((int)this + 0x10))))));
  uVar1 = F_00e11bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,*puVar3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00e0ceb0(*((undefined4 *)GEN_TOP((uVar1 + 0x10))),puVar3 + 2,1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00e11cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e11d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    do {
      if (*piVar3 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP((iVar1 + 0x2c)))) {
      piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x28)));
      do {
        if (*piVar3 == param_1) {
          iVar1 = *((int *)GEN_TOP((iVar1 + 0x28))) + iVar2 * 0x18;
          if (iVar1 == 0) {
            return 0;
          }
          return (uint)(*((int *)GEN_TOP((iVar1 + 0x14))) != 0);
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 6;
      } while (iVar2 < *((int *)GEN_TOP((iVar1 + 0x2c))));
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)));
  } while( true );
}

/* ref: hkDataObjectDict::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 8)));
  if (param_1 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    uVar2 = F_00e11d30(this GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  uVar2 = F_00e11d30(this GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: hkDataObjectDict::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe11e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e11f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe11f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (*((char *)GEN_TOP(((int)this + 0x2c))) != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,
                 ((char *)REFP(0x114ddb8))
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x3599e1ed,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114dd98)),0x5cb);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x28))) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))),((int *)GEN_TOP(((int)this + 0x20))),iVar5,8)
    ;
  }
  iVar5 = 0;
  *((int *)GEN_TOP(((int)this + 0x24))) = iVar1;
  if (0 < *((int *)GEN_TOP(((int)this + 0x18)))) {
    do {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar5 * 4)));
      iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
      *((int *)GEN_TOP((iVar2 + iVar5 * 8))) = iVar1;
      *((int *)GEN_TOP((iVar2 + 4 + iVar5 * 8))) = iVar1 >> 0x1f;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 0x18))));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < (int)uVar4) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),uVar4 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  return uVar4;
}

/* ref: VariableIntArrayImplementation::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe12110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  
  if (*(int *)(this + 0x10) != 1) {
    F_00e12010(this GEN_EDX_FWD);
  }
  this[0x2c] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x20);
  *((undefined4 *)GEN_TOP((iVar1 + param_1 * 8))) = param_2;
  *((undefined4 *)GEN_TOP((iVar1 + 4 + param_1 * 8))) = param_3;
  return param_1;
}

/* ref: FUN_00e12140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VecArrayImplementation::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e12190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: VecArrayImplementation::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e121a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe121a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e121f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe121f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe12250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e122d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe122d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114d93c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e12350 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e12350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    while (*piVar2 != param_1) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 2;
      if (*((int *)GEN_TOP(((int)this + 0x10))) <= iVar4) {
        return;
      }
    }
    puVar3 = ((undefined4 *)GEN_TOP(piVar2[1]));
    piVar2 = puVar3 + 2;
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
    }
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
    iVar1 = (*((int *)GEN_TOP(((int)this + 0x10))) - iVar4) * 8;
    puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4 * 8)));
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e123d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe123d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbdb20(param_1 GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00e12420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe12420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint local_8;
  
  uVar2 = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,0);
  }
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  if (param_1 != uVar2) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x60)));
    uVar1 = F_00da4190(this_00 GEN_EDX_ARG,param_1,0);
    F_00da3f00(this_00 GEN_EDX_ARG,param_1);
    *((uint *)GEN_TOP((uVar1 + 8))) = uVar2;
    F_00da3a20(this_00 GEN_EDX_ARG,uVar2,uVar1);
  }
  F_00da3f00(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
  uVar2 = F_00da3a20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar2,local_8);
  return uVar2;
}

/* ref: FUN_00e124d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e124d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe124d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined4 * this_00;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948) GEN_EDX_FWD);
  if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  }
  iVar2 = (*(int *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = &REFG(undefined * PTR32, 0x1354948);
  if ((*(int *)&gen_args[1]) != 0) {
    this_00 = ((undefined4 *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,(*(int *)&gen_args[1]),0)));
    if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0xc)))
      ;
      *(undefined2 *)(this_00 + 1) = 0xc;
      puVar4 = ((undefined4 *)GEN_TOP(F_00e10b40(this GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar2)));
      *((undefined2 *)GEN_TOP(((int)this_00 + 6))) = 1;
      *this_00 = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
      uVar1 = *puVar4;
      this_00[2] = uVar1;
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,uVar1,this_00);
    }
    F_00d919e0(this_00 GEN_EDX_ARG);
    if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
    }
    *(*(undefined4 * PTR32 *)&gen_args[0]) = this_00;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e125a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e125a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe125a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12620 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e12620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e12650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                      (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e126a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe126a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: BasicArrayImplementation_E::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e126b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe126b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),(int)this + 0xc,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_E::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e126f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe126f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined * _Size;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),((int *)GEN_TOP(((int)this + 0xc))),iVar2,1)
    ;
  }
  _Size = ((undefined *)GEN_TOP((param_1 - *((int *)GEN_TOP(((int)this + 0x10))))));
  if (0 < (int)_Size) {
    _Size = F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10)))))),0,(gen_size32)_Size
                   );
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return (uint)_Size;
}

/* ref: FUN_00e12750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e127a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe127a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: BasicArrayImplementation_M::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e127b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe127b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_M::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e127f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe127f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),((int *)GEN_TOP(((int)this + 0xc))),iVar2,4)
    ;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return uVar1;
}

/* ref: FUN_00e12850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e128a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe128a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e128b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe128b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e128f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe128f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),((int *)GEN_TOP(((int)this + 0xc))),iVar2,4)
    ;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return uVar1;
}

/* ref: FUN_00e12950 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e129a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe129a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAD::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e129b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe129b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAD::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e129f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe129f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),((int *)GEN_TOP(((int)this + 0xc))),iVar2,4)
    ;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return uVar1;
}

/* ref: FUN_00e12a50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e12aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  return;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),(int)this + 0xc,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))),((int *)GEN_TOP(((int)this + 0xc))),iVar2,4)
    ;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar3 = param_1 - uVar1;
  iVar2 = uVar1 * 4;
  if (0 < iVar3) {
    uVar1 = 0;
    puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = param_1;
  return uVar1;
}

/* ref: FUN_00e12b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12b90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e12c10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e12c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e12c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12c40u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e12c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12c90u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e12cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe12cd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: BasicArrayImplementation_E::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12d10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe12d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: BasicArrayImplementation_M::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe12d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: BasicArrayImplementation_PAVhkDataObjectImpl::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12e00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe12e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: BasicArrayImplementation_PAD::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12e80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe12e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: BasicArrayImplementation_PAVhkDataArrayImpl::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12f00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe12f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e12fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e12fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe12fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_00dbdaf0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e12fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e12fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe12fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *((uint *)GEN_TOP((iVar3 + 4 + param_2 * 8)));
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = ((uint *)GEN_TOP((*(int *)this + 4 + uVar5 * 8)));
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 8))) = *((undefined4 *)GEN_TOP((*(int *)this + uVar5 * 8)));
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *((undefined4 *)GEN_TOP((iVar3 + param_2 * 8))) = *((undefined4 *)GEN_TOP((iVar3 + uVar5 * 8)));
    *((undefined4 *)GEN_TOP((iVar3 + 4 + param_2 * 8))) = *((undefined4 *)GEN_TOP((iVar3 + 4 + uVar5 * 8)));
  }
  *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar5 * 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar5;
  return param_2;
}

/* ref: FUN_00e13050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e11310(this GEN_EDX_FWD,param_1);
  if (uVar1 != 0xffffffff) {
    while (*((int *)GEN_TOP((*(int *)this + uVar1 * 8))) != *param_2) {
      uVar1 = *((uint *)GEN_TOP((*(int *)this + 4 + uVar1 * 8)));
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
    }
    uVar1 = F_00e12fc0(this GEN_EDX_ARG,param_1,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00e130a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e130a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe130a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = *((uint *)GEN_TOP((iVar3 + 4 + param_2 * 8)));
  if (uVar5 == 0xffffffff) {
    uVar5 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + uVar5 * 8)));
    uVar5 = *puVar1;
    if (uVar5 == param_2) {
      *puVar1 = 0xffffffff;
      uVar5 = param_2;
    }
    else {
      puVar2 = ((uint *)GEN_TOP((*(int *)this + 4 + uVar5 * 8)));
      uVar4 = *puVar2;
      if (uVar4 == param_2) {
        *puVar2 = 0xffffffff;
        uVar5 = param_2;
      }
      else {
        *puVar1 = uVar4;
        *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 8))) = *((undefined4 *)GEN_TOP((*(int *)this + uVar5 * 8)));
      }
    }
    param_2 = 0xffffffff;
  }
  else {
    *((undefined4 *)GEN_TOP((iVar3 + param_2 * 8))) = *((undefined4 *)GEN_TOP((iVar3 + uVar5 * 8)));
    *((undefined4 *)GEN_TOP((iVar3 + 4 + param_2 * 8))) = *((undefined4 *)GEN_TOP((iVar3 + 4 + uVar5 * 8)));
  }
  *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar5 * 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar5;
  return param_2;
}

/* ref: FUN_00e13130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e131b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e131b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe131b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e132a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e132a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe132a0u, gen_a0, gen_a1, 0u, 0u);
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
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e132f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e132f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe132f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00e13380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e13380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e133c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e133c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe133c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e13400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e13400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e13440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e13480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e134c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e134c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe134c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e134f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e134f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe134f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e13520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e124d0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00e13540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe13540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  F_00e124d0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,(int)this + 0x10,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0x80000000;
  return (uint)this;
}

/* ref: hkDataClassDict::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e135a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe135a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkDataClassDict::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e135b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe135b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: hkDataClassDict::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e135e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe135e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + 8)));
}

/* ref: hkDataClassDict::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e135f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe135f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x2c)));
}

/* ref: hkDataClassDict::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + param_1 * 0x18)));
  *param_2 = *puVar1;
  param_2[1] = this;
  param_2[2] = puVar1[4];
  uVar2 = puVar1[5];
  param_2[3] = uVar2;
  return uVar2;
}

/* ref: hkDataClassDict::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e13630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: hkDataClassDict::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_2;
  while( true ) {
    if (piVar3 == ((int *)GEN_TOP(0x0))) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_FWD);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 8))) + 0x50)));
      uVar2 = F_00da4190(this_00 GEN_EDX_ARG,uVar1,0);
      if (uVar2 == 0) {
        uVar2 = F_00da1210(uVar1);
        F_00da3a20(this_00 GEN_EDX_ARG,uVar2,uVar2);
      }
    }
    if (uVar2 == *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8)))) break;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataClassDict::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e136d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe136d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x2c)) {
    puVar4 = *(uint * PTR32 *)(this + 0x28);
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while ((int)uVar3 < *(int *)(this + 0x2c));
  }
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf9 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00e13740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2c);
  for (iVar1 = *(int *)(this + 0x18); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    iVar2 = iVar2 + *((int *)GEN_TOP((iVar1 + 0x2c)));
  }
  return iVar2;
}

/* ref: hkDataClassDict::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 8)));
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00da4190(((undefined *)GEN_TOP((iVar4 + 0x50))) GEN_EDX_FWD,param_1,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP((iVar4 + 0x50))) GEN_EDX_ARG,uVar1,uVar1);
    }
  }
  do {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x2c)) {
      puVar2 = *(uint * PTR32 *)(this + 0x28);
      do {
        if (*puVar2 == uVar1) {
          uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
          return uVar3 + (iVar4 - uVar1);
        }
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 6;
      } while (iVar4 < *(int *)(this + 0x2c));
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != ((undefined *)GEN_TOP(0x0)));
  return 0xffffffff;
}

/* ref: hkDataClassDict::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD);
  iVar3 = param_1 - uVar2;
  do {
    iVar3 = iVar3 + *(int *)(this + 0x2c);
    if (-1 < iVar3) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x28) + iVar3 * 0x18)));
      iVar3 = *(int *)(this + 0x28) + iVar3 * 0x18;
      param_2[1] = this;
      *param_2 = uVar1;
      param_2[2] = *((undefined4 *)GEN_TOP((iVar3 + 0x10)));
      uVar2 = *((uint *)GEN_TOP((iVar3 + 0x14)));
      param_2[3] = uVar2;
      return uVar2;
    }
    this = *(undefined * PTR32 *)(this + 0x18);
  } while (this != ((undefined *)GEN_TOP(0x0)));
  return uVar2;
}

/* ref: hkDataClassDict::vf12 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e13850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * phVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1] * 0x10 + *param_1;
  for (phVar1 = this; phVar1 != ((undefined *)GEN_TOP(0x0));
      phVar1 = *(undefined * PTR32 *)(phVar1 + 0x18)) {
    iVar4 = *(int *)(phVar1 + 0x2c);
    iVar5 = iVar5 + iVar4 * -0x10;
    if (0 < iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(phVar1 + 0x28) + 0x14)));
      puVar2 = ((undefined4 *)GEN_TOP((iVar5 + 8)));
      do {
        puVar2[-2] = puVar3[-5];
        puVar2[-1] = this;
        *puVar2 = puVar3[-1];
        puVar2[1] = *puVar3;
        puVar2 = puVar2 + 4;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e138c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e138c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe138c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))),((int *)GEN_TOP(((int)this + 0x28))),0x18);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + *((int *)GEN_TOP(((int)this + 0x2c))) * 0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = 0;
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[4] = param_2;
    puVar1[5] = param_3;
  }
  *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e13930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2c))) - 1;
  if (-1 < iVar2) {
    piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 0x18)));
    do {
      if (*piVar5 == param_1) goto LAB_00e13954;
      piVar5 = piVar5 - 6;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = -1;
LAB_00e13954: ;
  *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 0x2c))) - iVar2) * 0x18;
  puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + iVar2 * 0x18)));
  if (0 < iVar1) {
    iVar2 = (iVar1 - 1U >> 3) + 1;
    do {
      *puVar3 = puVar3[6];
      puVar3[1] = puVar3[7];
      puVar3 = puVar3 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  uVar4 = F_00e11bf0(this GEN_EDX_FWD,param_1);
  return (uint)(uVar4 != 0);
}

/* ref: FUN_00e139b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e139b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe139b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  int local_8;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (-1 < (int)*((uint *)GEN_TOP(((int)this + 0x30)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x28))),
               (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x20)))) {
    do {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + local_8 * 4)));
      *((undefined4 *)GEN_TOP((iVar2 + 8))) = 0;
      if (-1 < *((int *)GEN_TOP((iVar2 + 0xc)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))),*((int *)GEN_TOP((iVar2 + 0xc))) * 8);
      }
      *((undefined4 *)GEN_TOP((iVar2 + 4))) = 0;
      *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = 0x80000000;
      if (iVar2 != 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,iVar2,0x10);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *((int *)GEN_TOP(((int)this + 0x20))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))),*((int *)GEN_TOP(((int)this + 0x24))) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  uVar4 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x1354948);
  return uVar4;
}

/* ref: FUN_00e13ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    local_c = 0;
    do {
      piVar2 = ((int *)GEN_TOP((local_c + *((int *)GEN_TOP(((int)this + 0x10))))));
      for (iVar1 = *((int *)GEN_TOP(((int)this + 0xc))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
        iVar3 = 0;
        if (0 < *((int *)GEN_TOP((iVar1 + 0x2c)))) {
          piVar5 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x28)));
          do {
            if (*piVar5 == *piVar2) {
              iVar1 = *((int *)GEN_TOP((iVar1 + 0x28))) + iVar3 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*((undefined4 *)GEN_TOP((iVar1 + 0x10))),piVar2 + 2,1,0);
              }
              goto LAB_00e13b39;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 6;
          } while (iVar3 < *((int *)GEN_TOP((iVar1 + 0x2c))));
        }
      }
LAB_00e13b39: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x18)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar4 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar4;
}

/* ref: hkDataObjectDict::vf28 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe13b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(this + 0x14)) {
    local_c = 0;
    do {
      for (iVar1 = *(int *)(this + 0xc); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
        iVar2 = 0;
        if (0 < *((int *)GEN_TOP((iVar1 + 0x2c)))) {
          piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x28)));
          do {
            if (*piVar4 == *((int *)GEN_TOP((local_c + *(int *)(this + 0x10))))) {
              iVar1 = *((int *)GEN_TOP((iVar1 + 0x28))) + iVar2 * 0x18;
              if (iVar1 != 0) {
                F_00e0ceb0(*((undefined4 *)GEN_TOP((iVar1 + 0x10))),
                             ((int *)GEN_TOP((local_c + *(int *)(this + 0x10)))) + 2,1,1);
              }
              goto LAB_00e13c09;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 6;
          } while (iVar2 < *((int *)GEN_TOP((iVar1 + 0x2c))));
        }
      }
LAB_00e13c09: ;
      local_8 = local_8 + 1;
      local_c = local_c + 0x10;
    } while (local_8 < *(int *)(this + 0x14));
  }
  uVar3 = *(uint *)(this + 0x18);
  piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 0xc)));
  *(undefined4 *)(this + 0x14) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),uVar3 << 4);
  }
  *(undefined4 *)(this + 0x18) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  return uVar3;
}

/* ref: FUN_00e13c60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e13c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe13c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    while (*piVar1 != param_1) {
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 4;
      if (*((int *)GEN_TOP(((int)this + 0x14))) <= iVar5) {
        return;
      }
    }
    for (iVar3 = *((int *)GEN_TOP(((int)this + 0xc))); iVar3 != 0; iVar3 = *((int *)GEN_TOP((iVar3 + 0x18)))) {
      iVar2 = 0;
      if (0 < *((int *)GEN_TOP((iVar3 + 0x2c)))) {
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + 0x28)));
        do {
          if (*piVar1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar5 * 0x10)))) {
            iVar3 = *((int *)GEN_TOP((iVar3 + 0x28))) + iVar2 * 0x18;
            if (iVar3 != 0) {
              F_00e0ceb0(*((undefined4 *)GEN_TOP((iVar3 + 0x10))),
                           *((int *)GEN_TOP(((int)this + 0x10))) + 8 + iVar5 * 0x10,1,0);
            }
            goto LAB_00e13d09;
          }
          iVar2 = iVar2 + 1;
          piVar1 = piVar1 + 6;
        } while (iVar2 < *((int *)GEN_TOP((iVar3 + 0x2c))));
      }
    }
LAB_00e13d09: ;
    iVar3 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
    *((int *)GEN_TOP(((int)this + 0x14))) = iVar3;
    if (iVar3 != iVar5) {
      puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar5 * 0x10)));
      iVar5 = (*((int *)GEN_TOP(((int)this + 0x10))) + iVar3 * 0x10) - (int)puVar4;
      iVar3 = 2;
      do {
        *puVar4 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar4)));
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar5 + 4 + (int)puVar4)));
        puVar4 = puVar4 + 2;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  return;
}

/* ref: FUN_00e13d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe13d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    do {
      if (*piVar3 == *param_2) {
        F_00e0ceb0(param_2[4],*((int *)GEN_TOP(((int)this + 0x10))) + 8 + iVar4 * 0x10,1,0);
        param_1[1] = iVar4;
        *param_1 = param_2;
        return (uint)param_1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar4 < iVar1);
  }
  piVar3 = ((int *)GEN_TOP(((int)this + 0x10)));
  if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))) + 0xc))),piVar3,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) * 0x10 + *piVar3)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
  }
  piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) * 0x10 + *piVar3)));
  *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  *piVar3 = *param_2;
  piVar3[2] = 0;
  piVar3[3] = 0;
  param_1[1] = iVar1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  F_00e13d50(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,6);
  uVar1 = *(uint *)(this + 0x10);
  *((int *)GEN_TOP((uVar1 + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = param_2;
  return uVar1;
}

/* ref: hkDataObjectDict::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe13e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this_00;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
  F_00e13d50(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[0]),1);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) + 4)));
  piVar3 = ((int *)GEN_TOP(F_00e19f20(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,piVar2)));
  if ((char)*piVar3 == '\0') {
    if (*this_00 != 6) {
      return (uint)piVar3;
    }
    uVar4 = F_00e19c80(this_00 GEN_EDX_ARG);
    if (uVar4 != 0) {
      return uVar4;
    }
    piVar3 = piVar2;
    if (*piVar2 != 6) {
      return (uint)piVar2;
    }
  }
  *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = piVar1;
  return (uint)piVar3;
}

/* ref: hkDataObjectDict::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe13ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00e13d50(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,5);
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = 0;
  return 0;
}

/* ref: hkDataObjectDict::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13f20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe13f20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00e13d50(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2,3);
  uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
  *((float *)GEN_TOP((uVar1 + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = param_3;
  return uVar1;
}

/* ref: hkDataObjectDict::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13f60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe13f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e13d50(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2,3);
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x10))) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = (int)(short)param_3 << 0x10;
  return (*(int *)(gen_frame + 0x4)) * 2;
}

/* ref: hkDataObjectDict::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e13fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe13fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  
  F_00e13d50(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  iVar1 = **((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  uVar2 = (*(int *)(gen_frame + 0x4)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *((float *)GEN_TOP((uVar2 + 8))) = (float)(longlong)CONCAT44(param_3,param_2);
      return uVar2;
    }
    if (iVar1 != 4) {
      return uVar2;
    }
  }
  *((undefined4 *)GEN_TOP((uVar2 + 8))) = param_2;
  *((undefined4 *)GEN_TOP((uVar2 + 0xc))) = param_3;
  return uVar2;
}

/* ref: hkDataObjectDict::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  
  F_00e13d50(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  iVar1 = **((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  iVar2 = (*(int *)(gen_frame + 0x4)) * 0x10 + *(int *)(this + 0x10);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      *((float *)GEN_TOP((iVar2 + 8))) = (float)(int)param_2;
      return 0;
    }
    if (iVar1 - 4U != 0) {
      return iVar1 - 4U;
    }
  }
  *((uint *)GEN_TOP((iVar2 + 8))) = param_2;
  *((int *)GEN_TOP((iVar2 + 0xc))) = (int)param_2 >> 0x1f;
  return param_2;
}

/* ref: FUN_00e14060 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe14060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x114d894));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 0x1c)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
              (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x14))),*((int *)GEN_TOP(((int)this + 0x1c))) * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x20))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e140e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe140e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
  uVar2 = *(uint *)(this + 0x28);
  *(undefined4 *)(this + 0x24) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0x20),uVar2 * 8);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x80000000;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x2c] = (undefined1)0x0;
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pVVar4;
  undefined4 * puVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x10) = 0;
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    *(undefined4 *)(this + 0x24) = 0;
    if (-1 < *(int *)(this + 0x28)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*(undefined4 *)(this + 0x20),*(int *)(this + 0x28) * 8);
    }
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x28) = 0x80000000;
  }
  pVVar4 = this + 0x14;
  if ((int)(*(uint *)(this + 0x1c) & 0x3fffffff) < param_2) {
    iVar3 = (*(uint *)(this + 0x1c) & 0x3fffffff) * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),pVVar4,iVar3,4);
  }
  iVar3 = param_2 - *(int *)(this + 0x18);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)pVVar4 + *(int *)(this + 0x18) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x18) = param_2;
  uVar2 = F_00da1010(*(int *)pVVar4,param_1,param_2 * 4);
  return uVar2;
}

/* ref: VariableIntArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e141e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe141e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e14060(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e14220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114de54));
  return (uint)this;
}

/* ref: ByteArrayImplementation::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe14260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2)));
}

/* ref: ByteArrayImplementation::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14280(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe14280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  *((undefined1 *)GEN_TOP((param_2 + uVar1))) = param_3;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e142a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe142a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0xc)));
  *((undefined1 *)GEN_TOP((param_2 + uVar1))) = param_3;
  return uVar1;
}

/* ref: ByteArrayImplementation::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e142c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe142c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = 4;
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[1] = 1;
  param_1[4] = 1;
  return 0;
}

/* ref: ByteArrayImplementation::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e142f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe142f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,1);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e14340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe14340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))
                      (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e14390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114def4));
  return (uint)this;
}

/* ref: RealArrayImplementation::vf15 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00e143d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe143d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
}

/* ref: RealArrayImplementation::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e143e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe143e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xc)));
  *((float *)GEN_TOP((uVar1 + param_2 * 4))) = param_3;
  return uVar1;
}

/* ref: RealArrayImplementation::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe14400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  param_1[2] = *(undefined4 *)(this + 0xc);
  param_1[3] = *(undefined4 *)(this + 0x10);
  param_1[4] = 4;
  *param_1 = 0xb;
  param_1[1] = 1;
  return 0;
}

/* ref: RealArrayImplementation::vf28 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_2) {
    iVar1 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar1,4);
  }
  *(int *)(this + 0x10) = param_2;
  uVar2 = F_00da1010(*(undefined4 *)(this + 0xc),param_1,param_2 * 4);
  return uVar2;
}

/* ref: FUN_00e14490 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe14490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: FUN_00e144e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e144e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe144e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  return (uint)this;
}

/* ref: PointerArrayImplementation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe14520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00e14530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14530(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe14530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: PointerArrayImplementation::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe14540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
}

/* ref: PointerArrayImplementation::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP(*piVar2));
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *((int *)GEN_TOP((uVar4 + param_1 * 4))) = param_2;
  return uVar4;
}

/* ref: FUN_00e145b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e145b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe145b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114df94));
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4 * 4)));
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dbbc));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x14)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: PointerArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14630(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe14630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e145b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e14670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  return (uint)this;
}

/* ref: CstringArrayImplementation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e146b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe146b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00e146c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e146c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe146c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: CstringArrayImplementation::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e146d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe146d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
}

/* ref: CstringArrayImplementation::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e146e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe146e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  F_00da11e0(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))));
  if (param_2 != 0) {
    uVar1 = F_00da1210(param_2);
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = 0;
  return 0;
}

/* ref: FUN_00e14730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe14730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e034));
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      F_00da11e0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dc5c));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar2;
}

/* ref: CstringArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e147a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe147a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e14730(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e147e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e147e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe147e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  return (uint)this;
}

/* ref: ArrayArrayImplementation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e14820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe14820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00e14830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14830(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe14830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: ArrayArrayImplementation::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e14840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe14840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar3 * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar1 = puVar2 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x10));
  }
  return;
}

/* ref: ArrayArrayImplementation::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) + 1;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP(*piVar2));
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
      *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
      return uVar4;
    }
    *((int *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = param_2;
    return (uint)piVar2;
  }
  uVar4 = *(uint *)(this + 0xc);
  *((int *)GEN_TOP((uVar4 + param_1 * 4))) = param_2;
  return uVar4;
}

/* ref: FUN_00e148d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e148d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe148d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e0d4));
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = puVar1 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114dcfc));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x14)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: ArrayArrayImplementation::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe14950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar4 = param_1;
  if (param_1 < *(int *)(this + 0x10)) {
    do {
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + iVar4 * 4)));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar1 = puVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_FWD,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x10));
  }
  if ((int)(*(uint *)(this + 0x14) & 0x3fffffff) < param_1) {
    iVar4 = (*(uint *)(this + 0x14) & 0x3fffffff) * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    F_00d95690(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xc))),this + 0xc,iVar4,4);
  }
  uVar2 = *(uint *)(this + 0x10);
  iVar3 = param_1 - uVar2;
  iVar4 = uVar2 * 4;
  if (0 < iVar3) {
    uVar2 = 0;
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + iVar4)));
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)(this + 0x10) = param_1;
  return uVar2;
}

/* ref: ArrayArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e149d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe149d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e148d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e14a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe14a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * in_ecx;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((int *)GEN_TOP(param_1[4])) != 1) {
    piVar1 = ((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
      F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc))),piVar1,8);
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = 0;
    }
    puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
    *puVar2 = *param_1;
    piVar1 = ((int *)GEN_TOP(param_1[4]));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
    in_ecx = ((int *)GEN_TOP(F_00e19d40(piVar1 GEN_EDX_ARG)));
    if (*in_ecx == 6) {
      F_00e19c80(in_ecx GEN_EDX_ARG);
    }
    uVar4 = F_00e0dd10(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x24))),piVar1,0);
    puVar2[1] = uVar4;
    *((int *)GEN_TOP((uVar4 + 8))) = *((int *)GEN_TOP((uVar4 + 8))) + 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x10))))(((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,param_2);
    if (((param_1[5] != 0) || (*piVar1 == 6)) && ((*(int *)(gen_frame + 0xc)) = 0, 0 < param_2)) {
      do {
        iVar7 = (*(int *)(gen_frame + 0xc));
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x4));
        if ((iVar3 == 4) || (iVar3 == 2)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x58))))
                    (((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP(param_1[5])),
                     (((undefined4 *)GEN_TOP(param_1[5])))[1]);
        }
        else if (iVar3 == 3) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x40))))
                    (((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP(param_1[5])));
        }
        else if (iVar3 == 9) {
          if (*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[1])) == 3) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x30))))(((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),param_1[5]);
          }
        }
        else if (iVar3 == 6) {
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x18)));
          uVar4 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
          if (uVar4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = F_00da4190(((undefined *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 8))) + 4))) GEN_EDX_ARG,uVar4,0);
          }
          iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x18)));
          (*(uint *)(gen_frame + 0x0)) = uVar4;
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar3 + 0xc)));
          puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),0)));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x60))))(((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),puVar6);
          iVar7 = (*(int *)(gen_frame + 0xc));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
              iVar7 = (*(int *)(gen_frame + 0xc));
            }
          }
        }
        else if (iVar3 == 5) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar2[1])) + 0x38))))(((int *)GEN_TOP(puVar2[1])) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),param_1[5]);
        }
        (*(int *)(gen_frame + 0xc)) = iVar7 + 1;
      } while (iVar7 + 1 < param_2);
    }
    return *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10))) - 1;
  }
  return 0xffffffff;
}

/* ref: FUN_00e14c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe14c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * this_00;
  LPVOID pvVar2;
  undefined4 * puVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD);
  this_00 = ((undefined4 *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar1,0)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0xc)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0xffffffff;
      this_00 = puVar3;
    }
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar1,this_00);
  }
  uVar1 = F_00dbd8b0(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,0);
  return uVar1;
}

/* ref: FUN_00e14c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe14c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  piVar3 = ((int *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD,param_1,0)));
  piVar4 = piVar3;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (uVar7 = piVar3[1] & 0x7fffffff, uVar7 != 0)) {
    iVar1 = param_3[1];
    iVar6 = iVar1 + uVar7;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar6) {
      iVar2 = (param_3[2] & 0x3fffffffU) * 2;
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_3,iVar6,4);
    }
    param_3[1] = param_3[1] + uVar7;
    puVar8 = ((undefined4 *)GEN_TOP((*param_3 + iVar1 * 4)));
    iVar6 = piVar3[2];
    piVar4 = ((int *)GEN_TOP(0x0));
    if (-1 < iVar6) {
      piVar5 = ((int *)GEN_TOP(*piVar3));
      do {
        if (*piVar5 != -1) break;
        piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
        piVar5 = piVar5 + 2;
      } while ((int)piVar4 <= iVar6);
    }
    if ((int)piVar4 <= iVar6) {
      do {
        *puVar8 = *((undefined4 *)GEN_TOP((*piVar3 + (int)((int)(uintptr_t)piVar4) * 8)));
        iVar6 = piVar3[2];
        piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
        puVar8 = puVar8 + 1;
        if (iVar6 < (int)piVar4) break;
        piVar5 = ((int *)GEN_TOP((*piVar3 + (int)((int)(uintptr_t)piVar4) * 8)));
        do {
          if (*piVar5 != -1) break;
          piVar4 = ((int *)GEN_TOP(((int)piVar4 + 1)));
          piVar5 = piVar5 + 2;
        } while ((int)piVar4 <= iVar6);
      } while ((int)piVar4 <= iVar6);
    }
  }
  if (param_2 != 0) {
    piVar4 = ((int *)GEN_TOP(F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1)));
    if (piVar4 != ((int *)GEN_TOP(0xffffffff))) {
      piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
      piVar3 = piVar4;
      do {
        F_00e14c90(this GEN_EDX_ARG,piVar5[(int)((int)(uintptr_t)piVar3) * 2],param_2,param_3);
        piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
        piVar3 = ((int *)GEN_TOP(piVar4[(int)((int)(uintptr_t)piVar3) * 2 + 1]));
        piVar5 = piVar4;
      } while (piVar3 != ((int *)GEN_TOP(0xffffffff)));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00e14d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe14d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined * this_00;
  int iVar1;
  char cVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  if ((int)((*(int * PTR32 *)&gen_args[0])[2] & 0x3fffffffU) < iVar1) {
    iVar4 = ((*(int * PTR32 *)&gen_args[0])[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)&gen_args[0]),iVar4,4);
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  uVar5 = F_00da3970(this_00 GEN_EDX_ARG);
  uVar6 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3,uVar5);
  cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3))));
  while (cVar2 != '\0') {
    uVar6 = F_00da39b0(this_00 GEN_EDX_ARG,uVar5);
    *((uint *)GEN_TOP((*piVar3 + piVar3[1] * 4))) = uVar6;
    piVar3[1] = piVar3[1] + 1;
    uVar5 = F_00da39f0(this_00 GEN_EDX_ARG,uVar5);
    uVar6 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3,uVar5);
    cVar2 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3))));
  }
  return uVar6;
}

/* ref: FUN_00e14e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe14e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,0);
    piVar3 = ((int *)GEN_TOP(0x0));
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(F_00e113a0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar2)));
      for (piVar4 = piVar3; piVar4 != ((int *)GEN_TOP(0xffffffff)); piVar4 = ((int *)GEN_TOP(piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1]))
          ) {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + (int)((int)(uintptr_t)piVar4) * 8)));
        if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
        }
        *((undefined4 *)GEN_TOP((*param_4 + param_4[1] * 4))) = uVar1;
        param_4[1] = param_4[1] + 1;
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
      }
      if (((param_3 != 0) &&
          (piVar4 = ((int *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar2,0))), piVar3 = piVar4,
          piVar4 != ((int *)GEN_TOP(0x0)))) && ((piVar4[1] & 0x7fffffffU) != 0)) {
        iVar7 = piVar4[2];
        piVar6 = ((int *)GEN_TOP(0x0));
        if (-1 < iVar7) {
          piVar8 = ((int *)GEN_TOP(*piVar4));
          do {
            if (*piVar8 != -1) break;
            piVar6 = ((int *)GEN_TOP(((int)piVar6 + 1)));
            piVar8 = piVar8 + 2;
          } while ((int)piVar6 <= iVar7);
        }
        param_1 = piVar6;
        if ((int)piVar6 <= iVar7) {
          do {
            piVar3 = *((int * PTR32 *)GEN_TOP((*piVar4 + (int)((int)(uintptr_t)param_1) * 8)));
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
            if (0 < (int)uVar5) {
              iVar7 = 0;
              do {
                uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,iVar7);
                if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_4,4);
                }
                *((uint *)GEN_TOP((*param_4 + param_4[1] * 4))) = uVar5;
                param_4[1] = param_4[1] + 1;
                iVar7 = iVar7 + 1;
                uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
              } while (iVar7 < (int)uVar5);
            }
            iVar7 = piVar4[2];
            piVar3 = ((int *)GEN_TOP(((int)param_1 + 1)));
            if ((int)piVar3 <= iVar7) {
              piVar6 = ((int *)GEN_TOP((*piVar4 + (int)((int)(uintptr_t)piVar3) * 8)));
              do {
                if (*piVar6 != -1) break;
                piVar3 = ((int *)GEN_TOP(((int)piVar3 + 1)));
                piVar6 = piVar6 + 2;
              } while ((int)piVar3 <= iVar7);
            }
            param_1 = piVar3;
          } while ((int)piVar3 <= iVar7);
        }
      }
      if ((param_2 != 0) &&
         (piVar4 = ((int *)GEN_TOP(F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2))), piVar3 = piVar4,
         piVar4 != ((int *)GEN_TOP(0xffffffff)))) {
        piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
        do {
          iVar7 = param_2;
          iVar9 = param_3;
          piVar6 = param_4;
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[(int)((int)(uintptr_t)piVar4) * 2])) + 8))))(((int *)GEN_TOP(piVar3[(int)((int)(uintptr_t)piVar4) * 2])) GEN_EDX_ARG)
          ;
          F_00e14e20(this GEN_EDX_ARG,((int *)GEN_TOP(uVar2)),iVar7,iVar9,piVar6);
          piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
          piVar4 = ((int *)GEN_TOP(piVar3[(int)((int)(uintptr_t)piVar4) * 2 + 1]));
        } while (piVar4 != ((int *)GEN_TOP(0xffffffff)));
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00e14ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e14ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe14ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((param_4 + 4))) = 0;
  uVar1 = F_00e14e20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e15020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e15060 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15060u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e150a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe150a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e150e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e150e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe150e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e15120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar1 != 0xffffffff) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar1 * 8)));
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00e15160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar1 != 0xffffffff) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar1 * 8)));
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00e151a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e151a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe151a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  uVar3 = F_00e139b0(this GEN_EDX_FWD);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataClassDict::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e151f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe151f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x114de1c));
  F_00e139b0(param_1 GEN_EDX_FWD);
  puVar2 = ((undefined4 *)GEN_TOP(param_1[6]));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  param_1[6] = 0;
  if (((undefined *)GEN_TOP(param_1[4])) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(param_1[4])) GEN_EDX_ARG);
  }
  param_1[4] = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e15260 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  uVar3 = F_00e13ac0(this GEN_EDX_FWD);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: hkDataObjectDict::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e152a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe152a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  F_00e13ac0(param_1 GEN_EDX_FWD);
  puVar2 = ((undefined4 *)GEN_TOP(param_1[3]));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  param_1[3] = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: ByteArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114da7c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] & 0x3fffffff);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: RealArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  LPVOID pvVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[39])REFP(0x114db1c));
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1[6] + 0xc)));
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e153f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e153f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe153f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * this_01;
  LPVOID pvVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  iVar7 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  if (param_3 != 0) {
    *((int *)GEN_TOP((param_3 + 8))) = *((int *)GEN_TOP((param_3 + 8))) + 1;
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_4;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  if (0 < (int)uVar2) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG);
      iVar6 = iVar7 - uVar2;
      piVar3 = piVar1;
      do {
        iVar6 = iVar6 + piVar3[0xb];
        if (-1 < iVar6) {
          iVar6 = piVar3[10] + iVar6 * 0x18;
          goto LAB_00e1546b;
        }
        piVar3 = ((int *)GEN_TOP(piVar3[6]));
      } while (piVar3 != ((int *)GEN_TOP(0x0)));
      iVar6 = piVar1[10] - 0x18;
LAB_00e1546b: ;
      F_00e14a10(this GEN_EDX_ARG,iVar6,*((undefined4 *)GEN_TOP(((int)this + 0x20))));
      iVar7 = iVar7 + 1;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
    } while (iVar7 < (int)uVar2);
  }
  iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP((iVar7 + 0x70)));
  this_01 = ((undefined4 *)GEN_TOP(F_00dbd970(this_00 GEN_EDX_ARG,uVar2,0)));
  if (this_01 == ((undefined4 *)GEN_TOP(0x0))) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0xc)));
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0xffffffff;
      this_01 = puVar5;
    }
    F_00dbd8b0(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar2,this_01);
  }
  F_00dbd8b0(this_01 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),this,0);
  return (uint)this;
}

/* ref: StructArrayImplementation::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: FUN_00e15520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return (uint)this;
}

/* ref: StructArrayImplementation::Object::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe15550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x18))))
                    (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15560(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf5 */
GEN_LIB GEN_NOFRAME uint F_00e15580(void)
{
  GEN_ENTER(0xe15580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::Object::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return param_1 + 1;
}

/* ref: StructArrayImplementation::Object::vf31 */
GEN_LIB GEN_NOFRAME unsigned int F_00e155a0(void)
{
  GEN_ENTER(0xe155a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: StructArrayImplementation::Object::vf28 */
GEN_LIB GEN_NOFRAME unsigned int F_00e155b0(void)
{
  GEN_ENTER(0xe155b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: StructArrayImplementation::Object::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e155c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe155c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *param_1;
  param_2[1] = 0;
  param_2[2] = param_1[4];
  param_2[3] = param_1[5];
  return (uint)param_2;
}

/* ref: StructArrayImplementation::Object::vf27 */
GEN_LIB GEN_NOFRAME uint F_00e155f0(void)
{
  GEN_ENTER(0xe155f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: StructArrayImplementation::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: StructArrayImplementation::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: StructArrayImplementation::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_00e15640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dbe420(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e15650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15650(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e15660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: CWiauPropertyList::LookupPropId */
GEN_LIB GEN_FRAME int GEN_THISCALL F_00e15680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(this + 0x10));
  }
  return -1;
}

/* ref: FUN_00e156b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e156b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe156b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e156e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe156e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if ((*(int *)&gen_args[0]) == *piVar3) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10)));
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    do {
      if (*param_1 == *piVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < iVar1);
  }
  return 0;
}

/* ref: StructArrayImplementation::Object::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)(param_1 < *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))));
}

/* ref: StructArrayImplementation::Object::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_1 * 8)));
}

/* ref: StructArrayImplementation::Object::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e157b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe157b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = this;
  param_1[1] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + param_2 * 8)));
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e157d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe157d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  puVar2[3] = this;
  puVar2[1] = 0x14;
  puVar2[2] = 0;
  *puVar2 = (*(undefined * PTR32 (*)[36])REFP(0x114e214));
  puVar2[4] = param_1;
  return (uint)puVar2;
}

/* ref: StructArrayImplementation::vf24 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e15810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  param_2[2] = param_2[2] + 1;
  iVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) + iVar4 * 8)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc))))(param_2 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),*puVar2);
      F_00e1d1b0(puVar2[1] GEN_EDX_ARG,param_1,uVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
  }
  piVar1 = param_2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: StructArrayImplementation::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e15880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x10) < 1) {
    *(undefined4 *)(this + 0x20) = 0;
    return;
  }
  do {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(this + 0x10));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

/* ref: StructArrayImplementation::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e158c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe158c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}

/* ref: StructArrayImplementation::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e158f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe158f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined4 *)(this + 0x20) = param_1;
  if (0 < *(int *)(this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 4 + iVar2 * 8)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  return;
}

/* ref: StructArrayImplementation::Object::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe15930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00e15970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar1,0)));
  uVar1 = F_00dbe420(this_00 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e159b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e159b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe159b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e15a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0xc))) + 8)));
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_1,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
  }
  uVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    puVar4 = *((uint * PTR32 *)GEN_TOP(((int)this + 0xc)));
    do {
      if (*puVar4 == uVar2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while ((int)uVar3 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0xffffffff;
}

/* ref: StructArrayImplementation::Object::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8))) + 0x50)));
    uVar1 = F_00da4190(this_00 GEN_EDX_FWD,param_2,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_2);
      F_00da3a20(this_00 GEN_EDX_ARG,uVar1,uVar1);
    }
  }
  uVar1 = F_00e11bf0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) GEN_EDX_ARG,uVar1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  *param_1 = this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::Object::vf29 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e15b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e11b60(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: StructArrayImplementation::Object::vf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0x18))) + 0xc))) + 8)));
  if (param_2 != 0) {
    uVar2 = F_00da4190(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_FWD,param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20(((undefined *)GEN_TOP((iVar1 + 0x50))) GEN_EDX_ARG,uVar2,uVar2);
    }
    *param_1 = uVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: StructArrayImplementation::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e15b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe15b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: StructArrayImplementation::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e15a10(this GEN_EDX_FWD,param_1);
  return *((uint *)GEN_TOP((*(int *)(this + 0xc) + 4 + uVar1 * 8)));
}

/* ref: FUN_00e15bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e15bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  uVar1 = F_00e14a10(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e15c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
    do {
      if (*piVar2 == *param_1) {
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  uVar1 = F_00e14a10(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x2c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 100))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x54))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x3c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf33 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG,param_1,*(undefined4 *)(this + 0x10));
  return param_1;
}

/* ref: StructArrayImplementation::Object::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe15dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  uVar1 = F_00e1d1b0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar1 * 8))) GEN_EDX_ARG,
                       *(undefined4 *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: StructArrayImplementation::Object::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x38))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15eb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe15eb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))
                    (piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x10))),(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe15f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe15f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD,param_2);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x10))),(int)param_3);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf34 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),(int)(short)param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e15fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe15fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2);
  return uVar2;
}

/* ref: StructArrayImplementation::Object::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe16000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00e15c10(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))) + 4 + uVar2 * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_2,param_3);
  return uVar2;
}

/* ref: FUN_00e16040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114e174));
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + iVar4 * 8)));
      piVar2 = puVar1 + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 8)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00dbd970(((undefined *)GEN_TOP((iVar4 + 0x70))) GEN_EDX_ARG,uVar3,0)));
  F_00dbe420(this_00 GEN_EDX_ARG,this);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x14)));
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar3 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    piVar2 = puVar1 + 2;
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return uVar3;
}

/* ref: StructArrayImplementation::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e160f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe160f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e16040(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e16130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00e161b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e161b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe161b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar2) ||
       (*((uint *)GEN_TOP(((int)this_00 + 0x10))) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00e16220 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar3) || (uVar3 + iVar1 != *((int *)GEN_TOP(((int)this_00 + 0xc)))))
     || (*((int *)GEN_TOP(((int)this_00 + 0x14))) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *((int *)GEN_TOP(((int)this_00 + 0xc))) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e162b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e162b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe162b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *((uint *)GEN_TOP(((int)this_00 + 0xc)));
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar2) ||
       (*((uint *)GEN_TOP(((int)this_00 + 0x10))) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar1 + uVar2;
    }
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00e16320 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  if (iVar1 == *(int *)this) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)this_00 + 8))) < (int)uVar3) || (uVar3 + iVar1 != *((int *)GEN_TOP(((int)this_00 + 0xc)))))
     || (*((int *)GEN_TOP(((int)this_00 + 0x14))) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *((int *)GEN_TOP(((int)this_00 + 0xc))) = iVar1;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e163b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e163b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe163b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00e15120(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00e16400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e16440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00e15160(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00e16490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe16490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  
  iVar7 = *((int *)GEN_TOP(((int)this + 0x14)));
  iVar1 = 0;
  (*(int *)(gen_frame + 0xc)) = -1;
  if (0 < iVar7) {
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    do {
      if (*piVar5 == *param_2) {
        (*(int *)(gen_frame + 0xc)) = iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar1 < iVar7);
    if ((*(int *)(gen_frame + 0xc)) != -1) goto LAB_00e16699;
  }
  piVar5 = ((int *)GEN_TOP(((int)this + 0x10)));
  (*(int *)(gen_frame + 0xc)) = iVar7;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
    F_00d95710(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))) + 0xc))),piVar5,0x10);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) * 0x10 + *piVar5)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
  }
  iVar7 = *((int *)GEN_TOP(((int)this + 0x14)));
  *((int *)GEN_TOP(((int)this + 0x14))) = iVar7 + 1;
  piVar6 = ((int *)GEN_TOP((iVar7 * 0x10 + *piVar5)));
  *piVar6 = *param_2;
  piVar5 = ((int *)GEN_TOP(param_2[4]));
  iVar7 = *piVar5;
  if (iVar7 == 8) {
    uVar3 = F_00e0dd10(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))),piVar5[1],0);
    piVar6[2] = uVar3;
    *((int *)GEN_TOP((uVar3 + 8))) = *((int *)GEN_TOP((uVar3 + 8))) + 1;
  }
  else if (iVar7 == 9) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(piVar5[1]));
    piVar4 = ((int *)GEN_TOP(F_00e0dd10(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc))),((int *)GEN_TOP(piVar5[1])),0
                                )));
    piVar6[2] = (int)piVar4;
    iVar7 = *piVar4;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar4;
    uVar3 = F_00e19c70(piVar5 GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x10))))((*(int * PTR32 *)(gen_frame + 0x8)),uVar3);
    *((int *)GEN_TOP((piVar6[2] + 8))) = *((int *)GEN_TOP((piVar6[2] + 8))) + 1;
    if ((param_2[5] != 0) && (*(*(int * PTR32 *)(gen_frame + 0x4)) == 3)) {
      uVar3 = F_00e19c70(piVar5 GEN_EDX_ARG);
      iVar7 = 0;
      (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(param_2[5]));
      if (0 < (int)uVar3) {
        do {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar6[2])) + 0x40))))
                    (((int *)GEN_TOP(piVar6[2])) GEN_EDX_ARG,iVar7,*((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x4)) + iVar7 * 4))));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar3);
      }
    }
  }
  else if (iVar7 == 7) {
    piVar6[2] = 0;
  }
  else if (iVar7 == 6) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(*piVar4));
    uVar3 = F_00e19c80(piVar5 GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x4)),uVar3);
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    piVar5 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc)));
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),1)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    piVar6[2] = (int)puVar2;
    puVar2[2] = puVar2[2] + 1;
    *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
    piVar5 = puVar2 + 2;
    *piVar5 = *piVar5 - 1;
    if (*piVar5 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(param_2[5]));
    if (piVar5 == ((int *)GEN_TOP(0x0))) {
      piVar6[2] = 0;
      piVar6[3] = 0;
    }
    else if ((iVar7 == 2) || (iVar7 == 4)) {
      piVar6[2] = *piVar5;
      piVar6[3] = piVar5[1];
    }
    else if (iVar7 == 3) {
      piVar6[2] = *piVar5;
    }
    else if (iVar7 == 5) {
      uVar3 = F_00da1210(piVar5);
      piVar6[2] = uVar3;
    }
  }
LAB_00e16699: ;
  *param_1 = param_2;
  param_1[1] = (*(int *)(gen_frame + 0xc));
  return (uint)param_1;
}

/* ref: hkDataObjectDict::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e166b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe166b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,8);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e166e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe166e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,5);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  if ((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) != 2) && (**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) != 4)) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,6);
  return *((uint *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,9);
  uVar1 = F_00e0d670(*((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))),param_2);
  return uVar1;
}

/* ref: hkDataObjectDict::vf15 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00e167d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe167d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00e16490(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_1,3);
  return *((float *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
}

/* ref: hkDataObjectDict::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe16800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  F_00e16490(this_00 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),param_2[1],1);
  F_00e13d50(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),param_1,1);
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x10))) + 8 + (*(int *)(gen_frame + 0xc)) * 0x10)));
  (*(int *)(gen_frame + 0x10)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x10))) + 0xc + (*(int *)(gen_frame + 0xc)) * 0x10)));
  piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  iVar3 = **((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10)));
  if ((iVar3 == 8) || (iVar3 == 9)) {
    if (*piVar2 != 8) {
      bVar5 = *piVar2 == 9;
      goto LAB_00e1687c;
    }
  }
  else if ((iVar3 != 7) || (*piVar2 != 7)) {
    if (iVar3 != 6) goto LAB_00e16888;
    bVar5 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10))) == piVar2;
LAB_00e1687c: ;
    if (!bVar5) goto LAB_00e16888;
  }
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
LAB_00e16888: ;
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x10)));
  iVar3 = *(int *)(this + 0x10);
  *((undefined4 *)GEN_TOP((iVar3 + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) = *((undefined4 *)GEN_TOP((iVar1 + 8 + (*(int *)(gen_frame + 0xc)) * 0x10)));
  uVar4 = *((uint *)GEN_TOP((iVar1 + 0xc + (*(int *)(gen_frame + 0xc)) * 0x10)));
  *((uint *)GEN_TOP((iVar3 + 0xc + (*(int *)(gen_frame + 0x4)) * 0x10))) = uVar4;
  return uVar4;
}

/* ref: hkDataObjectDict::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e168b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe168b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * in_ecx;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  uVar2 = F_00e13d50(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),param_1,1);
  in_ecx = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
  if ((*in_ecx == 9) && (*((int *)GEN_TOP(in_ecx[1])) == 3)) {
    piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10)));
    if (*((int *)GEN_TOP((*(int *)(this + 0x10) + 8 + (*(int *)(gen_frame + 0x4)) * 0x10))) == 0) {
      piVar3 = ((int *)GEN_TOP(F_00e0dd10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),((int *)GEN_TOP(in_ecx[1])),0)));
      *piVar1 = (int)piVar3;
      iVar4 = *piVar3;
      uVar2 = F_00e19c70(in_ecx GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x10))))(*piVar1,uVar2);
      *((int *)GEN_TOP((*piVar1 + 8))) = *((int *)GEN_TOP((*piVar1 + 8))) + 1;
    }
    iVar4 = param_3 * 4;
    uVar2 = F_00e0d670(*piVar1,param_3);
    uVar2 = F_00da1010(uVar2,param_2,iVar4);
  }
  return uVar2;
}

/* ref: ArrayArrayImplementation::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4)));
  if (uVar1 == 0) {
    uVar1 = F_00e0dd10(*(undefined4 *)(this + 0x18),*((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 4))),0);
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
    *((uint *)GEN_TOP((*(int *)(this + 0xc) + param_1 * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e16990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e16990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe16990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00e169f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e169f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe169f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar2 = F_00e16440(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar2,&(*(int * PTR32 *)&gen_args[0]));
  if (*((int *)GEN_TOP(((int)this + 0x30))) == 0) {
    *((int * PTR32 *)GEN_TOP(((int)this + 0x30))) = piVar1;
  }
  return uVar2;
}

/* ref: FUN_00e16a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe16a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x5, 11);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  uVar3 = F_00da3ae0(this_00 GEN_EDX_ARG,uVar3);
  uVar3 = F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar3);
  if ((*(char *)(gen_frame + 0x0)) == '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    uVar3 = F_00da3a20(this_00 GEN_EDX_ARG,uVar3,piVar1);
    if (uVar2 != 0) {
      uVar3 = F_00e163b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,&(*(int * PTR32 *)&gen_args[0]));
    }
  }
  return uVar3;
}

/* ref: FUN_00e16aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe16aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x228, 8, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int * piVar6;
  undefined * pvVar7;
  int iVar8;
  int iVar9;
  char * pcVar10;
  char * pcVar11;
  
  piVar6 = param_1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  if (uVar3 == 0) {
    param_1 = ((int *)GEN_TOP(0x0));
  }
  else {
    param_1 = ((int *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar3,0)));
  }
  uVar3 = F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,piVar6);
  if (uVar3 != 0xffffffff) {
    iVar9 = *((int *)GEN_TOP(((int)this + 0x14)));
    do {
      F_00e16aa0(this GEN_EDX_ARG,((int *)GEN_TOP(*((undefined4 *)GEN_TOP((iVar9 + uVar3 * 8))))));
      iVar9 = *((int *)GEN_TOP(((int)this + 0x14)));
      uVar3 = *((uint *)GEN_TOP((iVar9 + 4 + uVar3 * 8)));
    } while (uVar3 != 0xffffffff);
  }
  uVar3 = F_00e113a0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1);
  if (uVar3 != 0xffffffff) {
    (*(uint *)(gen_frame + 0x210)) = 0;
    (*(uint *)(gen_frame + 0x214)) = 0;
    (*(uint *)(gen_frame + 0x218)) = 0x80000000;
    (*(int *)(gen_frame + 0x220)) = 0x200;
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = *((uint *)GEN_TOP(((int)pvVar4 + 0xc)));
    if ((*((int *)GEN_TOP(((int)pvVar4 + 8))) < 0x800) || (*((uint *)GEN_TOP(((int)pvVar4 + 0x10))) < uVar5 + 0x800)) {
      uVar5 = F_00d94390(pvVar4 GEN_EDX_ARG,0x800);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar5 + 0x800;
    }
    (*(uint *)(gen_frame + 0x210)) = uVar5;
    (*(uint *)(gen_frame + 0x21c)) = uVar5;
    (*(uint *)(gen_frame + 0x218)) = 0x80000200;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + uVar3 * 8)));
      if ((*(uint *)(gen_frame + 0x214)) == ((*(uint *)(gen_frame + 0x218)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x210)),4);
      }
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + (*(uint *)(gen_frame + 0x214)) * 4))) = uVar1;
      uVar5 = (*(uint *)(gen_frame + 0x214)) + 1;
      (*(uint *)(gen_frame + 0x214)) = uVar5;
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4 + uVar3 * 8)));
    } while (uVar3 != 0xffffffff);
    iVar9 = 0;
    if (0 < (int)uVar5) {
      do {
        if (*((int *)GEN_TOP(((int)this + 0x30))) == *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)))) {
          *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
        }
        if (0 < *((short *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) + 6)))) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          piVar6 = *((int * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)));
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
          iVar8 = (int)*((short *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) + 6)));
          pcVar11 = ((char *)REFP(0x114e328));
          pcVar10 = 
          ((char *)REFP(0x114e2c0))
          ;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
          pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e2a4)))));
          pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,uVar3)));
          pvVar7 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar10)));
          pvVar7 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar8)));
          F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar11);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x760d3794,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114dd98)),0xb87);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        }
        F_00e13ac0(*((undefined * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4))) GEN_EDX_ARG);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x214)));
    }
    iVar9 = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x214))) {
      do {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x210)) + iVar9 * 4)));
        piVar6 = puVar2 + 2;
        *piVar6 = *piVar6 - 1;
        if (*piVar6 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x214)));
    }
    F_00e113c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,param_1);
    iVar9 = (*(int *)(gen_frame + 0x220));
    uVar3 = (*(uint *)(gen_frame + 0x21c));
    if ((*(uint *)(gen_frame + 0x21c)) == (*(uint *)(gen_frame + 0x210))) {
      (*(uint *)(gen_frame + 0x214)) = 0;
    }
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = iVar9 * 4 + 0x7fU & 0xffffff80;
    if (((*((int *)GEN_TOP(((int)pvVar4 + 8))) < (int)uVar5) || (uVar5 + uVar3 != *((int *)GEN_TOP(((int)pvVar4 + 0xc)))))
       || (*((uint *)GEN_TOP(((int)pvVar4 + 0x14))) == uVar3)) {
      F_00d945c0(pvVar4 GEN_EDX_ARG,uVar3,uVar5);
    }
    else {
      *((uint *)GEN_TOP(((int)pvVar4 + 0xc))) = uVar3;
    }
    (*(uint *)(gen_frame + 0x214)) = 0;
    uVar3 = (*(uint *)(gen_frame + 0x218));
    if (-1 < (int)(*(uint *)(gen_frame + 0x218))) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x210)),(*(uint *)(gen_frame + 0x218)) * 4);
    }
  }
  return uVar3;
}

/* ref: FUN_00e16d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe16d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x24, 12);
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  LPVOID pvVar6;
  undefined * this_00;
  uint uVar7;
  int * this_01;
  int iVar8;
  
  this_01 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (uVar4 == 0) {
    piVar5 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar5 = ((int *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4,0)));
  }
  F_00e16aa0(this GEN_EDX_ARG,this_01);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG);
  if (uVar4 != 0) {
    F_00e13050(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar4,&(*(int * PTR32 *)&gen_args[0]));
  }
  F_00e139b0(this_01 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  (*(int *)(gen_frame + 0x10)) = 0x40;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = *((uint *)GEN_TOP(((int)pvVar6 + 0xc)));
  if ((*((int *)GEN_TOP(((int)pvVar6 + 8))) < 0x100) || (*((uint *)GEN_TOP(((int)pvVar6 + 0x10))) < uVar4 + 0x100)) {
    uVar4 = F_00d94390(pvVar6 GEN_EDX_ARG,0x100);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar6 + 0xc))) = uVar4 + 0x100;
  }
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(uint *)(gen_frame + 0x8)) = 0x80000040;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  uVar4 = F_00e11310(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,this_01);
  (*(bool *)(gen_frame + 0x1f)) = uVar4 != 0xffffffff;
  if (uVar4 != 0xffffffff) {
    for (; uVar4 != 0xffffffff; uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4 + uVar4 * 8)))) {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + uVar4 * 8)));
      if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x0)),4);
      }
      *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4))) = uVar1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
      this_01 = (*(int * PTR32 *)&gen_args[0]);
    }
  }
  iVar8 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    do {
      F_00e16d40(this GEN_EDX_ARG,((int *)GEN_TOP(*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar8 * 4))))));
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + iVar8 * 4)));
      piVar5 = puVar2 + 2;
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  if ((*(bool *)(gen_frame + 0x1f)) != false) {
    F_00e11330(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,this_01);
  }
  iVar8 = (*(int *)(gen_frame + 0x10));
  uVar4 = (*(uint *)(gen_frame + 0xc));
  if ((*(uint *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x0))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = iVar8 * 4 + 0x7fU & 0xffffff80;
  if (((*((int *)GEN_TOP(((int)pvVar6 + 8))) < (int)uVar7) || (uVar7 + uVar4 != *((int *)GEN_TOP(((int)pvVar6 + 0xc)))))
     || (*((uint *)GEN_TOP(((int)pvVar6 + 0x14))) == uVar4)) {
    F_00d945c0(pvVar6 GEN_EDX_ARG,uVar4,uVar7);
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar6 + 0xc))) = uVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  uVar4 = (*(uint *)(gen_frame + 0x14));
  this_00 = ((undefined *)GEN_TOP(F_00da4190(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x60))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),0)));
  F_00da3f00(((undefined *)GEN_TOP(((int)pvVar3 + 0x60))) GEN_EDX_ARG,uVar4);
  F_00d91a80(this_00 GEN_EDX_ARG);
  uVar4 = F_00da3f00(((undefined *)GEN_TOP(((int)pvVar3 + 4))) GEN_EDX_ARG,uVar4);
  return uVar4;
}

/* ref: FUN_00e16f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int *)&gen_args[0]) != 0) {
    this_00 = ((int *)GEN_TOP(((int)this + 0x14)));
    uVar2 = F_00e11310(this_00 GEN_EDX_FWD,(*(int *)&gen_args[0]));
    if (uVar2 != 0xffffffff) {
      do {
        if (*((int * PTR32 *)GEN_TOP((*this_00 + uVar2 * 8))) == piVar1) {
          F_00e12fc0(this_00 GEN_EDX_ARG,(*(int *)&gen_args[0]),uVar2);
          break;
        }
        uVar2 = *((uint *)GEN_TOP((*this_00 + 4 + uVar2 * 8)));
      } while (uVar2 != 0xffffffff);
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = F_00e163b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar3,&(*(int * PTR32 *)&gen_args[1]));
  }
  return uVar2;
}

/* ref: FUN_00e16fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e16fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe16fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * this_00;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 8))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  this_00 = ((uint *)GEN_TOP(((int)this + 0x34)));
  uVar2 = F_00e113a0(this_00 GEN_EDX_ARG,uVar1);
  uVar3 = uVar2;
  for (; (uVar1 != 0 && (uVar2 != 0xffffffff)); uVar2 = *((uint *)GEN_TOP((*this_00 + 4 + uVar2 * 8)))) {
    uVar3 = *this_00;
    if ((*(int * PTR32 *)&gen_args[0]) == *((int * PTR32 *)GEN_TOP((uVar3 + uVar2 * 8)))) {
      F_00e130a0(this_00 GEN_EDX_ARG,uVar1,uVar2);
      uVar3 = F_00e16440(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[0]));
      uVar1 = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00e17020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17020(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e0e030(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x7c);
  }
  return (uint)param_1;
}

/* ref: FUN_00e17080 */
GEN_LIB GEN_FRAME uint F_00e17080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe17080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkDataWorldDict::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e170b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe170b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e0ed30(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e170f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e170f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe170f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e17100 */
GEN_LIB GEN_FRAME uint F_00e17100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe17100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x1c))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0x10);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0x10);
  if (uVar2 != 0x10) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG);
  pcVar3 = ((char *)GEN_TOP(F_00dea6f0((int)&(*(int * PTR32 *)&gen_args[1]) + 3,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)))));
  if (*pcVar3 != '\0') {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 2;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e171c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e171c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe171c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: hkMemoryResourceHandle::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e171e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe171e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d91520(this + 0xc GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e171f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe171f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_010596b0(this + 8 GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_01059680(this + 8 GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: hkMemoryResourceHandle::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((*((uint *)GEN_TOP((in_ecx + 0xc))) & 0xfffffffe)));
  if (puVar1 == ((undefined *)GEN_TOP(0x0))) {
    puVar1 = &REFG(undefined, 0x114c8d4);
  }
  return (uint)puVar1;
}

/* ref: hkMemoryResourceHandle::vf6 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkMemoryResourceContainer::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 8))) & 0xfffffffe;
}

/* ref: hkMemoryResourceContainer::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: hkContainerResourceMap::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    *param_2 = 0;
  }
  piVar1 = ((int *)GEN_TOP(F_00da4190(this + 4 GEN_EDX_FWD,param_1,0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
    *param_2 = uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e172a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe172a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  do {
    if ((param_2 == 0) || (*(int *)(this + 0x20) <= iVar3)) break;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) != param_2);
  if (iVar3 < *(int *)(this + 0x20)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar3 * 4)));
      if ((param_1 == 0) ||
         (uVar4 = F_00da0d20(param_1,*((uint *)GEN_TOP((uVar2 + 8))) & 0xfffffffe), uVar4 == 0)) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x20));
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * phVar1;
  int in_ecx;
  undefined * this_00;
  uint uVar2;
  
  phVar1 = this + 0x10;
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  in_ecx = *(int *)phVar1 + *(int *)(this + 0x14) * 8;
  if (in_ecx != 0) {
    F_00d91340(in_ecx GEN_EDX_ARG);
    F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0x14) * 8)));
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91520(this_00 GEN_EDX_ARG,param_1);
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: hkMemoryResourceHandle::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x434, 12, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  undefined1 * puVar9;
  
  param_1[1] = 0;
  iVar7 = *(int *)(this + 0x14);
  uVar2 = param_1[2] & 0x3fffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x428)) = this;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar7) {
      iVar3 = iVar7;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  (*(uint *)(gen_frame + 0x42c)) = 0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      puVar4 = ((uint *)GEN_TOP((param_1[1] * 0x10 + *param_1)));
      param_1[1] = param_1[1] + 1;
      (*(uint * PTR32 *)(gen_frame + 0x420)) = puVar4;
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x10) + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      (*(int *)(gen_frame + 0x424)) = *(int *)(this + 8);
      pvVar5 = ((undefined *)GEN_TOP(F_010596b0(this + 8 GEN_EDX_ARG)));
      uVar6 = F_00da0ef0(uVar2,0x2e);
      while (uVar6 != 0) {
        iVar7 = uVar6 - uVar2;
        F_00da1010(((undefined1 *)(gen_frame + 0x200)),uVar2,iVar7);
        ((undefined1 *)(gen_frame + 0x200))[(int)(iVar7)] = 0;
        uVar2 = uVar2 + 1 + iVar7;
        uVar6 = F_00d928d0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)));
        if (uVar6 == 0) goto LAB_00e17512;
        if (*((char *)GEN_TOP((uVar6 + 0xc))) != '\x19') {
          F_00da0a80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          puVar9 = ((undefined1 *)(gen_frame + 0x200));
          pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((char *)REFP(0x114e4c4)))));
          F_00d9fe80(pvVar5 GEN_EDX_ARG,puVar9);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edfe,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x80);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG);
          goto LAB_00e17512;
        }
        pvVar5 = ((undefined *)GEN_TOP(F_00da5fd0(uVar6 GEN_EDX_ARG)));
        (*(int *)(gen_frame + 0x424)) = (*(int *)(gen_frame + 0x424)) + (uint)*((ushort *)GEN_TOP((uVar6 + 0x12)));
        uVar6 = F_00da0ef0(uVar2,0x2e);
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x420));
      }
      uVar6 = F_00d928d0(pvVar5 GEN_EDX_ARG,uVar2);
      if (uVar6 == 0) {
LAB_00e17512: ;
        param_1[1] = param_1[1] - 1;
        F_00da0a80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((char *)REFP(0x114e484)))));
        F_00d9fe80(pvVar5 GEN_EDX_ARG,uVar2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edf1,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x92
                  );
        F_00d9fda0(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG);
      }
      else {
        *puVar4 = uVar2;
        puVar8 = ((uint *)GEN_TOP(F_0105a6b0(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x424)),uVar6)));
        puVar4[2] = *puVar8;
        puVar4[3] = puVar8[1];
        puVar4[1] = *((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x10) + 4 + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      }
      uVar2 = (*(uint *)(gen_frame + 0x42c)) + 1;
      (*(uint *)(gen_frame + 0x42c)) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x428));
    } while ((int)uVar2 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x14));
  }
  return uVar2;
}

/* ref: FUN_00e17590 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17590(this_00 GEN_EDX_ARG,param_1);
  }
  for (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,0); uVar1 != 0;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,uVar1)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    *((uint *)GEN_TOP((*param_1 + param_1[1] * 4))) = uVar1;
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e17630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
  }
  *((undefined * PTR32 *)GEN_TOP((*param_1 + param_1[1] * 4))) = this;
  param_1[1] = param_1[1] + 1;
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17630(this_00 GEN_EDX_ARG,param_1);
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e176a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe176a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0x14) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(this + 0x14) = 0;
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e176e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe176e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    while (uVar1 = F_00da0d20(*((uint *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8))) & 0xfffffffe,param_1),
          uVar1 != 0) {
      iVar4 = iVar4 + 1;
      if (*(int *)(this + 0x14) <= iVar4) {
        return;
      }
    }
    this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
    F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG);
    F_00d91510(this_00 GEN_EDX_ARG);
    iVar2 = *(int *)(this + 0x14) - 1;
    *(int *)(this + 0x14) = iVar2;
    if (iVar2 != iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
      iVar4 = (*(int *)(this + 0x10) + iVar2 * 8) - (int)puVar3;
      iVar2 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* ref: hkMemoryResourceHandle::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x234, 12, 4);
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined4 * in_ecx;
  undefined * pvVar4;
  char * pcVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined * puVar9;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20c)) = this;
  (*(int *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x224)) = 0;
  (*(uint *)(gen_frame + 0x228)) = 0x80000000;
  (*pcVar1)(this,&(*(int *)(gen_frame + 0x220)));
  iVar8 = (*(int *)(gen_frame + 0x224)) - 1;
  (*(int *)(gen_frame + 0x214)) = iVar8;
  if (-1 < iVar8) {
    (*(int *)(gen_frame + 0x218)) = iVar8 * 0x10;
    do {
      iVar8 = (*(int *)(gen_frame + 0x218)) + (*(int *)(gen_frame + 0x220));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar8 + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x22c)));
      (*(uint *)(gen_frame + 0x210)) = uVar3;
      if (uVar3 != 0) {
        iVar8 = iVar8 + 8;
        in_ecx = ((undefined4 *)GEN_TOP(F_0105a8f0(iVar8 GEN_EDX_ARG)));
        pvVar4 = ((undefined *)GEN_TOP(F_00da5fd0(in_ecx GEN_EDX_ARG)));
        pcVar5 = ((char *)GEN_TOP(F_00d92650(pvVar4 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x21f)),(*(undefined * PTR32 *)(gen_frame + 0x22c)))));
        phVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20c));
        if ((*pcVar5 == '\0') && ((*(undefined * PTR32 *)(gen_frame + 0x22c)) != pvVar4)) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar3 = F_00d92610(pvVar4 GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar6 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar4 GEN_EDX_ARG,uVar6)));
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar4 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(pvVar4 GEN_EDX_ARG,uVar3);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed21,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0xb2);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        }
        else {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x20c)) + 0x18))))((*(undefined * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
          if ((*(uint *)(gen_frame + 0x210)) == uVar3) {
            (*(int *)(gen_frame + 0x224)) = 0;
            uVar3 = (*(uint *)(gen_frame + 0x228));
            goto joined_r0x00e17901;
          }
          puVar7 = ((uint *)GEN_TOP(F_0105a760(iVar8 GEN_EDX_ARG,0)));
          *puVar7 = (*(uint *)(gen_frame + 0x210));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x28))))(phVar2 GEN_EDX_ARG,*in_ecx);
        }
      }
      iVar8 = (*(int *)(gen_frame + 0x214)) - 1;
      (*(int *)(gen_frame + 0x218)) = (*(int *)(gen_frame + 0x218)) - 0x10;
      (*(int *)(gen_frame + 0x214)) = iVar8;
    } while (-1 < iVar8);
  }
  (*(int *)(gen_frame + 0x224)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x228));
joined_r0x00e17901: ;
  if (-1 < (int)uVar3) {
    (*(int *)(gen_frame + 0x224)) = 0;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*(uint *)(gen_frame + 0x228)) = uVar3;
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x220)),uVar3 << 4);
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00e17590(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e179a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe179a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x2a0, 0, 4);
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  uint uVar8;
  undefined * puVar9;
  
  iVar4 = 0;
  do {
    if (((*(int *)&gen_args[2]) == 0) || (*(int *)(this + 0x14) <= iVar4)) break;
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x10) + iVar1))) != (*(int *)&gen_args[2]));
  (*(int *)(gen_frame + 0x298)) = iVar4;
  if (iVar4 < *(int *)(this + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 4)));
      (*(int *)(gen_frame + 0x298)) = iVar4;
      if ((*(int *)&gen_args[0]) == 0) {
LAB_00e17a81: ;
        if ((((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) ||
            (pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD))), (*(undefined * PTR32 *)&gen_args[1]) == pvVar6)) ||
           (pcVar7 = ((char *)GEN_TOP(F_00d92650((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(int *)&gen_args[2]) + 3,pvVar6))), *pcVar7 != '\0')) {
          return (uint)piVar2;
        }
        iVar4 = (*(int *)(gen_frame + 0x298));
        if ((*(int *)&gen_args[0]) != 0) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar5 = F_00d92610(pvVar6 GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar8 = F_00d92610((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar6 GEN_EDX_ARG,uVar8)));
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar6 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(pvVar6 GEN_EDX_ARG,uVar5);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed22,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x138);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG);
          return 0;
        }
      }
      else {
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x10)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
        (*(uint *)(gen_frame + 0x208)) = 0x80000080;
        (*(undefined4 *)(gen_frame + 0x204)) = 1;
        ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
        uVar5 = (*pcVar3)(piVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x200)));
        uVar5 = F_00da0d20((*(int *)&gen_args[0]),uVar5);
        (*(undefined4 *)(gen_frame + 0x204)) = 0;
        if (uVar5 == 0) {
          if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
          }
          goto LAB_00e17a81;
        }
        if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
        }
      }
      iVar4 = iVar4 + 1;
      (*(int *)(gen_frame + 0x298)) = iVar4;
    } while (iVar4 < *(int *)(this + 0x14));
  }
  return 0;
}

/* ref: hkMemoryResourceContainer::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  pvVar2 = param_1;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar7 = *(int * PTR32 *)(this + 0x10);
    do {
      uVar3 = uVar4;
      if (((undefined *)GEN_TOP(*piVar7)) == param_1) goto LAB_00e17ba8;
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while ((int)uVar4 < *(int *)(this + 0x14));
  }
  param_1 = ((undefined *)GEN_TOP(0xffffffff));
  uVar3 = (uint)param_1;
LAB_00e17ba8: ;
  param_1 = ((undefined *)GEN_TOP(uVar3));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  if (-1 < (int)param_1) {
    iVar5 = (int)((int)(uintptr_t)param_1) * 4;
    iVar1 = *(int *)(this + 0x10);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar5)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar1 + iVar5))) = 0;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) - 1;
    uVar4 = (*(int *)(this + 0x14) - (int)param_1) * 4;
    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar5)));
    if (0 < (int)uVar4) {
      iVar5 = (uVar4 - 1 >> 2) + 1;
      do {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 - 1;
        uVar4 = 0;
      } while (iVar5 != 0);
    }
  }
  return uVar4;
}

/* ref: hkMemoryResourceContainer::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x20)) {
    piVar4 = *(int * PTR32 *)(this + 0x1c);
    do {
      uVar5 = uVar3;
      if (((undefined *)GEN_TOP(*piVar4)) == param_1) goto LAB_00e17c41;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < *(int *)(this + 0x20));
  }
  uVar5 = 0xffffffff;
LAB_00e17c41: ;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00d91a80(param_1 GEN_EDX_ARG);
  }
  if (-1 < (int)uVar5) {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = uVar5 * 4;
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
    uVar3 = *(int *)(this + 0x20) - 1;
    *(uint *)(this + 0x20) = uVar3;
    if (uVar3 != uVar5) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + uVar3 * 4)));
      *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x218, 8, 4);
  int iVar1;
  undefined * phVar2;
  int * piVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * phVar8;
  char * pcVar9;
  char * pcVar10;
  
  for (phVar2 = param_1; phVar2 != ((undefined *)GEN_TOP(0x0));
      phVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x24))))(phVar2 GEN_EDX_FWD)))) {
    if (phVar2 == this) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar10 = ((char *)REFP(0x114e52c));
      phVar8 = param_1 + 8;
      pcVar9 = ((char *)REFP(0x114e524));
      phVar2 = this + 8;
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e514)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00da0420(pvVar5 GEN_EDX_ARG,phVar2)));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar9)));
      pvVar5 = ((undefined *)GEN_TOP(F_00da0420(pvVar5 GEN_EDX_ARG,phVar8)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba4554,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x198)
      ;
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00d919e0(this GEN_EDX_ARG);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(this GEN_EDX_ARG);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x20)));
  iVar6 = 0;
  if (0 < iVar4) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x1c)));
    do {
      if (((undefined *)GEN_TOP(*piVar3)) == this) {
        (*(int *)(gen_frame + 0x210)) = iVar6;
        goto LAB_00e17d07;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < iVar4);
  }
  (*(int *)(gen_frame + 0x210)) = -1;
LAB_00e17d07: ;
  F_00d91a80(this GEN_EDX_ARG);
  iVar4 = *(int *)(this + 0xc);
  iVar6 = *((int *)GEN_TOP((iVar4 + 0x1c)));
  iVar1 = (*(int *)(gen_frame + 0x210)) * 4;
  pvVar5 = *((undefined * PTR32 *)GEN_TOP((iVar6 + iVar1)));
  (*(int *)(gen_frame + 0x20c)) = iVar1;
  if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(pvVar5 GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP((iVar6 + iVar1))) = 0;
  *((int *)GEN_TOP((iVar4 + 0x20))) = *((int *)GEN_TOP((iVar4 + 0x20))) - 1;
  iVar6 = (*((int *)GEN_TOP((iVar4 + 0x20))) - (*(int *)(gen_frame + 0x210))) * 4;
  puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x1c))) + (*(int *)(gen_frame + 0x20c)))));
  if (0 < iVar6) {
    iVar4 = (iVar6 - 1U >> 2) + 1;
    do {
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  F_00d919e0(this GEN_EDX_ARG);
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0x1c,4);
  }
  puVar7 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 4)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0(this GEN_EDX_ARG);
    *puVar7 = this;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  F_00d91a80(this GEN_EDX_ARG);
  *(undefined * PTR32 *)(this + 0xc) = param_1;
  F_00d91a80(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e17e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)(gen_frame + 0x8c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = uVar2 & 0xffffff00;
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e560));
  F_00da3de0(this_00 GEN_EDX_FWD,(*(uint *)(gen_frame + 0x8c)));
  iVar3 = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(int *)(gen_frame + 0x98)) = 0;
  (*(int *)(gen_frame + 0x9c)) = ((int)0x80000000);
  F_00e17590(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x94)));
  if (0 < (*(int *)(gen_frame + 0x98))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x94)) + iVar3 * 4)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x8)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      ((undefined1 *)(gen_frame + 0xc))[0] = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00da3a20(this_00 GEN_EDX_ARG,uVar2,piVar1);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
      iVar3 = iVar3 + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x90));
    } while (iVar3 < (*(int *)(gen_frame + 0x98)));
  }
  (*(int *)(gen_frame + 0x98)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x9c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),(*(int *)(gen_frame + 0x9c)) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00e17f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3 GEN_EDX_FWD);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00e17fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17fb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  F_00d91350(in_ecx + 3 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00e17fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e18060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00e18060(this_00 GEN_EDX_ARG,param_1);
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x10)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00da4d70(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1080808));
  F_00da4d70(param_1 GEN_EDX_ARG,uVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe18110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint in_ecx;
  int * this_00;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((in_ecx + 4))) = 0x1c;
  this_00 = ((int *)GEN_TOP(F_00e17f70(in_ecx GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x14))))(this_00 GEN_EDX_ARG,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,param_2,param_3);
  F_00d919e0(this_00 GEN_EDX_ARG);
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x10,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(this + 0x14) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0(this_00 GEN_EDX_ARG);
    *puVar1 = this_00;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91a80(this_00 GEN_EDX_ARG);
  F_00d91a80(this_00 GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_00e181c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e181c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe181c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91480(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e18210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  if ((param_1 != 0) && (iVar2 = 0, 0 < *((int *)GEN_TOP(((int)this + 0x20))))) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + iVar1))) + 0xc))) = this;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x20))));
  }
  return (uint)this;
}

/* ref: FUN_00e18250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e18250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
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
  iVar4 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar3 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * pvVar2;
  LPVOID pvVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,param_1,0)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x28)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x28;
    pvVar2 = ((undefined *)GEN_TOP(F_00e181c0(pvVar2 GEN_EDX_ARG,param_1)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(pvVar2 GEN_EDX_ARG);
    }
    if (*(uint *)(this + 0x20) == (*(uint *)(this + 0x24) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x1c,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + *(int *)(this + 0x20) * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(pvVar2 GEN_EDX_ARG);
      }
      *puVar1 = pvVar2;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0xc))) = this;
    F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00e18400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e18420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e18430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e184a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e184f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18540(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18550(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e185a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e185f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18630 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e18660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18680 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e186b0 */
GEN_LIB GEN_FRAME unsigned int F_00e186b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe186b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx GEN_EDX_ARG);
        F_00d91340(in_ecx + 4 GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00e18760 */
GEN_LIB GEN_FRAME unsigned int F_00e18760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18760u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187a0 */
GEN_LIB GEN_FRAME unsigned int F_00e187a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe187a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e187f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e18840 */
GEN_LIB GEN_FRAME uint F_00e18840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e18850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e188a0 */
GEN_LIB GEN_FRAME uint F_00e188a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe188a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e188b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e188d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e18950(void)
{
  GEN_ENTER(0xe18950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryResourceContainer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e189b0(void)
{
  GEN_ENTER(0xe189b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e189e0 */
GEN_LIB GEN_FRAME unsigned int F_00e189e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe189e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: hkResourceMap::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00e18a50 */
GEN_LIB GEN_FRAME uint F_00e18a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18a80 */
GEN_LIB GEN_FRAME uint F_00e18a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1 GEN_EDX_ARG);
    F_00d91340(iVar1 + 4 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00e18bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e18c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18cf0 */
GEN_LIB GEN_FRAME unsigned int F_00e18cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00e18d30 */
GEN_LIB GEN_FRAME unsigned int F_00e18d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00e18d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18d70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18db0 */
GEN_LIB GEN_FRAME unsigned int F_00e18db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

