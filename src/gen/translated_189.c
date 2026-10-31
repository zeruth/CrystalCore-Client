#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::IteratorNotEquals_00e43d40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e43d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::PairConstruct_00e43d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe43d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ConstructCopy0x54 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e43db0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Global::ConstructCopy0x28 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e43dd0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: Global::PairCopy_00e43e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::AssignFromString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  F_0042cc20(this GEN_EDX_FWD,puVar1,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: Global::TreeIteratorIncrement_00e43ee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::~OStringStream */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4))) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this - 0x4c))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this - 0x4c))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x50))) + 4)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((uVar1 - 0x50) + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar1;
}

/* ref: FUN_00e43f40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e43f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::VectorBegin_00e43f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::VectorEnd_00e43f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::VectorBegin2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::VectorEnd2_00e43f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::VectorBegin3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43f90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::VectorEnd3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43fa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe43fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeRotateLeft_00e43fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e43fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe43fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeRotateLeft2_00e44010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::IteratorConstruct_00e44070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::StringBufConstruct */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44080(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  F_00479880(param_1 GEN_EDX_FWD);
  uVar1 = 0;
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  param_1[0x10] = uVar1;
  param_1[0xf] = 0;
  return (uint)param_1;
}

/* ref: Global::IteratorConstruct2_00e440d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e440d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe440d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e440e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e440e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe440e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e440f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e440f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe440f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44100 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e44100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::IteratorNotEqual_00e441e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e441e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe441e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::IteratorNotEqual2_00e44200 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e44200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::AllocatorConstruct0x54 */
GEN_LIB GEN_FRAME unsigned int F_00e44220(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Global::AllocatorConstruct0x28 */
GEN_LIB GEN_FRAME uint F_00e44240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e442a0 */
GEN_LIB GEN_FRAME uint F_00e442a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00e43be0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: Global::CopyPointerRange_00e442c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e442c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: Global::CopyPointerRange2_00e442f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e442f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe442f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: Global::CopyPointerRange3_00e44320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e44320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: Global::TreeInsertNode_00e44350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe44350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4454d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4454d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e44580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e42820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::PairIteratorBool_00e44590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e445b0 */
GEN_LIB GEN_FRAME uint F_00e445b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe445b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::PairCopy2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e445c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe445c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e44600 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e44600(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e44620 */
GEN_LIB GEN_FRAME unsigned int F_00e44620(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e44640 */
GEN_LIB GEN_FRAME uint F_00e44640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe44640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined8 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e44680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = ((undefined *)GEN_TOP(((int)this + 0x50)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *((int *)GEN_TOP((*(int *)this + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: Global::TreeBegin_00e446d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e446d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe446d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd_00e446f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e446f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe446f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEraseNode_00e44700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e42340(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4481a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e41fe0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e41fc0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e4481a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43fb0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e43350(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e43fb0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e448d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43350(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e448d8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e43fb0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e43350(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeBegin2_00e44950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd2_00e44970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44970(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEraseNode_00e44980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e423a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e44a9a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e420c0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e420a0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e44a9a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e44010(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e433f0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e44010(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e44b58: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e433f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e44b58;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e44010(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e433f0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e44bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44bd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe44bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * piVar1;
  
  piVar1 = param_1 - 0x50;
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)piVar1 + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *(undefined * PTR32 * PTR32 *)(param_1 - 0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(param_1 - 0x4c GEN_EDX_FWD);
  F_00479ae0(param_1 - 0x4c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)(param_1 - 0x50) + 4))) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(param_1);
  if ((param_2 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00e44c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe44c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44ca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e44ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00e44cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe44d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00e44dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e44f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = param_1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: Global::TreeFreeSubtree */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e44fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe44fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e44fe0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: Global::TreeFreeSubtree2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e45020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e45020(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: Global::TreeInsertUniqueNode_00e45060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e44350(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e42820(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e44350(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeFindIf */
GEN_LIB GEN_FRAME uint F_00e45140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe45140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  piVar3 = param_2;
  while ((piVar3 != param_3 && (uVar5 = (*param_4)(piVar3[3],piVar3[4]), (char)uVar5 == '\0'))) {
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        piVar3 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar3 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(piVar3[1]));
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e451f0 */
GEN_LIB GEN_FRAME unsigned int F_00e451f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe451f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: Global::UninitCopy0x54Entries */
GEN_LIB GEN_FRAME unsigned int F_00e45210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe45210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x15) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x15;
  }
  return 0;
}

/* ref: Global::UninitCopy0x28Entries */
GEN_LIB GEN_FRAME unsigned int F_00e45250(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe45250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
    }
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: Global::VectorTidy_00e452a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e452a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe452a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::VectorClear_00e452d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e452d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe452d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: Global::TreeFindIntKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe45300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: Global::VectorReserveGrow_00e45370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44dd0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44dd0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorReserveGrow2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e453e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe453e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44e80(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44e80(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::VectorReserveGrow3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44f30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44f30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: Global::TreeClear_00e454c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e454c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe454c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e44fe0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeClear2_00e45510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e45510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e45020(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeFindIfWrapper */
GEN_LIB GEN_FRAME uint F_00e45560(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe45560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00e45140(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e455b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e455b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe455b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::UninitCopy0x54EntriesB */
GEN_LIB GEN_FRAME unsigned int F_00e45610(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe45610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::UninitCopy0x28EntriesWrapper */
GEN_LIB GEN_FRAME unsigned int F_00e45650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe45650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 in_ECX = 0;
  
  F_00e45250(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: Global::StringAssignFrom */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Global::VectorPushBackPtr_00e456c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e456c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe456c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e45370(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e45370(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::VectorPushBackPtr2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e453e0(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e453e0(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::VectorPushBackPtr3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e457a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe457a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e45450(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e45450(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: Global::ConstructOStringStream */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe45810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1157cd0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 4)));
  F_00483f60(*((int *)GEN_TOP((*(int *)this + 4))) + (int)this GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(this_00 GEN_EDX_ARG);
  uVar1 = 0;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *((uint *)GEN_TOP(((int)this + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  return (uint)this;
}

/* ref: Global::StringConstructFromRange */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e458b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe458b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00bb56c0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::TreeEraseRange_00e45900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe45900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e454c0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e44700(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeEraseRange2_00e459a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e459a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe459a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e45510(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e44980(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e45a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe45a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e45060(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::UninitCopy0x54EntriesC */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e45ac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe45ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::UninitCopy0x28EntriesAlloc */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e45b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe45b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00e45250(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return;
}

/* ref: Global::StringAssignFrom2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: Global::VectorEraseRange0x54 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe45b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x15;
      puVar6 = puVar2 + 0x15;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x15; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::VectorTidy2_00e45ba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e45ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::VectorEraseRange_00e45bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe45bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00e43be0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::VectorTidy3_00e45c10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e45c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::TreeEraseAll_00e45c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::TreeEraseAll2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: FUN_00e45c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if (((undefined4 *)GEN_TOP(0x30c30c3)) < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54)));
  if (puVar2 < param_1) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(0x0));
    if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_004069f0((int)((int)(uintptr_t)param_1) * 0x54)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
      if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)GEN_TOP(0x0));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = *(undefined4 * PTR32 *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    for (; puVar3 != puVar2; puVar3 = puVar3 + 0x15) {
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = puVar3;
        puVar7 = puVar5;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x15;
    }
    iVar4 = *(int *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar4 != 0) {
      F_00406ad0(iVar4);
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + (int)((int)(uintptr_t)param_1) * 0x15;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + ((iVar1 - iVar4) / 0x54) * 0x15;
    *(undefined4 * PTR32 *)this = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  }
  return (uint)puVar2;
}

/* ref: FUN_00e45d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x6666666 < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
  if (uVar3 < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 0x28);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00e45250(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar4,(int)this + 0xc,0,param_1);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00406ad0(*(int *)this);
    }
    uVar3 = uVar4 + ((iVar1 - iVar2) / 0x28) * 0x28;
    *(uint *)this = uVar4;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar4 + param_1 * 0x28;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  }
  return uVar3;
}

/* ref: Global::StringMoveAssign_00e45e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e45e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      F_00406ad0(*(undefined4 *)this);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[4];
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::ReadReply */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e45ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  if (*((short *)GEN_TOP((param_1 + 2))) == 0xc) {
    bVar1 = F_00e3fc70(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
    if (bVar1 != 0) {
      return 1;
    }
    F_00e3e8c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  }
  else {
    if (*((short *)GEN_TOP((param_1 + 2))) != 0x1f5) {
      *(undefined4 *)(this + 0x10) = 4;
      return 0;
    }
    if (((*((int *)GEN_TOP((param_1 + 0x14))) != 0) && (*((char *)GEN_TOP((param_1 + 0x1c))) != '\0')) &&
       (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 5;
      return 0;
    }
  }
  return 0;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::ReadReply */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e45f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe45f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  if (*((short *)GEN_TOP((param_1 + 2))) == 0xe) {
    iVar3 = param_1 + 0x10;
    switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((param_1 + 0x1a))))) {
    case 1: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,iVar3);
      if (bVar2 == 0) {
        F_00e3eab0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,1,*(undefined4 *)(this + 0x34));
        return 0;
      }
      break;
    case 2: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*((int *)GEN_TOP((iVar3 + 8))) == 0) {
          return 0;
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x6c))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*((int *)GEN_TOP((iVar3 + 0x350))) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x70))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*((int *)GEN_TOP((iVar3 + 0x350))));
        return 0;
      }
      break;
    case 3: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*((int *)GEN_TOP((iVar3 + 8))) == 0) {
          return 0;
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x80))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*((int *)GEN_TOP((iVar3 + 0x350))) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x84))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*((int *)GEN_TOP((iVar3 + 0x350))));
        return 0;
      }
      break;
    case 4: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*((int *)GEN_TOP((iVar3 + 8))) == 0) {
          return 0;
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*((int *)GEN_TOP((iVar3 + 0x350))) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x7c))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*((int *)GEN_TOP((iVar3 + 0x350))));
        return 0;
      }
      break;
    default: ;
      return 0;
    case 6: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*((int *)GEN_TOP((iVar3 + 8))) == 0) {
          return 0;
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x88))))(piVar1 GEN_EDX_ARG,iVar3 + 0x1e0,iVar3 + 0x210);
        if (*((int *)GEN_TOP((iVar3 + 0x350))) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x8c))))(piVar1 GEN_EDX_ARG,iVar3 + 0x1e0,iVar3 + 0x210,*((int *)GEN_TOP((iVar3 + 0x350))));
        return 0;
      }
      break;
    case 7: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*((int *)GEN_TOP((iVar3 + 8))) == 0) {
          return 0;
        }
        if (piVar1 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        if (*((int *)GEN_TOP((iVar3 + 0x350))) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x74))))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*((int *)GEN_TOP((iVar3 + 0x350))));
        return 0;
      }
    }
  }
  else {
    if (*((short *)GEN_TOP((param_1 + 2))) != 0x17) {
      *(undefined4 *)(this + 0x10) = 4;
      return 0;
    }
    F_00e3f120(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
  }
  return 1;
}

/* ref: Global::StringFromFixedBuffer */
GEN_LIB_GS GEN_FRAME uint F_00e461a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe461a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x208, 8, 4);
  char cVar1;
  char * pcVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x200)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x204));
  if (param_3 < 0x200) {
    F_00c52620(((char *)(gen_frame + 0x0)),param_2,param_3);
    ((char *)(gen_frame + 0x0))[(int)(param_3)] = '\0';
  }
  else {
    F_00c52620(((char *)(gen_frame + 0x0)),param_2,0x200);
    (*(undefined1 *)(gen_frame + 0x1ff)) = 0;
  }
  pcVar2 = ((char *)(gen_frame + 0x0));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x0)) + 1));
  return (uint)param_1;
}

