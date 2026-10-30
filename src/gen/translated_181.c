#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00dfa000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00dfa010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa010(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00dfa020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dfa040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_2);
  F_00da3e40(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00dfa160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa1b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)this)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dfa1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa1f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa2d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa350u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa3d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfa490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa490u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x34);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa4d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d4f0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x34);
  }
  return (uint)param_1;
}

/* ref: FUN_00dfa510 */
GEN_LIB GEN_FRAME uint F_00dfa510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSubStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa580 */
GEN_LIB GEN_FRAME uint F_00dfa580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBinaryPackfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa5b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df8900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dfa610 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa680u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfa6c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfa6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x30);
  }
  uVar2 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa770u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfa7b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfa7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00dfa810 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa850u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa890u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa8d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa8d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa950 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa950u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa990 */
GEN_LIB GEN_FRAME unsigned int F_00dfa990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((iVar1 * 0x34 + param_1)));
    do {
      F_00e1d4f0(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x34)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: FUN_00dfa9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + uVar1)));
    do {
      uVar1 = F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: FUN_00dfa9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfaa40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x30);
  }
  uVar2 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfaac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaac0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: FUN_00dfab00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfab00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfab60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfab60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfaba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaba0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfabe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfabe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfabe0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfac20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfac60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfaca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaca0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dface0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dface0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdface0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00dfad00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfad60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: FUN_00dfad90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfadd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfadd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfadd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfae30 */
GEN_LIB GEN_FRAME unsigned int F_00dfae30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfae30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x14)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfae90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfae90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00dfaf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfafb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfafb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00e1da60(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,param_1 + 4,0,2);
  param_1 = param_1 & 0xffffff00;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  *((bool *)GEN_TOP(((int)this + 0x4c))) = (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)) != *((char *)GEN_TOP((uVar1 + 5)));
  return (uint)this;
}

/* ref: FUN_00dfb020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfb020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfb020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x44))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *((int *)GEN_TOP(((int)this + 0x40))))));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x40))),(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  F_00e1d740(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 4))),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00dfb0f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfb0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_1 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfb1c0 */
GEN_LIB GEN_FRAME uint F_00dfb1c0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(uint in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint in_edi = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x5, 11);
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = ((char *)GEN_TOP(F_00d929e0(in_edi GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)))));
  if (*pcVar1 == '\0') {
    return in_edi;
  }
  if (in_esi != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x14))))(in_esi GEN_EDX_ARG,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00dfb200 */
GEN_LIB GEN_FRAME uint F_00dfb200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0ce0(param_1,param_2,&REFG(undefined, 0x113bdcc),((char *)REFP(0x113cdcc)));
  return uVar1;
}

/* ref: hkPackfileWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD,param_3);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(this,param_1,param_2,uVar2);
  return uVar2;
}

/* ref: hkPackfileWriter::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 0x14 GEN_EDX_FWD,param_1,0xffffffff);
  if (-1 < (int)uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x10 + uVar1 * 0x18))) = 0xfffffffe;
  }
  F_00dbd8b0(this + 0x14 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,0xfffffffe);
  uVar1 = F_00dbd8b0(this + 0x20 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkPackfileWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 0x2c GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfb2d0 */
GEN_LIB GEN_FRAME uint F_00dfb2d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  F_00e05630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  uVar1 = 0;
  if (param_4 == '\0') {
    uVar1 = 2;
  }
  F_00e1da60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),0,uVar1);
  F_0105aa30(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00e1d840(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),param_1,param_2,param_3);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  uVar2 = F_00e1d740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00dfb330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)REFP(0x113ba6c));
  uVar2 = F_00d92610(param_2 GEN_EDX_FWD);
  uVar2 = F_00da0d20(uVar2,pcVar6);
  if (uVar2 != 0) {
    pcVar6 = ((char *)REFP(0x113b968));
    uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar2,pcVar6);
    if (uVar2 == 0) {
      uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,0);
      if (uVar2 != 0) {
        uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
        return 0;
      }
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,param_1);
    }
    return 1;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,0);
  if (uVar2 != 0) {
    uVar3 = F_00d93010(uVar2 GEN_EDX_ARG,0);
    uVar4 = F_00d93010(param_1 GEN_EDX_ARG,0);
    if (uVar4 != uVar3) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar6 = 
      ((char *)REFP(0x114ce80))
      ;
      uVar3 = F_00d92610(param_1 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114ce58)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,uVar3)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar6);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x2518721c,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ce38)),0xb8);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    }
    uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
    return 0;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,param_1);
  return 1;
}

/* ref: FUN_00dfb4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00da3eb0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  if (uVar2 == 0) {
    return (*(uint *)&gen_args[0]);
  }
  uVar2 = F_00da1210(uVar1);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x68)));
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,uVar2,uVar1);
  if (*((uint *)GEN_TOP(((int)this + 0x68))) == (*((uint *)GEN_TOP(((int)this + 0x6c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 100))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 100))) + *((int *)GEN_TOP(((int)this + 0x68))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)this + 0x68))) = *((int *)GEN_TOP(((int)this + 0x68))) + 1;
  return uVar1;
}

/* ref: FUN_00dfb560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_FWD,param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,uVar1,0xffffffff);
    in_ecx = param_2;
    if (uVar1 == 0xffffffff) {
      while (in_ecx = F_00d92620(in_ecx GEN_EDX_ARG), in_ecx != 0) {
        uVar1 = F_00d92610(in_ecx GEN_EDX_ARG);
        uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,uVar1,0xffffffff);
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
      }
      uVar1 = F_00dfb4e0(this GEN_EDX_ARG,param_3);
    }
  }
  return uVar1;
}

/* ref: hkPackfileWriter::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar1 = F_00dbd8b0(this + 0x9c GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar1 = F_00da3a20(this + 0xa8 GEN_EDX_ARG,uVar2,uVar1);
  return uVar1;
}

/* ref: FUN_00dfb650 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dfb650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdfb650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  
  uVar2 = F_00dfb560(this GEN_EDX_FWD,param_3,param_4,param_5);
  if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 8))),0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = CONCAT44(param_2,param_1);
    puVar1[1] = CONCAT44(param_4,param_3);
    puVar1[2] = CONCAT44(0xffffffff,uVar2);
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((int *)GEN_TOP(((int)this + 0x98))) = *((int *)GEN_TOP(((int)this + 0x98))) + (uint)(param_2 == &REFG(undefined, 0x15da330));
  *((int *)GEN_TOP(((int)this + 0x94))) = *((int *)GEN_TOP(((int)this + 0x94))) + (uint)(param_2 != &REFG(undefined, 0x15da330));
  return param_2 == &REFG(undefined, 0x15da330);
}

/* ref: FUN_00dfb710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfb710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfb710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  if (0 < *((int *)GEN_TOP(((int)this + 0x68)))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 100))) + iVar4 * 4)));
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x68))));
  }
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  if (-1 < iVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xb8))),iVar4 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x80))),uVar3 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 100))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uVar3 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00dfb8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfb8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x254, 12, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  
  iVar4 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x24c)) = ((undefined *)GEN_TOP(((int)this + 0x14)));
  piVar2 = ((int *)GEN_TOP(F_00dbd930(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(*(int *)&gen_args[0]))));
  iVar6 = (*(uint *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)this + 0x1c))) < (int)piVar2) {
    uVar3 = F_00dfb1c0((*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[1]),iVar4);
    iVar4 = (*(int *)&gen_args[0]);
    if (uVar3 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar10 = 
      ((char *)REFP(0x114cfc0))
      ;
      pcVar9 = ((char *)REFP(0x114cf88));
      pcVar8 = ((char *)REFP(0x114cf40));
      uVar3 = F_00d92610(iVar6 GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,((char *)REFP(0x114cf14)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,uVar3)));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar8)));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar9)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaabba,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ce38)),0x127);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG);
      iVar4 = (*(int *)&gen_args[0]);
      F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),0xffffffff);
      if (*((uint *)GEN_TOP(((int)this + 0x84))) == (*((uint *)GEN_TOP(((int)this + 0x88))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x80))),8);
      }
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + *((int *)GEN_TOP(((int)this + 0x84))) * 8)));
      *piVar2 = iVar4;
      piVar2[1] = iVar6;
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
    }
    else {
      (*(uint *)(gen_frame + 0x248)) = uVar3;
      if ((*(int * PTR32 *)&gen_args[3]) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xc))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(int *)&gen_args[0]),&(*(uint *)(gen_frame + 0x248)));
      }
      if ((*(int *)&gen_args[0]) == 0) {
        uVar3 = F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,0xffffffff);
        return uVar3;
      }
      uVar3 = F_00dfb330(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x24c));
      piVar2 = ((int *)GEN_TOP(0x0));
      if ((uVar3 != 0) &&
         ((iVar4 == (*(int *)&gen_args[0]) ||
          (piVar2 = ((int *)GEN_TOP(F_00dbd930((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,(*(int *)&gen_args[0])))), *((int *)GEN_TOP(((int)pvVar5 + 8))) < (int)piVar2)))
         ) {
        F_00dbd8b0(pvVar5 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
        if ((*(int *)&gen_args[0]) != iVar4) {
          F_00dbd8b0(pvVar5 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)this + 0xc))));
          F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),iVar4);
        }
        F_00dfb650(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)),iVar4,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[4]));
        F_00dfad60(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        F_00dfb2d0((*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)),((undefined1 *)(gen_frame + 0x200)),*((undefined1 *)GEN_TOP(((int)this + 0xdd))));
        (*(int *)(gen_frame + 0x244)) = 0;
        if (0 < (*(int *)(gen_frame + 0x210))) {
          (*(uint *)&gen_args[1]) = 0;
          iVar4 = (*(int *)(gen_frame + 0x20c));
          do {
            iVar6 = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8 + iVar4)));
            iVar1 = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 4 + iVar4)));
            (*(int *)(gen_frame + 0x240)) = iVar6;
            iVar7 = (*(uint *)&gen_args[1]);
            if ((iVar6 != 0) && (iVar1 != 0)) {
              if ((*((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc + iVar4))) != 0) &&
                 (uVar3 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,iVar1),
                 *((int *)GEN_TOP(((int)this + 0xa4))) < (int)uVar3)) {
                uVar3 = F_00dfb4e0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[4]));
                uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,(*(int *)&gen_args[0]),uVar3);
                F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar1,uVar3);
              }
              iVar7 = (*(uint *)&gen_args[1]);
              F_00dfb8f0(this GEN_EDX_ARG,iVar1,(*(int *)(gen_frame + 0x240)),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
              iVar4 = (*(int *)(gen_frame + 0x20c));
              if (((*(int *)&gen_args[0]) != iVar1) &&
                 ((*(uint *)&gen_args[1]) = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,iVar1,0xffffffff), iVar4 = (*(int *)(gen_frame + 0x20c)),
                 (*(uint *)&gen_args[1]) != 0xffffffff)) {
                F_00dfc750(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG,(*(int *)&gen_args[0]),&(*(uint *)&gen_args[1]));
                iVar4 = (*(int *)(gen_frame + 0x20c));
              }
            }
            iVar6 = (*(int *)(gen_frame + 0x244)) + 1;
            (*(uint *)&gen_args[1]) = iVar7 + 0x10;
            (*(int *)(gen_frame + 0x244)) = iVar6;
          } while (iVar6 < (*(int *)(gen_frame + 0x210)));
        }
        F_00dfb8f0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x248)),(uint)&REFG(undefined, 0x15da330),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),REFG(undefined * PTR32, 0x13548cc));
        uVar3 = F_00e1d4f0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        return uVar3;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00dfbc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  uVar1 = (uint)((int)(uintptr_t)this) >> 8;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_FWD,local_8);
  local_8 = uVar1 << 8;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xffffffff;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0xffffffff;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0xffffffff;
  *((undefined8 *)GEN_TOP(((int)this + 0xd4))) = *param_1;
  *((undefined8 *)GEN_TOP(((int)this + 0xdc))) = param_1[1];
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da300),0xffffffff);
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da2a0),0xffffffff);
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da330),0xffffffff);
  return (uint)this;
}

/* ref: hkPackfileWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfbd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if ((*(int * PTR32 *)&gen_args[2]) == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
  }
  uVar3 = (*(uint *)&gen_args[1]);
  pcVar2 = ((char *)GEN_TOP(F_00d929e0((*(uint *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(uint *)&gen_args[1]) + 3)));
  if (*pcVar2 != '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  }
  F_00dfb8f0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),uVar3,(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),REFG(undefined * PTR32, 0x13548c8));
  uVar4 = F_00dbd970(this + 0x14 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),0xffffffff);
  *(uint *)(this + 0x8c) = uVar4;
  uVar3 = F_00dbd970(this + 0x14 GEN_EDX_ARG,uVar3,0xffffffff);
  *(uint *)(this + 0x90) = uVar3;
  return uVar3;
}

/* ref: FUN_00dfbe10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfbe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00dfbe30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3eb0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfbe80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbea0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dfbf60 */
GEN_LIB GEN_FRAME unsigned int F_00dfbf60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbf60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfbf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbf90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dfbfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbfa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00dfbfc0 */
GEN_LIB GEN_FRAME uint F_00dfbfc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfbfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc200 */
GEN_LIB GEN_FRAME unsigned int F_00dfc200(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfc270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dfc330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dfc3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc460u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc4a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc4e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfc510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc570 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc5c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc5c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc600 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc600u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc640u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc6d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc6d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00dfc640(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00dfc7a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc7a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc800 */
GEN_LIB GEN_FRAME uint F_00dfc800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfc800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPackfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dfb710(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dfc890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc890(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 6;
  return param_2;
}

/* ref: FUN_00dfc8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 7;
  return param_2;
}

/* ref: FUN_00dfc8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 4;
  return param_2;
}

/* ref: FUN_00dfc8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 5;
  return param_2;
}

/* ref: FUN_00dfc920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfc950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfc990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00dfc9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dfca10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfca10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_00dfca60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfca60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfca60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dfca90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfca90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfca90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 1: ;
    return 0x1126468;
  case 2: ;
    return 0x114c8bc;
  case 3: ;
    return 0x114c8b4;
  case 4: ;
    return 0x112673c;
  case 5: ;
    return 0x11393bc;
  case 6: ;
    return 0x114c8a8;
  case 7: ;
    return 0x114c8b0;
  case 9: ;
    if (*((int *)GEN_TOP(in_ecx[1])) == 3) {
      uVar1 = F_00e19c70(in_ecx GEN_EDX_FWD);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 0x114d040;
      case 8: ;
        return 0x114d038;
      case 0xc: ;
        return 0x114d030;
      case 0x10: ;
        return 0x114d028;
      }
    }
  }
  return 0;
}

/* ref: FUN_00dfcb50 */
GEN_LIB GEN_NOFRAME uint F_00dfcb50(GEN_P(undefined4 * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  switch((unsigned int)(uintptr_t)(*in_eax)) {
  case 1: ;
    return 0x20;
  case 2: ;
    return 0x10;
  case 3: ;
  case 4: ;
    return 8;
  default: ;
    return 1;
  case 6: ;
    return 0xffffffff;
  }
}

/* ref: FUN_00dfcbb0 */
GEN_LIB GEN_FRAME uint F_00dfcbb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x54))))(((int *)GEN_TOP(*param_1)),param_1[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x5c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      return (uint)(puVar5 != ((undefined4 *)GEN_TOP(0x0)));
    }
    return 0;
  }
  if ((*((int *)GEN_TOP(piVar2[1])) == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
      (*(int *)(gen_frame + 0x4)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return 0;
}

/* ref: FUN_00dfcdb0 */
GEN_LIB GEN_FRAME uint F_00dfcdb0(GEN_P(undefined4 * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = ((int *)GEN_TOP(F_00e1cd10(in_eax GEN_EDX_ARG)));
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x28))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x30))))(((int *)GEN_TOP(*in_eax)),in_eax[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x3c))))(((int *)GEN_TOP(*in_eax)),in_eax[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x2c))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x34))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      return (uint)(puVar5 != ((undefined4 *)GEN_TOP(0x0)));
    }
    return 0;
  }
  if ((*((int *)GEN_TOP(piVar2[1])) == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x28))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    do {
      (*(int *)(gen_frame + 0x4)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return 0;
}

/* ref: FUN_00dfcfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfcfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfcfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  char cVar1;
  char * pcVar2;
  
  F_00e003a0(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  F_00dff330(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  F_00dff070(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[3]) + 3)));
  cVar1 = *pcVar2;
  F_00dffe80(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00dfd030 */
GEN_LIB GEN_FRAME uint F_00dfd030(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: FUN_00dfd050 */
GEN_LIB GEN_FRAME uint F_00dfd050(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00dfd060 */
GEN_LIB GEN_FRAME byte F_00dfd060(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 != -1;
}

/* ref: FUN_00dfd070 */
GEN_LIB GEN_FRAME uint F_00dfd070(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dfd0c0 */
GEN_LIB GEN_FRAME uint F_00dfd0c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd0d0 */
GEN_LIB GEN_FRAME uint F_00dfd0d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd100 */
GEN_LIB GEN_FRAME uint F_00dfd100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd110 */
GEN_LIB GEN_FRAME uint F_00dfd110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dfd1c0 */
GEN_LIB GEN_FRAME uint F_00dfd1c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00dfd210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0xc)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0xc)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfd230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd230(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00dfd250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00dfd270 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfd2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dfd2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfd2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00dfd336;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0xc;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00dfd336: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  iVar4 = uVar3 * 0xc;
  *((uint *)GEN_TOP((iVar1 + iVar4))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + iVar4))) = param_3;
  *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)this))) = param_4;
  return uVar2;
}

/* ref: FUN_00dfd370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dfd3d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *((uint *)GEN_TOP((iVar2 + 8 + uVar4 * 0xc)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return param_3;
}

/* ref: FUN_00dfd430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_3 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar1 * 0xc)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfd470 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*((uint *)GEN_TOP((iVar1 + iVar2))) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *((undefined4 *)GEN_TOP((iVar3 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: FUN_00dfd560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dfd5c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfd5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfd5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00dfd5f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfd5c0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dfd640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dfd660 */
GEN_LIB GEN_FRAME uint F_00dfd660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

/* ref: FUN_00dfd680 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0xc;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfd6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd6d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfd730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd730(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dfd780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd780(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dfd7d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd7d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00dfd800 */
GEN_LIB GEN_FRAME unsigned int F_00dfd800(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd800u, gen_a0, gen_a1, 0u, 0u);
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
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfd850 */
GEN_LIB GEN_FRAME unsigned int F_00dfd850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 8)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfd880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfd8a0 */
GEN_LIB GEN_FRAME uint F_00dfd8a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfd8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dfd8d0 */
GEN_LIB GEN_FRAME uint F_00dfd8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfd900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00dfd930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd930(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if ((*in_ecx == 7) && (*((int *)GEN_TOP(in_ecx[1])) == 6)) {
    *param_2 = 1;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00dfd960 */
GEN_LIB GEN_FRAME unsigned int F_00dfd960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00dfd990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x8));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  piVar1 = ((int *)GEN_TOP(*param_1));
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x8));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dfda00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dfda00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfda00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x10))[0] = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x10));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)))));
  }
  piVar1 = ((int *)GEN_TOP(*param_1));
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x10))[0] = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x10));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfda90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfda90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfda90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar3 = F_00dfd3d0(this GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
  return uVar3;
}