/* ref: Global::VectorTidy4_00e46240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e46240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::VectorClearTrivial */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e46270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)this != *((int *)GEN_TOP(((int)this + 4)))) {
    *((int *)GEN_TOP(((int)this + 4))) = *(int *)this;
  }
  return;
}

/* ref: Global::VectorTidy5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e462c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe462c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::VectorClear_00e462f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e462f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe462f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar1) {
    uVar1 = F_00e43be0(uVar1,uVar1,*(uint *)this,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e46320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e46350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::VectorReserveWorldEntries */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe46380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (0x30c30c3U - param_1 < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00e45c80(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00e45c80(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: Global::VectorReserve28 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe46410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x28;
  if (0x6666666U - param_1 < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x28;
  if (uVar1 < uVar2) {
    if (0x6666666 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00e45d70(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00e45d70(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: Global::StringMoveConstruct */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e464a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe464a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  F_00e45e40(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00e464d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e464d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe464d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e46500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::VectorTidy_00e46540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e46540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Global::VectorTidy2_00e46580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e46580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::ReadReply */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e465b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe465b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  if (*((short *)GEN_TOP((param_1 + 2))) != 0xf) {
    *(undefined4 *)(this + 0x10) = 4;
    return 0;
  }
  bVar1 = F_00e408c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
  if (bVar1 != 0) {
    return 1;
  }
  F_00e3ea40(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  return 0;
}

/* ref: Global::VectorPushBackWorldEntry */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e46600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe46600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e46380(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x54) * 0x54 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e46380(this GEN_EDX_ARG,1);
    }
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: Global::VectorPushBack28 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe46670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  undefined8 * puVar2;
  undefined8 * puVar3;
  
  puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined8 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e46410(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x28) * 0x28)));
    puVar2 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined8 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined8 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x28;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00e46410(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined8 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x28;
  return (uint)puVar3;
}

/* ref: FUN_00e46740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e467a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e467a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe467a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::StringBufGetString */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e46800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe46800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  if (((*((uint *)GEN_TOP(((int)this + 0x40))) & 2) == 0) && (**((uint * PTR32 *)GEN_TOP(((int)this + 0x24))) != 0)) {
    uVar4 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
    if (uVar4 <= *((uint *)GEN_TOP(((int)this + 0x3c)))) {
      uVar4 = *((uint *)GEN_TOP(((int)this + 0x3c)));
    }
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((int *)(gen_frame + 0x0))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0x0))[0], 1, 3) << 8;
    F_00bb56c0(((int *)(gen_frame + 0x0)) GEN_EDX_FWD,iVar1,uVar4 - iVar1);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  }
  else if (((*((uint *)GEN_TOP(((int)this + 0x40))) & 4) == 0) && (**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) != 0)) {
    iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
    iVar2 = **((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
    iVar3 = **((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((int *)(gen_frame + 0x0))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0x0))[0], 1, 3) << 8;
    F_00bb56c0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar1,(iVar2 - iVar1) + iVar3);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  }
  else {
    (*(uint *)(gen_frame + 0x14)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0x0))[0] + 0)) = 0;
    ((int *)(gen_frame + 0x0))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0x0))[0], 1, 3) << 8;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  }
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    F_00406ad0(((int *)(gen_frame + 0x0))[0]);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e46910(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe46910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e40a10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::WriteRequest */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e46940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe46940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x9c, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  char * pcVar5;
  gen_size32 sVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x94)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98));
  (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = param_2;
  if (*((int *)GEN_TOP((*(int *)(this + 8) + 0xc))) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 0xc))) + 4))))) {
    case 0: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_FWD,0x1f5,0x38,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = ((undefined4 *)GEN_TOP(F_00e3bc00(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        iVar2 = (*(int *)(gen_frame + 0x14));
        *puVar4 = *(undefined4 *)(this + 0xc);
        puVar4[1] = *((undefined4 *)GEN_TOP((iVar1 + 8)));
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        (*(int *)(gen_frame + 0x14)) = 0;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
        if (((undefined4 *)GEN_TOP((iVar2 + 0xc))) != ((undefined4 *)GEN_TOP((uVar3 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
          *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
                  (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar2 + 0x24))),*((undefined4 *)GEN_TOP((iVar2 + 0x20))));
        F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar2);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 0x1f5;
        F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 1;
      }
      break;
    default: ;
      goto switchD_00e4697b_caseD_1;
    case 2: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_ARG,5,0x100,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x3c)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = ((undefined4 *)GEN_TOP(F_00e3bac0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        F_00c48350(puVar4,0,0xf0);
        *puVar4 = *(undefined4 *)(this + 0xc);
        *(undefined2 *)(puVar4 + 3) = 0x1347;
        sVar6 = 0x40;
        puVar4[2] = 0x6e0000;
        pcVar5 = ((char *)GEN_TOP(F_0042a990((*(int *)(gen_frame + 0x3c)) + 8 GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 4),pcVar5,sVar6);
        sVar6 = 0x80;
        pcVar5 = ((char *)GEN_TOP(F_0042a990(this + 0x38 GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 0x14),pcVar5,sVar6);
        sVar6 = 0x20;
        pcVar5 = ((char *)GEN_TOP(F_0042a990(this + 0x8c GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 0x34),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x14));
        (*(int *)(gen_frame + 0x14)) = 0;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
        if (((undefined4 *)GEN_TOP((iVar1 + 0xc))) != ((undefined4 *)GEN_TOP((uVar3 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
          *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
                  (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 0x24))),*((undefined4 *)GEN_TOP((iVar1 + 0x20))));
        F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 0xc;
        F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 3: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_ARG,6,0x240,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x3c)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = ((undefined4 *)GEN_TOP(F_00e3bae0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        F_00c48350(puVar4,0,0x230);
        *puVar4 = *(undefined4 *)(this + 0xc);
        *(undefined2 *)(puVar4 + 3) = 0x1347;
        sVar6 = 0x180;
        puVar4[2] = 0x6e0000;
        pcVar5 = ((char *)GEN_TOP(F_0042a990((*(int *)(gen_frame + 0x3c)) + 8 GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 4),pcVar5,sVar6);
        sVar6 = 0x80;
        pcVar5 = ((char *)GEN_TOP(F_0042a990(this + 0x38 GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 100),pcVar5,sVar6);
        sVar6 = 0x20;
        pcVar5 = ((char *)GEN_TOP(F_0042a990(this + 0x8c GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 0x84),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x14));
        (*(int *)(gen_frame + 0x14)) = 0;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
        if (((undefined4 *)GEN_TOP((iVar1 + 0xc))) != ((undefined4 *)GEN_TOP((uVar3 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
          *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
                  (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 0x24))),*((undefined4 *)GEN_TOP((iVar1 + 0x20))));
        F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 0xc;
        F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 4: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_ARG,0x1f6,0x98,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x3c)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
        puVar4 = ((undefined4 *)GEN_TOP(F_00e3bc20(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
        *puVar4 = *(undefined4 *)(this + 0xc);
        puVar4[1] = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + 8)));
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        sVar6 = 0x40;
        *(undefined8 *)(puVar4 + 8) = 0;
        pcVar5 = ((char *)GEN_TOP(F_0042a990(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG)));
        F_00c52620((char *)(puVar4 + 10),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x14));
        (*(int *)(gen_frame + 0x14)) = 0;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
        if (((undefined4 *)GEN_TOP((iVar1 + 0xc))) != ((undefined4 *)GEN_TOP((uVar3 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
          *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
                  (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 0x24))),*((undefined4 *)GEN_TOP((iVar1 + 0x20))));
        F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 0x1f5;
        F_0042c880(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
        return 1;
      }
    }
    F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
switchD_00e4697b_caseD_1: ;
  return 0;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::WriteRequest */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e46e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe46e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  int iVar1;
  uint uVar2;
  undefined8 * puVar3;
  
  F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_FWD,3,0x28,0);
  uVar2 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    puVar3 = ((undefined8 *)GEN_TOP(F_00e3bb00(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    iVar1 = (*(int *)(gen_frame + 0x14));
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)puVar3 = *(undefined4 *)(this + 0xc);
    *((byte *)GEN_TOP(((int)puVar3 + 9))) = *((byte *)GEN_TOP(((int)puVar3 + 9))) & 0xf1 | 1;
    *((byte *)GEN_TOP(((int)puVar3 + 9))) = (char)this[0x41] << 4 | 1;
    *(undefined *)(puVar3 + 1) = this[0x40];
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(this + 0x38);
    *((undefined4 *)GEN_TOP(((int)puVar3 + 0x14))) = *(undefined4 *)(this + 0x3c);
    (*(int *)(gen_frame + 0x14)) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
    if (((undefined4 *)GEN_TOP((iVar1 + 0xc))) != ((undefined4 *)GEN_TOP((uVar2 + 8)))) {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = *((undefined4 *)GEN_TOP((uVar2 + 8)));
      *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = *((undefined4 *)GEN_TOP((uVar2 + 0xc)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
              (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar1 + 0x24))),*((undefined4 *)GEN_TOP((iVar1 + 0x20))));
    F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar1);
    *param_2 = 0xd;
    F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::WriteRequest */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e46f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe46f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 * puVar4;
  
  F_00e39ed0((undefined *)((int *)(gen_frame + 0x0)) GEN_EDX_FWD,4,0x30,0);
  uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  if (uVar3 != 0) {
    puVar4 = ((undefined8 *)GEN_TOP(F_00e3bb20(((int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    iVar2 = (*(int *)(gen_frame + 0x14));
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x14)));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)puVar4 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(puVar4 + 1) = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
    *((undefined4 *)GEN_TOP(((int)puVar4 + 0xc))) = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
    *(undefined1 *)(puVar4 + 3) = *((undefined1 *)GEN_TOP((iVar1 + 8)));
    (*(int *)(gen_frame + 0x14)) = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 4))))(((int *)(gen_frame + 0x0)));
    if (((undefined4 *)GEN_TOP((iVar2 + 0xc))) != ((undefined4 *)GEN_TOP((uVar3 + 8)))) {
      *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = *((undefined4 *)GEN_TOP((uVar3 + 8)));
      *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = *((undefined4 *)GEN_TOP((uVar3 + 0xc)));
    }
    ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0x0))[0] + 0xc))))
              (((int *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((iVar2 + 0x24))),*((undefined4 *)GEN_TOP((iVar2 + 0x20))));
    F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))) GEN_EDX_ARG,iVar2);
    *param_2 = 0xf;
    F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  F_00e39da0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: Global::StringStreamGetString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  F_00e46800(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::ReadReply */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((param_1 + 2))))) {
  case 0xd: ;
    break;
  default: ;
    *(undefined4 *)(this + 0x10) = 4;
    return 0;
  case 0x15: ;
    F_00e410c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
    return 1;
  case 0x16: ;
    if (this[0x41] == (undefined1)0x0) {
      F_00e41240(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    }
    return 1;
  case 0x17: ;
    if (this[0x41] == (undefined1)0x0) {
      F_00e3f120(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    }
    return 1;
  }
  if (this[0x41] == (undefined1)0x0) {
    bVar1 = F_00e3fdf0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    if (bVar1 != 0) {
      return 1;
    }
  }
  else if ((~*((byte *)GEN_TOP((param_1 + 0x18))) & 1) != 0) {
    return 1;
  }
  if (this[0x41] != (undefined1)0x0) {
    F_00e3ea00(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
    return 0;
  }
  F_00e3e940(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  return 0;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::WriteRequest */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00e47160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe47160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x1a8, 8, 4);
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  char * pcVar6;
  char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * _Source;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar7;
  char * pcVar8;
  gen_size32 sVar9;
  undefined4 uVar10;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1a0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a4));
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0xe8)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0xec)) = param_2;
  (*(char * PTR32 *)(gen_frame + 0xf0)) = ((char *)GEN_TOP(0x0));
  if ((*((int *)GEN_TOP((*(int *)(this + 8) + 0x10))) == 0) ||
     (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 0x10))) + 4))) != 0)) {
    return 0;
  }
  F_00e39ed0((undefined *)((int *)(gen_frame + 0xb0)) GEN_EDX_FWD,0xb,0x1f0,0);
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x10)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 4;
  F_00e82b60(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
  if (*((int *)GEN_TOP((iVar2 + 0x10))) == 7) {
    F_00e78fe0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x11c)) GEN_EDX_ARG,iVar2 + 0xd0);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x11c))[0] = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
    F_00e76050((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x11c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
    F_00e75880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x11c)) GEN_EDX_ARG);
  }
  else {
    F_00e5ecd0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x128)) GEN_EDX_ARG,iVar2 + 0x1e8);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x128))[0] = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
    F_00e5c340((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x128)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
    F_00e5bc00(((undefined * PTR32 * PTR32 *)(gen_frame + 0x128)) GEN_EDX_ARG);
  }
  F_00ea6520(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x98)),1);
  if ((*((int *)GEN_TOP((iVar2 + 0x10))) == 2) || (*((int *)GEN_TOP((iVar2 + 0x10))) == 7)) {
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184)));
    pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184))[0];
    if ((*(uint *)(gen_frame + 0x198)) < 0x10) {
      pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG,pppppppuVar7,REFG(undefined4, 0x108cc50));
    if (0xf < (*(uint *)(gen_frame + 0x198))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184))[0]);
    }
    pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184))[0];
    (*(uint *)(gen_frame + 0x198)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x194)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x184))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)pppppppuVar7 & 0xffffff00)));
    (*(char * PTR32 *)(gen_frame + 0xf0)) = ((char *)GEN_TOP(0x0));
    uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG);
    if (uVar4 != 0) {
      do {
        uVar4 = F_00c32ee0((*(undefined * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,((int *)(gen_frame + 0xb0)));
        if (uVar4 == 0) break;
        puVar5 = ((undefined4 *)GEN_TOP(F_00e3bb40(((int *)(gen_frame + 0xb0)) GEN_EDX_ARG)));
        F_00c48350(puVar5,0,0x1e0);
        *puVar5 = *(undefined4 *)(this + 0xc);
        *((undefined1 *)GEN_TOP(((int)puVar5 + 0x19))) = *((undefined1 *)GEN_TOP((iVar2 + 0x10)));
        puVar5[2] = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
        puVar5[3] = *((undefined4 *)GEN_TOP((iVar2 + 0x1c)));
        *(undefined1 *)(puVar5 + 6) = *((undefined1 *)GEN_TOP((iVar2 + 0x14)));
        puVar5[4] = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
        puVar5[5] = *((undefined4 *)GEN_TOP((iVar2 + 0x24)));
        uVar10 = 0xffffffff;
        *((undefined2 *)GEN_TOP(((int)puVar5 + 0x1a))) = *((undefined2 *)GEN_TOP((iVar2 + 0x16)));
        uVar4 = F_0042a990(iVar2 + 0x28 GEN_EDX_ARG);
        F_00c4d9ef(puVar5 + 7,0x20,uVar4,uVar10);
        *((undefined1 *)GEN_TOP(((int)puVar5 + 0x3b))) = 0;
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168)));
        pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0];
        if ((*(uint *)(gen_frame + 0x17c)) < 0x10) {
          pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168));
        }
        pcVar6 = (char *)(puVar5 + 0xf);
        F_00c4d9ef(pcVar6,400,((char *)GEN_TOP(((int)pppppppuVar7 + (int)(*(char * PTR32 *)(gen_frame + 0xf0))))),0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x17c))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0]);
        }
        pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0];
        (*(uint *)(gen_frame + 0x17c)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x178)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x168))[0] = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((uint)pppppppuVar7 & 0xffffff00)));
        *((undefined1 *)GEN_TOP(((int)puVar5 + 0x1cb))) = 0;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + ((int)(*(char * PTR32 *)(gen_frame + 0xf0)) - ((int)puVar5 + 0x3d));
        (*(char * PTR32 *)(gen_frame + 0xf0)) = pcVar6;
        pcVar8 = ((char *)GEN_TOP(F_0042b790(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG)));
        iVar3 = (*(int *)(gen_frame + 0xc4));
        if (pcVar6 < pcVar8) {
          *((byte *)GEN_TOP(((int)puVar5 + 0x19))) = *((byte *)GEN_TOP(((int)puVar5 + 0x19))) | 0x80;
        }
        (*(int *)(gen_frame + 0xc4)) = 0;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0xb0))[0] + 4))))(((int *)(gen_frame + 0xb0)));
        if (((undefined4 *)GEN_TOP((iVar3 + 0xc))) != ((undefined4 *)GEN_TOP((uVar4 + 8)))) {
          *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = *((undefined4 *)GEN_TOP((uVar4 + 8)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = *((undefined4 *)GEN_TOP((uVar4 + 0xc)));
        }
        ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0xb0))[0] + 0xc))))
                  (((int *)(gen_frame + 0xb0)),*((undefined4 *)GEN_TOP((iVar3 + 0x24))),*((undefined4 *)GEN_TOP((iVar3 + 0x20))));
        F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xf4)) + 0x20))) GEN_EDX_ARG,iVar3);
        pcVar8 = ((char *)GEN_TOP(F_0042b790(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG)));
        this = (*(undefined * PTR32 *)(gen_frame + 0xe8));
      } while (pcVar6 < pcVar8);
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0xec)) = 0xe;
    F_0042c880(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG);
  }
  else {
    uVar4 = F_00c32ee0((*(undefined * PTR32 *)(gen_frame + 0xf4)) GEN_EDX_ARG,((int *)(gen_frame + 0xb0)));
    if (uVar4 != 0) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00e3bb40(((int *)(gen_frame + 0xb0)) GEN_EDX_ARG)));
      F_00c48350(puVar5,0,0x1e0);
      *puVar5 = *(undefined4 *)(this + 0xc);
      *((undefined1 *)GEN_TOP(((int)puVar5 + 0x19))) = *((undefined1 *)GEN_TOP((iVar2 + 0x10)));
      puVar5[2] = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
      puVar5[3] = *((undefined4 *)GEN_TOP((iVar2 + 0x1c)));
      *(undefined1 *)(puVar5 + 6) = *((undefined1 *)GEN_TOP((iVar2 + 0x14)));
      puVar5[4] = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
      puVar5[5] = *((undefined4 *)GEN_TOP((iVar2 + 0x24)));
      sVar9 = 0x20;
      *((undefined2 *)GEN_TOP(((int)puVar5 + 0x1a))) = *((undefined2 *)GEN_TOP((iVar2 + 0x16)));
      pcVar6 = ((char *)GEN_TOP(F_0042a990(iVar2 + 0x28 GEN_EDX_ARG)));
      F_00c52620((char *)(puVar5 + 7),pcVar6,sVar9);
      cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x19)));
      *((undefined1 *)GEN_TOP(((int)puVar5 + 0x3b))) = 0;
      if (cVar1 == '\x02') {
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c)));
        _Source = ((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c))[0];
        if ((*(uint *)(gen_frame + 0x160)) < 0x10) {
          _Source = (char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c));
        }
        F_00c52620((char *)(puVar5 + 0xf),(char *)_Source,400);
        F_00a16de0(((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c)) GEN_EDX_ARG);
      }
      else if (cVar1 == '\x01') {
        sVar9 = 400;
        pcVar6 = ((char *)GEN_TOP(F_0042a990(iVar2 + 0x7c GEN_EDX_ARG)));
        F_00c52620((char *)(puVar5 + 0xf),pcVar6,sVar9);
      }
      else if (cVar1 == '\x06') {
        *(undefined1 *)(puVar5 + 0x76) = *((undefined1 *)GEN_TOP((iVar2 + 0x15)));
      }
      iVar2 = (*(int *)(gen_frame + 0xc4));
      (*(int *)(gen_frame + 0xc4)) = 0;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0xb0))[0] + 4))))(((int *)(gen_frame + 0xb0)));
      if (((undefined4 *)GEN_TOP((iVar2 + 0xc))) != ((undefined4 *)GEN_TOP((uVar4 + 8)))) {
        *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = *((undefined4 *)GEN_TOP((uVar4 + 8)));
        *((undefined4 *)GEN_TOP((iVar2 + 0x10))) = *((undefined4 *)GEN_TOP((uVar4 + 0xc)));
      }
      ((code *)*((gen_code32 *)GEN_TOP((((int *)(gen_frame + 0xb0))[0] + 0xc))))
                (((int *)(gen_frame + 0xb0)),*((undefined4 *)GEN_TOP((iVar2 + 0x24))),*((undefined4 *)GEN_TOP((iVar2 + 0x20))));
      F_00c33730(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xf4)) + 0x20))) GEN_EDX_ARG,iVar2);
      *(*(undefined4 * PTR32 *)(gen_frame + 0xec)) = 0xe;
    }
  }
  F_00e82b80(((undefined1 *)(gen_frame + 0x98)) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  F_00e39da0(((int *)(gen_frame + 0xb0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00e476f0 */
GEN_LIB GEN_NOFRAME byte GEN_STDCALL F_00e476f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe476f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf1 */
GEN_LIB GEN_NOFRAME uint F_00e47700(void)
{
  GEN_ENTER(0xe47700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e47710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e47720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0xc0))) = 3;
  return;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::~RaptureChannelManager */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e47730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90(this + 0x8c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920(this + 100 GEN_EDX_ARG);
  uVar2 = F_00e4d390(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::RaptureChannelManager */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  undefined * this_01;
  __time64_t _Var2;
  ulonglong uVar3;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157d90));
  }
  F_00e4cf60(this GEN_EDX_ARG,puVar1,0,1,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4b010(this + 100 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4bc80(this + 0x8c GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)(this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  *(undefined4 *)(this + 0xc0) = 1;
  F_00a1af40(this + 200 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x140,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    this_01 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_01 = ((undefined *)GEN_TOP(F_00e39a70(this_00 GEN_EDX_ARG,this,param_1)));
  }
  *(undefined * PTR32 *)(this + 8) = this_01;
  F_00e373a0(this_01 GEN_EDX_ARG);
  _Var2 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
  *(int *)(this + 200) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)(this + 0xd0) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)(this + 0xd8) = uVar3;
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::ReceivePacket */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[0]);
  if (*(int *)(this + 0x58) != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[0]) + 0xc))) = *((undefined4 *)GEN_TOP((**(int * PTR32 *)(this + 0x54) + 8)));
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x54)));
    if (piVar1 != *(int * PTR32 *)(this + 0x54)) {
      *((int *)GEN_TOP(piVar1[1])) = *piVar1;
      *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
      F_00406ad0(piVar1);
      *(int *)(this + 0x58) = *(int *)(this + 0x58) - 1;
    }