/* ref: FUN_00dfdae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfdae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar3);
  do {
    if (uVar3 == 0) {
      return 0;
    }
    piVar5 = ((int *)GEN_TOP(*param_1));
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x24)));
    (*pcVar2)(piVar5,&(*(int * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x18)));
    puVar4 = ((undefined4 *)GEN_TOP(F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(F_00e19d40(puVar4 GEN_EDX_ARG)));
    if (*piVar5 == 6) {
      switch((unsigned int)(uintptr_t)(*puVar4)) {
      case 6: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        F_00dfdae0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x14)));
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x14));
        break;
      case 7: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        F_00dff330(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)));
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
        break;
      case 8: ;
      case 9: ;
        iVar6 = *((int *)GEN_TOP(puVar4[1]));
        if ((iVar6 == 7) && (*((int *)GEN_TOP((((int *)GEN_TOP(puVar4[1])))[1])) == 6)) {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          if (piVar5 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          iVar6 = 0;
          if (0 < (int)uVar3) {
            do {
              puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,iVar6)));
              (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
              if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                puVar4[2] = puVar4[2] + 1;
              }
              F_00dff330((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 6))) - 1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 2;
                *piVar1 = *piVar1 - 1;
                if (*piVar1 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc)))))((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar3);
          }
        }
        else {
          if (iVar6 != 6) goto switchD_00dfdb4d_default;
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          if (piVar5 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          iVar6 = 0;
          if (0 < (int)uVar3) {
            do {
              puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,iVar6)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
              if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                puVar4[2] = puVar4[2] + 1;
              }
              F_00dfdae0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) - 1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
                *piVar1 = *piVar1 - 1;
                if (*piVar1 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))))((*(undefined4 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar3);
          }
        }
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
        piVar1 = piVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 != 0) goto switchD_00dfdb4d_default;
        puVar4 = ((undefined4 *)GEN_TOP(*piVar5));
        goto LAB_00dfdd09;
      default: ;
        goto switchD_00dfdb4d_default;
      }
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
        piVar1 = piVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          puVar4 = ((undefined4 *)GEN_TOP(*piVar5));
LAB_00dfdd09: ;
          (*((code *)GEN_TOP(*puVar4)))(piVar5,1);
        }
      }
    }
switchD_00dfdb4d_default: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x1c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)));
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar3);
    this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  } while( true );
}

/* ref: FUN_00dfdd50 */
GEN_LIB GEN_FRAME uint F_00dfdd50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dfdd70 */
GEN_LIB GEN_FRAME unsigned int F_00dfdd70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dfddc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd2c0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dfdde0 */
GEN_LIB GEN_FRAME uint F_00dfdde0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dfde00 */
GEN_LIB GEN_FRAME unsigned int F_00dfde00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfde00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dfde30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfde30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfde30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dfdec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dfd680(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfdee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00dfd470(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00dfd2c0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfdff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe040 */
GEN_LIB GEN_FRAME unsigned int F_00dfe040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfe070 */
GEN_LIB GEN_FRAME unsigned int F_00dfe070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfe0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe0a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfe0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe0e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfe130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe130(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return param_1;
}

/* ref: FUN_00dfe160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dfdec0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfe1c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdfe200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00dfd2c0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfe260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
    piVar1 = ((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    if ((*((uint *)GEN_TOP((iVar2 + uVar4 * 0xc))) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *((uint *)GEN_TOP((iVar2 + iVar3))) = param_2;
      *((int *)GEN_TOP((iVar2 + 4 + iVar3))) = param_3;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_4;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00dfe2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dfdf20(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dfe310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe3a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: FUN_00dfe410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfe450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe450u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfe4a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar7) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar3,1);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar2 = *(int *)this;
  iVar4 = uVar7 - iVar1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar6 + iVar2 + iVar1))) = *((undefined1 *)GEN_TOP(((int)this + 0x10)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
  if (uVar7 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar5 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this)));
  *puVar5 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)puVar5;
}

/* ref: FUN_00dfe520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar4) {
      iVar3 = iVar4;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  return uVar2;
}

/* ref: FUN_00dfe570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1]));
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    }
    iVar3 = *piVar5;
    piVar4 = ((int *)GEN_TOP(*piVar1));
    (*(int *)(gen_frame + 0x14)) = piVar5[1];
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    }
    if ((iVar3 != *piVar5) || ((*(int *)(gen_frame + 0x14)) != piVar5[1])) {
      piVar1 = ((int *)GEN_TOP(((int)this + 0x1c)));
      if (*((uint *)GEN_TOP(((int)this + 0x20))) == (*((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
      }
      piVar1 = ((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
      }
      puVar2 = ((undefined4 *)GEN_TOP(*piVar1));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
        piVar5 = puVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
      }
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[0]) = (int)(*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
        if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
          piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
          }
        }
      }
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
    if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
      piVar5 = (*(int * PTR32 *)&gen_args[1]) + 2;
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
      }
    }
  }
  iVar3 = *piVar1;
  *(*(int * PTR32 *)&gen_args[0]) = iVar3;
  if (iVar3 != 0) {
    *((short *)GEN_TOP((iVar3 + 6))) = *((short *)GEN_TOP((iVar3 + 6))) + 1;
    *((int *)GEN_TOP((iVar3 + 8))) = *((int *)GEN_TOP((iVar3 + 8))) + 1;
  }
  return (uint)(*(int * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00dfe6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  code * pcVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  char * pcVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  int iVar9;
  
  uVar2 = param_2;
  (*(uint *)(gen_frame + 0x10)) = 0;
  F_00dfe4a0(this GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
  do {
    if (uVar5 == 0) {
      *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
      iVar9 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
      uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
      if ((int)uVar4 < iVar9) {
        iVar8 = uVar4 * 2;
        if ((int)(uVar4 * 2) <= iVar9) {
          iVar8 = iVar9;
        }
        bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar8,1);
        uVar4 = CONCAT31(extraout_var,bVar3);
      }
      *((int *)GEN_TOP(((int)this + 4))) = iVar9;
      return uVar4;
    }
    piVar6 = ((int *)GEN_TOP(*param_1));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x24)));
    (*pcVar1)(piVar6,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar4);
    piVar6 = ((int *)GEN_TOP(F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar5 = F_00dfcdb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
    if (uVar5 != 0) {
      iVar9 = *piVar6;
      if ((iVar9 == 8) ||
         ((iVar9 == 9 &&
          ((*((int *)GEN_TOP(piVar6[1])) != 3 ||
           ((((iVar8 = piVar6[2], iVar8 != 4 && (iVar8 != 8)) && (iVar8 != 0xc)) && (iVar8 != 0x10))
           )))))) {
        param_2 = ((char *)REFP(0x114c8ec));
        if (iVar9 == 9) {
          pcVar7 = ((char *)GEN_TOP(F_00e19c70(piVar6 GEN_EDX_ARG)));
        }
        else {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 1;
          param_2 = ((char *)REFP(0x114c8dc));
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
          if (piVar6 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x14))))(piVar6 GEN_EDX_ARG)));
        }
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
        if ((((*(uint *)(gen_frame + 0x10)) & 1) != 0) && ((*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xfffffffe, (*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0)))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6))) - 1;
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x8)) + 2;
          *piVar6 = *piVar6 - 1;
          if (*piVar6 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x8)))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
          }
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
        F_00da00e0(uVar2,((char *)REFP(0x114d050)),*(undefined4 *)this,param_2,uVar5,
                     (*(char * PTR32 *)(gen_frame + 0xc)));
        F_00dfffc0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar2);
        pcVar7 = param_2;
      }
      else {
        pcVar7 = ((char *)GEN_TOP(F_00dfca90(piVar6 GEN_EDX_ARG)));
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
        if ((*piVar6 == 5) &&
           (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4))), uVar5 == 0)) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
          F_00da00e0(uVar2,((char *)REFP(0x114d080)),*(undefined4 *)this,uVar5);
          goto LAB_00dfe8b2;
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
        F_00da00e0(uVar2,((char *)REFP(0x114d06c)),*(undefined4 *)this,(*(char * PTR32 *)(gen_frame + 0xc)),uVar5);
        F_00dfffc0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar2);
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0xc));
      }
      F_00da00e0(uVar2,((char *)REFP(0x114d048)),pcVar7);
    }
LAB_00dfe8b2: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x1c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
  } while( true );
}

/* ref: FUN_00dfe930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    puVar1 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar2 = F_00dfd3d0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*puVar1,puVar1[1],0xffffffff);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  F_00da00e0(param_2,((char *)REFP(0x114d0a8)),*(undefined4 *)this,uVar2,uVar4);
  F_00dfe6e0(this GEN_EDX_ARG,param_1,param_2);
  uVar2 = F_00da00e0(param_2,((char *)REFP(0x114d098)),*(undefined4 *)this);
  return uVar2;
}

/* ref: FUN_00dfe9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfe9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00dfe200(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe9f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfe9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00dfe260(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return;
}

/* ref: FUN_00dfea10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfe2e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00dfea30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfea80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfeac0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfeac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfeac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfeb30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfeb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfeb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfeb70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfeb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfeb70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfebc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfebc0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfebc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,1);
  *((undefined1 *)GEN_TOP((param_1[1] + *param_1))) = 0;
  param_1[1] = param_1[1];
  return (uint)param_1;
}

/* ref: FUN_00dfec10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfec10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      F_00dfec10(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP(((int)this + 0x2c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar1,(*(uint *)(gen_frame + 0x14)));
    if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x28))),4);
    }
    puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + *((int *)GEN_TOP(((int)this + 0x2c))) * 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
    *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
    piVar4 = ((int *)GEN_TOP(*param_1));
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG);
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar1) {
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar2,0x10);
    }
    iVar6 = uVar1 - (*(uint *)(gen_frame + 0x4));
    if (0 < iVar6) {
      puVar3 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8)));
      do {
        if (puVar3 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 4;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    F_00e1ce00(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x18)) = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      do {
        piVar4 = ((int *)GEN_TOP(F_00e19d40(*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + 8 + (*(int *)(gen_frame + 0x0))))) GEN_EDX_ARG)));
        if (*piVar4 == 6) {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
          iVar6 = *piVar5;
          uVar1 = F_00e19c80(piVar4 GEN_EDX_ARG);
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x24))))(piVar5,uVar1);
          (*(uint *)(gen_frame + 0x10)) = uVar1;
          F_00dfec10((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)));
        }
        iVar6 = (*(int *)(gen_frame + 0x18)) + 1;
        (*(int *)(gen_frame + 0x18)) = iVar6;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0x10;
      } while (iVar6 < (int)(*(uint *)(gen_frame + 0x4)));
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar1 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dfede0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfede0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  (*(int * PTR32 *)(gen_frame + 0xc)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  F_00da00e0(param_2,((char *)REFP(0x114d138)),*(undefined4 *)this,uVar3,uVar2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  if (uVar2 != 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    F_00da00e0(param_2,((char *)REFP(0x114d128)),uVar2);
  }
  F_00da00e0(param_2,&REFG(undefined, 0x114d124));
  F_00dfe4a0(this GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(*param_1));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG);
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
    uVar3 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar3,0x10);
  }
  iVar7 = uVar2 - (*(uint *)(gen_frame + 0x4));
  if (0 < iVar7) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8)));
    do {
      if (puVar5 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  F_00e1ce00(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
  (*(int *)(gen_frame + 0x10)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x0)))));
      bVar1 = false;
      piVar4 = ((int *)GEN_TOP(puVar5[2]));
      (*(uint *)(gen_frame + 0x14)) = 0;
      if (*piVar4 == 8) {
        bVar1 = true;
LAB_00dfef4f: ;
        piVar4 = ((int *)GEN_TOP(piVar4[1]));
      }
      else if ((*piVar4 == 9) &&
              ((*((int *)GEN_TOP(piVar4[1])) != 3 ||
               ((((iVar7 = piVar4[2], iVar7 != 4 && (iVar7 != 8)) && (iVar7 != 0xc)) &&
                (iVar7 != 0x10)))))) {
        uVar2 = F_00e19c70(piVar4 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        goto LAB_00dfef4f;
      }
      iVar7 = *(int *)this;
      uVar2 = F_00dfca90(piVar4 GEN_EDX_ARG);
      F_00da00e0(param_2,((char *)REFP(0x114d104)),iVar7,*puVar5,uVar2);
      if (bVar1) {
        F_00da00e0(param_2,((char *)REFP(0x114d0f4)));
      }
      if ((*(uint *)(gen_frame + 0x14)) != 0) {
        F_00da00e0(param_2,((char *)REFP(0x114d0e8)),(*(uint *)(gen_frame + 0x14)));
      }
      piVar4 = ((int *)GEN_TOP(F_00e19d40(piVar4 GEN_EDX_ARG)));
      if (*piVar4 == 6) {
        uVar2 = F_00e19c80(piVar4 GEN_EDX_ARG);
        F_00da00e0(param_2,((char *)REFP(0x114d0dc)),uVar2);
      }
      F_00da00e0(param_2,&REFG(undefined, 0x114d0d8));
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
      iVar7 = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x10)) = iVar7;
      this = (*(int * PTR32 *)(gen_frame + 0xc));
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
  iVar7 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < iVar7) {
    iVar6 = (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) * 2;
    if (iVar6 <= iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,1);
  }
  iVar6 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  F_00da00e0(param_2,((char *)REFP(0x114d0cc)),iVar6);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4)
    ;
  }
  return uVar2;
}

/* ref: FUN_00dff070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  F_00d9fd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]));
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d184)));
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d168)),1);
  F_00dfe4a0(this GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x40)))) {
    do {
      F_00dfede0(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x3c))) + iVar6 * 4,((undefined1 *)(gen_frame + 0x0)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x40))));
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG)));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar1;
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x1));
  if (1 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),*((int *)GEN_TOP(((int)this + 0x20))) + (int)(*(undefined4 * PTR32 *)&gen_args[0]) * 8)
      ;
      if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
        puVar2 = &(*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
      }
      piVar1 = (*(int * PTR32 *)&gen_args[1]);
      uVar3 = F_00dfd3d0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d0a8)),*(undefined4 *)this,uVar3,uVar4)
      ;
      F_00dfe6e0(this GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)));
      F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d098)),*(undefined4 *)this);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
        piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
        }
      }
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[0]) < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  *((undefined1 *)GEN_TOP(((*(int *)this - *((int *)GEN_TOP(((int)this + 0xc)))) + *((int *)GEN_TOP(((int)this + 4)))))) = 0;
  iVar6 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar5 = uVar3 * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d158)));
  uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00dff230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dff270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00dfe2e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dff2b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff2b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dff2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff2f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dff330 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dff330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(*param_1));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 4)));
    ((int *)(gen_frame + 0x10))[0] = 0;
    ((int *)(gen_frame + 0x10))[1] = 0;
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(piVar4,((int *)(gen_frame + 0x10)) + 2)));
    uVar3 = F_00dfd3d0(this GEN_EDX_FWD,*puVar2,puVar2[1],0xffffffff);
    if (uVar3 == 0xffffffff) {
      F_00dfe570(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x24)),param_1);
      if (*param_1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
          *piVar4 = *piVar4 - 1;
          if (*piVar4 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            return;
          }
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 8))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        ((int *)(gen_frame + 0x10))[4] = uVar3;
        F_00dfec10(this GEN_EDX_ARG,((int *)(gen_frame + 0x10)) + 4);
        ((int *)(gen_frame + 0x10))[4] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x8)))));
        ((int *)(gen_frame + 0x10))[2] = *puVar2;
        ((int *)(gen_frame + 0x10))[3] = puVar2[1];
        if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),8);
        }
        puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar2 = ((int *)(gen_frame + 0x10))[2];
          puVar2[1] = ((int *)(gen_frame + 0x10))[3];
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
        piVar4 = ((int *)GEN_TOP(*param_1));
        ((int *)(gen_frame + 0x10))[2] = 0;
        ((int *)(gen_frame + 0x10))[3] = 0;
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          piVar4 = ((int *)(gen_frame + 0x10)) + 2;
        }
        else {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
        }
        F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[1],((int *)(gen_frame + 0x10))[4]);
        piVar4 = ((int *)GEN_TOP(*param_1));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          piVar4 = ((int *)(gen_frame + 0x10));
        }
        else {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
        }
        ((int *)(gen_frame + 0x10))[2] = *piVar4;
        ((int *)(gen_frame + 0x10))[3] = piVar4[1];
        pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        piVar4 = ((int *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x0)))));
        if ((*piVar4 != ((int *)(gen_frame + 0x10))[2]) || (piVar4[1] != ((int *)(gen_frame + 0x10))[3])) {
          pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
          ((int *)(gen_frame + 0x10))[0] = 0;
          ((int *)(gen_frame + 0x10))[1] = 0;
          puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x0)))));
          F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*puVar2,puVar2[1],((int *)(gen_frame + 0x10))[4]);
        }
        F_00dfdae0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x24)));
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
        piVar4 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
        }
      }
    }
  }
  return;
}

/* ref: FUN_00dff510 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dff510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dff330(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00dff520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dff560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff560(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdff560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x11c, 4, 4);
  uint uVar1;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
  (*(uint *)(gen_frame + 0x94)) = 0x80000080;
  (*(int *)(gen_frame + 0x90)) = 1;
  ((undefined1 *)(gen_frame + 0x98))[0] = 0;
  if (*((char *)GEN_TOP((param_1 + 0x58))) == '\0') {
    F_00e1ded0(GEN_ARGF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
  }
  else {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),((char *)REFP(0x114d1bc)),param_3);
    if (*((char *)GEN_TOP((param_1 + 0x59))) != '\0') {
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x8)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      ((undefined1 *)(gen_frame + 0xc))[0] = 0;
      F_00e1ded0(GEN_ARGF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,((char *)REFP(0x114d1b4)),0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined, 0x114d1ac),0xffffffff);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
    }
  }
  F_00da0140(param_2 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x90)) - 1);
  (*(int *)(gen_frame + 0x90)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x94));
  if (-1 < (int)(*(uint *)(gen_frame + 0x94))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(uint *)(gen_frame + 0x94)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00dff6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdff6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x124, 12, 4);
  float fVar1;
  uint in_EAX = 0;
  int iVar2;
  
  iVar2 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x118)) = this;
  if (0 < param_3) {
    do {
      if (iVar2 != 0) {
        F_00da00e0(param_1,&REFG(undefined, 0x10919e8));
      }
      fVar1 = *((float *)GEN_TOP((param_2 + iVar2 * 4)));
      (*(float *)(gen_frame + 0x11c)) = fVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0x94)) = 0x80000080;
      (*(int *)(gen_frame + 0x90)) = 1;
      ((undefined1 *)(gen_frame + 0x98))[0] = 0;
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x118)) + 0x58))) == '\0') {
        F_00e1ded0(fVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
      }
      else {
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),((char *)REFP(0x114d1bc)),(undefined4)gen_fl2bits(fVar1));
        if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x118)) + 0x59))) != '\0') {
          (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
          (*(uint *)(gen_frame + 0x8)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x4)) = 1;
          ((undefined1 *)(gen_frame + 0xc))[0] = 0;
          F_00e1ded0((*(float *)(gen_frame + 0x11c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,((char *)REFP(0x114d1b4)),0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined, 0x114d1ac),0xffffffff);
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
          }
        }
      }
      F_00da0140(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x90)) - 1);
      (*(int *)(gen_frame + 0x90)) = 0;
      in_EAX = (*(uint *)(gen_frame + 0x94));
      if (-1 < (int)(*(uint *)(gen_frame + 0x94))) {
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                           (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(uint *)(gen_frame + 0x94)) & 0x3fffffff);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return in_EAX;
}

/* ref: FUN_00dff880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dff8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  int * piVar1;
  code * pcVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 extraout_ST0;
  undefined8 uVar10;
  
  puVar8 = (*(undefined4 * PTR32 *)&gen_args[0]);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*piVar4)) {
  case 2: ;
  case 4: ;
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x54))))(((int *)GEN_TOP(*puVar8)),puVar8[1]);
    uVar5 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x114d20c),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    return uVar5;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x3c))))(((int *)GEN_TOP(*puVar8)),puVar8[1]);
    uVar5 = F_00dff560(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),(uint)gen_fl2bits((float)extraout_ST0));
    return uVar5;
  case 5: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x34))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1]);
    if (uVar5 == 0) {
      uVar5 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1e0)));
      return uVar5;
    }
    F_00da4df0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126170),((char *)REFP(0x114d1f8)),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126164),&REFG(undefined, 0x114d1f0),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x112615c),&REFG(undefined, 0x114d1e8),1);
    F_00da0140((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)) - 1);
    uVar5 = F_00d877b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar5;
  case 6: ;
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x5c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
    pvVar3 = (*(undefined * PTR32 *)&gen_args[1]);
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar8;
    F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
      piVar4 = puVar8 + 2;
      *piVar4 = *piVar4 - 1;
      if (*piVar4 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
      }
    }
    uVar5 = F_00da00e0(pvVar3,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
    return uVar5;
  case 7: ;
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x5c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar8;
    uVar5 = F_00dfda90(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
    piVar4 = ((int *)GEN_TOP(F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d204)),uVar5)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
      piVar7 = puVar8 + 2;
      *piVar7 = *piVar7 - 1;
      if (*piVar7 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
        return uVar5;
      }
    }
    break;
  case 9: ;
    if (((*piVar4 == 9) && (*((int *)GEN_TOP(piVar4[1])) == 3)) &&
       ((iVar9 = piVar4[2], iVar9 == 4 || (((iVar9 == 8 || (iVar9 == 0xc)) || (iVar9 == 0x10)))))) {
      uVar5 = F_00e19c70(piVar4 GEN_EDX_ARG);
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x2c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1]);
      uVar5 = F_00dff6d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),uVar6,uVar5);
      return uVar5;
    }
  case 8: ;
    if (*((int *)GEN_TOP(piVar4[1])) == 6) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 100))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
        piVar7[2] = piVar7[2] + 1;
      }
      F_00dfe4a0(this GEN_EDX_ARG);
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x14)));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      uVar5 = (*pcVar2)(piVar7);
      if (0 < (int)uVar5) {
        do {
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1d4)),*(undefined4 *)this);
          puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar8;
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined * PTR32 *)&gen_args[1]));
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
            piVar4 = puVar8 + 2;
            *piVar4 = *piVar4 - 1;
            if (*piVar4 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
            }
          }
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1c4)),*(undefined4 *)this);
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x14)));
          iVar9 = (int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1;
          (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar9));
          uVar5 = (*pcVar2)(piVar7);
        } while (iVar9 < (int)uVar5);
      }
      F_00dfe520(this GEN_EDX_ARG);
      F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
      piVar4 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
      piVar1 = piVar7 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
        return uVar5;
      }
    }
    else {
      F_00dfe4a0(this GEN_EDX_ARG);
      puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 100))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
      pvVar3 = (*(undefined * PTR32 *)&gen_args[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar8;
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
        puVar8[2] = puVar8[2] + 1;
      }
      F_00dffd50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined * PTR32 *)&gen_args[1]));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 6))) - 1;
        piVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 2;
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x90)))))((*(undefined4 * PTR32 *)(gen_frame + 0x90)) GEN_EDX_ARG,1);
        }
      }
      F_00dfe520(this GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00da00e0(pvVar3,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this)));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00dffcb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dffcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdffcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  param_1 = param_1 & 0xffffff00;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_1);
  if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),0,0,0);
  return (uint)this;
}

/* ref: FUN_00dffd50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dffd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdffd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 * puVar1;
  int * in_eax;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  puVar1 = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = this;
  in_eax = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = in_eax;
  uVar2 = F_00dfcb50(in_eax);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x20)) = 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  uVar3 = F_00dfca90(in_eax GEN_EDX_ARG);
  iVar4 = *in_eax;
  if (((iVar4 == 4) || (iVar4 == 3)) || (param_1 = ((undefined4 *)GEN_TOP(uVar3)), iVar4 == 2)) {
    param_1 = ((undefined4 *)GEN_TOP(0x0));
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(uint *)(gen_frame + 0x20)) = uVar2;
      if (uVar2 == 0) {
        F_00da00e0(param_2,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x18));
      }
      if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar1;
        (*(int *)(gen_frame + 0x4)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
        pcVar5 = ((char *)REFP(0x10919e8));
LAB_00dffe57: ;
        uVar3 = F_00da00e0(param_2,pcVar5);
      }
      else {
        if ((*(*(int * PTR32 *)(gen_frame + 0x14)) == 5) &&
           (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x34))))(((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG,iVar4), uVar2 == 0)) {
          pcVar5 = ((char *)REFP(0x114d1e0));
          goto LAB_00dffe57;
        }
        F_00da00e0(param_2,&REFG(undefined, 0x114d214),param_1);
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
        (*(int *)(gen_frame + 0xc)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),param_2);
        uVar3 = F_00da00e0(param_2,((char *)REFP(0x114d048)),param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  return uVar3;
}

/* ref: FUN_00dffe80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dffe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdffe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar4,iVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x20)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x1c)));
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + iVar3 * 4)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      sVar2 = *((short *)GEN_TOP(((int)puVar6 + 6)));
      *((short *)GEN_TOP(((int)puVar6 + 6))) = sVar2 - 1;
      piVar1 = puVar6 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      }
    }
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((uVar7 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar7 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x14))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
               *((uint *)GEN_TOP(((int)this + 0x14))) * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar7 = F_00dfd5f0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  return uVar7;
}

/* ref: FUN_00dfff70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfff70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dffe80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfffc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfffc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfffc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x94, 12, 4);
  int * piVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined * pvVar9;
  float10 extraout_ST0;
  undefined8 uVar10;
  
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[0]);
  piVar3 = ((int *)GEN_TOP(F_00e1cd10((*(undefined4 * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*piVar3)) {
  case 2: ;
  case 4: ;
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x30))))(((int *)GEN_TOP(*puVar7)),puVar7[1]);
    uVar4 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x114d20c),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    return uVar4;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x3c))))(((int *)GEN_TOP(*puVar7)),puVar7[1]);
    uVar4 = F_00dff560(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),(uint)gen_fl2bits((float)extraout_ST0));
    return uVar4;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x2c))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1]);
    if (uVar4 == 0) {
      uVar4 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1e0)));
      return uVar4;
    }
    F_00da4df0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126170),((char *)REFP(0x114d1f8)),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126164),&REFG(undefined, 0x114d1f0),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x112615c),&REFG(undefined, 0x114d1e8),1);
    F_00da0140((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)) - 1);
    uVar4 = F_00d877b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar4;
  case 6: ;
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x34))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
    pvVar9 = (*(undefined * PTR32 *)&gen_args[1]);
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
      puVar7[2] = puVar7[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
    F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar3 = puVar7 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
      }
    }
    goto LAB_00e0035e;
  case 7: ;
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x34))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
      puVar7[2] = puVar7[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
    uVar4 = F_00dfda90(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
    piVar3 = ((int *)GEN_TOP(F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d204)),uVar4)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar6 = puVar7 + 2;
      *piVar6 = *piVar6 - 1;
      if (*piVar6 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
    break;
  case 9: ;
    if (((*piVar3 == 9) && (*((int *)GEN_TOP(piVar3[1])) == 3)) &&
       ((iVar8 = piVar3[2], iVar8 == 4 || (((iVar8 == 8 || (iVar8 == 0xc)) || (iVar8 == 0x10)))))) {
      uVar4 = F_00e19c70(piVar3 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x38))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1],uVar4);
      uVar4 = F_00dff6d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),uVar5,uVar4);
      return uVar4;
    }
  case 8: ;
    if (*((int *)GEN_TOP(piVar3[1])) == 6) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x28))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
        piVar6[2] = piVar6[2] + 1;
      }
      F_00dfe4a0(this GEN_EDX_ARG);
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x14)));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      uVar4 = (*pcVar2)(piVar6);
      if (0 < (int)uVar4) {
        do {
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1d4)),*(undefined4 *)this);
          puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar7;
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
            puVar7[2] = puVar7[2] + 1;
          }
          F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined * PTR32 *)&gen_args[1]));
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
            piVar3 = puVar7 + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
            }
          }
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1c4)),*(undefined4 *)this);
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x14)));
          iVar8 = (int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1;
          (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar8));
          uVar4 = (*pcVar2)(piVar6);
        } while (iVar8 < (int)uVar4);
      }
      F_00dfe520(this GEN_EDX_ARG);
      F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
      piVar3 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) - 1;
      piVar1 = piVar6 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar6)))(piVar6 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
    else {
      F_00dfe4a0(this GEN_EDX_ARG);
      puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x28))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
      pvVar9 = (*(undefined * PTR32 *)&gen_args[1]);
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
        puVar7[2] = puVar7[2] + 1;
      }
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
      F_00dffd50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
        piVar3 = puVar7 + 2;
        *piVar3 = *piVar3 - 1;
        if (*piVar3 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
        }
      }
      F_00dfe520(this GEN_EDX_ARG);
LAB_00e0035e: ;
      piVar3 = ((int *)GEN_TOP(F_00da00e0(pvVar9,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this)));
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00e003a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e003a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe003a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 2;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0x20;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  F_00dffcb0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  *((undefined1 *)GEN_TOP(((int)this + 0x59))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e00410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00410(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 1;
  return param_2;
}

/* ref: FUN_00e00450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe00450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e00460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00e00490 */
GEN_LIB GEN_FRAME uint F_00e00490(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: FUN_00e004b0 */
GEN_LIB GEN_FRAME uint F_00e004b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe004b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00e004c0 */
GEN_LIB GEN_FRAME byte F_00e004c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe004c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 != -1;
}

/* ref: FUN_00e004d0 */
GEN_LIB GEN_FRAME uint F_00e004d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe004d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e00500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(uint *)&gen_args[0]) == 0) && ((*(uint *)&gen_args[1]) == ((int)0x80000000))) {
    F_00da6940(this GEN_EDX_FWD,0x81);
    uVar2 = 0;
    uVar3 = 0x2000000;
  }
  else if (((int)(*(uint *)&gen_args[1]) < 1) && ((int)(*(uint *)&gen_args[1]) < 0)) {
    uVar3 = ((*(uint *)&gen_args[1]) + ((*(uint *)&gen_args[0]) != 0)) * -2 | -(*(uint *)&gen_args[0]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[0]) * -2 | 1;
  }
  else {
    uVar3 = (*(uint *)&gen_args[1]) << 1 | (*(uint *)&gen_args[0]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[0]) * 2;
  }
  bVar1 = (byte)uVar2;
  uVar2 = uVar2 >> 7 | uVar3 << 0x19;
  uVar3 = uVar3 >> 7;
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1) & 0xffffff7f;
  if (uVar2 != 0 || uVar3 != 0) {
    do {
      F_00da6940(this GEN_EDX_ARG,(uint)(bVar1 & 0x7f | 0x80));
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7 | uVar3 << 0x19;
      uVar3 = uVar3 >> 7;
    } while (uVar2 != 0 || uVar3 != 0);
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1) & 0xffffff7f;
  }
  uVar2 = F_00da6940(this GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_00e005a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xe005a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da6cd0(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00e005c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe005c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6e10(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e005d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe005d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return uVar1;
}

/* ref: FUN_00e005f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e005f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe005f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00e19d40(param_1 GEN_EDX_ARG)));
  return (uint)(*piVar1 == 6);
}

/* ref: FUN_00e00640 */
GEN_LIB GEN_FRAME uint F_00e00640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00650 */
GEN_LIB GEN_FRAME uint F_00e00650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00680 */
GEN_LIB GEN_FRAME uint F_00e00680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00690 */
GEN_LIB GEN_FRAME uint F_00e00690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e00740 */
GEN_LIB GEN_FRAME uint F_00e00740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00e00760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e00800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0xc)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0xc)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e00820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00820(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: FUN_00e00840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00e00860 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00860u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e00890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe00890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e008b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e008b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe008b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00e00926;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0xc;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00e00926: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  iVar4 = uVar3 * 0xc;
  *((uint *)GEN_TOP((iVar1 + iVar4))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + iVar4))) = param_3;
  *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)this))) = param_4;
  return uVar2;
}