LAB_00e478d5: ;
    F_00e3b8b0(&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[14])REFP(0x1157ce4));
    F_00e3b8f0((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,iVar2);
    F_00e3b8a0(&(*(undefined * PTR32 * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 1;
  }
  if (*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) {
    bVar3 = F_00e4d8c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)&gen_args[0]));
    if (bVar3 != 0) goto LAB_00e478d5;
  }
  return 0;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::Update */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  
  if (*(int *)(this + 0xc0) == 1) {
    uVar3 = F_00427d90();
    if (((int)(uVar3 >> 0x20) - *(int *)(this + 0xd4) ==
         (uint)((uint)uVar3 < *(uint *)(this + 0xd0))) &&
       ((uint)uVar3 - *(uint *)(this + 0xd0) < 500)) {
      return 1;
    }
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *(int *)(this + 200) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)(this + 0xd0) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)(this + 0xd8) = uVar3;
  }
  piVar1 = *(int * PTR32 *)(this + 8);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG);
    if (*(int *)(this + 0x24) != 0) {
      F_00e4dc90(**(undefined4 * PTR32 *)(this + 0x20),*(undefined4 * PTR32 *)(this + 0x20),0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  if ((*(int *)(this + 0xc0) == 1) && (uVar2 = F_00c33470(this GEN_EDX_ARG), uVar2 != 0)) {
    *(undefined4 *)(this + 0xc0) = 3;
  }
  return 1;
}

/* ref: Application::Network::LobbyClient::LobbyProtoDownDummyCallback::LobbyProtoDownDummyCallback */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e47a10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  F_00e3b8b0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x1157ce4));
  return (uint)in_ecx;
}

/* ref: FUN_00e47a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47a40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: NetBufferFactoryInterface_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47a70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157d20));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryInterface_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47aa0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1157d38));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::TreeNodeColor_00e47ad0 */
GEN_LIB GEN_FRAME uint F_00e47ad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeNodeIsNil_00e47ae0 */
GEN_LIB GEN_FRAME uint F_00e47ae0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e47af0 */
GEN_LIB GEN_FRAME uint F_00e47af0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParent_00e47b00 */
GEN_LIB GEN_FRAME uint F_00e47b00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRight_00e47b10 */
GEN_LIB GEN_FRAME uint F_00e47b10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValue_00e47b20 */
GEN_LIB GEN_FRAME uint F_00e47b20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMax_00e47b30 */
GEN_LIB GEN_FRAME uint F_00e47b30(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b30u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeMin_00e47b50 */
GEN_LIB GEN_FRAME uint F_00e47b50(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b50u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::AllocatorDeallocate_00e47b70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e47b70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: Global::TreeNodeColor2_00e47b90 */
GEN_LIB GEN_FRAME uint F_00e47b90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeNodeIsNil2_00e47ba0 */
GEN_LIB GEN_FRAME uint F_00e47ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00e47bb0 */
GEN_LIB GEN_FRAME uint F_00e47bb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParent2_00e47bc0 */
GEN_LIB GEN_FRAME uint F_00e47bc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRight2_00e47bd0 */
GEN_LIB GEN_FRAME uint F_00e47bd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValue2_00e47be0 */
GEN_LIB GEN_FRAME uint F_00e47be0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMaxNode_00e47bf0 */
GEN_LIB GEN_FRAME uint F_00e47bf0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47bf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeMinNode_00e47c10 */
GEN_LIB GEN_FRAME uint F_00e47c10(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47c10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47c30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e47c30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47c50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e47c80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::TreeIteratorIncrement_00e47cb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e47cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47cb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeIteratorIncrement2_00e47d00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e47d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47d00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47d50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe47d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47d60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe47d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d70 */
GEN_LIB GEN_FRAME uint F_00e47d70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e47d80 */
GEN_LIB GEN_FRAME uint F_00e47d80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e47da0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47dc0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47e10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e47e10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e30 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e47e30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e50 */
GEN_LIB GEN_FRAME uint F_00e47e50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e47e60 */
GEN_LIB GEN_FRAME uint F_00e47e60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00e47e70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e47e70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe47e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47ec0 */
GEN_LIB GEN_FRAME uint F_00e47ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00e47ee0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e47ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe47ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47f00 */
GEN_LIB GEN_FRAME uint F_00e47f00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeMaxNode2_00e47f10 */
GEN_LIB GEN_FRAME uint F_00e47f10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f10u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeMinNode2_00e47f30 */
GEN_LIB GEN_FRAME uint F_00e47f30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47f50 */
GEN_LIB GEN_FRAME uint F_00e47f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: Global::TreeMaxNode3 */
GEN_LIB GEN_FRAME uint F_00e47f60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeMinNode3 */
GEN_LIB GEN_FRAME uint F_00e47f80(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe47f80u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e47fa0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe47fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrement3_00e47fb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e47fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeIteratorIncrement4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e48000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e48080 */
GEN_LIB GEN_FRAME uint F_00e48080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e48090 */
GEN_LIB GEN_FRAME uint F_00e48090(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: PrimaryEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e480a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe480a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e48120 */
GEN_LIB GEN_FRAME uint F_00e48120(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48170 */
GEN_LIB GEN_FRAME uint F_00e48170(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::TreeIteratorPreIncrement_00e481d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e481d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe481d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48210 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e48210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e48230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48230(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::DestroyEntity */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e482e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe482e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: IpcEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: EntityWrapper_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48360(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x1157d60));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::IpcEntityTmpl_00e48390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e483d0 */
GEN_LIB GEN_FRAME uint F_00e483d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe483d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48430 */
GEN_LIB GEN_FRAME uint F_00e48430(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48490 */
GEN_LIB GEN_FRAME uint F_00e48490(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::EntityWrapper_00e484e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e484e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe484e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((int *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: Global::EntityWrapper_00e485b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e485b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe485b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyProtoDownDummyCallback::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e485e0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe485e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e3b8a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Global::TreeRotateRight_00e48640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: Global::TreeRotateRight_00e486d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e486d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe486d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e48730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e48730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e48740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::TreeIterator_00e48750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIterator_00e48760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e487a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e487a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe487a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e487b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e487b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe487b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::ListIteratorPostIncrement_00e48830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe48830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e48860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe48860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e48880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe48880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::TreeIterator_00e488a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e488a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe488a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeRotateRight_00e488c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e488c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe488c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: Global::TreeRotateRight_00e48930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP((uVar2 + 4))) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = ((uint *)GEN_TOP(param_1[1]));
  if (param_1 == ((uint *)GEN_TOP(puVar1[2]))) {
    puVar1[2] = uVar2;
    *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *((uint * PTR32 *)GEN_TOP((uVar2 + 8))) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e48990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e48990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e489a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e489a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe489a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e48000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e489e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e489e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe489e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e36c00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::DestroyEntity */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e48a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: FUN_00e48a80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48a80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e48ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e48ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e48000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48af0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48af0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48b40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48b40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    *((int *)GEN_TOP(((int)this + 8))) = param_1;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: ConnectionOwner_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e48c20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48c20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e48c30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e48c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e48c60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48c60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48cc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48cc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e48d20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e48d20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe48d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::ConnectionOwner_00e48d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: Global::TreeRotateLeft_00e48de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeRotateLeft_00e48e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeIterator_00e48ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48ea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIterator_00e48eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48eb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeBegin_00e48ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeBegin_00e48f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe48f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeIterator_00e48f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48f50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe48f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe48f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e48f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe48f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e48000(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: Global::TreeRotateLeft_00e48fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e48fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe48fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeRotateLeft_00e49000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x15))) == '\0') {
    *((int *)GEN_TOP((*piVar2 + 4))) = param_1;
  }
  piVar2[1] = *((int *)GEN_TOP((param_1 + 4)));
  if (param_1 == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 4)));
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::TreeEraseSubtree_00e49060 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e49060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49060(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: Global::TreeEraseSubtree_00e490a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e490a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe490a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e490a0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: Global::TargetEntityTmpl_00e49120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49120(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe49120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  in_ecx[4] = param_2;
  in_ecx[5] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::TargetEntityTmpl_00e491b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e491b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe491b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 uVar1;
  
  if (*((int *)GEN_TOP((param_3 + 8))) == 0) {
    uVar1 = *((undefined4 *)GEN_TOP((param_3 + 4)));
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 8))) + 8)));
  }
  F_01050b90(this GEN_EDX_FWD,uVar1);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_3 + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: FUN_00e49210 */
GEN_LIB GEN_FRAME uint F_00e49210(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e49220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e49270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe49270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e492d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e492d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe492d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e49330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe49330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e49390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe49390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e49400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::TreeErase_00e49450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e47cb0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4956a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e47b50(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e47b30(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e4956a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48de0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48640(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e48de0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49628: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48640(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e49628;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48de0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e48640(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeErase_00e496a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e496a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe496a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e47d00(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e497ba;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e47c10(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e47bf0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e497ba: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48e40(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e486d0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e48e40(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49878: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e486d0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e49878;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48e40(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e486d0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeEnd_00e498f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e498f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe498f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeEnd_00e49900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::TreeBegin_00e49910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Global::ListBegin_00e49930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::TreeBegin_00e49940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e49960 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e49960(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe49960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListClear_00e49970 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e49970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: Global::TreeErase_00e499b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e499b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe499b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e47fb0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49aca;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e47f30(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e47f10(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e49aca: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48fa0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e488c0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e48fa0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49b88: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e488c0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e49b88;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48fa0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e488c0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeErase_00e49c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00e48000(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x15))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar3[2];
        *((int * PTR32 *)GEN_TOP((piVar3[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar3[1]));
        if (((int *)GEN_TOP(*puVar2)) == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[1])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49d1a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar7;
  }
  else if (((int *)GEN_TOP(*piVar6)) == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00e47f80(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e47f60(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e49d1a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e49000(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48930(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e49000(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48930(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e49dd8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e49000(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e48930(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: Global::TreeClear_00e49e50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e49e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e49060(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeClear_00e49ea0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e49ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e490a0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeEraseSubtree_00e49ef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e49ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49ef0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: Global::TreeEraseSubtree_00e49f30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e49f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe49f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49f30(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::CreateFromEntity */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e49f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe49f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  undefined4 local_10;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  uVar3 = local_10;
  if (param_2 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
  in_ecx[5] = uVar2;
  in_ecx[4] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_2;
  in_ecx[7] = local_10;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::CreateFromIdAndOwner */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 uVar1;
  undefined4 * in_ecx;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_3 != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((param_3 + 8)));
  }
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  uVar2 = uVar3;
  if (param_3 != 0) {
    uVar2 = *((undefined4 *)GEN_TOP((param_3 + 8)));
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar2);
  in_ecx[5] = uVar1;
  in_ecx[4] = param_1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_3;
  in_ecx[7] = uVar3;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::CreateFromEntityAndWrapper */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    if (*((int *)GEN_TOP((param_2 + 8))) == 0) {
      uVar3 = *((undefined4 *)GEN_TOP((param_2 + 4)));
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
    in_ecx[5] = uVar1;
    in_ecx[4] = uVar2;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::Create */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * in_ecx;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050b90(in_ecx GEN_EDX_ARG,param_2);
    in_ecx[5] = param_2;
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[7] = 0;
    in_ecx[8] = 0;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::CreateWithWrapper */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * in_ecx;
  undefined4 uVar1;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    if (*((int *)GEN_TOP((param_3 + 8))) == 0) {
      uVar1 = *((undefined4 *)GEN_TOP((param_3 + 4)));
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 8))) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar1);
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[5] = param_2;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: Global::ListClear_00e4a1d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4a1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e4a210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe4a210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  F_00c330c0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))));
    F_00e49c00(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00e4a270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a440 */
GEN_LIB GEN_FRAME byte F_00e4a440(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((puVar1[2] + 8))) + 0x10))))(puVar1[2]);
  }
  return param_3;
}

/* ref: FUN_00e4a470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::ListErase_00e4a4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00406ad0(param_2);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::ListClear_00e4a510 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4a510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: Global::TreeEraseRange_00e4a550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e49e50(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e49450(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeEraseRange_00e4a5f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e49ea0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e496a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeClear_00e4a690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e49ef0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::TreeClear_00e4a6e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4a6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e49f30(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: Global::ListClear_00e4a730 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: FUN_00e4a770 */
GEN_LIB GEN_FRAME byte F_00e4a770(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4a770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  int * piVar1;
  undefined4 * puVar2;
  
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((puVar2[2] + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,puVar2[2]);
  }
  return param_3;
}

/* ref: Global::ListTidy */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4a7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: Global::ListPopFront_00e4a7e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4a7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(piVar1[1])) = *piVar1;
    *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
    piVar1 = ((int *)GEN_TOP(F_00406ad0(piVar1)));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return (uint)piVar1;
}

/* ref: Global::TreeEraseAll_00e4a810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e4a550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::TreeEraseAll_00e4a830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e4a5f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::TreeEraseRange_00e4a850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e4a690(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e499b0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::TreeEraseRange_00e4a8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4a8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) && (param_3 == *((int * PTR32 *)GEN_TOP(((int)this + 4))))) {
    F_00e4a6e0(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x15)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00e49c00(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: Global::ListTidy_00e4a990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4a990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00e4a9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4a9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  F_00c33050(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x60)));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      if ((((*(uint *)&gen_args[0]) & 0x5ff80000) == 0) &&
         ((((*(uint *)&gen_args[0]) >> 0x1d == 1 || ((*(uint *)&gen_args[0]) >> 0x1d == 2)) && ((char)(*(undefined4 *)&gen_args[1]) != '\0')))) {
        F_0074d410(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
      }
    }
    else if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
    }
    F_00e499b0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Global::ReleaseAllBuffers_00e4aa70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4aa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  for (puVar2 = ((undefined4 *)GEN_TOP(*puVar1)); puVar2 != puVar1; puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    piVar3 = *((int * PTR32 *)GEN_TOP((puVar2[2] + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_FWD,puVar2[2]);
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar4 = ((int *)GEN_TOP(*piVar3));
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      piVar3 = ((int *)GEN_TOP(*piVar4));
      F_00406ad0(piVar4);
      piVar4 = piVar3;
    } while (piVar3 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  return 0;
}

/* ref: FUN_00e4aad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4aad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Global::DestroyTree_00e4ab20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ab20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ab20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::DestroyTree2_00e4ab50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ab50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ab50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a5f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::ClearTree_00e4ab80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ab80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ab80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e4a850(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::ClearTree2_00e4aba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4aba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e4a8f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))
  ;
  return uVar1;
}

/* ref: Global::CloseAllConnections */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e4abc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4abc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  int iVar2;
  code * pcVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  while (iVar2 != 0) {
    iVar2 = *(int *)this;
    (*(uint *)(gen_frame + 0xc)) = *((uint *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 0xc)));
    pcVar3 = *((gen_code32 *)GEN_TOP((iVar2 + 0x44)));
    (*pcVar3)(this);
    puVar7 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))))[1]));
    cVar1 = *((char *)GEN_TOP(((int)puVar7 + 0x15)));
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
    while (cVar1 == '\0') {
      if ((uint)puVar7[3] < (*(uint *)(gen_frame + 0xc))) {
        puVar5 = ((undefined4 *)GEN_TOP(puVar7[2]));
        puVar7 = puVar4;
      }
      else {
        puVar5 = ((undefined4 *)GEN_TOP(*puVar7));
      }
      puVar4 = puVar7;
      puVar7 = puVar5;
      cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x15)));
    }
    puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
    if ((puVar4 == puVar7) || ((*(uint *)(gen_frame + 0xc)) < (uint)puVar4[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
      ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    else {
      ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    puVar7 = *ppuVar6;
    if (puVar7 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_FWD,puVar7[4]);
      if (*((int *)GEN_TOP(((int)this + 0x60))) == 0) {
        if ((((*(uint *)(gen_frame + 0xc)) & 0x5ff80000) == 0) && (((*(uint *)(gen_frame + 0xc)) >> 0x1d == 1 || ((*(uint *)(gen_frame + 0xc)) >> 0x1d == 2)))) {
          F_0074d410(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
        }
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
      }
      F_00e499b0(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar7);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  }
  return;
}

/* ref: Global::~NetBufferQueueCoreTmpl_00e4aca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4aca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  F_00e4aa70(this GEN_EDX_FWD);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 4)))) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 4))))));
  }
  uVar3 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar3;
}

/* ref: NetBufferQueueCoreTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4acf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4acf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e4aca0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e4ad20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ad20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ad20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4ad80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ad80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ad80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4ade0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ade0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ade0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157db0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[3])REFP(0x1157dc0));
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferQueueTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00e4ae60(void)
{
  GEN_ENTER(0xe4ae60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferQueueTmpl_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int F_00e4ae70(void)
{
  GEN_ENTER(0xe4ae70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Global::DestroyTree3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4ae90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a550(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::DestroyTree4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4aec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a5f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::DestroyTree5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4aef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4aef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a850(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: Global::DestroyTree6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4af20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4af20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e4a8f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e4af50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4af50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4af50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4afb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4afb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4afb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4b010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157dd0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4))) = *((int *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) = *((int *)GEN_TOP(((int)this + 0xc)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
      *((uint *)GEN_TOP(uVar1)) = uVar1;
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x15))) = 1;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::AllocateBufferMemory */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::FreeBufferMemory */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e4b100 */
GEN_LIB GEN_FRAME uint F_00e4b100(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeIteratorDecrement_00e4b120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4b120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b120u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::NetBufferTmpl_00e4b180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4b180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_01050c90(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (param_2 < 0x241) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x240;
  }
  else {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = param_2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
  return (uint)this;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4b1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4b1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Global::~NetBufferTmpl_00e4b200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  F_01050c80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: NetBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[2])) + 8))))(((int *)GEN_TOP(param_1[2])) GEN_EDX_FWD,param_1[9]);
  F_01050c80(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e4b260 */
GEN_LIB GEN_FRAME uint F_00e4b260(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00e4b270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b290 */
GEN_LIB GEN_FRAME uint F_00e4b290(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4b2a0 */
GEN_LIB GEN_FRAME uint F_00e4b2a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4b2b0 */
GEN_LIB GEN_FRAME uint F_00e4b2b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::IteratorBoolPairConstruct_00e4b2c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4b2e0 */
GEN_LIB GEN_FRAME uint F_00e4b2e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct2_00e4b2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b2f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::GetNodeValue_00e4b310 */
GEN_LIB GEN_FRAME uint F_00e4b310(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4b310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::LowerBoundNode */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e4b320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: Global::CreateBuffer_00e4b350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00e4b180(this_00 GEN_EDX_ARG,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: Global::PairConstruct3_00e4b3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CreateDefaultBuffer_00e4b3c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4b3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  undefined4 * in_ecx;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  in_ecx = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050c90(in_ecx GEN_EDX_ARG);
    in_ecx[2] = this;
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1157df0));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x240;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(in_ecx[2])) + 4))))(((int *)GEN_TOP(in_ecx[2])) GEN_EDX_ARG,0x240);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: Global::IteratorBoolPairConstruct2_00e4b450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorPreDecrement */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4b120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::IteratorBoolPairConstruct3_00e4b480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairCopy_00e4b4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::TreeInsertNode_00e4b4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b4c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe4b4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4b6bd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4b6bd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: Global::IteratorBoolPairConstruct4_00e4b6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorPreDecrement2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4b710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4b120(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e4b720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4b720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4b770 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e4b770(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Global::LowerBound_00e4b790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::TreeInsertUnique_00e4b7d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4b7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e4b4c0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e4b120(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e4b4c0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4b8b0 */
GEN_LIB GEN_FRAME unsigned int F_00e4b8b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4b8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00e4b940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4b9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4b9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e4b7d0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4ba20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4ba20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  F_00e4b8d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),param_1 + 1);
  F_00e49450(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0xc)));
  if (0x240 < (uint)param_1[7]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar1 = param_1[1];
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = uVar1;
      puVar3[4] = param_1;
    }
    F_00e4b7d0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e4baf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4baf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4baf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xc)))));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
    uVar2 = piVar1[4];
    F_00e49450(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),piVar1);
    if (uVar2 != 0) goto LAB_00e4bb28;
  }
  uVar2 = F_00e4b3c0(this GEN_EDX_ARG);