/* ref: FUN_00e00960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e009c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e009c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe009c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *((uint *)GEN_TOP((iVar2 + 8 + uVar4 * 0xc)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return param_3;
}

/* ref: FUN_00e00a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_3 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar1 * 0xc)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00e00a60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*((uint *)GEN_TOP((iVar1 + iVar2))) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *((undefined4 *)GEN_TOP((iVar3 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e00b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e00bb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e00bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe00bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e00be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e00bb0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e00c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e00c50 */
GEN_LIB GEN_FRAME uint F_00e00c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

/* ref: FUN_00e00c70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0xc;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e00cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00cc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e00d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00d20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e00d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00d70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e00d90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e00d90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 extraout_ST0;
  longlong lVar6;
  
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*puVar2)) {
  case 2: ;
  case 4: ;
    lVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x54))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    if (lVar6 != 0) {
      return 1;
    }
    break;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    bVar5 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar5 == (bVar5 || extraout_ST0 == (float10)0)) {
      return 1;
    }
    break;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
    return (uint)(uVar4 != 0);
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x5c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    return (uint)(puVar2 != ((undefined4 *)GEN_TOP(0x0)));
  case 8: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
    return (uint)(uVar4 != 0);
  case 9: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e00f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe00f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  char cVar1;
  char * pcVar2;
  
  F_00e03cf0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  F_00e03fc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[3]) + 3)));
  cVar1 = *pcVar2;
  F_00e03e60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e00fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00e00fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe00fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e01020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e01040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e01060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e010a0 */
GEN_LIB GEN_FRAME uint F_00e010a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe010a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e010c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e010c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe010c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar2,0xffffffff);
  return uVar2;
}

/* ref: FUN_00e01110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01110(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe01110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00e01120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
  uVar3 = F_00e03a70(this GEN_EDX_ARG,param_1,uVar3 * 0x10 + *((int *)GEN_TOP(((int)this + 0x4c))));
  return uVar3;
}

/* ref: FUN_00e01180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)this != 0) && (piVar1 = ((int *)GEN_TOP(*param_2)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
    uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
    if (uVar3 != 0xffffffff) {
      iVar4 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3 * 4)));
      goto LAB_00e011d3;
    }
  }
  iVar4 = *param_2;
LAB_00e011d3: ;
  *param_1 = iVar4;
  if (iVar4 != 0) {
    *((short *)GEN_TOP((iVar4 + 6))) = *((short *)GEN_TOP((iVar4 + 6))) + 1;
    *((int *)GEN_TOP((iVar4 + 8))) = *((int *)GEN_TOP((iVar4 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00e011f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e011f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe011f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e01210 */
GEN_LIB GEN_FRAME uint F_00e01210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe01210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e01230 */
GEN_LIB GEN_FRAME unsigned int F_00e01230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe01230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e01280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe01280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e008b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00e012a0 */
GEN_LIB GEN_FRAME uint F_00e012a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe012a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e012c0 */
GEN_LIB GEN_FRAME unsigned int F_00e012c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe012c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e012f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e012f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe012f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00e01390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe01390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00e013a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e013a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe013a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e013e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e013e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe013e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e01420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e00c70(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e01440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00e00a60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e01480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e008b0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e01550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00e01590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e015d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e015d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe015d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e01610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe01610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar2 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[0]));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_00e01660;
  }
  iVar3 = ((int)0x80000000);
LAB_00e01660: ;
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  if (0 < iVar5) {
    puVar4 = ((undefined4 *)GEN_TOP((uVar2 + 8)));
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00e016a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e016a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe016a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 extraout_ST0;
  longlong lVar6;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00e1cd10(param_1 GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*puVar2)) {
  case 2: ;
  case 4: ;
    lVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x30))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    if (lVar6 != 0) {
      return 1;
    }
    break;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    bVar5 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar5 == (bVar5 || extraout_ST0 == (float10)0)) {
      return 1;
    }
    break;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x2c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
    return (uint)(uVar4 != 0);
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    return (uint)(puVar2 != ((undefined4 *)GEN_TOP(0x0)));
  case 8: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x28))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
    return (uint)(uVar4 != 0);
  case 9: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e017e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e017e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe017e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_00da6940(this GEN_EDX_FWD,3);
    return uVar1;
  }
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00da0e60(param_1);
    F_00e00500(this GEN_EDX_ARG,uVar1,(int)uVar1 >> 0x1f);
    F_00da6ae0(this GEN_EDX_ARG,param_1,uVar1);
    uVar1 = F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,*((int *)GEN_TOP(((int)this + 0x14))) + 1);
    return uVar1;
  }
  uVar1 = F_00e00500(this GEN_EDX_ARG,-uVar1,(int)-uVar1 >> 0x1f);
  return uVar1;
}

/* ref: FUN_00e018c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e018c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe018c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00e01180(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[0]));
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar5 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar4,puVar4[1],0xffffffff);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 0xc + uVar5 * 0x10)));
  uVar5 = F_00e00500(this GEN_EDX_ARG,iVar2,iVar2 >> 0x1f);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
  }
  return uVar5;
}

/* ref: FUN_00e01940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01940u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e01980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00e019e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e019e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe019e0u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00e01a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e01420(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e01a50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: FUN_00e01a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01a80u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e01af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01af0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e01b30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e01b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe01b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e008b0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e01bd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e01bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe01bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
    piVar1 = ((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    if ((*((uint *)GEN_TOP((iVar2 + uVar4 * 0xc))) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *((uint *)GEN_TOP((iVar2 + iVar3))) = param_2;
      *((int *)GEN_TOP((iVar2 + 4 + iVar3))) = param_3;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_4;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00e01c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e01480(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e01c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e01cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01cc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e01d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01d00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e01d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  gen_size32 _Size;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar5 = iVar1 + 7U & 0xfffffff8;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar5) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,uVar3,1);
  }
  _Size = uVar5 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4)))))),0,_Size);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar5;
  iVar4 = 0;
  iVar6 = 0;
  if (0 < param_2) {
    do {
      bVar2 = *((byte *)GEN_TOP((iVar6 + param_1)));
      *((byte *)GEN_TOP((iVar4 + *(int *)this))) = bVar2 & 1;
      *((byte *)GEN_TOP((*(int *)this + 1 + iVar4))) = bVar2 >> 1 & 1;
      *((byte *)GEN_TOP((*(int *)this + 2 + iVar4))) = bVar2 >> 2 & 1;
      *((byte *)GEN_TOP((*(int *)this + 3 + iVar4))) = bVar2 >> 3 & 1;
      *((byte *)GEN_TOP((*(int *)this + 4 + iVar4))) = bVar2 >> 4 & 1;
      *((byte *)GEN_TOP((*(int *)this + 5 + iVar4))) = bVar2 >> 5 & 1;
      *((byte *)GEN_TOP((*(int *)this + 6 + iVar4))) = bVar2 >> 6 & 1;
      *((byte *)GEN_TOP((*(int *)this + 7 + iVar4))) = bVar2 >> 7;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < param_2);
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if ((int)(uVar3 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  return uVar3;
}

/* ref: FUN_00e01e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  char * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  gen_size32 _Size;
  byte * pbVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  uint uVar7;
  byte * pbVar8;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar7 = iVar2 + 7U & 0xfffffff8;
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < (int)uVar7) {
    uVar4 = uVar4 * 2;
    if ((int)uVar4 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,uVar4,1);
  }
  _Size = uVar7 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4)))))),0,_Size);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
  if (0 < (int)uVar7) {
    iVar6 = 0;
    pbVar8 = param_1;
    do {
      pcVar1 = ((char *)GEN_TOP((*(int *)this + 7 + iVar6)));
      pbVar5 = ((byte *)GEN_TOP((*(int *)this + iVar6)));
      iVar6 = iVar6 + 8;
      *pbVar8 = ((((((*pcVar1 * '\x02' | pbVar5[6]) * '\x02' | pbVar5[5]) * '\x02' | pbVar5[4]) *
                   '\x02' | pbVar5[3]) * '\x02' | pbVar5[2]) * '\x02' | pbVar5[1]) * '\x02' |
                *pbVar5;
      pbVar8 = pbVar8 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 4))));
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar2) {
    iVar6 = uVar4 * 2;
    if ((int)(uVar4 * 2) <= iVar2) {
      iVar6 = iVar2;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar6,1);
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  return uVar4;
}

/* ref: FUN_00e01f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  LPVOID pvVar5;
  int iVar6;
  
  if ((*(int *)this != 0) && (piVar4 = ((int *)GEN_TOP(*param_2)), piVar4 != ((int *)GEN_TOP(0x0)))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 4)));
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(piVar4,((undefined1 *)(gen_frame + 0x10)))));
    ((int *)(gen_frame + 0x18))[2] = *puVar2;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar2[1];
    uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,*puVar2,puVar2[1],0xffffffff);
    if (uVar3 != 0xffffffff) {
      iVar6 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3 * 4)));
      goto LAB_00e020cf;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x28)),param_2);
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x28)) == ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 4))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    }
    iVar6 = *piVar4;
    (*(int *)(gen_frame + 0x14)) = piVar4[1];
    piVar4 = ((int *)GEN_TOP(*param_2));
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    }
    if ((iVar6 != *piVar4) || ((*(int *)(gen_frame + 0x14)) != piVar4[1])) {
      F_00e008b0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x18))[2],(*(undefined4 *)(gen_frame + 0x24)),
                   *((undefined4 *)GEN_TOP(((int)this + 0x14))));
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,4)));
      if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar2 = (*(int * PTR32 *)(gen_frame + 0x28));
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) + 1;
          (*(int * PTR32 *)(gen_frame + 0x28))[2] = (*(int * PTR32 *)(gen_frame + 0x28))[2] + 1;
        }
      }
      if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),((int *)GEN_TOP(((int)this + 0x10))),4);
      }
      iVar6 = *((int *)GEN_TOP(((int)this + 0x14)));
      *((int *)GEN_TOP(((int)this + 0x14))) = iVar6 + 1;
      *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar6 * 4))) = puVar2;
      *param_1 = (int)(*(int * PTR32 *)(gen_frame + 0x28));
      if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) + 1;
        (*(int * PTR32 *)(gen_frame + 0x28))[2] = (*(int * PTR32 *)(gen_frame + 0x28))[2] + 1;
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) - 1;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
          *piVar4 = *piVar4 - 1;
          if (*piVar4 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x28)))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
          }
        }
      }
      return (uint)param_1;
    }
    if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) - 1;
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
      *piVar4 = *piVar4 - 1;
      if (*piVar4 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x28)))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
      }
    }
  }
  iVar6 = *param_2;
LAB_00e020cf: ;
  *param_1 = iVar6;
  if (iVar6 != 0) {
    *((short *)GEN_TOP((iVar6 + 6))) = *((short *)GEN_TOP((iVar6 + 6))) + 1;
    *((int *)GEN_TOP((iVar6 + 8))) = *((int *)GEN_TOP((iVar6 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00e02100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e02100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe02100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00e01b70(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e02130 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e02130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe02130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00e01bd0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return;
}

/* ref: FUN_00e02150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e02150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe02150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e01c50(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e02170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e02170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe02170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e021b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e021b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe021b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e021f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e021f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe021f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e02230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e02230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe02230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  gen_size32 _Size;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 + 7U & 0xfffffff8;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,((int)uVar3 < 0) - 1 & uVar3,1);
  }
  _Size = uVar3 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < (int)_Size) {
    F_00c48350(((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4)))))),0,_Size);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  if ((int)uVar1 < param_1) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_1) {
      iVar2 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar2,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00e022d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e022d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe022d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e02310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e02310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe02310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00e01c50(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e02350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e02350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe02350u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e02390 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e02390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe02390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e023d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e023d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe023d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  code * pcVar2;
  int * this_00;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined4 * puVar6;
  
  this_00 = (*(int * PTR32 *)&gen_args[0]);
  piVar4 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0])));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_FWD);
  uVar3 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar3,0xffffffff);
  if (-1 < (int)uVar3) {
    return uVar3;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 0x10))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG)));
  piVar4 = ((int *)GEN_TOP(F_00e023d0(this GEN_EDX_ARG,(int *)&(*(int * PTR32 *)&gen_args[0]))));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 8))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG);
  uVar3 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar3,0xffffffff);
  if (uVar3 != 0xffffffff) {
    return uVar3;
  }
  (*(uint *)(gen_frame + 0x1c)) = *((uint *)GEN_TOP(((int)this + 0x24)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 8))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar3,(*(uint *)(gen_frame + 0x1c)));
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 0x18))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x8)) = 0x80000000;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)((int)(uintptr_t)piVar4) << 4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar2)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[0]));
    iVar5 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar5 != 0) goto LAB_00e024b4;
  }
  iVar5 = ((int)0x80000000);
LAB_00e024b4: ;
  (*(uint *)(gen_frame + 0x0)) = uVar3;
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar4;
  (*(int *)(gen_frame + 0x8)) = iVar5;
  if (0 < (int)piVar4) {
    puVar6 = ((undefined4 *)GEN_TOP((uVar3 + 8)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
    do {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      piVar1 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x18)) - 1)));
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(0x0)));
  }
  F_00e1ce00(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  F_00e00500(this GEN_EDX_ARG,2,0);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 8))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG);
  F_00e01840(this GEN_EDX_ARG,uVar3);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 0xc))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG);
  F_00e00500(this GEN_EDX_ARG,uVar3,(int)uVar3 >> 0x1f);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 0xc))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG);
  F_00e00500(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x14)),(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) >> 0x1f);
  F_00e00500(this GEN_EDX_ARG,piVar4,(int)((int)(uintptr_t)piVar4) >> 0x1f);
  if (0 < (int)piVar4) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    do {
      puVar6 = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + (*(uint *)(gen_frame + 0x0)))));
      F_00e01840(this GEN_EDX_ARG,*puVar6);
      uVar3 = F_00e1a1c0(puVar6[2],&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x10)));
      F_00e00500(this GEN_EDX_ARG,uVar3,(int)uVar3 >> 0x1f);
      if ((uVar3 & 0x20) != 0) {
        F_00e00500(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x10)),(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x10))) >> 0x1f);
      }
      if (((uVar3 & 0xf) == 9) || ((uVar3 & 0xf) == 8)) {
        if ((*(int * PTR32 *)(gen_frame + 0x18)) == ((int *)GEN_TOP(0x0))) {
          F_00da6940(this GEN_EDX_ARG,3);
        }
        else {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 4))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG)));
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x24))))(piVar4 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x18)))));
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
          F_00e01840(this GEN_EDX_ARG,uVar3);
        }
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10)));
      piVar4 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) - 1)));
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
    if (0 < (int)(*(int * PTR32 *)(gen_frame + 0xc))) {
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0xc));
      do {
        piVar4 = ((int *)GEN_TOP(F_00e19d40(*((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 8U + (*(uint *)(gen_frame + 0x0))))) GEN_EDX_ARG)));
        (*(int * PTR32 *)(gen_frame + 0xc)) = piVar4;
        if (*piVar4 == 6) {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*this_00)) + 4))))(((int *)GEN_TOP(*this_00)) GEN_EDX_ARG)));
          iVar5 = *piVar4;
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar4;
          uVar3 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0x24))))((*(int * PTR32 *)(gen_frame + 0x10)),uVar3)));
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar4;
          F_00e023d0(this GEN_EDX_ARG,(int *)&(*(int * PTR32 *)(gen_frame + 0x18)));
        }
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x10)));
        piVar4 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) - 1)));
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
      } while (piVar4 != ((int *)GEN_TOP(0x0)));
    }
  }
  (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
  uVar3 = (*(uint *)(gen_frame + 0x1c));
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) << 4);
    uVar3 = (*(uint *)(gen_frame + 0x1c));
  }
  return uVar3;
}

/* ref: FUN_00e02690 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00e02690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe02690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  int * piVar1;
  int * piVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 extraout_EDX_02 = 0;
  undefined4 extraout_EDX_03 = 0;
  undefined4 extraout_EDX_04 = 0;
  undefined4 uVar9;
  undefined4 extraout_EDX_05 = 0;
  int iVar10;
  ulonglong uVar11;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  puVar8 = ((undefined4 *)GEN_TOP((*piVar2 - 6)));
  uVar9 = extraout_EDX;
  switch((unsigned int)(uintptr_t)(((undefined4 *)GEN_TOP((*piVar2 - 6))))) {
  case 0x0: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x18))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG)));
    (*(int * PTR32 *)(gen_frame + 0x40)) = piVar2;
    F_00e023d0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x40)));
    iVar10 = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(0x0));
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG)));
    piVar2 = (*(int * PTR32 *)&gen_args[1]);
    uVar9 = extraout_EDX_02;
    if (0 < (int)puVar8) {
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x8)) = ((int *)GEN_TOP(0x0));
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,iVar10,&(*(undefined4 *)(gen_frame + 0x0)));
        iVar10 = *(*(int * PTR32 *)(gen_frame + 0x8));
        if (iVar10 == 6) {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x28))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)))));
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
            piVar3[2] = piVar3[2] + 1;
          }
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG)));
          iVar10 = 0;
          if (0 < (int)(*(int * PTR32 *)&gen_args[1])) {
            do {
              puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,iVar10)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar4;
              if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                puVar4[2] = puVar4[2] + 1;
              }
              F_00e02aa0((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)),piVar2,1);
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6))) - 1;
                piVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2;
                *piVar5 = *piVar5 - 1;
                if (*piVar5 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))))((*(undefined4 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,1);
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(*(int * PTR32 *)&gen_args[1]));
          }
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
          piVar5 = piVar3 + 2;
          *piVar5 = *piVar5 - 1;
          puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
          if (*piVar5 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
            puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
          }
        }
        else if (iVar10 == 7) {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x28))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)))));
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
            piVar3[2] = piVar3[2] + 1;
          }
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x2c)) = uVar6;
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(0x0));
          if (0 < (int)uVar6) {
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            do {
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x5c))))(piVar3 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]))));
              if (piVar5 == ((int *)GEN_TOP(0x0))) {
                puVar4 = &(*(undefined4 *)(gen_frame + 0x18));
              }
              else {
                *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
                piVar5[2] = piVar5[2] + 1;
                puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
              }
              uVar9 = puVar4[1];
              uVar6 = piVar2[2];
              (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
              (*(undefined4 *)(gen_frame + 0x24)) = uVar9;
              if (piVar2[1] == (uVar6 & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar2,0xc);
              }
              puVar4 = ((undefined4 *)GEN_TOP((*piVar2 + piVar2[1] * 0xc)));
              piVar2[1] = piVar2[1] + 1;
              *puVar4 = (*(undefined4 *)(gen_frame + 0x20));
              puVar4[1] = (*(undefined4 *)(gen_frame + 0x24));
              puVar4[2] = 0;
              if (piVar5 != ((int *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
                piVar1 = piVar5 + 2;
                *piVar1 = *piVar1 - 1;
                if (*piVar1 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar5)))(piVar5 GEN_EDX_ARG,1);
                }
              }
              (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
            } while ((int)(*(int * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0x2c)));
          }
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
          piVar5 = piVar3 + 2;
          *piVar5 = *piVar5 - 1;
          puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
          if (*piVar5 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
            puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
          }
        }
        else if (iVar10 == 8) {
          puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x28))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar8;
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          F_00e02690((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x38)),piVar2,(*(int *)&gen_args[2]));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6))) - 1;
            piVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))))((*(undefined4 * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,1);
            }
          }
        }
        iVar10 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x30)) + 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(iVar10));
        uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
      } while (iVar10 < (int)uVar6);
      return CONCAT44(extraout_EDX_03,uVar6);
    }
    break;
  case 0x1: ;
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x14))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG)));
    piVar2 = (*(int * PTR32 *)&gen_args[1]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar8;
    (*(int *)&gen_args[2]) = 0;
    uVar9 = extraout_EDX_00;
    if (0 < (int)puVar8) {
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      do {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x5c))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,(*(int *)&gen_args[2]))));
        if (piVar3 == ((int *)GEN_TOP(0x0))) {
          puVar4 = &(*(undefined4 *)(gen_frame + 0x20));
        }
        else {
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
          piVar3[2] = piVar3[2] + 1;
          puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)))));
        }
        uVar9 = *puVar4;
        (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[1];
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar2,0xc);
        }
        puVar4 = ((undefined4 *)GEN_TOP((*piVar2 + piVar2[1] * 0xc)));
        piVar2[1] = piVar2[1] + 1;
        *puVar4 = uVar9;
        puVar4[1] = (*(undefined4 *)(gen_frame + 0x1c));
        puVar4[2] = 0;
        uVar9 = (*(undefined4 *)(gen_frame + 0x1c));
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
          piVar5 = piVar3 + 2;
          *piVar5 = *piVar5 - 1;
          if (*piVar5 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
            uVar9 = extraout_EDX_01;
          }
        }
        (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
        puVar4 = (*(undefined4 * PTR32 *)&gen_args[0]);
      } while ((*(int *)&gen_args[2]) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x30)));
      return CONCAT44(uVar9,(*(int *)&gen_args[2]));
    }
    break;
  case 0x2: ;
  case 0x3: ;
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x14))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG)));
    iVar10 = 0;
    puVar8 = puVar7;
    uVar9 = extraout_EDX_04;
    if (0 < (int)puVar7) {
      do {
        (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 100))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,iVar10)));
        if ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) + 1;
          (*(undefined4 * PTR32 *)&gen_args[0])[2] = (*(undefined4 * PTR32 *)&gen_args[0])[2] + 1;
        }
        uVar11 = F_00e02690((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(int *)&gen_args[2]));
        uVar9 = (undefined4)(uVar11 >> 0x20);
        puVar8 = (*(undefined4 * PTR32 *)&gen_args[0]);
        if ((*(undefined4 * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) {
          uVar9 = 0xffffffff;
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) - 1;
          piVar2 = (*(undefined4 * PTR32 *)&gen_args[0]) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))))((*(undefined4 * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1)));
            uVar9 = extraout_EDX_05;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)puVar7);
    }
  }
  return CONCAT44(uVar9,puVar8);
}

/* ref: FUN_00e02aa0 */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00e02aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe02aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  int * piVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint extraout_EDX = 0;
  undefined4 uVar8;
  uint extraout_EDX_00 = 0;
  undefined4 uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x40)) = uVar4;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,uVar4);
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  uVar4 = extraout_EDX;
  do {
    if (uVar5 == 0) {
      return (ulonglong)uVar4 << 0x20;
    }
    piVar7 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x24)));
    (*pcVar2)(piVar7,&(*(int * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x40)));
    puVar6 = ((undefined4 *)GEN_TOP(F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
    piVar7 = ((int *)GEN_TOP(F_00e19d40(puVar6 GEN_EDX_ARG)));
    if (*piVar7 == 6) {
      switch((unsigned int)(uintptr_t)(*puVar6)) {
      case 6: ;
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)))));
        if ((*(int *)&gen_args[2]) == 0) {
          if (piVar7 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
            piVar7[2] = piVar7[2] + 1;
          }
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          if (piVar7 == ((int *)GEN_TOP(0x0))) {
            puVar6 = &(*(undefined4 *)(gen_frame + 0x20));
          }
          else {
            puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 4))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
          }
          uVar9 = *puVar6;
          (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
          if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar3,0xc);
          }
          puVar6 = ((undefined4 *)GEN_TOP((*piVar3 + piVar3[1] * 0xc)));
          piVar3[1] = piVar3[1] + 1;
          puVar6[2] = 1;
          uVar8 = (*(undefined4 *)(gen_frame + 0x14));
          goto LAB_00e02b9d;
        }
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
          piVar7[2] = piVar7[2] + 1;
        }
        (*(int * PTR32 *)&gen_args[1]) = piVar7;
        F_00e02aa0((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),piVar3,1);
        if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
          piVar7 = (*(int * PTR32 *)&gen_args[1]) + 2;
          *piVar7 = *piVar7 - 1;
          if (*piVar7 == 0) {
            puVar6 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
            piVar7 = (*(int * PTR32 *)&gen_args[1]);
            goto LAB_00e02cd3;
          }
        }
        break;
      case 7: ;
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)))));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
          piVar7[2] = piVar7[2] + 1;
        }
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        if (piVar7 == ((int *)GEN_TOP(0x0))) {
          puVar6 = &(*(undefined4 *)(gen_frame + 0x28));
        }
        else {
          puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 4))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
        }
        uVar9 = *puVar6;
        (*(undefined4 *)(gen_frame + 0x1c)) = puVar6[1];
        if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar3,0xc);
        }
        puVar6 = ((undefined4 *)GEN_TOP((*piVar3 + piVar3[1] * 0xc)));
        piVar3[1] = piVar3[1] + 1;
        puVar6[2] = 0;
        uVar8 = (*(undefined4 *)(gen_frame + 0x1c));
LAB_00e02b9d: ;
        puVar6[1] = uVar8;
        *puVar6 = uVar9;
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
          piVar1 = piVar7 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
          }
        }
        break;
      case 8: ;
      case 9: ;
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)))));
        (*(int * PTR32 *)(gen_frame + 0x38)) = piVar7;
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
          piVar7[2] = piVar7[2] + 1;
        }
        F_00e02690((*(undefined * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x38)),piVar3,(*(int *)&gen_args[2]));
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
          piVar1 = piVar7 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            puVar6 = ((undefined4 *)GEN_TOP(*piVar7));
LAB_00e02cd3: ;
            (*((code *)GEN_TOP(*puVar6)))(piVar7,1);
          }
        }
      }
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x1c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x40)));
    (*(uint *)(gen_frame + 0x40)) = uVar4;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,uVar4);
    uVar4 = extraout_EDX_00;
  } while( true );
}

/* ref: FUN_00e02d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e02d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe02d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x70, 0, 4);
  int * piVar1;
  undefined8 uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code * pcVar6;
  int iVar7;
  undefined * pvVar8;
  undefined4 * puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 * puVar14;
  bool bVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),0x80,0xc);
  piVar3 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(int *)(gen_frame + 0x60)) = 0;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    puVar9 = &(*(undefined4 *)(gen_frame + 0x5c));
  }
  else {
    puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x3c)))));
  }
  uVar4 = *puVar9;
  uVar5 = puVar9[1];
  uVar11 = (*(uint *)(gen_frame + 0x1c));
  if ((*(uint *)(gen_frame + 0x1c)) == ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),0xc);
    uVar11 = (*(uint *)(gen_frame + 0x1c));
  }
  uVar12 = uVar11 + 1;
  (*(uint *)(gen_frame + 0x1c)) = uVar12;
  puVar9 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar11 * 0xc)));
  puVar9[1] = uVar5;
  *puVar9 = uVar4;
  puVar9[2] = (*(int * PTR32 *)&gen_args[2]);
  uVar11 = (*(uint *)(gen_frame + 0x20));
  while ((*(uint *)(gen_frame + 0x20)) = uVar11, uVar12 != 0) {
    uVar2 = *((undefined8 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) - 0xc + uVar12 * 0xc)));
    (*(undefined8 *)(gen_frame + 0x0)) = uVar2;
    uVar2 = (*(undefined8 *)(gen_frame + 0x0));
    (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + uVar12 * 0xc - 4)));
    (*(uint *)(gen_frame + 0x1c)) = uVar12 - 1;
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 0)) = (int)uVar2;
    (*(undefined8 *)(gen_frame + 0x0)) = uVar2;
    if (((int)(*(undefined8 *)(gen_frame + 0x0)) != 0) ||
       ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) = (int)((ulonglong)uVar2 >> 0x20), bVar15 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x0)) + 4)) != 0,
       uVar12 = (*(uint *)(gen_frame + 0x1c)), bVar15)) {
      pcVar6 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x28)));
      (*pcVar6)((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),&(*(undefined8 *)(gen_frame + 0x0)));
      F_00e01f30(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x64)),&(*(int * PTR32 *)&gen_args[1]));
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x64));
      if ((*(int * PTR32 *)(gen_frame + 0x64)) == ((int *)GEN_TOP(0x0))) {
        uVar12 = (*(uint *)(gen_frame + 0x1c));
        uVar11 = (*(uint *)(gen_frame + 0x20));
        if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
          piVar3 = (*(int * PTR32 *)&gen_args[1]) + 2;
          *piVar3 = *piVar3 - 1;
          if (*piVar3 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
            uVar12 = (*(uint *)(gen_frame + 0x1c));
            uVar11 = (*(uint *)(gen_frame + 0x20));
          }
        }
      }
      else {
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)))));
        uVar11 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar9,puVar9[1],0xffffffff);
        if (uVar11 == 0xffffffff) {
          (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG)));
          F_00e023d0(this GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[2]));
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x24))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
          F_00e02230(&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar11);
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
          uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,uVar11);
          while (uVar12 != 0) {
            pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x24)));
            (*pcVar6)(piVar3,((undefined1 *)(gen_frame + 0x4c)),uVar11);
            uVar12 = F_00e016a0(((undefined1 *)(gen_frame + 0x4c)));
            if (uVar12 != 0) {
              uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG,uVar11);
              uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))((*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG,uVar12);
              *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + uVar12))) = 1;
            }
            uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG,uVar11);
            uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,uVar11);
          }
          uVar11 = *((uint *)GEN_TOP(((int)this + 0x38)));
          pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 4)));
          (*(undefined4 *)(gen_frame + 0x44)) = 0;
          (*(undefined4 *)(gen_frame + 0x48)) = 0;
          puVar9 = ((undefined4 *)GEN_TOP((*pcVar6)(piVar3,((undefined1 *)(gen_frame + 0x2c)))));
          F_00e008b0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*puVar9,puVar9[1],
                       uVar11 & 0x7fffffff);
          if (*((uint *)GEN_TOP(((int)this + 0x50))) == (*((uint *)GEN_TOP(((int)this + 0x54))) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),((int *)GEN_TOP(((int)this + 0x4c))),0x10);
          }
          iVar10 = *((int *)GEN_TOP(((int)this + 0x50)));
          *((int *)GEN_TOP(((int)this + 0x50))) = iVar10 + 1;
          pcVar6 = *((gen_code32 *)GEN_TOP((*piVar3 + 4)));
          puVar14 = ((undefined4 *)GEN_TOP((iVar10 * 0x10 + *((int *)GEN_TOP(((int)this + 0x4c))))));
          (*(undefined4 *)(gen_frame + 0x3c)) = 0;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          puVar9 = ((undefined4 *)GEN_TOP((*pcVar6)(piVar3,((undefined1 *)(gen_frame + 0x24)))));
          pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x68));
          *puVar14 = *puVar9;
          puVar14[1] = puVar9[1];
          puVar14[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44)));
          if ((*(int *)(gen_frame + 0x8)) == 0) {
            iVar10 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30)));
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x30))) = iVar10 + 1;
          }
          else {
            iVar10 = -1;
          }
          puVar14[3] = iVar10;
          piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x40)));
          iVar13 = (int)(((int)((*(int *)(gen_frame + 0x10)) + 7U) >> 0x1f & 7U) + ((*(int *)(gen_frame + 0x10)) + 7U & 0xfffffff8)) >> 3;
          iVar10 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44))) + iVar13;
          uVar11 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x48))) & 0x3fffffff;
          (*(int *)(gen_frame + 0x60)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 0x44)));
          if ((int)uVar11 < iVar10) {
            iVar7 = uVar11 * 2;
            if (iVar10 < iVar7) {
              iVar10 = iVar7;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,iVar10,1);
          }
          iVar10 = *piVar1;
          *((int *)GEN_TOP(((int)pvVar8 + 0x44))) = *((int *)GEN_TOP(((int)pvVar8 + 0x44))) + iVar13;
          F_00e01e50(&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar10 + (*(int *)(gen_frame + 0x60)));
          F_00e02aa0((*(undefined * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x64)),&(*(int *)(gen_frame + 0x18)),0);
          (*(int *)(gen_frame + 0x10)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
          }
          (*(int *)(gen_frame + 0xc)) = 0;
          (*(uint *)(gen_frame + 0x14)) = 0x80000000;
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
          piVar1 = piVar3 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
          }
          uVar12 = (*(uint *)(gen_frame + 0x1c));
          this = (*(undefined * PTR32 *)(gen_frame + 0x68));
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
            piVar3 = (*(int * PTR32 *)&gen_args[1]) + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
              uVar12 = (*(uint *)(gen_frame + 0x1c));
              this = (*(undefined * PTR32 *)(gen_frame + 0x68));
              uVar11 = (*(uint *)(gen_frame + 0x20));
            }
          }
        }
        else {
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
          piVar1 = piVar3 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
          }
          uVar12 = (*(uint *)(gen_frame + 0x1c));
          uVar11 = (*(uint *)(gen_frame + 0x20));
          if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
            piVar3 = (*(int * PTR32 *)&gen_args[1]) + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
              uVar12 = (*(uint *)(gen_frame + 0x1c));
              uVar11 = (*(uint *)(gen_frame + 0x20));
            }
          }
        }
      }
    }
  }
  (*(uint *)(gen_frame + 0x1c)) = 0;
  if (-1 < (int)uVar11) {
    pcVar6 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)));
    uVar11 = (*pcVar6)(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),(uVar11 & 0x3fffffff) * 0xc);
  }
  return uVar11;
}

/* ref: FUN_00e030f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e030f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe030f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  bool bVar10;
  float10 extraout_ST0;
  undefined8 uVar11;
  
  piVar8 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  uVar3 = (*(uint *)&gen_args[1]);
  iVar7 = *piVar2;
  if ((iVar7 == 9) &&
     ((*((int *)GEN_TOP(piVar2[1])) != 3 ||
      ((((iVar9 = piVar2[2], iVar9 != 4 && (iVar9 != 8)) && (iVar9 != 0xc)) && (iVar9 != 0x10))))))
  {
    iVar7 = 0;
    if ((int)(*(uint *)&gen_args[1]) < 1) {
      return (uint)piVar2;
    }
    do {
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar8)) + 100))))(((int *)GEN_TOP(*piVar8)) GEN_EDX_ARG,iVar7)));
      if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
      }
      pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
      uVar3 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]));
      uVar3 = F_00e030f0(param_1 GEN_EDX_ARG,(int *)&(*(int * PTR32 *)&gen_args[0]),uVar3);
      if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
        uVar3 = 0xffffffff;
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) - 1;
        piVar2 = (*(int * PTR32 *)&gen_args[0]) + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(*(uint *)&gen_args[1]));
    return uVar3;
  }
  switch((unsigned int)(uintptr_t)(iVar7)) {
  case 2: ;
    iVar7 = 0;
    if (0 < (int)(*(uint *)&gen_args[1])) {
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x4c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7);
        uVar4 = F_00da6940(param_1 GEN_EDX_ARG,uVar4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
      return uVar4;
    }
    break;
  case 3: ;
    iVar7 = 0;
    if (0 < (int)(*(uint *)&gen_args[1])) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x3c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))),iVar7);
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)extraout_ST0);
        uVar4 = F_00da6cd0(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[1]));
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
      return uVar4;
    }
    break;
  case 4: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar8)) + 0x24))))(((int *)GEN_TOP(*piVar8)) GEN_EDX_ARG);
    if (uVar3 == 4) {
      piVar2 = ((int *)GEN_TOP(F_00e00500(param_1 GEN_EDX_ARG,4,0)));
      uVar3 = (*(uint *)&gen_args[1]);
      iVar7 = 0;
      if (0 < (int)(*(uint *)&gen_args[1])) {
        do {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x4c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7);
          uVar4 = F_00e00500(param_1 GEN_EDX_ARG,uVar4,(int)uVar4 >> 0x1f);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar3);
        return uVar4;
      }
    }
    else {
      piVar2 = ((int *)GEN_TOP(F_00e00500(param_1 GEN_EDX_ARG,8,0)));
      uVar3 = (*(uint *)&gen_args[1]);
      iVar7 = 0;
      if (0 < (int)(*(uint *)&gen_args[1])) {
        do {
          uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x54))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))),iVar7);
          uVar4 = F_00e00500(param_1 GEN_EDX_ARG,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar3);
        return uVar4;
      }
    }
    break;
  case 5: ;
    iVar7 = 0;
    if (0 < (int)(*(uint *)&gen_args[1])) {
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x34))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7);
        uVar4 = F_00e01840(param_1 GEN_EDX_ARG,uVar4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
      return uVar4;
    }
    break;
  case 6: ;
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar8)) + 0x18))))(((int *)GEN_TOP(*piVar8)) GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG)));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar2;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x80000000));
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      uVar3 = 0;
LAB_00e033b2: ;
      piVar5 = ((int *)GEN_TOP(0x80000000));
    }
    else {
      (*(int *)(gen_frame + 0x30)) = (int)((int)(uintptr_t)piVar2) << 4;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x30)));
      piVar5 = ((int *)GEN_TOP(((int)((*(int *)(gen_frame + 0x30)) + ((*(int *)(gen_frame + 0x30)) >> 0x1f & 0xfU)) >> 4)));
      if (piVar5 == ((int *)GEN_TOP(0x0))) goto LAB_00e033b2;
    }
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar2;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar5;
    if (0 < (int)piVar2) {
      puVar6 = ((undefined4 *)GEN_TOP((uVar3 + 8)));
      piVar5 = piVar2;
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        puVar6 = puVar6 + 4;
        piVar5 = ((int *)GEN_TOP(((int)piVar5 - 1)));
      } while (piVar5 != ((int *)GEN_TOP(0x0)));
    }
    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar8)) + 0x18))))(((int *)GEN_TOP(*piVar8)) GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x30))))(piVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)));
    F_00e02230(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,piVar2);
    (*(int *)(gen_frame + 0x30)) = 0;
    if (0 < (int)piVar2) {
      iVar7 = 0;
      do {
        if (**((int * PTR32 *)GEN_TOP((iVar7 + 8 + (*(uint *)(gen_frame + 0x18))))) != 1) {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x28))))
                                    (((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar7 + (*(uint *)(gen_frame + 0x18))))))));
          if (piVar8 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          iVar9 = 0;
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
          if (0 < (int)uVar3) {
            (*(int * PTR32 *)(gen_frame + 0x24)) = piVar8;
            do {
              (*(int *)(gen_frame + 0x28)) = iVar9;
              uVar3 = F_00e00d90(&(*(int * PTR32 *)(gen_frame + 0x24)));
              if (uVar3 != 0) {
                *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x30))))) = 1;
                break;
              }
              iVar9 = iVar9 + 1;
              uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
            } while (iVar9 < (int)uVar3);
          }
          *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) - 1;
          piVar2 = piVar8 + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar8)))(piVar8 GEN_EDX_ARG,1);
          }
        }
        iVar9 = (*(int *)(gen_frame + 0x30)) + 1;
        iVar7 = iVar7 + 0x10;
        (*(int *)(gen_frame + 0x30)) = iVar9;
      } while (iVar9 < (int)(*(int * PTR32 *)(gen_frame + 0x2c)));
    }
    iVar7 = 0;
    uVar3 = (int)(((int)((*(int *)(gen_frame + 0x4)) + 7U) >> 0x1f & 7U) + ((*(int *)(gen_frame + 0x4)) + 7U & 0xfffffff8)) >> 3;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0x80000000;
    if (0 < (int)uVar3) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0xc)),((int)uVar3 < 0) - 1 & uVar3,1);
    }
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    F_00e01e50(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)));
    F_00da6ae0((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x10)));
    (*(uint *)(gen_frame + 0x10)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
    }
    piVar8 = (*(int * PTR32 *)&gen_args[0]);
    iVar9 = 0;
    if (0 < (int)(*(int * PTR32 *)(gen_frame + 0x2c))) {
      do {
        if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar9))) != '\0') {
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar8)) + 0x28))))
                                     (((int *)GEN_TOP(*piVar8)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar7 + (*(uint *)(gen_frame + 0x18))))))));
          if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
            (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
          }
          F_00e030f0((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(int *)&(*(int * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]));
          if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) - 1;
            piVar2 = (*(int * PTR32 *)&gen_args[0]) + 2;
            *piVar2 = *piVar2 - 1;
            if (*piVar2 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar9 < (int)(*(int * PTR32 *)(gen_frame + 0x2c)));
    }
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP(0x0));
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x20));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x20))) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x18)),(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x20))) << 4);
      return uVar3;
    }
    break;
  case 7: ;
    iVar7 = 0;
    if (0 < (int)(*(uint *)&gen_args[1])) {
      do {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x5c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7)));
        (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar8;
        if (piVar8 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) + 1;
          piVar8[2] = piVar8[2] + 1;
        }
        uVar3 = F_00e018c0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x2c)));
        if (piVar8 != ((int *)GEN_TOP(0x0))) {
          uVar3 = 0xffffffff;
          *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) - 1;
          piVar2 = piVar8 + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar8)))(piVar8 GEN_EDX_ARG,1);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(*(uint *)&gen_args[1]));
      return uVar3;
    }
    break;
  case 8: ;
    if (0 < (int)(*(uint *)&gen_args[1])) {
      iVar7 = 0;
      do {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 100))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7)));
        (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar8;
        if (piVar8 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar8 + 6))) = *((short *)GEN_TOP(((int)piVar8 + 6))) + 1;
          piVar8[2] = piVar8[2] + 1;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0x14))))(piVar8 GEN_EDX_ARG);
        F_00e00500(param_1 GEN_EDX_ARG,uVar3,(int)uVar3 >> 0x1f);
        F_00e030f0(param_1 GEN_EDX_ARG,(int *)&(*(int * PTR32 *)(gen_frame + 0x2c)),uVar3);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x2c));
        if ((*(int * PTR32 *)(gen_frame + 0x2c)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 6))) - 1;
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x2c)) + 2;
          *piVar8 = *piVar8 - 1;
          if (*piVar8 == 0) {
            piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x2c)))))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,1)));
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(*(uint *)&gen_args[1]));
    }
    break;
  case 9: ;
    if (((iVar7 == 9) && (*((int *)GEN_TOP(piVar2[1])) == 3)) &&
       (((iVar7 = piVar2[2], iVar7 == 4 || ((iVar7 == 8 || (iVar7 == 0xc)))) || (iVar7 == 0x10)))) {
      piVar2 = ((int *)GEN_TOP(F_00e19c70(piVar2 GEN_EDX_ARG)));
      uVar3 = (*(uint *)&gen_args[1]);
      piVar8 = piVar2;
      if (piVar2 == (int *)&REFG(undefined, 0x4)) {
        iVar7 = 0;
        piVar8 = ((int *)GEN_TOP(0x3));
        if (0 < (int)(*(uint *)&gen_args[1])) {
          piVar8 = ((int *)GEN_TOP(0x3));
          do {
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x2c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7);
            bVar10 = GEN_ISNAN(*((float *)GEN_TOP((uVar4 + 0xc)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
            if (bVar10 == (bVar10 || *((float *)GEN_TOP((uVar4 + 0xc))) == *(float *)&REFG(undefined, 0x1088114))) {
              piVar8 = (int *)&REFG(undefined, 0x4);
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar3);
        }
        piVar2 = ((int *)GEN_TOP(F_00e00500((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,piVar8,0)));
      }
      iVar7 = 0;
      if (0 < (int)uVar3) {
        do {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x2c))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,iVar7);
          uVar4 = F_00da6e10((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4,piVar8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar3);
        return uVar4;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00e03740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe03740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code * pcVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  undefined4 * puVar11;
  float10 extraout_ST0;
  undefined8 uVar12;
  
  puVar11 = (*(int * PTR32 *)&gen_args[0]);
  piVar6 = ((int *)GEN_TOP(F_00e1cd10((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
  iVar2 = *piVar6;
  (*(int * PTR32 *)&gen_args[0]) = piVar6;
  if ((iVar2 == 9) &&
     ((*((int *)GEN_TOP(piVar6[1])) != 3 ||
      ((((iVar3 = piVar6[2], iVar3 != 4 && (iVar3 != 8)) && (iVar3 != 0xc)) && (iVar3 != 0x10))))))
  {
    piVar6 = ((int *)GEN_TOP(*puVar11));
    uVar4 = puVar11[1];
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x28)));
    piVar7 = ((int *)GEN_TOP((*pcVar5)(piVar6,uVar4)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
      piVar7[2] = piVar7[2] + 1;
    }
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x14)));
    (*(int * PTR32 *)&gen_args[0]) = piVar7;
    uVar8 = (*pcVar5)(piVar7);
    F_00e030f0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),uVar8);
    piVar6 = ((int *)GEN_TOP(0xffffffff));
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
    piVar1 = piVar7 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
      return uVar8;
    }
  }
  else {
    if (iVar2 == 8) {
      piVar6 = ((int *)GEN_TOP(*puVar11));
      uVar4 = puVar11[1];
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x28)));
      piVar7 = ((int *)GEN_TOP((*pcVar5)(piVar6,uVar4)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar7;
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
        piVar7[2] = piVar7[2] + 1;
      }
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x4)) = uVar8;
      F_00e00500(param_1 GEN_EDX_ARG,uVar8,(int)uVar8 >> 0x1f);
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) + 4)));
      if ((*piVar6 == 6) && (uVar8 = F_00e19c80(piVar6 GEN_EDX_ARG), uVar8 == 0)) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[1]));
        piVar6 = ((int *)GEN_TOP(*puVar11));
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 8)));
        piVar6 = ((int *)GEN_TOP((*pcVar5)(piVar6)));
        puVar9 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG)));
        (*(uint *)&gen_args[1]) = *puVar9;
        uVar8 = F_00e19c80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x24))))(puVar9,uVar8)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
        uVar8 = F_00da4190(((undefined *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,uVar8,0);
        F_00e00500(param_1 GEN_EDX_ARG,uVar8,(int)uVar8 >> 0x1f);
      }
      F_00e030f0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x4)));
      piVar6 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
      piVar1 = piVar7 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
        return uVar8;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 2: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x30)));
        uVar8 = (*pcVar5)(piVar6,uVar4);
        uVar8 = F_00da6940(param_1 GEN_EDX_ARG,uVar8);
        return uVar8;
      case 3: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x3c)));
        extraout_ST0 = (*pcVar5)(piVar6,uVar4);
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)extraout_ST0);
        uVar8 = F_00da6cd0(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[1]));
        return uVar8;
      case 4: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x30)));
        uVar12 = (*pcVar5)(piVar6,uVar4);
        uVar8 = F_00e00500(param_1 GEN_EDX_ARG,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
        return uVar8;
      case 5: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x2c)));
        uVar8 = (*pcVar5)(piVar6,uVar4);
        piVar6 = ((int *)GEN_TOP(F_00e01840(param_1 GEN_EDX_ARG,uVar8)));
        break;
      case 6: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x34)));
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*pcVar5)(piVar6,uVar4)));
        if ((*(int * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
          (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
        }
        piVar6 = ((int *)GEN_TOP(F_00e01120(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]))));
        if ((*(int * PTR32 *)&gen_args[0]) != ((undefined4 *)GEN_TOP(0x0))) {
          piVar6 = ((int *)GEN_TOP(0xffffffff));
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) - 1;
          piVar7 = (*(int * PTR32 *)&gen_args[0]) + 2;
          *piVar7 = *piVar7 - 1;
          if (*piVar7 == 0) {
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
            return uVar8;
          }
        }
        break;
      case 7: ;
        piVar6 = ((int *)GEN_TOP(*puVar11));
        uVar4 = puVar11[1];
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x34)));
        puVar11 = ((undefined4 *)GEN_TOP((*pcVar5)(piVar6,uVar4)));
        if (puVar11 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar11 + 6))) = *((short *)GEN_TOP(((int)puVar11 + 6))) + 1;
          puVar11[2] = puVar11[2] + 1;
        }
        (*(uint *)&gen_args[1]) = (uint)puVar11;
        piVar6 = ((int *)GEN_TOP(F_00e018c0(param_1 GEN_EDX_ARG,&(*(uint *)&gen_args[1]))));
        if (puVar11 != ((undefined4 *)GEN_TOP(0x0))) {
          piVar6 = ((int *)GEN_TOP(0xffffffff));
          *((short *)GEN_TOP(((int)puVar11 + 6))) = *((short *)GEN_TOP(((int)puVar11 + 6))) - 1;
          piVar7 = puVar11 + 2;
          *piVar7 = *piVar7 - 1;
          if (*piVar7 == 0) {
            uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar11)))(puVar11 GEN_EDX_ARG,1);
            return uVar8;
          }
        }
        break;
      case 9: ;
        if (((iVar2 == 9) && (*((int *)GEN_TOP(piVar6[1])) == 3)) &&
           (((iVar2 = piVar6[2], iVar2 == 4 || ((iVar2 == 8 || (iVar2 == 0xc)))) || (iVar2 == 0x10))
           )) {
          uVar8 = F_00e19c70(piVar6 GEN_EDX_ARG);
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar11)) + 0x38))))(((int *)GEN_TOP(*puVar11)) GEN_EDX_ARG,puVar11[1],uVar8);
          uVar8 = F_00da6e10(param_1 GEN_EDX_ARG,uVar10,uVar8);
          return uVar8;
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00e03a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe03a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x24))))(piVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x20)) = uVar3;
  F_00e02230(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar3);
  iVar7 = *((int *)GEN_TOP(((int)this + 0x40))) + *((int *)GEN_TOP(((*(int *)&gen_args[1]) + 8)));
  uVar3 = (int)(((int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 7) >> 0x1f & 7U) + ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 7 & 0xfffffff8)) >> 3;
  F_00da6ae0((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,iVar7,uVar3);
  F_00e01d40(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar7,uVar3);
  if (-1 < (int)(uVar3 | 0x80000000)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),iVar7,uVar3 & 0x3fffffff);
  }
  uVar3 = (*(uint *)(gen_frame + 0x20));
  iVar7 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  if ((*(uint *)(gen_frame + 0x20)) == 0) {
    uVar4 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(uint *)(gen_frame + 0x20)) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar4 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar5 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar5 != 0) goto LAB_00e03b40;
  }
  iVar5 = ((int)0x80000000);
LAB_00e03b40: ;
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  (*(int *)(gen_frame + 0x14)) = iVar5;
  if (0 < (int)uVar3) {
    puVar6 = ((undefined4 *)GEN_TOP((uVar4 + 8)));
    uVar4 = uVar3;
    do {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x30))))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
  if (0 < (int)uVar3) {
    iVar5 = 0;
    do {
      puVar6 = ((undefined4 *)GEN_TOP((iVar5 + (*(uint *)(gen_frame + 0xc)))));
      if (*((char *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + iVar7))) != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 0xc))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),*puVar6);
        F_00e03740((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),(uint)puVar6);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x20)));
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) << 4);
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return uVar3;
}

/* ref: FUN_00e03c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03c20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe03c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00e03c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e03c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe03c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x14)))) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar6 * 4)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(*piVar2));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
          piVar1 = puVar3 + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_FWD,1);
          }
        }
        pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,piVar2,4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x14))));
  }
  iVar6 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar6) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar6 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar5 = F_00e00be0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  return uVar5;
}

/* ref: FUN_00e03cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe03cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_00da68d0(this GEN_EDX_FWD,param_1,0);
  uVar2 = param_1 >> 8;
  param_1 = uVar2 << 8;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1);
  param_1 = uVar2 << 8;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x4c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x78))) = *((undefined1 *)GEN_TOP((param_3 + 2)));
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),0);
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),0);
  F_00e008b0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),0,0,0);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x48))) & 0x3fffffff;
  if (uVar2 < 0x200) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x100 || uVar3 < 0x200) {
      uVar3 = 0x200;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),(int)this + 0x40,uVar3,1);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x54))) & 0x3fffffff;
  if (uVar2 < 0x80) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x40 || uVar3 < 0x80) {
      uVar3 = 0x80;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,uVar3,0x10);
  }
  if (*((uint *)GEN_TOP(((int)this + 0x50))) == (*((uint *)GEN_TOP(((int)this + 0x54))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,0x10);
  }
  puVar4 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) * 0x10 + *piVar1)));
  *((int *)GEN_TOP(((int)this + 0x50))) = *((int *)GEN_TOP(((int)this + 0x50))) + 1;
  puVar4[2] = 0xffffffff;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[3] = 0;
  return (uint)this;
}

/* ref: FUN_00e03e60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e03e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe03e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  F_00e03c50(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*((undefined4 *)GEN_TOP(((int)this + 0x4c))),iVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*((undefined4 *)GEN_TOP(((int)this + 0x40))),uVar2 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  F_00e00be0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG);
  uVar2 = F_00da6900(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00e03f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe03f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00e01180(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0xc)),param_1);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if ((*(int * PTR32 *)(gen_frame + 0xc)) == ((int *)GEN_TOP(0x0))) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 4))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  }
  uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  F_00da6940(this GEN_EDX_ARG,8);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG)));
  uVar5 = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    uVar5 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar5,0xffffffff);
  }
  F_00e00500(this GEN_EDX_ARG,uVar5,(int)uVar5 >> 0x1f);
  F_00e03a70(this GEN_EDX_ARG,param_1,uVar3 * 0x10 + iVar1);
  uVar5 = 0xffffffff;
  *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0xc)) + 6))) - 1;
  piVar4 = (*(int * PTR32 *)(gen_frame + 0xc)) + 2;
  *piVar4 = *piVar4 - 1;
  if (*piVar4 == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0xc)))))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
  }
  return uVar5;
}

/* ref: FUN_00e03fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e03fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe03fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = this;
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  F_00da6c50(this GEN_EDX_ARG,0xcab00d1e);
  F_00da6c50(this GEN_EDX_ARG,0xd011face);
  F_00da6940(this GEN_EDX_ARG,2);
  F_00da6940(this GEN_EDX_ARG,6);
  F_00e02d20(this GEN_EDX_ARG,piVar2,param_1,0);
  iVar4 = 1;
  if (1 < *((int *)GEN_TOP(((int)this + 0x50)))) {
    param_1 = ((undefined4 *)GEN_TOP(0x10));
    do {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x4c))) + (int)param_1;
      if (*((int *)GEN_TOP((iVar3 + 0xc))) != -1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x28))))(piVar2 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),iVar3);
        F_00e03f00(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) - 1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0)))))((*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
          }
        }
      }
      param_1 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x10)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x50))));
  }
  F_00da6940(this GEN_EDX_ARG,0xe);
  return 0;
}

/* ref: hkObjectResource::vf4 */
GEN_LIB GEN_NOFRAME unsigned int F_00e04100(void)
{
  GEN_ENTER(0xe04100u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e04110 */
GEN_LIB GEN_FRAME uint F_00e04110(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x44, 12, 4);
  int iVar1;
  uint uVar2;
  
  if (param_1 == ((int *)GEN_TOP(0x0))) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d460));
    }
    return 1;
  }
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  iVar1 = *param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((iVar1 != 0x57e0e057) || (param_1[1] != 0x10c0c010)) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d424));
    }
    return 1;
  }
  if ((char)param_1[4] != (char)REFG(undefined4, 0x135491c)) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d3d0))
      ;
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x11))) != (char)((uint)REFG(undefined4, 0x135491c) >> 8)) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d380));
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x12))) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 2))) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = 
      ((char *)REFP(0x114d320));
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x13))) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 3))) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = 
      ((char *)REFP(0x114d2b8))
      ;
    }
    return 1;
  }
  if (((uint)param_1 & 3) != 0) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d288));
    }
    return 1;
  }
  if ((char)param_1[10] == -1) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d268));
    }
    return 1;
  }
  uVar2 = F_00e05450();
  uVar2 = F_00da0d20(param_1 + 10,uVar2);
  if (uVar2 != 0) {
    if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_2 = ((char *)REFP(0x114d240));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00e04270 */
GEN_LIB GEN_FRAME uint F_00e04270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
  local_18 = 0;
  local_14 = 0;
  if (iVar1 < 1) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x40;
  }
  iVar2 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < iVar1) {
    piVar3 = ((int *)GEN_TOP((param_1 + 0x54)));
    iVar5 = (iVar1 - 2U >> 1) + 1;
    iVar2 = iVar5 * 2;
    do {
      iVar4 = iVar4 + (piVar3[-0xc] - piVar3[-0xd]) / 0xc;
      local_10 = local_10 + ((piVar3[-0xf] + piVar3[-10]) - piVar3[-0xc]);
      local_8 = local_8 + (*piVar3 - piVar3[-1]) / 0xc;
      local_c = local_c + ((piVar3[-3] + piVar3[2]) - *piVar3);
      piVar3 = piVar3 + 0x18;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar2 * 0x30;
    iVar5 = param_1 + iVar2;
    local_14 = (*((int *)GEN_TOP((param_1 + 0x24 + iVar2))) - *((int *)GEN_TOP((param_1 + 0x20 + iVar2)))) / 0xc;
    local_18 = (*((int *)GEN_TOP((iVar5 + 0x2c))) + *((int *)GEN_TOP((iVar5 + 0x18)))) - *((int *)GEN_TOP((iVar5 + 0x24)));
  }
  return local_c + (local_8 + (iVar1 * 3 + 3) * 2 + iVar4 + local_14) * 8 + local_10 + local_18;
}