LAB_00e4bb28: ;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((uVar2 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8));
      puVar3[4] = uVar2;
    }
    F_00e4b7d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4bba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0x241) {
    uVar2 = F_00e4baf0(this GEN_EDX_FWD);
    return uVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00e4b180(this_00 GEN_EDX_ARG,this,param_1 + param_2,iVar4);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((uVar2 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8));
      puVar3[4] = uVar2;
    }
    F_00e4b7d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e4bc80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4bc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e00));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4))) = *((int *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) = *((int *)GEN_TOP(((int)this + 0xc)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar1;
      *((uint *)GEN_TOP(uVar1)) = uVar1;
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x1c)));
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x1c)));
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x15))) = 1;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::AllocateBufferMemory */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4bd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::FreeBufferMemory */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4bd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e4bd70 */
GEN_LIB GEN_FRAME uint F_00e4bd70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeIteratorDecrement_00e4bd90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4bd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4bd90u, gen_a0, 0u, 0u, 0u);
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

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::NetBufferTmpl */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe4bdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_01050c90(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (param_2 < 0x8c9) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x8c8;
  }
  else {
    *((uint *)GEN_TOP(((int)this + 0x1c))) = param_2;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
  return (uint)this;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4be50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4be50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e4be60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4be60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::~NetBufferTmpl */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4be70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4be70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  F_01050c80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: NetBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4be90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe4be90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[2])) + 8))))(((int *)GEN_TOP(param_1[2])) GEN_EDX_FWD,param_1[9]);
  F_01050c80(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e4bed0 */
GEN_LIB GEN_FRAME uint F_00e4bed0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00e4bee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4bee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4bf00 */
GEN_LIB GEN_FRAME uint F_00e4bf00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4bf10 */
GEN_LIB GEN_FRAME uint F_00e4bf10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e4bf20 */
GEN_LIB GEN_FRAME uint F_00e4bf20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairIteratorBoolConstruct_00e4bf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4bf30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e4bf50 */
GEN_LIB GEN_FRAME uint F_00e4bf50(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00e4bf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4bf60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::GetTreeNodeValue_00e4bf80 */
GEN_LIB GEN_FRAME uint F_00e4bf80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe4bf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeLowerBoundNode_00e4bf90 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e4bf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4bf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = puVar2;
    puVar3 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
        puVar2 = puVar1;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0');
  }
  return puVar2;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::CreateBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4bfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4bfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00e4bdf0(this_00 GEN_EDX_ARG,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: Global::PairConstruct_00e4c010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::CreateDefaultBuffer */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4c030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4c030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  undefined4 * in_ecx;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x18)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int *)GEN_TOP(((int)this + 4))) = iVar3;
  (*pcVar1)(this);
  in_ecx = ((undefined4 *)GEN_TOP(F_00406b90(0x28,0,0)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050c90(in_ecx GEN_EDX_ARG);
    in_ecx[2] = this;
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1157e20));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x8c8;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(in_ecx[2])) + 4))))(((int *)GEN_TOP(in_ecx[2])) GEN_EDX_ARG,0x8c8);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: Global::PairIteratorBoolConstruct_00e4c0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorDecrement_00e4c0e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4c0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4c0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4bd90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::PairIteratorBoolConstruct_00e4c0f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::PairCopy_00e4c110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: Global::TreeInsertNode_00e4c130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c130(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe4c130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x1ffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00406ad0(param_5);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
      **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
    }
  }
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x14)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x14))) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar4 + 4))) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar4;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00e4c32d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x14))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar2 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar2;
          }
          else {
            piVar4 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar4[2]))) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x14))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x15))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar3))) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00e4c32d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: Global::PairIteratorBoolConstruct_00e4c360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::IteratorDecrement_00e4c380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e4c380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4c380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e4bd90(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e4c390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4c390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e4c3e0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e4c3e0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Global::TreeLowerBound_00e4c400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: Global::TreeInsertUnique_00e4c440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool local_8;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  local_8 = true;
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < (uint)puVar2[3];
      }
      else {
        local_8 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= (uint)puVar2[3];
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00e4c130(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e4bd90(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e4c130(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e4c520 */
GEN_LIB GEN_FRAME unsigned int F_00e4c520(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e4c540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if ((puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00e4c5b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4c5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e4c610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe4c610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e4c440(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e4c690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe4c690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  F_00e4c540(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),param_1 + 1);
  F_00e496a0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0xc)));
  if (0x8c8 < (uint)param_1[7]) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  uVar1 = param_1[1];
  puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = uVar1;
      puVar3[4] = param_1;
    }
    F_00e4c440(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