/* ref: FUN_00e04370 */
GEN_LIB GEN_FRAME uint F_00e04370(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((((param_1 != ((int *)GEN_TOP(0x0))) && (0x3f < param_2)) && (*param_1 == 0x57e0e057)) &&
     (((param_1[1] == 0x10c0c010 && (0 < param_1[5])) &&
      ((param_1[5] * 0x30 + 0x40 <= param_2 &&
       (param_1[param_1[8] * 0xc + 0x15] + param_1[9] <= param_2)))))) {
    return (int)param_1 + param_1[param_1[8] * 0xc + 0x15] + param_1[9];
  }
  return 0;
}

/* ref: FUN_00e043d0 */
GEN_LIB GEN_FRAME uint F_00e043d0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe043d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  if (*((int *)GEN_TOP((in_ecx + 0x18 + in_eax * 0x30))) != 0) {
    return *((int *)GEN_TOP((in_ecx + 0x14 + in_eax * 0x30))) + param_3 + param_4;
  }
  return 0;
}

/* ref: FUN_00e043f0 */
GEN_LIB GEN_FRAME uint F_00e043f0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe043f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  F_00da1010(in_edi,in_esi,0x13);
  *((undefined1 *)GEN_TOP((in_edi + 0x13))) = *((undefined1 *)GEN_TOP((in_esi + 0x13)));
  *((int *)GEN_TOP((in_edi + 0x14))) = param_3;
  *((undefined4 *)GEN_TOP((in_edi + 0x18))) = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
  *((undefined4 *)GEN_TOP((in_edi + 0x1c))) = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
  *((undefined4 *)GEN_TOP((in_edi + 0x20))) = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
  iVar1 = param_3 + param_5;
  *((undefined4 *)GEN_TOP((in_edi + 0x24))) = *((undefined4 *)GEN_TOP((in_esi + 0x18)));
  *((int *)GEN_TOP((in_edi + 0x28))) =
       (*((int *)GEN_TOP((in_esi + 0x18))) - *((int *)GEN_TOP((in_esi + 0x24)))) + *((int *)GEN_TOP((in_esi + 0x28)));
  *((int *)GEN_TOP((in_edi + 0x2c))) =
       (*((int *)GEN_TOP((in_esi + 0x18))) - *((int *)GEN_TOP((in_esi + 0x24)))) + *((int *)GEN_TOP((in_esi + 0x2c)));
  iVar3 = *((int *)GEN_TOP((in_esi + 0x14))) + param_4;
  F_00da1010(iVar1,iVar3,*((undefined4 *)GEN_TOP((in_esi + 0x18))));
  F_00da1010(*((int *)GEN_TOP((in_edi + 0x24))) + iVar1,*((int *)GEN_TOP((in_esi + 0x24))) + iVar3,
               *((int *)GEN_TOP((in_esi + 0x28))) - *((int *)GEN_TOP((in_esi + 0x24))));
  uVar2 = F_00da1010(*((int *)GEN_TOP((in_edi + 0x28))) + iVar1,*((int *)GEN_TOP((in_esi + 0x28))) + iVar3,
                       *((int *)GEN_TOP((in_esi + 0x2c))) - *((int *)GEN_TOP((in_esi + 0x28))));
  return uVar2;
}

/* ref: FUN_00e04490 */
GEN_LIB GEN_FRAME unsigned int F_00e04490(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe04490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((in_edi + 0x1c))) - *((int *)GEN_TOP((in_edi + 0x18)));
  iVar2 = *((int *)GEN_TOP((in_edi + 0x14))) + *((int *)GEN_TOP((in_edi + 0x18))) + param_4;
  iVar3 = 0;
  if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
    do {
      iVar1 = *((int *)GEN_TOP((iVar2 + iVar3 * 4)));
      if (iVar1 != -1) {
        *((int *)GEN_TOP((iVar1 + in_ecx + in_eax))) = *((int *)GEN_TOP((iVar2 + 4 + iVar3 * 4))) + in_ecx + in_eax;
      }
      iVar1 = *((int *)GEN_TOP((in_edi + 0x1c))) - *((int *)GEN_TOP((in_edi + 0x18)));
      iVar3 = iVar3 + 2;
    } while (iVar3 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e044f0 */
GEN_LIB GEN_FRAME unsigned int F_00e044f0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe044f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((in_eax + 0x14)));
  iVar2 = *((int *)GEN_TOP((in_esi + 0x20))) - *((int *)GEN_TOP((in_esi + 0x1c)));
  iVar4 = 0;
  if (0 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x14))) + *((int *)GEN_TOP((in_esi + 0x1c))) + param_3 + 8)));
    do {
      if (piVar3[-2] != -1) {
        if (*((int *)GEN_TOP((param_5 + 0x18 + piVar3[-1] * 0x30))) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *((int *)GEN_TOP((param_5 + 0x14 + piVar3[-1] * 0x30))) + *piVar3 + param_4;
        }
        *((int *)GEN_TOP((piVar3[-2] + iVar1 + param_4))) = iVar2;
      }
      iVar2 = *((int *)GEN_TOP((in_esi + 0x20))) - *((int *)GEN_TOP((in_esi + 0x1c)));
      iVar4 = iVar4 + 3;
      piVar3 = piVar3 + 3;
    } while (iVar4 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e04570 */
GEN_LIB GEN_FRAME unsigned int F_00e04570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe04570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * this;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x40;
  }
  local_8 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    piVar2 = ((int *)GEN_TOP((iVar1 + 0x24)));
    do {
      iVar1 = *piVar2 - piVar2[-1];
      if (iVar1 != 0) {
        iVar3 = piVar2[-4] + piVar2[-1] + param_1;
        iVar4 = 0;
        if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
          do {
            iVar1 = *((int *)GEN_TOP((iVar3 + iVar4 * 4)));
            if ((iVar1 != -1) && (this = *((undefined * PTR32 *)GEN_TOP((iVar3 + 8 + iVar4 * 4))), this != ((undefined *)GEN_TOP(0x0)))) {
              F_00dc2610(this GEN_EDX_ARG,piVar2[-4] + iVar1 + param_1);
            }
            iVar4 = iVar4 + 3;
          } while (iVar4 < (int)((*piVar2 - piVar2[-1]) + (*piVar2 - piVar2[-1] >> 0x1f & 3U)) >> 2)
          ;
        }
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 0xc;
    } while (local_8 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  return 0;
}

/* ref: FUN_00e04610 */
GEN_LIB GEN_FRAME unsigned int F_00e04610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe04610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this;
  int iVar2;
  int local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x18)))) {
    param_1 = 0;
    do {
      this = ((undefined *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x14))) + param_1)));
      iVar2 = *((int *)GEN_TOP(((int)this + 0x14))) + iVar1;
      F_00e1e080(this GEN_EDX_ARG,iVar2,param_2);
      F_00e1e120(this GEN_EDX_ARG,iVar2,param_3);
      param_1 = param_1 + 0x30;
      local_8 = local_8 + 1;
    } while (local_8 < *((int *)GEN_TOP((iVar1 + 0x18))));
  }
  return 0;
}

/* ref: FUN_00e04670 */
GEN_LIB GEN_FRAME uint F_00e04670(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe04670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) < 1) {
    this = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this = ((undefined *)GEN_TOP((param_1 + 0x40)));
  }
  iVar2 = 0;
  uVar1 = param_1;
  if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
    do {
      iVar3 = *((int *)GEN_TOP(((int)this + 0x14))) + param_1;
      F_00e1e080(this GEN_EDX_ARG,iVar3,param_2);
      uVar1 = F_00e1e120(this GEN_EDX_ARG,iVar3,param_3);
      iVar2 = iVar2 + 1;
      this = ((undefined *)GEN_TOP(((int)this + 0x30)));
    } while (iVar2 < *((int *)GEN_TOP((param_1 + 0x14))));
  }
  return uVar1;
}

/* ref: FUN_00e046c0 */
GEN_LIB GEN_FRAME unsigned int F_00e046c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(int * param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xe046c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(int * param_9 = (int *)(uintptr_t)gen_a8;)
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined * this;
  uint uVar9;
  int iVar10;
  int * piVar11;
  int local_10;
  
  iVar4 = *((int *)GEN_TOP((param_2 + 0x14)));
  iVar5 = *((int *)GEN_TOP((param_4 + 4)));
  iVar6 = *((int *)GEN_TOP((param_1 + 0x24))) - *((int *)GEN_TOP((param_1 + 0x20)));
  iVar10 = *((int *)GEN_TOP((param_1 + 0x14))) + *((int *)GEN_TOP((param_1 + 0x20))) + param_3;
  local_10 = 0;
  if (0 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
    piVar11 = ((int *)GEN_TOP((iVar10 + 8)));
    param_3 = 8;
    do {
      iVar6 = piVar11[-2];
      if (iVar6 != -1) {
        if (*((int *)GEN_TOP((param_5 + 0x18 + piVar11[-1] * 0x30))) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *((int *)GEN_TOP((param_5 + 0x14 + piVar11[-1] * 0x30))) + param_4 + *piVar11;
        }
        iVar1 = iVar6 + iVar4 + param_4;
        puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_7 + 0x10))))(param_7 GEN_EDX_ARG,iVar1,iVar7)));
        if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
          if (param_6 == ((int *)GEN_TOP(0x0))) {
            iVar6 = *((int *)GEN_TOP((param_2 + 0x20))) + param_4 + *((int *)GEN_TOP((param_2 + 0x14)));
            *((undefined4 *)GEN_TOP(((int)piVar11 + iVar6 + (-4 - iVar10)))) = 0;
            *((undefined4 * PTR32 *)GEN_TOP((param_3 + iVar6))) = puVar8;
          }
          else {
            iVar7 = *((int *)GEN_TOP((param_2 + 0x14)));
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
            }
            puVar2 = ((undefined4 *)GEN_TOP((*param_6 + param_6[1] * 8)));
            if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
              *puVar2 = puVar8;
              puVar2[1] = iVar7 + iVar6;
            }
            param_6[1] = param_6[1] + 1;
            if (iVar1 == iVar5 + param_4) {
              *((undefined4 * PTR32 *)GEN_TOP((param_4 + 0x20))) = puVar8;
            }
          }
          if (((param_8 != ((int *)GEN_TOP(0x0))) &&
              (this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_8 + 0x10))))(param_8 GEN_EDX_ARG,*puVar8))), this != ((undefined *)GEN_TOP(0x0))))
             && (uVar9 = F_00d92c00(this GEN_EDX_ARG,((char *)REFP(0x114d4a8))), uVar9 != 0)) {
            if (param_9[1] == (param_9[2] & 0x3fffffffU)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_9,8);
            }
            piVar3 = ((int *)GEN_TOP((*param_9 + param_9[1] * 8)));
            *piVar3 = iVar1;
            piVar3[1] = (int)this;
            param_9[1] = param_9[1] + 1;
          }
        }
      }
      iVar6 = *((int *)GEN_TOP((param_1 + 0x24))) - *((int *)GEN_TOP((param_1 + 0x20)));
      param_3 = param_3 + 0xc;
      local_10 = local_10 + 3;
      piVar11 = piVar11 + 3;
    } while (local_10 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  }
  return 0;
}

/* ref: FUN_00e04870 */
GEN_LIB GEN_FRAME uint F_00e04870(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe04870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  
  puVar2 = param_3;
  iVar7 = param_1;
  if (*((int *)GEN_TOP((param_1 + 0x14))) < 1) {
    (*(int *)(gen_frame + 0x18)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = param_1 + 0x40;
  }
  *param_3 = 0xd5109142;
  if (param_3 + 5 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar4 = *((uint *)GEN_TOP((param_1 + 0x14)));
    param_3[6] = uVar4;
    param_3[5] = param_3 + 0xc;
    param_3[7] = uVar4 | 0x80000000;
  }
  piVar9 = ((int *)GEN_TOP((param_1 + 0x14)));
  param_1 = (*piVar9 * 3 + 3) * 0x10;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *piVar9) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
    iVar8 = (*(int *)(gen_frame + 0x18));
    do {
      (*(int *)(gen_frame + 0xc)) = param_3[5] + (int)(*(int * PTR32 *)(gen_frame + 0x10));
      F_00e043f0(iVar8,param_3[5] + (int)(*(int * PTR32 *)(gen_frame + 0x10)),param_1,iVar7,param_3);
      if ((*(int *)(gen_frame + 0x14)) == *((int *)GEN_TOP((iVar7 + 0x18)))) {
        param_3[1] = *((int *)GEN_TOP((iVar7 + 0x1c))) + param_1;
      }
      F_00e04490(param_3,param_1,iVar8,iVar7);
      param_1 = param_1 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x2c)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 0xc;
      iVar3 = (*(int *)(gen_frame + 0x14)) + 1;
      iVar8 = iVar8 + 0x30;
      (*(int *)(gen_frame + 0x14)) = iVar3;
    } while (iVar3 < *((int *)GEN_TOP((iVar7 + 0x14))));
  }
  param_3 = ((undefined4 *)GEN_TOP(0x0));
  if (0 < *((int *)GEN_TOP((iVar7 + 0x14)))) {
    (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0x1c)));
    iVar8 = -0x1c - (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0xc)) = iVar8;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x10))[1] != *(*(int * PTR32 *)(gen_frame + 0x10))) {
        F_00e044f0((int)(*(int * PTR32 *)(gen_frame + 0x10)) + puVar2[5] + iVar8,(*(int * PTR32 *)(gen_frame + 0x10)) - 7,iVar7,puVar2,puVar2[5]);
        iVar8 = (*(int *)(gen_frame + 0xc));
      }
      param_3 = ((undefined4 *)GEN_TOP(((int)param_3 + 1)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 0xc;
    } while ((int)param_3 < *((int *)GEN_TOP((iVar7 + 0x14))));
  }
  if (puVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    puVar2[2] = param_1 + (int)puVar2;
    puVar2[3] = 0;
    puVar2[4] = param_4 - param_1 | 0x80000000;
  }
  uVar4 = param_5;
  if (param_5 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  puVar2[8] = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  param_1 = 0;
  if (0 < *((int *)GEN_TOP((iVar7 + 0x14)))) {
    piVar9 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0x20)));
    iVar8 = -0x20 - (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0xc)) = iVar8;
    do {
      if (piVar9[1] != *piVar9) {
        F_00e046c0(piVar9 - 8,(int)piVar9 + puVar2[5] + iVar8,iVar7,puVar2,puVar2[5],puVar2 + 2,
                     uVar4,uVar5,&(*(int *)(gen_frame + 0x0)));
        iVar8 = (*(int *)(gen_frame + 0xc));
      }
      param_1 = param_1 + 1;
      piVar9 = piVar9 + 0xc;
    } while (param_1 < *((int *)GEN_TOP((iVar7 + 0x14))));
  }
  iVar7 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar7 * 8)));
      puVar6 = ((undefined4 *)GEN_TOP(F_00d92c00(*((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4 + iVar7 * 8))) GEN_EDX_ARG,((char *)REFP(0x114d4a8)))));
      ((code *)*((gen_code32 *)GEN_TOP(*puVar6)))(uVar1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x4)));
  }
  iVar7 = puVar2[1];
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 8);
  }
  return iVar7 + (int)puVar2;
}

/* ref: FUN_00e04ab0 */
GEN_LIB GEN_FRAME uint F_00e04ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe04ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int in_edi;
  int iVar5;
  
  iVar4 = 0;
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_4 = 0;
  }
  uVar2 = F_00e04110(param_1,param_4);
  if (uVar2 == 0) {
    iVar5 = *((int *)GEN_TOP((param_1 + 0x14)));
    if (iVar5 < 1) {
      param_4 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      param_4 = ((undefined4 *)GEN_TOP((param_1 + 0x40)));
    }
    if ((*((uint *)GEN_TOP((param_1 + 0x38))) & 1) == 0) {
      *((uint *)GEN_TOP((param_1 + 0x38))) = *((uint *)GEN_TOP((param_1 + 0x38))) | 1;
      (*(int *)(gen_frame + 0x10)) = -1;
      in_edi = (int)param_4;
      if (0 < iVar5) {
        do {
          (*(uint *)(gen_frame + 0x14)) = *((int *)GEN_TOP((in_edi + 0x14)));
          F_00da0d20(in_edi,((char *)REFP(0x114ce20)));
          if (iVar4 == *((int *)GEN_TOP((param_1 + 0x18)))) {
            (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP((param_1 + 0x1c))) + (*(uint *)(gen_frame + 0x14));
          }
          F_00e04490(param_1,(*(uint *)(gen_frame + 0x14)),in_edi,param_1);
          iVar4 = iVar4 + 1;
          in_edi = in_edi + 0x30;
        } while (iVar4 < *((int *)GEN_TOP((param_1 + 0x14))));
      }
      iVar5 = 0;
      iVar4 = (int)param_4;
      if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
        do {
          if (*((int *)GEN_TOP((iVar4 + 0x20))) != *((int *)GEN_TOP((iVar4 + 0x1c)))) {
            F_00e044f0(iVar4,iVar4,param_1,param_1,param_4);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar5 < *((int *)GEN_TOP((param_1 + 0x14))));
      }
      uVar2 = param_3;
      if (param_3 == 0) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
      }
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
      iVar5 = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar2;
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
      iVar4 = (int)param_4;
      if (0 < *((int *)GEN_TOP((param_1 + 0x14)))) {
        do {
          if (*((int *)GEN_TOP((iVar4 + 0x24))) != *((int *)GEN_TOP((iVar4 + 0x20)))) {
            F_00e046c0(iVar4,iVar4,param_1,param_1,param_4,0,(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x0)));
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar5 < *((int *)GEN_TOP((param_1 + 0x14))));
      }
      iVar4 = 0;
      if (0 < (*(int *)(gen_frame + 0x4))) {
        do {
          uVar1 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 8)));
          puVar3 = ((undefined4 *)GEN_TOP(F_00d92c00(*((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4 + iVar4 * 8))) GEN_EDX_ARG,((char *)REFP(0x114d4a8)))));
          ((code *)*((gen_code32 *)GEN_TOP(*puVar3)))(uVar1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (*(int *)(gen_frame + 0x4)));
      }
      uVar2 = param_1 + (*(int *)(gen_frame + 0x10));
      (*(int *)(gen_frame + 0x4)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 8);
      }
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00e04c50 */
GEN_LIB GEN_FRAME uint F_00e04c50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe04c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = F_00e04270(param_1,param_2);
  if (0 < (int)uVar2) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),((int)uVar2 < 0) - 1 & uVar2,1);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  uVar2 = F_00e04870(param_1,param_2,(*(int *)(gen_frame + 0x0)),uVar2,param_3);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x1c)));
  *(undefined2 *)(puVar4 + 1) = 0x1c;
  uVar1 = **((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x20)));
  *((undefined2 *)GEN_TOP(((int)puVar4 + 6))) = 1;
  *puVar4 = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0x80000000;
  puVar4[5] = uVar2;
  puVar4[6] = uVar1;
  F_00e04ea0(puVar4 + 2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return (uint)puVar4;
}

/* ref: FUN_00e04d40 */
GEN_LIB GEN_FRAME uint F_00e04d40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  
  *param_1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(param_1[2]));
  if (puVar2 < puVar2 + param_1[3] * 2) {
    do {
      F_00dc2610(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG,puVar2[1] + (int)param_1);
      puVar2 = puVar2 + 2;
    } while (puVar2 < ((undefined4 *)GEN_TOP((param_1[2] + param_1[3] * 8))));
  }
  uVar1 = param_1[7];
  param_1[6] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),param_1[5],(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  uVar1 = param_1[4];
  param_1[3] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[2],uVar1 * 8);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  return uVar1;
}

/* ref: FUN_00e04df0 */
GEN_LIB GEN_FRAME uint F_00e04df0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e04e00 */
GEN_LIB GEN_FRAME uint F_00e04e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e04e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe04e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe04e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04e80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00e04ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe04ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e04ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04ed0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e04f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe04f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e04f20 */
GEN_LIB GEN_FRAME uint F_00e04f20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe04f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e04f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe04f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e04f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe04f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e04f90 */
GEN_LIB GEN_FRAME unsigned int F_00e04f90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe04f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e04fd0 */
GEN_LIB GEN_FRAME uint F_00e04fd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe04fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e05000 */
GEN_LIB GEN_FRAME uint F_00e05000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe05000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e05030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05030(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05030u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e050c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e050c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe050c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e05150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05150u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e05190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe05190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_3;
  F_00e04ea0(((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e051e0(void)
{
  GEN_ENTER(0xe051e0u, 0u, 0u, 0u, 0u);
  return 0x114d494;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e051f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe051f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  char * pcVar4;
  
  iVar1 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[0]) != 0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x18));
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,iVar1)));
    if (((uVar3 != 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) &&
       (pcVar4 = ((char *)GEN_TOP(F_00d92650(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,uVar3))), *pcVar4 == '\0')) {
      return 0;
    }
  }
  return *(uint *)(this + 0x14);
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e05270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe05270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e04610(*(undefined4 *)(this + 8),param_2,param_1);
  return;
}

/* ref: FUN_00e05290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05290u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e052d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e052d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe052d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e05350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05350(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e052d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: LOCALNAMESPACE::hkNativeResource::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e05380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x14) != 0) {
    F_00e04d40(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}

/* ref: FUN_00e053b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e053b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe053b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114d474));
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    F_00e04d40(*((undefined4 *)GEN_TOP(((int)this + 8))),*((undefined4 *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
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

/* ref: LOCALNAMESPACE::hkNativeResource::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05410(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe05410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e053b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e05450 */
GEN_LIB GEN_NOFRAME uint F_00e05450(void)
{
  GEN_ENTER(0xe05450u, 0u, 0u, 0u, 0u);
  return 0x113cdcc;
}

/* ref: FUN_00e05460 */
GEN_LIB GEN_FRAME uint F_00e05460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
  char * pcVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_0105a6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
  F_0105a6d0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_3,param_4);
  pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x13)))));
  if (*pcVar1 != '\0') {
    pcVar1 = ((char *)GEN_TOP(F_0105a720(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x13)))));
    if (*pcVar1 != '\0') {
      this = ((undefined *)GEN_TOP(F_0105a8f0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG)));
      uVar2 = F_00da6030(this GEN_EDX_ARG);
      uVar3 = F_0105a740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = F_0105a740(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      pcVar1 = ((char *)GEN_TOP(F_00da1010(uVar4,uVar3,uVar2)));
    }
  }
  return (uint)pcVar1;
}

/* ref: FUN_00e054e0 */
GEN_LIB GEN_FRAME uint F_00e054e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe054e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  uVar1 = F_00d929c0(param_3 GEN_EDX_ARG);
  F_00dba580(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar1,uVar4);
  iVar3 = 0;
  uVar1 = F_00d927e0(param_3 GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    do {
      puVar2 = ((undefined4 *)GEN_TOP(F_00d92800(param_3 GEN_EDX_ARG,iVar3)));
      uVar1 = F_00d928d0(param_2 GEN_EDX_ARG,*puVar2);
      if (uVar1 == 0) {
        F_00dba4e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)puVar2 + 0x12))),0);
        F_00d92b10(param_3 GEN_EDX_ARG,iVar3,((undefined1 *)(gen_frame + 0x0)));
      }
      iVar3 = iVar3 + 1;
      uVar1 = F_00d927e0(param_3 GEN_EDX_ARG);
    } while (iVar3 < (int)uVar1);
  }
  uVar1 = F_00dba640(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e05570 */
GEN_LIB GEN_FRAME uint F_00e05570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05570u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  F_0105ae50((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00e05630(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  iVar1 = *piVar2;
  iVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  for (; iVar1 != 0; iVar1 = piVar2[iVar1]) {
    F_00e05b60(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1,&(*(undefined4 *)(gen_frame + 0x0)),1);
    iVar1 = iVar4 + 1;
    iVar4 = iVar4 + 1;
  }
  uVar3 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar3;
}

/* ref: FUN_00e05630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e05630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe05630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = REFG(undefined4, 0x135491c);
  return (uint)in_ecx;
}

/* ref: FUN_00e05640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e05640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe05640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

