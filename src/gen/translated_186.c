#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e2bc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2bc40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29b90(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e2bc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bc60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bc60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bcc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bd20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2bd80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2bd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2bd80(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2bdc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2bdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2bdc0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2be20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2be20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  if ((param_1 < 0) && ((uint)piVar1[8] < (uint)-param_1)) {
    piVar1[8] = 0;
  }
  else if ((param_1 < 1) || ((uint)(piVar1[8] + param_1) < 0x431)) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1);
    }
  }
  else {
    piVar1[8] = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  if (piVar1 + 3 != ((int *)GEN_TOP((uVar2 + 8)))) {
    piVar1[3] = *((int *)GEN_TOP((uVar2 + 8)));
    piVar1[4] = *((int *)GEN_TOP((uVar2 + 0xc)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,piVar1[9],piVar1[8]);
  return (uint)piVar1;
}

/* ref: FUN_00e2bf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bf10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2bf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bf50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2bf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  in_ecx[4] = param_2;
  in_ecx[5] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bfb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2bfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  F_01050b80(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2bfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2bfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
       (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157204));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_3 + 8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)this;
}

/* ref: FUN_00e2c040 */
GEN_LIB GEN_FRAME uint F_00e2c040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2c070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2c0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c0c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e2c0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c0d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2c130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c130u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2c190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (0x3ffffffeU - *((int *)GEN_TOP(((int)this + 4))) < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e2c1c0 */
GEN_LIB GEN_FRAME uint F_00e2c1c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e2c1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c1f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2c250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c250u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2c2c0 */
GEN_LIB GEN_FRAME uint F_00e2c2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2c2d0 */
GEN_LIB GEN_FRAME uint F_00e2c2d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2c2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int * piVar2;
  
  piVar2 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    iVar1 = *((int *)GEN_TOP((piVar2[2] + 0xc)));
    if (((iVar1 != 0) && (iVar1 == param_4)) && (*((int *)GEN_TOP((piVar2[2] + 0x10))) == param_5)) break;
    piVar2 = ((int *)GEN_TOP(*piVar2));
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return (uint)param_1;
}

/* ref: FUN_00e2c320 */
GEN_LIB GEN_FRAME byte F_00e2c320(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((puVar1[2] + 8))) + 0x10))))(puVar1[2]);
  }
  return param_3;
}

/* ref: FUN_00e2c350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2c350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e2c54d: ;
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
        goto LAB_00e2c54d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e2c580 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2c580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2c580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2a850(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2c590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2c5b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2c5b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2c600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2c600u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00e2c650 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e2c650(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2c650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e2c670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2c670u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29650(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2c78a;
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
      piVar4 = ((int *)GEN_TOP(F_00e294e0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e294c0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2c78a: ;
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
            F_00e2ba90(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2aa60(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2ba90(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2c848: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2aa60(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2c848;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2ba90(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2aa60(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_00e2c8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2c8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e296a0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2c9da;
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
      piVar4 = ((int *)GEN_TOP(F_00e295a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29580(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2c9da: ;
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
            F_00e2baf0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2aaf0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2baf0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2ca98: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2aaf0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2ca98;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2baf0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2aaf0(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_00e2cb10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  gen_size32 * psVar4;
  undefined4 uVar5;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,*puVar1,0);
  if (uVar3 == 0) {
    return 0;
  }
  param_1[5] = uVar3;
  if (param_1 != ((int *)GEN_TOP(0xfffffff8))) {
    *((undefined4 *)GEN_TOP((uVar3 + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
    if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
      uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 8)));
    }
    *((undefined4 *)GEN_TOP((uVar3 + 0x18))) = uVar5;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP((uVar3 + 0x20))) = *puVar1;
    psVar4 = ((gen_size32 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((uVar3 + 0x24))),0,*psVar4);
    if (param_1[5] != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1[5] + 0x24))));
      return (uint)(param_1 + 2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,0);
    return (uint)(param_1 + 2);
  }
  return 0;
}

/* ref: FUN_00e2cc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00e2cc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00e2cc80 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2cc80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2cc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2cc90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2cc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2cc90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2ccd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2ccd0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29b40(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2cdea;
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
      piVar4 = ((int *)GEN_TOP(F_00e29a00(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e299e0(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2cdea: ;
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
            F_00e2bc60(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ad00(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bc60(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2cea8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ad00(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2cea8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bc60(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ad00(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_00e2cf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2cf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2cf20u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29ae0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2d03a;
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
      piVar4 = ((int *)GEN_TOP(F_00e29a50(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29a30(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2d03a: ;
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
            F_00e2bcc0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ad70(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bcc0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2d0f8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ad70(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2d0f8;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bcc0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ad70(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_00e2d170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2d170u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00e29b90(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00e2d28a;
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
      piVar4 = ((int *)GEN_TOP(F_00e29aa0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00e29a80(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00e2d28a: ;
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
            F_00e2bd20(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e2ade0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00e2bd20(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e2d348: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e2ade0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00e2d348;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e2bd20(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00e2ade0(this GEN_EDX_ARG,piVar4);
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

/* ref: FUN_00e2d3c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2bd80(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_00e2d410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2bdc0(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_00e2d460 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2d460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2d460(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e2d4a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2d4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e2d4a0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d4e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[8] = param_2;
  in_ecx[7] = local_10;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2d570u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
  in_ecx[8] = param_3;
  in_ecx[7] = uVar3;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d5f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_2 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_2 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * in_ecx;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_004069f0(0x24)));
  if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
    F_01050b90(in_ecx GEN_EDX_ARG,param_2);
    in_ecx[5] = param_2;
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[7] = 0;
    in_ecx[8] = 0;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157224));
    in_ecx[5] = param_2;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157204));
    in_ecx[7] = *((undefined4 *)GEN_TOP((param_3 + 4)));
    in_ecx[8] = *((undefined4 *)GEN_TOP((param_3 + 8)));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x115721c));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e2d740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d740u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2d7b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2d7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d7b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2d7f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e2d7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2d7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00e2d740(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == *((int *)GEN_TOP((param_1 + 0x10)))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)));
  if ((*(char *)&gen_args[2]) == '\0') {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    if ((char)uVar6 == '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x80)));
  iVar3 = piVar1[5];
  uVar4 = (undefined3)(*(int *)&gen_args[0]);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = iVar3 == 0;
  bVar5 = F_00e2b420(piVar1 + 2 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar2);
  if ((bVar5 != 0) &&
     (*((int *)GEN_TOP((param_1 + 0x24))) = *((int *)GEN_TOP((param_1 + 0x24))) + 1, (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0')) {
    *((int *)GEN_TOP((param_1 + 0x20))) = *((int *)GEN_TOP((param_1 + 0x20))) + 1;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) = bVar5;
  if (((*(char *)&gen_args[2]) != '\0') && (piVar1[5] != 0)) {
    uVar4 = (undefined3)(*(undefined4 *)&gen_args[1]);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3));
}

/* ref: FUN_00e2d8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe2d8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  F_00c317a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x18)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x4c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))));
    F_00e2d170(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00e2d930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2d930u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2d980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d980(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00e2d990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d990(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2d990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e2d9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2d9a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2da00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2da00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2da00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2da60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2da60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2da60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e2da70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2da70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2da70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0xc)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[2] = *param_3;
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2dac0 */
GEN_LIB GEN_FRAME uint F_00e2dac0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2dac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00e2c2d0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5)));
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e2daf0 */
GEN_LIB GEN_FRAME byte F_00e2daf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2daf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2db20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2db20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2db20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2db80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2db80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2db80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2dbe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e2c350(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e2a850(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e2c350(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e2dcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dcc0u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e2dd10 */
GEN_LIB GEN_FRAME unsigned int F_00e2dd10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2dd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e2dd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2dd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2dd40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2dd80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dd80u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2ddc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2ddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2d3c0(this GEN_EDX_FWD);
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
    F_00e2c670(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2de60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2de60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2de60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2d410(this GEN_EDX_FWD);
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
    F_00e2c8c0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2df00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2df00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2df00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2d460(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_00e2df50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2df50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e2d4a0(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_00e2dfa0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dfa0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2dfe0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2dfe0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e040u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2e080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  piVar2 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) == 0x3ffffffe) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00e2e100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2e100u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2e160 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e160u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e1a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2ddc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2de60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2e210u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2df00(this GEN_EDX_FWD);
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
    F_00e2cf20(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2e2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e2df50(this GEN_EDX_FWD);
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
    F_00e2d170(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e2e350 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e350u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe2e390u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00c31730(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
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
    F_00e2cf20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00e2e430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2e430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == 0x3ffffffe) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00e2e4b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e4b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2e4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004069f0(0xc)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == 0x3ffffffe) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00e2e560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e560u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e2dbe0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e2e5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115722c));
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

/* ref: FUN_00e2e630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2ddc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2de60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2e210(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e2e2b0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2e6d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2e6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e6d0u, gen_a0, 0u, 0u, 0u);
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
      F_00e2cf20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar7);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  }
  return;
}

/* ref: FUN_00e2e7b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115722c));
  F_00e2dfe0(this GEN_EDX_FWD);
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

/* ref: NetBufferQueueCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e800(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2e800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e2e7b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2e830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe2e830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = (*(int *)&gen_args[0]);
  if ((*(int *)&gen_args[0]) != 0) {
    if (*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc))) != 0) {
      piVar4 = ((int *)GEN_TOP(F_00e2c2d0(((undefined1 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                                   *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc))),
                                   *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10))))));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
      if (((undefined4 *)GEN_TOP(*piVar4)) != puVar1) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00e2c2d0(((undefined1 *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP(*piVar4)),puVar1,*((undefined4 *)GEN_TOP((iVar2 + 0xc))),
                              *((undefined4 *)GEN_TOP((iVar2 + 0x10))))));
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        if (puVar5 != puVar1) {
          iVar2 = puVar5[2];
          F_00e2e040(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar5);
          piVar4 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG,iVar2);
        }
      }
    }
    F_00e2e4e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[0]));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar6 = 0;
  if (((int *)GEN_TOP(*piVar4)) != piVar4) {
    piVar3 = ((int *)GEN_TOP(*piVar4));
    uVar6 = (((int *)GEN_TOP(*piVar4)))[2];
    if (piVar3 != piVar4) {
      *((int *)GEN_TOP(piVar3[1])) = *piVar3;
      *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
    }
  }
  return uVar6;
}

/* ref: FUN_00e2e8f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2e8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe2e8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  if ((*(int *)&gen_args[0]) != 0) {
    F_00e2e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(int *)&gen_args[0]));
  }
  return;
}

/* ref: FUN_00e2e910 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2e910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2e910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = param_1;
      puVar1[4] = param_2;
    }
    F_00e2dbe0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e2e990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e990u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2e9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2e9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2e9f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2ea50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ea50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ea50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115722c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[3])REFP(0x115723c));
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferQueueTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00e2ead0(void)
{
  GEN_ENTER(0xe2ead0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferQueueTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int F_00e2eae0(void)
{
  GEN_ENTER(0xe2eae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e2eb00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2eb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2ddc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2eb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2eb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2eb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2de60(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2eb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2eb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2eb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2e210(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2eb90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2eb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2e2b0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e2ebc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ebc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe2ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x14, 12);
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
    uVar3 = 0;
    if ((*(uint *)&gen_args[0]) != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) GEN_EDX_FWD,(*(uint *)&gen_args[0]));
      return uVar3;
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
    (*(uint *)&gen_args[0]) = F_00e2e830(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
    while ((*(uint *)&gen_args[0]) != 0) {
      if (iVar8 == 0) {
joined_r0x00e2ed50: ;
        if ((*(uint *)&gen_args[0]) != 0) {
          iVar8 = *((int *)GEN_TOP(((int)this + 0x24)));
          F_00e2e430(((undefined *)GEN_TOP((iVar8 + 4))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
        }
        break;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar8 + 0x68);
      gen_imp_EnterCriticalSection(lpCriticalSection);
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((iVar8 + 0x10)));
      if (*((char *)GEN_TOP(((int)puVar7[1] + 0x15))) == '\0') {
        puVar4 = ((undefined4 *)GEN_TOP(puVar7[1]));
        do {
          if ((uint)puVar4[3] < *((uint *)GEN_TOP(((int)this + 8)))) {
            puVar5 = ((undefined4 *)GEN_TOP(puVar4[2]));
          }
          else {
            puVar5 = ((undefined4 *)GEN_TOP(*puVar4));
            puVar7 = puVar4;
          }
          puVar4 = puVar5;
        } while (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0');
      }
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar8 + 0x10)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
      if ((puVar7 == puVar4) || (*((uint *)GEN_TOP(((int)this + 8))) < (uint)puVar7[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar4;
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
      }
      else {
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if (*ppuVar6 == *((undefined4 * PTR32 *)GEN_TOP((iVar8 + 0x10)))) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        goto joined_r0x00e2ed50;
      }
      piVar1 = ((int *)GEN_TOP((*ppuVar6)[4]));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        goto joined_r0x00e2ed50;
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      (*(bool *)(gen_frame + 0xf)) = piVar1[5] == 0;
      bVar2 = F_00e2b420(piVar1 + 2 GEN_EDX_ARG,(*(uint *)&gen_args[0]),*((undefined4 *)GEN_TOP((iVar8 + 0x80))));
      (*(byte *)(gen_frame + 0xe)) = bVar2;
      if ((bVar2 != 0) && (*((int *)GEN_TOP((iVar8 + 0x24))) = *((int *)GEN_TOP((iVar8 + 0x24))) + 1, (*(bool *)(gen_frame + 0xf)) != false)) {
        *((int *)GEN_TOP((iVar8 + 0x20))) = *((int *)GEN_TOP((iVar8 + 0x20))) + 1;
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      this = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(gen_frame + 0xe)) == 0) goto joined_r0x00e2ed50;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(uint *)&gen_args[0]));
      (*(uint *)&gen_args[0]) = F_00e2e830(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x24))) GEN_EDX_ARG,0);
      this = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00e2ed60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ed60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2ed60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2edc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2edc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2edc0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2ee20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2ee20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe2ee20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  __time64_t _Var6;
  
  iVar2 = (int)(*(LPCRITICAL_SECTION *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(LPCRITICAL_SECTION *)&gen_args[1]) + 4))) != 0) {
    return;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]));
  if (uVar4 != 0) {
    *((uint *)GEN_TOP((iVar2 + 4))) = uVar4;
    if ((*((int *)GEN_TOP(((int)this + 0x80))) != 0) && ((*(int *)&gen_args[3]) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar4,(*(int *)&gen_args[3]));
    }
    (*(LPCRITICAL_SECTION *)&gen_args[1]) = (LPCRITICAL_SECTION)((int)this + 0x68);
    gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    piVar5 = ((int *)GEN_TOP(F_00e2d740(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[0]))));
    if (*piVar5 != *((int *)GEN_TOP(((int)this + 0x10)))) {
      F_00e2ccd0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*piVar5);
      uVar1 = (*(undefined4 *)&gen_args[0]);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
      if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,uVar1);
      }
    }
    F_00e2e910(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))),iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    if ((*((int *)GEN_TOP(((int)this + 0x80))) == 0) ||
       (bVar3 = F_00e2a6b0(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x80))),
                             *((undefined4 *)GEN_TOP((iVar2 + 4))),(*(int *)&gen_args[3])), bVar3 == 0)) {
      F_00e2a5f0(((undefined *)GEN_TOP((iVar2 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 4))));
    }
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    *((int *)GEN_TOP((iVar2 + 0x40))) = (int)_Var6;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[1]));
    return;
  }
  return;
}

/* ref: FUN_00e2ef40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e2ef40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2ef40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = (*(int *)&gen_args[1]);
  if ((*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 4))) == 0) && (*((int *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10))) != 0)) {
    if ((*(int *)&gen_args[0]) != 0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
      piVar4 = ((int *)GEN_TOP(F_00e2d740(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(int *)&gen_args[0]))));
      if (*piVar4 != *((int *)GEN_TOP(((int)this + 0x10)))) {
        F_00e2ccd0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),*piVar4);
        iVar2 = (*(int *)&gen_args[0]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,(*(int *)&gen_args[0]));
        if (*((int *)GEN_TOP(((int)this + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,iVar2);
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
    }
    uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[2]) + 0x10)));
    *((undefined4 *)GEN_TOP((iVar3 + 4))) = uVar1;
    F_00e2e910(this GEN_EDX_ARG,uVar1,iVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 4))));
    }
  }
  return;
}

/* ref: FUN_00e2f000 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2f000(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) + 0x24)));
  if ((iVar1 == 0) || (bVar3 = *((int *)GEN_TOP((iVar1 + 8))) == 0, uVar2 = (uint)bVar3, !bVar3)) {
    uVar2 = F_00e2ebc0(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,0);
  }
  return uVar2;
}

/* ref: FUN_00e2f030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115724c));
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

/* ref: NetBufferFactoryTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e2f130 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e2f130(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00e2f150 */
GEN_LIB GEN_FRAME uint F_00e2f150(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f170u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2f1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2f1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_01050c90(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115726c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (param_2 < 0x431) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x430;
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

/* ref: NetBufferTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2f230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: NetBufferTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2f240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e2f250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2f250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115726c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  F_01050c80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: NetBufferTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x115726c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[2])) + 8))))(((int *)GEN_TOP(param_1[2])) GEN_EDX_FWD,param_1[9]);
  F_01050c80(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2f2b0 */
GEN_LIB GEN_FRAME uint F_00e2f2b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f2c0 */
GEN_LIB GEN_FRAME uint F_00e2f2c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f2f0 */
GEN_LIB GEN_FRAME uint F_00e2f2f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f300 */
GEN_LIB GEN_FRAME uint F_00e2f300(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f310 */
GEN_LIB GEN_FRAME uint F_00e2f310(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f340 */
GEN_LIB GEN_FRAME uint F_00e2f340(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f350 */
GEN_LIB GEN_FRAME uint F_00e2f350(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2f360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f380 */
GEN_LIB GEN_FRAME uint F_00e2f380(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2f380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e2f390 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e2f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f390u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2f3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f3c0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = F_00e2f1d0(this_00 GEN_EDX_ARG,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00e2f410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f430 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2f430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f430u, gen_a0, 0u, 0u, 0u);
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
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x115726c));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x430;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(in_ecx[2])) + 4))))(((int *)GEN_TOP(in_ecx[2])) GEN_EDX_ARG,0x430);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e2f4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f4e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2f4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2f170(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2f4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e2f530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f530(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe2f530u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e2f72d: ;
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
        goto LAB_00e2f72d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e2f760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2f780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2f780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2f170(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e2f790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2f790u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00e2f7e0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e2f7e0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e2f800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f800u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2f840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe2f840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e2f530(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e2f170(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e2f530(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e2f920 */
GEN_LIB GEN_FRAME unsigned int F_00e2f920(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e2f940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2f940u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e2f9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2f9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2f9b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e2fa10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2fa10u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e2f840(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fa90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2fa90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  F_00e2f940(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),param_1 + 1);
  F_00e2c670(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0xc)));
  if (0x430 < (uint)param_1[7]) {
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
    F_00e2f840(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e2fb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2fb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xc)))));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
    uVar2 = piVar1[4];
    F_00e2c670(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),piVar1);
    if (uVar2 != 0) goto LAB_00e2fb98;
  }
  uVar2 = F_00e2f430(this GEN_EDX_ARG);
LAB_00e2fb98: ;
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
    F_00e2f840(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2fc10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0x431) {
    uVar2 = F_00e2fb60(this GEN_EDX_FWD);
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
    uVar2 = F_00e2f1d0(this_00 GEN_EDX_ARG,this,param_1 + param_2,iVar4);
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
    F_00e2f840(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e2fcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2fcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115727c));
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

/* ref: NetBufferFactoryTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2fd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2fda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00e2fde0 */
GEN_LIB GEN_FRAME uint F_00e2fde0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2fde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2fe00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2fe00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e2fe60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2fe60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe2fe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_01050c90(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115729c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (param_2 < 0x449) {
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x448;
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

/* ref: NetBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf1 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2fec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2fec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: NetBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e2fed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe2fed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e2fee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e2fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe2fee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x115729c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x24))));
  F_01050c80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: NetBufferTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ff00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe2ff00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x115729c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[2])) + 8))))(((int *)GEN_TOP(param_1[2])) GEN_EDX_FWD,param_1[9]);
  F_01050c80(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e2ff40 */
GEN_LIB GEN_FRAME uint F_00e2ff40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ff40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2ff50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ff50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ff50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2ff70 */
GEN_LIB GEN_FRAME uint F_00e2ff70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ff70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2ff80 */
GEN_LIB GEN_FRAME uint F_00e2ff80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ff80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2ff90 */
GEN_LIB GEN_FRAME uint F_00e2ff90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2ffa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ffa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2ffc0 */
GEN_LIB GEN_FRAME uint F_00e2ffc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2ffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e2ffd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e2ffd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe2ffd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e2fff0 */
GEN_LIB GEN_FRAME uint F_00e2fff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe2fff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00e30000 */
GEN_LIB GEN_FRAME undefined4 * GEN_THISCALL F_00e30000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe30000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e30030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe30030u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = F_00e2fe60(this_00 GEN_EDX_ARG,this,param_1,iVar3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00e30080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e300a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e300a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe300a0u, gen_a0, 0u, 0u, 0u);
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
    *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x115729c));
    in_ecx[1] = iVar3;
    in_ecx[3] = 0;
    in_ecx[4] = 0;
    in_ecx[9] = 0;
    in_ecx[7] = 0x448;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(in_ecx[2])) + 4))))(((int *)GEN_TOP(in_ecx[2])) GEN_EDX_ARG,0x448);
    in_ecx[8] = 0;
    in_ecx[9] = uVar2;
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e30130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e30150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e30150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2fe00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e30160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e30180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe30180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e301a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e301a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe301a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e3039d: ;
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
        goto LAB_00e3039d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e303d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e303d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe303d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e303f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e303f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe303f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2fe00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e30400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30400u, gen_a0, 0u, 0u, 0u);
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

/* ref: std::allocator<std::_Container_proxy>::construct_00e30450 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e30450(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e30470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30470u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e304b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e304b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe304b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e301a0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e2fe00(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e301a0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e30590 */
GEN_LIB GEN_FRAME unsigned int F_00e30590(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe30590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e305b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e305b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe305b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e30620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe30620u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e30680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30680u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e304b0(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe30700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  F_00e305b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),param_1 + 1);
  F_00e2c8c0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0xc)));
  if (0x448 < (uint)param_1[7]) {
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
    F_00e304b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e307d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e307d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe307d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0xc)))));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0xc)))) {
    uVar2 = piVar1[4];
    F_00e2c8c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),piVar1);
    if (uVar2 != 0) goto LAB_00e30808;
  }
  uVar2 = F_00e300a0(this GEN_EDX_ARG);
LAB_00e30808: ;
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
    F_00e304b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferFactoryTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(param_1 + param_2) < 0x449) {
    uVar2 = F_00e307d0(this GEN_EDX_FWD);
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
    uVar2 = F_00e2fe60(this_00 GEN_EDX_ARG,this,param_1 + param_2,iVar4);
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
    F_00e304b0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: NetBufferQueueTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30960(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e2e7b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e30990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115724c));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  uVar6 = *puVar2;
  F_00e2ddc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar6,puVar2);
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  F_00e2ddc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))));
  uVar8 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x115719c));
  return uVar8;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30ae0(void)
{
  GEN_ENTER(0xe30ae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf6 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30af0(void)
{
  GEN_ENTER(0xe30af0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e30b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x115727c));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      pcVar5 = *((gen_code32 *)GEN_TOP(*puVar4));
      (*pcVar5)(puVar4,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  uVar6 = *puVar2;
  F_00e2de60(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),uVar6,puVar2);
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x1c))));
  F_00e2de60(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))));
  uVar8 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x11571b4));
  return uVar8;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30c50(void)
{
  GEN_ENTER(0xe30c50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf6 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30c60(void)
{
  GEN_ENTER(0xe30c60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e30c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe30c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e2be20(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_00e2ebc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_00e30c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2e210(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00e30cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e2e2b0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: NetBufferFactoryTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30cf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e30990(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30d20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30d50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e30b00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: NetBufferFactoryTmpl_LF_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30d80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x11572cc))
  ;
  F_00e30b00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e30db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  char cVar1;
  int iVar2;
  int * piVar3;
  code * pcVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  int * piVar8;
  uint uVar9;
  int * piVar10;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11572ec));
  piVar10 = ((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = this;
  puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  while (((*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar7, iVar2 != 0 && (piVar10 != ((int *)GEN_TOP(puVar7[6]))))) {
    if (piVar10[3] != puVar7[2]) {
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar10[4] + 0x20)));
      iVar2 = *piVar3;
      (*(int *)(gen_frame + 0x4)) = puVar7[2];
      pcVar4 = *((gen_code32 *)GEN_TOP((iVar2 + 4)));
      (*pcVar4)(piVar3);
      F_00c317a0(piVar3 + 5 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
      if ((*(int *)(gen_frame + 0x8)) != piVar3[6]) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((piVar3[4] + 0x4c))) + 0x18))))
                  (*((int * PTR32 *)GEN_TOP((piVar3[4] + 0x4c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + 0x10))));
        F_00e2d170(piVar3 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0xc))[4] + 0x4c))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0xc))[4] + 0x4c))) GEN_EDX_ARG,piVar10[4]);
    if (*((char *)GEN_TOP(((int)piVar10 + 0x15))) == '\0') {
      piVar3 = ((int *)GEN_TOP(piVar10[2]));
      if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
        piVar10 = piVar3;
        piVar3 = ((int *)GEN_TOP(*piVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
          piVar10 = piVar3;
          piVar3 = ((int *)GEN_TOP(*piVar3));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar10[1] + 0x15)));
        piVar8 = ((int *)GEN_TOP(piVar10[1]));
        piVar3 = piVar10;
        while ((piVar10 = piVar8, cVar1 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar10[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar10[1] + 0x15)));
          piVar8 = ((int *)GEN_TOP(piVar10[1]));
          piVar3 = piVar10;
        }
      }
    }
    iVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[7];
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  cVar1 = *((char *)GEN_TOP(((int)*((int * PTR32 *)GEN_TOP((puVar7[6] + 4))) + 0x15)));
  piVar10 = *((int * PTR32 *)GEN_TOP((puVar7[6] + 4)));
  while (cVar1 == '\0') {
    iVar2 = piVar10[2];
    F_00e2d4a0(puVar7 + 5 GEN_EDX_ARG,iVar2);
    piVar3 = ((int *)GEN_TOP(*piVar10));
    F_00406ad0(piVar10);
    piVar10 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x15)));
  }
  *((undefined4 *)GEN_TOP((puVar7[6] + 4))) = puVar7[6];
  *((undefined4 *)GEN_TOP(puVar7[6])) = puVar7[6];
  *((undefined4 *)GEN_TOP((puVar7[6] + 8))) = puVar7[6];
  puVar7[7] = 0;
  puVar5 = ((undefined4 *)GEN_TOP(puVar7[6]));
  uVar6 = *puVar5;
  F_00e2e2b0(puVar7 + 5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar6,puVar5);
  uVar9 = F_00406ad0(puVar7[6]);
  *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x11571fc));
  F_01050b80((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_00e30f20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e30f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe30f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar2 = F_00e30db0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: PrimaryEntityCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf3 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30f50(void)
{
  GEN_ENTER(0xe30f50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf4 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30f60(void)
{
  GEN_ENTER(0xe30f60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf5 */
GEN_LIB GEN_NOFRAME unsigned int F_00e30f70(void)
{
  GEN_ENTER(0xe30f70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: EntityContainerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30f80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e30db0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e30fb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe30fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[9]));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  param_1[9] = 0;
  F_00e30db0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e30ff0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e30ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe30ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x2fc, 4);
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2ec);
  (*(uint *)(gen_frame + 0xc)) = param_1;
  ((undefined4 *)(gen_frame + 0x14))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x13)) = param_3[0xc] == 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 8))))(param_3 GEN_EDX_FWD,this);
    if (((*(bool *)(gen_frame + 0x13)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
      (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      F_00e29e50(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x14))))(param_3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = *((undefined4 *)GEN_TOP((param_3[0xb] + 0xc)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_3[0xb] + 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  uVar3 = F_00e2b5e0(param_3 + 9 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))),((undefined4 *)(gen_frame + 0x14)),uVar3,(*(undefined4 *)(gen_frame + 0x0)),
                       *((undefined4 *)GEN_TOP(((int)this + 0x80))));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x28)))) {
    case 1: ;
      F_00e2ee20(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_00e2ef40(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x1c)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_00e31116_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0xc)) = 0;
      if (*((int *)GEN_TOP(((int)this + 0x80))) == 0) {
LAB_00e31172: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 8))))
                          (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac)));
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        if (uVar3 == 0) goto LAB_00e31172;
      }
      F_00e2ee20(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)),(*(uint *)(gen_frame + 0xc)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*((int *)GEN_TOP(((int)this + 0x80))) == 0) ||
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x80))) + 0x10))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0x80))) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x2ac))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2ac)));
      }
      F_00e2ef40(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2ac)));
      bVar2 = 1;
    }
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
    *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0xc))) = uVar3;
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x10))) = (*(undefined4 *)(gen_frame + 0x4));
    *((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x14))) = (*(undefined4 *)(gen_frame + 0x8));
switchD_00e31116_caseD_8: ;
    bVar2 = 1;
  }
  return bVar2;
}

/* ref: FUN_00e31250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe31250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  undefined4 * puVar2;
  
  F_01050ce0(param_1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x115731c));
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    param_1[8] = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((undefined4 *)GEN_TOP((param_1[8] + 4))) = param_1[8];
    *((undefined4 *)GEN_TOP((param_1[8] + 8))) = param_1[8];
    *((undefined1 *)GEN_TOP((param_1[8] + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((param_1[8] + 0x15))) = 1;
    param_1[0xd] = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      param_1[0xc] = uVar1;
      *((uint *)GEN_TOP(uVar1)) = uVar1;
      *((undefined4 *)GEN_TOP((param_1[0xc] + 4))) = param_1[0xc];
      *((undefined4 *)GEN_TOP((param_1[0xc] + 8))) = param_1[0xc];
      *((undefined1 *)GEN_TOP((param_1[0xc] + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((param_1[0xc] + 0x15))) = 1;
      param_1[0xf] = 0;
      *(undefined1 *)(param_1 + 0x10) = param_4;
      puVar2 = param_2;
      if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar2 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
        }
      }
      param_1[0x11] = puVar2;
      *(bool *)(param_1 + 0x12) = param_2 == ((undefined4 *)GEN_TOP(0x0));
      puVar2 = param_3;
      if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar2 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x11571dc));
        }
      }
      param_1[0x13] = puVar2;
      *(bool *)(param_1 + 0x14) = param_3 == ((undefined4 *)GEN_TOP(0x0));
      param_1[0x16] = 0;
      uVar1 = F_004069f0(0xc);
      if (uVar1 != 0) {
        param_1[0x15] = uVar1;
        *((uint *)GEN_TOP(uVar1)) = uVar1;
        *((undefined4 *)GEN_TOP((param_1[0x15] + 4))) = param_1[0x15];
        param_1[0x18] = 0;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x11])) + 4))))(((int *)GEN_TOP(param_1[0x11])) GEN_EDX_ARG,param_1,0);
        param_1[0xf] = uVar1;
        return (uint)param_1;
      }
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e31390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe31390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e313a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe313a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e313b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe313b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e313c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe313c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e313d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe313d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf24 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e313e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe313e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00e31410 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00e31410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0xc)));
  if (iVar1 == 0) {
    return (float10)1;
  }
  fVar2 = (float10)*((int *)GEN_TOP((in_ecx + 0x10)));
  if (*((int *)GEN_TOP((in_ecx + 0x10))) < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float10)(float)(fVar2 / fVar3));
}

/* ref: FUN_00e31470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe31470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,this,param_1,param_2);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf22 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e31490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe31490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x2c))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return 1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf23 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e314b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe314b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  if ((param_1 != 0) && (piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x30))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,param_1);
  }
  return 1;
}

/* ref: FUN_00e314d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e314d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe314d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29b40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e314f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e314f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe314f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0xc)));
  if (iVar2 == 0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = *((int *)GEN_TOP((iVar2 + 0x14)));
    iVar2 = *((int *)GEN_TOP((iVar2 + 0x18)));
  }
  if ((iVar4 == 0) || (iVar2 == 0)) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,this,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),
                       *((undefined4 *)GEN_TOP(((int)this + 0x3c))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG,uVar3,param_1);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,uVar3);
  }
  else {
    this_00 = ((undefined *)GEN_TOP(F_00c31810(this GEN_EDX_ARG,iVar2)));
    uVar3 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar3 = F_00c31860(this_00 GEN_EDX_ARG,iVar4);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this_00 + 0x28)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,uVar3,param_1);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00e31580 */
GEN_LIB GEN_FRAME byte F_00e31580(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe31580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar5 = param_1;
  piVar3 = param_1;
  while (piVar5 != param_2) {
    iVar2 = *((int *)GEN_TOP((piVar5[4] + 0x24)));
    if ((iVar2 == 0) || (*((int *)GEN_TOP((iVar2 + 8))) != 0)) {
      F_00e2ebc0(((undefined *)GEN_TOP(piVar5[4])) GEN_EDX_ARG,0);
      piVar5 = piVar3;
    }
    if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
      piVar3 = ((int *)GEN_TOP(piVar5[2]));
      if (*((char *)GEN_TOP(((int)piVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar3 + 0x15)));
        piVar5 = piVar3;
        piVar4 = ((int *)GEN_TOP(*piVar3));
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar5 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
        piVar3 = ((int *)GEN_TOP(piVar5[1]));
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar5[2]))))) {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar5[1]));
          piVar4 = piVar5;
        }
      }
    }
  }
  return param_3;
}

/* ref: FUN_00e31610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2f030(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  return (uint)this;
}

/* ref: FUN_00e31630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e2fcf0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  return (uint)this;
}

/* ref: FUN_00e31650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe31650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_01050b90(this GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11572ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e316d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e316d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe316d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x115731c));
  F_00e2e6d0(this GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 8))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x48))) != '\0') &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x50))) != '\0') &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
  piVar3 = ((int *)GEN_TOP(*piVar2));
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x54))) + 4))) = *((int *)GEN_TOP(((int)this + 0x54)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)this + 0x54)))) {
    do {
      piVar2 = ((int *)GEN_TOP(*piVar3));
      F_00406ad0(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != ((int *)GEN_TOP(*((int *)GEN_TOP(((int)this + 0x54))))));
  }
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x54))));
  F_00e2e2b0(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x30))));
  F_00e2e210(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))));
  F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x20))));
  uVar4 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar4 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0xc))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_01050cd0(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00e317d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e317d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe317d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(((undefined4 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(((undefined4 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar1 = F_00e316d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf13 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb4)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb4)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 100;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb8)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e31870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe31870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xb8)));
  if (uVar1 == 0) {
    uVar1 = in_ecx + 0x8c;
  }
  return uVar1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf17 */
GEN_LIB GEN_NOFRAME unsigned int F_00e31890(void)
{
  GEN_ENTER(0xe31890u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf18 */
GEN_LIB GEN_NOFRAME unsigned int F_00e318a0(void)
{
  GEN_ENTER(0xe318a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e318b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e318b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe318b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(((undefined4 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(((undefined4 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar1 = F_00e316d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e318f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe318f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e316d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChannelManagerTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31920(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe31920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(param_1 GEN_EDX_FWD);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(param_1 + 0x19 GEN_EDX_ARG);
  F_00e316d0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e31970 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e31970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xe31970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int * piVar6;
  undefined4 * puVar7;
  byte bVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int * piVar12;
  undefined4 * puVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)(param_1 + 0x1a);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1a));
  piVar12 = *((int * PTR32 *)GEN_TOP(param_1[4]));
  if (piVar12 != ((int *)GEN_TOP(param_1[4]))) {
    do {
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar12[4])) + 0xc))))(((int *)GEN_TOP(piVar12[4])) GEN_EDX_ARG);
      if ((char)uVar9 != '\0') {
        puVar13 = ((undefined4 *)GEN_TOP(piVar12[4]));
        iVar3 = piVar12[3];
        F_00e2ccd0((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar12);
        puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x8))[2])) + 0x14))))(((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x8))[2])) GEN_EDX_ARG,iVar3);
        if (puVar11[0x20] != 0) {
          piVar12 = ((int *)GEN_TOP(puVar11[0x20]));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x20))))(piVar12 GEN_EDX_ARG,iVar3);
        }
        param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar13)))(puVar13 GEN_EDX_ARG,1);
          param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        break;
      }
      if (*((char *)GEN_TOP(((int)piVar12 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar12[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar12 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar12 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar12[1]));
          piVar2 = piVar12;
          while ((piVar12 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar12[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar12[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar12[1]));
            piVar2 = piVar12;
          }
        }
      }
    } while (piVar12 != ((int *)GEN_TOP(param_1[4])));
  }
  if ((param_3 == 0) || (param_3 == 0xe0000000)) {
    puVar13 = *((undefined4 * PTR32 *)GEN_TOP(param_1[4]));
  }
  else {
    puVar11 = ((undefined4 *)GEN_TOP((((undefined4 *)GEN_TOP(param_1[4])))[1]));
    cVar1 = *((char *)GEN_TOP(((int)puVar11 + 0x15)));
    puVar13 = ((undefined4 *)GEN_TOP(param_1[4]));
    while (cVar1 == '\0') {
      if ((uint)puVar11[3] < param_3) {
        puVar10 = ((undefined4 *)GEN_TOP(puVar11[2]));
        puVar11 = puVar13;
      }
      else {
        puVar10 = ((undefined4 *)GEN_TOP(*puVar11));
      }
      puVar13 = puVar11;
      puVar11 = puVar10;
      cVar1 = *((char *)GEN_TOP(((int)puVar10 + 0x15)));
    }
    puVar11 = ((undefined4 *)GEN_TOP(param_1[4]));
    if ((puVar13 == puVar11) || (param_3 < (uint)puVar13[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar11;
      puVar13 = puVar11;
    }
  }
  if (puVar13 != ((undefined4 *)GEN_TOP(param_1[4]))) {
    do {
      fVar5 = REFG(float, 0x1087f04);
      *param_4 = 0xe0000000;
      puVar11 = *((undefined4 * PTR32 *)GEN_TOP(param_1[4]));
      while (puVar11 != ((undefined4 *)GEN_TOP(param_1[4]))) {
        iVar3 = puVar11[4];
        if (*((int *)GEN_TOP((iVar3 + 0x30))) != 0) {
          iVar4 = *((int *)GEN_TOP((iVar3 + 0x30)));
          fVar16 = fVar5;
          if (iVar4 != 0) {
            fVar14 = (float10)*((int *)GEN_TOP((iVar3 + 0x34)));
            if (*((int *)GEN_TOP((iVar3 + 0x34))) < 0) {
              fVar14 = GEN_X87(fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            fVar15 = (float10)iVar4;
            if (iVar4 < 0) {
              fVar15 = GEN_X87(fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            fVar16 = (float)(fVar14 / fVar15);
          }
          if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(fVar16)) && !(param_5 <= fVar16)) {
            *param_4 = puVar11[3];
            break;
          }
        }
        if (*((char *)GEN_TOP(((int)puVar11 + 0x15))) == '\0') {
          puVar10 = ((undefined4 *)GEN_TOP(puVar11[2]));
          if (*((char *)GEN_TOP(((int)puVar10 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar10 + 0x15)));
            puVar11 = puVar10;
            puVar10 = ((undefined4 *)GEN_TOP(*puVar10));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar10 + 0x15)));
              puVar11 = puVar10;
              puVar10 = ((undefined4 *)GEN_TOP(*puVar10));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP(((int)puVar11[1] + 0x15)));
            puVar7 = ((undefined4 *)GEN_TOP(puVar11[1]));
            puVar10 = puVar11;
            while ((puVar11 = puVar7, cVar1 == '\0' && (puVar10 == ((undefined4 *)GEN_TOP(puVar11[2]))))) {
              cVar1 = *((char *)GEN_TOP(((int)puVar11[1] + 0x15)));
              puVar7 = ((undefined4 *)GEN_TOP(puVar11[1]));
              puVar10 = puVar11;
            }
          }
        }
      }
      bVar8 = F_00e30ff0(param_1 GEN_EDX_ARG,param_2,puVar13[3],puVar13[4]);
      if (bVar8 != 0) {
        iVar3 = *((int *)GEN_TOP((param_2 + 0xc)));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar3 != 0;
      }
      if (*((char *)GEN_TOP(((int)puVar13 + 0x15))) == '\0') {
        puVar11 = ((undefined4 *)GEN_TOP(puVar13[2]));
        if (*((char *)GEN_TOP(((int)puVar11 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar11 + 0x15)));
          puVar13 = puVar11;
          puVar11 = ((undefined4 *)GEN_TOP(*puVar11));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar11 + 0x15)));
            puVar13 = puVar11;
            puVar11 = ((undefined4 *)GEN_TOP(*puVar11));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar13[1] + 0x15)));
          puVar10 = ((undefined4 *)GEN_TOP(puVar13[1]));
          puVar11 = puVar13;
          while ((puVar13 = puVar10, cVar1 == '\0' && (puVar11 == ((undefined4 *)GEN_TOP(puVar13[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar13[1] + 0x15)));
            puVar10 = ((undefined4 *)GEN_TOP(puVar13[1]));
            puVar11 = puVar13;
          }
        }
      }
    } while (puVar13 != ((undefined4 *)GEN_TOP(param_1[4])));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e31c00 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e31c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe31c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar9[4])) + 0xc))))(((int *)GEN_TOP(piVar9[4])) GEN_EDX_ARG);
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((char)uVar8 != '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(piVar9[4]));
        iVar4 = piVar9[3];
        F_00e2ccd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 8))) GEN_EDX_ARG,iVar4);
        if (*((int *)GEN_TOP(((int)pvVar5 + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x80))) GEN_EDX_ARG,iVar4);
        }
        this = pvVar5;
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        }
        break;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar9 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar9 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar9[1]));
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar9[1]));
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      bVar7 = F_00e30ff0(this GEN_EDX_ARG,param_1,piVar9[3],piVar9[4]);
      if (bVar7 != 0) {
        iVar4 = *((int *)GEN_TOP((param_1 + 0xc)));
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return iVar4 != 0;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar9 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar9 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar9[1]));
          piVar2 = piVar9;
          while ((piVar9 = piVar6, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar9[1]));
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e31d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe31d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x4)) = (LPCRITICAL_SECTION)((int)this + 0x68);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar9[4])) + 0xc))))(((int *)GEN_TOP(piVar9[4])) GEN_EDX_ARG);
      piVar8 = piVar9;
      if ((char)uVar7 == '\0') {
        if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
          piVar8 = ((int *)GEN_TOP(piVar9[2]));
          if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar9 = ((int *)GEN_TOP(*piVar8));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar9 + 0x15)));
              piVar8 = piVar9;
              piVar9 = ((int *)GEN_TOP(*piVar9));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar4 = ((int *)GEN_TOP(piVar9[1]));
            while ((piVar8 = piVar4, cVar1 == '\0' && (piVar9 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
              piVar4 = ((int *)GEN_TOP(piVar8[1]));
              piVar9 = piVar8;
            }
          }
        }
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(piVar9[4]));
        iVar3 = piVar9[3];
        if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
          piVar8 = ((int *)GEN_TOP(piVar9[2]));
          if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar4 = ((int *)GEN_TOP(*piVar8));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
              piVar8 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar5 = ((int *)GEN_TOP(piVar9[1]));
            piVar4 = piVar9;
            while ((piVar8 = piVar5, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar8[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x15)));
              piVar5 = ((int *)GEN_TOP(piVar8[1]));
              piVar4 = piVar8;
            }
          }
        }
        F_00e2ccd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),piVar9);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 8))) GEN_EDX_ARG,iVar3);
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) + 0x20))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x80))) GEN_EDX_ARG,iVar3);
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      piVar9 = piVar8;
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  piVar9 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x10)))));
  if (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10)))) {
    do {
      bVar6 = F_00e30ff0(this GEN_EDX_ARG,param_1,piVar9[3],piVar9[4]);
      if (bVar6 != 0) {
        if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
          return 0;
        }
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
        return 1;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar8 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar8 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
          piVar9 = piVar8;
          piVar8 = ((int *)GEN_TOP(*piVar8));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x15)));
            piVar9 = piVar8;
            piVar8 = ((int *)GEN_TOP(*piVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar4 = ((int *)GEN_TOP(piVar9[1]));
          piVar8 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar4 = ((int *)GEN_TOP(piVar9[1]));
            piVar8 = piVar9;
          }
        }
      }
    } while (piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x10))));
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x4)));
  return 0xffffffff;
}

/* ref: FUN_00e31f50 */
GEN_LIB GEN_FRAME byte F_00e31f50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe31f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00e31580(param_1,param_2,(undefined1)param_3);
  return bVar1;
}

/* ref: FUN_00e31f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xe31f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(4)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
    }
  }
  F_00e31250(this GEN_EDX_ARG,puVar1,param_2,(undefined1)param_5,param_6);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2f030(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e2fcf0(((undefined *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = param_3;
  return (uint)this;
}

/* ref: FUN_00e31ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e31ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe31ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  F_01050b90(this GEN_EDX_FWD,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x11572ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
    *((uint *)GEN_TOP(uVar1)) = uVar1;
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x15))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_3;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e32080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe32080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00e320a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e320a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe320a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00e320e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e320e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe320e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e32140 */
GEN_LIB GEN_FRAME uint F_00e32140(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32170 */
GEN_LIB GEN_FRAME uint F_00e32170(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32180 */
GEN_LIB GEN_FRAME uint F_00e32180(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32190 */
GEN_LIB GEN_FRAME uint F_00e32190(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e321a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e321a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe321a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e321d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e321d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe321d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e32230 */
GEN_LIB GEN_FRAME uint F_00e32230(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32260 */
GEN_LIB GEN_FRAME uint F_00e32260(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32270 */
GEN_LIB GEN_FRAME uint F_00e32270(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32280 */
GEN_LIB GEN_FRAME uint F_00e32280(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe32280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e32290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e322b0 */
GEN_LIB GEN_FRAME uint F_00e322b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe322b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e322c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e322c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe322c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e322e0 */
GEN_LIB GEN_FRAME uint F_00e322e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe322e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00e322f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e322f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe322f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe32310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00e32340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e32370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe32370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e320e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e32380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e323a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e323a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe323a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e323c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e323c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe323c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e32410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e32440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe32440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e321d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e32450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e32490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe32490u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e324e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e324e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe324e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e32500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe32500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e32520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32520(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe32520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2 * -4;
  return (uint)in_ecx;
}

/* ref: FUN_00e32550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32550(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe32550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e3274d: ;
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
        goto LAB_00e3274d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e32780 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e32780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe32780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e320e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e32790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e327b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e327b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe327b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
LAB_00e329ad: ;
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
        goto LAB_00e329ad;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00e329e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e329e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe329e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e321d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e329f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e329f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe329f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e32a10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e32a10(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e32a30 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00e32a30(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e32a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * -4;
  return (uint)param_1;
}

/* ref: FUN_00e32a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe32a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e32550(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e320e0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e32550(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e32b60 */
GEN_LIB GEN_FRAME unsigned int F_00e32b60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe32b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e32b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe32b80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00e327b0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00e321d0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00e327b0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00406ad0((*(int *)&gen_args[1]));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e32c60 */
GEN_LIB GEN_FRAME unsigned int F_00e32c60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe32c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e32c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe32c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined1 * puVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[1]);
  uVar3 = (*(uint *)&gen_args[0]);
  *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    if ((((((*(uint *)&gen_args[0]) != 0) && ((*(uint *)&gen_args[0]) != 0x20000000)) && ((*(uint *)&gen_args[0]) != 0x40000000)) &&
        (((*(uint *)&gen_args[0]) != 0x60000000 && ((*(uint *)&gen_args[0]) != 0x80000000)))) &&
       (((*(uint *)&gen_args[0]) != 0xa0000000 && (((*(uint *)&gen_args[0]) != 0xc0000000 && ((*(uint *)&gen_args[0]) != 0xe0000000)))))) {
      piVar2 = ((int *)GEN_TOP(F_00c31730(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
      if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
        return uVar3;
      }
      *puVar1 = 1;
      return uVar3;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x60))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,(*(uint *)&gen_args[0]) >> 0x1d);
    return uVar3;
  }
  if ((*(uint *)&gen_args[0]) < 0x80000001) {
    if ((*(uint *)&gen_args[0]) == 0x80000000) goto LAB_00e32dd4;
    if ((*(uint *)&gen_args[0]) < 0x40000001) {
      if ((*(uint *)&gen_args[0]) == 0x40000000) {
        uVar3 = F_01050cf0(this GEN_EDX_ARG);
        return uVar3 | 0x40000000;
      }
      if ((*(uint *)&gen_args[0]) == 0) goto LAB_00e32dd4;
      if ((*(uint *)&gen_args[0]) == 0x20000000) {
        if (*((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 0xc))) >> 2 == 0) {
          uVar3 = F_01050cf0(this GEN_EDX_ARG);
          return uVar3 | 0x20000000;
        }
        uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) - 4)));
        if (*((int *)GEN_TOP(((int)this + 0xc))) == *((int *)GEN_TOP(((int)this + 0x10)))) {
          return uVar3;
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - 4;
        return uVar3;
      }
      goto LAB_00e32db1;
    }
    bVar4 = (*(uint *)&gen_args[0]) == 0x60000000;
  }
  else {
    if (((*(uint *)&gen_args[0]) == 0xa0000000) || ((*(uint *)&gen_args[0]) == 0xc0000000)) goto LAB_00e32dd4;
    bVar4 = (*(uint *)&gen_args[0]) == 0xe0000000;
  }
  if (!bVar4) {
LAB_00e32db1: ;
    piVar2 = ((int *)GEN_TOP(F_00c31730(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[0]))));
    if (*piVar2 == *((int *)GEN_TOP(((int)this + 0x20)))) {
      return uVar3;
    }
    *puVar1 = 1;
    return uVar3;
  }
LAB_00e32dd4: ;
  uVar3 = F_01050cf0(this GEN_EDX_ARG);
  return uVar3 | 0xe0000000;
}

/* ref: FUN_00e32df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe32df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e32e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe32e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e32eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32eb0u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e32a80(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e32f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe32f30u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00e32b80(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
}

/* ref: FUN_00e32fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e32fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe32fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x4c))) + 8))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x4c))) GEN_EDX_FWD,iVar1,this,this);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar4[3] = uVar2;
      puVar4[4] = (*(uint *)(gen_frame + 0xc));
    }
    F_00e32b80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
    return uVar3;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e33060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  (*pcVar1)(this);
  F_00c317a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)this + 0x18)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x10)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  if (uVar4 == 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar2 + 0x4c))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((iVar2 + 0x4c))) GEN_EDX_ARG,iVar2,this,param_1);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + 8)));
    puVar3 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
    if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar3[3] = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0));
      puVar3[4] = uVar4;
    }
    F_00e32b80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),puVar3,0);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00e33160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00e33060(param_1 GEN_EDX_FWD,this);
  uVar1 = F_00e33060(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e33180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe33180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL(0x1c, 4);
  int * piVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  undefined * this_01;
  undefined4 * puVar4;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  (*(char *)(gen_frame + 0x17)) = '\0';
  uVar3 = F_00e32c90(this GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),&(*(char *)(gen_frame + 0x17)));
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  if ((*(char *)(gen_frame + 0x17)) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (uint)piVar2;
  }
  this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x44))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,this,uVar3)));
  F_00e32fb0(this_01 GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x20)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  if ((piVar2 != ((int *)GEN_TOP(0x40000000))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(*piVar1));
    if ((*(int * PTR32 *)&gen_args[0]) != piVar1) {
      do {
        this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[4]));
        F_00e33060(this_00 GEN_EDX_ARG,this_01);
        F_00e33060(this_01 GEN_EDX_ARG,this_00);
        F_00e29ae0(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      } while ((*(int * PTR32 *)&gen_args[0]) != (*(int * PTR32 *)(gen_frame + 0xc)));
    }
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    *(undefined2 *)(puVar4 + 5) = 0;
    if (puVar4 + 3 != ((uint *)GEN_TOP(0x0))) {
      puVar4[3] = (*(uint *)(gen_frame + 0x10));
      puVar4[4] = this_01;
    }
    F_00e32a80(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    return (*(uint *)(gen_frame + 0x10));
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)GEN_TOP(0x0));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
}

/* ref: FUN_00e33290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe33290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  code * pcVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = (*(undefined4 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00e33180(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x44)));
  (*(undefined4 *)&gen_args[0]) = uVar2;
  (*pcVar1)(this);
  piVar3 = ((int *)GEN_TOP(F_00c31730(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]))));
  if (*piVar3 == *((int *)GEN_TOP(((int)this + 0x20)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar3 = *((int * PTR32 *)GEN_TOP((*piVar3 + 0x10)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG,piVar3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,piVar3);
  return uVar4;
}

/* ref: FUN_00e33300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e33290(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e33310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    F_00e31580(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20))),0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e33350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    return;
  }
  F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x58)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (iVar1 == 0) {
    bVar4 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar4 == 0) goto LAB_00e333ec;
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
    (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar2 + 8)));
    piVar3 = ((int *)GEN_TOP(*piVar2));
    if (piVar3 != piVar2) {
      *((int *)GEN_TOP(piVar3[1])) = *piVar3;
      *((int *)GEN_TOP((*piVar3 + 4))) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
    }
  }
  F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  (*(int *)(gen_frame + 0xc)) = 0;
LAB_00e333ec: ;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
  F_01050b70();
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e33410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      F_01050b70();
      return;
    }
    (*(uint *)(gen_frame + 0x18)) = 0xe0000000;
    do {
      uVar4 = (*(uint *)(gen_frame + 0x18));
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      bVar5 = F_00e31970(uVar3 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar4,&(*(uint *)(gen_frame + 0x18)),REFG(float, 0x10ac050));
      if (bVar5 != 0) {
        F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      F_01050b70();
    } while (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(uint *)(gen_frame + 0x18)) != 0xe0000000));
  }
  return;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      bVar3 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      while (bVar3 != 0) {
        F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
        (*(int *)(gen_frame + 0xc)) = 0;
        uVar4 = uVar4 + 1;
        bVar3 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          uVar3 = F_00e31d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          (*(int *)(gen_frame + 0xc)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe33700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    if (uVar4 == 0) {
      do {
        while( true ) {
          if (param_1 <= uVar4) goto LAB_00e337bd;
          uVar3 = F_00e31d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          (*(int *)(gen_frame + 0xc)) = 0;
          uVar4 = uVar4 + 1;
        }
      } while (uVar3 == 0);
    }
    else {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_00e337bd: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: ChannelManagerCoreTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e337e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe337e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x58)));
  uVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    if (uVar4 == 0) {
      uVar6 = F_00427e30();
      (*(ulonglong *)(gen_frame + 0x18)) = uVar6 + (longlong)CONCAT44(param_2,param_1);
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      do {
        while( true ) {
          uVar3 = F_00e31d60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          if (uVar3 != 1) break;
          F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 + 1;
          (*(int *)(gen_frame + 0xc)) = 0;
          if (param_3 <= uVar5) {
            uVar6 = F_00427e30();
            if ((*(ulonglong *)(gen_frame + 0x18)) < uVar6) goto LAB_00e338e4;
            uVar5 = 0;
          }
        }
      } while (uVar3 == 0);
    }
    else {
      F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x54)));
      (*(int *)(gen_frame + 0xc)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834))
      ;
      (*(undefined8 *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*piVar1 + 8)));
      piVar2 = ((int *)GEN_TOP(*piVar1));
      if (piVar2 != piVar1) {
        *((int *)GEN_TOP(piVar2[1])) = *piVar2;
        *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
        F_00406ad0(piVar2);
        *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
      }
      F_00e314f0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 8))) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
LAB_00e338e4: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f834));
    F_01050b70();
  }
  return uVar4;
}

/* ref: FUN_00e33900 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e33900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe33900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  byte bVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 0x54)))) {
      *((int *)GEN_TOP(piVar1[1])) = *piVar1;
      *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)this + 0x58))) = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
    }
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    bVar2 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_00e33970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe33970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_00e31f70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157454));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  return (uint)this;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e339b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe339b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(param_1 GEN_EDX_FWD);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(param_1 + 0x19 GEN_EDX_ARG);
  F_00e316d0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ChannelManagerOnSingleConnectionTmpl_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e33a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xbc))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = param_1;
    F_00e33290(this GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00e33a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33a20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe33a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_4 != '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115722c))
      ;
      puVar1[2] = 0;
      uVar2 = F_004069f0(0xc);
      if (uVar2 == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      puVar1[1] = uVar2;
      *((uint *)GEN_TOP(uVar2)) = uVar2;
      *((undefined4 *)GEN_TOP((puVar1[1] + 4))) = puVar1[1];
      *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115723c));
      goto LAB_00e33a86;
    }
  }
  puVar1 = ((undefined4 *)GEN_TOP(0x0));
LAB_00e33a86: ;
  F_00e31ff0(param_1 GEN_EDX_ARG,param_2,param_3,puVar1);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x11574bc));
  return (uint)param_1;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
GEN_LIB GEN_NOFRAME unsigned int F_00e33ad0(void)
{
  GEN_ENTER(0xe33ad0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf2 */
GEN_LIB GEN_NOFRAME unsigned int F_00e33ae0(void)
{
  GEN_ENTER(0xe33ae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e33af0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  uVar2 = F_00e30db0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: PrimaryEntityTmpl_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe33b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[9]));
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x11572fc));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  param_1[9] = 0;
  F_00e30db0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe33b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(param_1[2]));
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *param_1 = (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(param_1 GEN_EDX_ARG);
  param_1[0x23] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00(param_1 + 0x23 GEN_EDX_ARG);
  param_1[0x19] =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990(param_1 + 0x19 GEN_EDX_ARG);
  F_00e316d0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: PrimaryEntityFactoryClass_LF_TChatProtoUp_ChatProtoChannel_Network_Application_TChatProtoDown::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe33bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * this_00;
  undefined4 * puVar1;
  uint uVar2;
  
  this_00 = ((undefined4 *)GEN_TOP(F_004069f0(0x34)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115722c));
    puVar1[2] = 0;
    uVar2 = F_004069f0(0xc);
    if (uVar2 == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    puVar1[1] = uVar2;
    *((uint *)GEN_TOP(uVar2)) = uVar2;
    *((undefined4 *)GEN_TOP((puVar1[1] + 4))) = puVar1[1];
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115723c));
  }
  F_00e31ff0(this_00 GEN_EDX_ARG,param_1,param_2,puVar1);
  *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x11574bc));
  return (uint)this_00;
}

/* ref: FUN_00e33cd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x104))) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x104))) + 0x10c0)));
}

/* ref: FUN_00e33cf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x104))) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x104))) + 0x10c4)));
}

/* ref: FUN_00e33d10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x104)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x10c0))) = 0;
    *((undefined4 *)GEN_TOP((uVar1 + 0x10c4))) = 0;
  }
  return uVar1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x104);
  *((undefined4 *)GEN_TOP((uVar1 + 4))) = param_1;
  *(undefined4 *)(this + 0x88) = 2;
  return uVar1;
}

/* ref: FUN_00e33d50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33d50(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00ba7100(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00e33d70 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e33d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe33d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  uVar2 = F_0042a990(param_1 GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,uVar2,uVar1);
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x90) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_FWD);
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == 7);
  }
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e33e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe33e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x90) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_FWD);
  if ((uVar1 != 4) && (uVar1 = F_00ba7490(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG), uVar1 != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e33e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33e60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe33e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00e33e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e33e80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe33e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e33ed0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e33ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe33ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  byte bVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x58U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    (*(undefined2 *)(gen_frame + 0xc)) = 1;
    (*(ulonglong *)(gen_frame + 0x10)) = 0;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x38;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined8 *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x20)) = 0;
    (*(undefined8 *)(gen_frame + 0x28)) = 0;
    (*(undefined8 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x10)) + 0)) = param_1;
    (*(ulonglong *)(gen_frame + 0x10)) = (ulonglong)param_1;
    if (param_3 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_3;
      if (iVar5 != param_3[1]) {
        F_00c46aa0((int)&(*(ulonglong *)(gen_frame + 0x10)) + 4,iVar5,param_3[1] - iVar5);
      }
    }
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x38;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x38;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}

/* ref: FUN_00e34000 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e34000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe34000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x290, 0);
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) + 0x298U <= *(uint *)this)) {
    if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_3;
    (*(undefined2 *)(gen_frame + 0xc)) = 9;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0x278;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x10)),0,0x268);
    (*(undefined4 *)(gen_frame + 0x10)) = param_2;
    if (param_4 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_4;
      if (iVar5 != param_4[1]) {
        F_00c46aa0(((undefined1 *)(gen_frame + 0x14)),iVar5,param_4[1] - iVar5);
      }
    }
    if ((param_1 != ((int *)GEN_TOP(0x0))) &&
       (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0))), (char)uVar4 != '\0')) {
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
      for (iVar5 = 0x9e; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x278;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
      *piVar1 = *piVar1 + 0x278;
      psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
      *psVar2 = *psVar2 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e34170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e34170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00e29b40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e34190 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e34190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00e341b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e341b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe341b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e341f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e341f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe341f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0xe341f0u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x18))) = 1;
    }
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = (undefined2)param_2;
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x700000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e342e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e342e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe342e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00ba85b0(in_ecx GEN_EDX_FWD,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  return (uint)in_ecx;
}

/* ref: FUN_00e34300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba78e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e34310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e34310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34310u, gen_a0, gen_a1, 0u, 0u);
  GEN_SUSPECT(0xe34310u, "uStack_1a");
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  short * psVar2;
  uint in_EAX = 0;
  undefined8 * puVar3;
  __time64_t _Var4;
  undefined2 uStack_1a;
  
  if ((*((int *)GEN_TOP(((int)this + 0x10))) == 0) &&
     (in_EAX = *((uint *)GEN_TOP(((int)this + 0xc))), in_EAX + 0x38 <= *(uint *)this)) {
    if (in_EAX == 0) {
      puVar3 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 8)));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10))) = 0x20;
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x20;
    }
    _Var4 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    puVar3 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 8))))));
    *puVar3 = 0x18;
    puVar3[1] = CONCAT26(uStack_1a,0x800000000);
    puVar3[2] = CONCAT44((int)_Var4,param_1);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 0x18;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x10)));
    *piVar1 = *piVar1 + 0x18;
    psVar2 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x16)));
    *psVar2 = *psVar2 + 1;
    return 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00e343f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e343f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe343f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba7890(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e34400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ba7a40(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e34410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ba7aa0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e34420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ba7b00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e34440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e34440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_InitializeCriticalSection(this);
  return (uint)this;
}

/* ref: FUN_00e34460 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e34460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x104)));
  uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0xe0)));
  uVar3 = F_0042a990((int)this + 0x8c GEN_EDX_FWD);
  F_00ba86c0(((undefined *)GEN_TOP((iVar1 + 0x68))) GEN_EDX_ARG,uVar3,uVar2);
  return 1;
}

/* ref: FUN_00e34490 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e34490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe34490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10a8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10a4)));
  *((int *)GEN_TOP(((int)this + 0x10c4))) = *((int *)GEN_TOP(((int)this + 0x10c4))) + param_3;
  if (iVar3 + param_3 < 0x1001) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,param_3);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + param_3;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  iVar4 = 0x1000 - iVar3;
  if (0 < iVar4) {
    F_00c46aa0(iVar3 + 0x94 + (int)this,param_2,iVar4);
    *((int *)GEN_TOP(((int)this + 0x10a4))) = *((int *)GEN_TOP(((int)this + 0x10a4))) + iVar4;
  }
  if (*((int *)GEN_TOP(((int)this + 0x1094))) == 0) {
    uVar1 = param_3;
    if (param_3 < 0x1001) {
      uVar1 = 0x1000;
    }
    *((uint *)GEN_TOP(((int)this + 0x1098))) = uVar1;
    pvVar2 = F_00c51787(uVar1);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    F_00c46aa0(pvVar2,iVar4 + param_2,param_3 - iVar4);
    *((uint *)GEN_TOP(((int)this + 0x109c))) = param_3 - iVar4;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x1098))) < *((int *)GEN_TOP(((int)this + 0x109c))) + param_3) {
    iVar3 = *((uint *)GEN_TOP(((int)this + 0x1098))) + param_3;
    pvVar2 = F_00c52171(*((int *)GEN_TOP(((int)this + 0x1094))),iVar3);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) = pvVar2;
    *((int *)GEN_TOP(((int)this + 0x1098))) = iVar3;
  }
  F_00c46aa0(*((int *)GEN_TOP(((int)this + 0x1094))) + *((int *)GEN_TOP(((int)this + 0x109c))),iVar4 + param_2,
             param_3 - iVar4);
  *((int *)GEN_TOP(((int)this + 0x109c))) = *((int *)GEN_TOP(((int)this + 0x109c))) + (param_3 - iVar4);
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e345e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe345e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x14);
  uVar1 = 0;
  if (uVar2 != 0) {
    if ((*(int *)(this + 0x90) == 0) || (uVar1 = *(uint *)(this + 0x18), uVar2 <= uVar1)) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      return uVar2;
    }
    uVar1 = F_00ba7610(this + 0x68 GEN_EDX_FWD,*(int *)(this + 0x10) + uVar1,uVar2 - uVar1);
    if ((int)uVar1 < 1) {
      if ((int)uVar1 < 0) {
        uVar2 = F_00ba74d0(this + 0x68 GEN_EDX_ARG);
        *(undefined4 *)(this + 0x90) = 0;
        return uVar2;
      }
    }
    else {
      *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
      if (*(uint *)(this + 0x14) <= *(uint *)(this + 0x18)) {
        *(undefined4 *)(this + 0x14) = 0;
        *(undefined4 *)(this + 0x18) = 0;
      }
      *(uint *)(this + 0x10c0) = *(int *)(this + 0x10c0) + uVar1;
    }
  }
  return uVar1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e34650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x10a8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x90) != 0) {
    iVar1 = *(int *)(this + 0x10a0);
    if (iVar1 < *(int *)(this + 0x10a4)) {
      uVar2 = *(uint *)(this + 0x30);
      if (uVar2 < 0x20) {
        uVar4 = *(int *)(this + 0x10a4) - iVar1;
        uVar5 = 0x20 - uVar2;
        if (uVar4 < 0x20 - uVar2) {
          uVar5 = uVar4;
        }
        F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
        *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
        *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
      }
      iVar1 = *(int *)(this + 0x10a0);
      if ((iVar1 < *(int *)(this + 0x10a4)) && (uVar2 = *(uint *)(this + 0x30), 0x1f < uVar2)) {
        uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x2c) + 0x10)));
        if (uVar2 < uVar5) {
          uVar4 = *(int *)(this + 0x10a4) - iVar1;
          uVar5 = uVar5 - uVar2;
          if (uVar4 < uVar5) {
            uVar5 = uVar4;
          }
          F_00c46aa0(*(int *)(this + 0x2c) + uVar2,this + iVar1 + 0x94,uVar5);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) + uVar5;
          *(uint *)(this + 0x10a0) = *(int *)(this + 0x10a0) + uVar5;
        }
      }
      if (*(int *)(this + 0x10a4) <= *(int *)(this + 0x10a0)) {
        iVar1 = *(int *)(this + 0x1094);
        *(undefined4 *)(this + 0x10a4) = 0;
        *(undefined4 *)(this + 0x10a0) = 0;
        if ((iVar1 != 0) && (uVar2 = *(uint *)(this + 0x109c), 0 < (int)uVar2)) {
          if (uVar2 < 0x1001) {
            F_00c46aa0(this + 0x94,iVar1,uVar2);
            uVar3 = *(undefined4 *)(this + 0x109c);
            *(undefined4 *)(this + 0x109c) = 0;
            *(undefined4 *)(this + 0x10a4) = uVar3;
            return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
          }
          F_00c46aa0(this + 0x94,iVar1,0x1000);
          *(undefined4 *)(this + 0x10a4) = 0x1000;
          F_00c46e20(*(int *)(this + 0x1094),*(int *)(this + 0x1094) + 0x1000,
                     *(int *)(this + 0x109c) - 0x1000);
          *(int *)(this + 0x109c) = *(int *)(this + 0x109c) - 0x1000;
        }
      }
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00e347f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e347f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xe347f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0x80))) != 0) {
    bVar1 = F_00e34000(param_2 + 2 GEN_EDX_FWD,*((int *)GEN_TOP((param_1 + 0x80))),param_3,param_5,param_6);
    if (bVar1 != 0) goto LAB_00e34835;
  }
  bVar1 = F_00e33ed0(param_2 + 2 GEN_EDX_ARG,param_3,param_5,param_6);
LAB_00e34835: ;
  if ((param_4 != '\0') && (param_2[5] != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG,param_1);
  }
  return bVar1;
}

/* ref: FUN_00e348a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e348a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe348a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(gen_size32 *)this = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00e348e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e348e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe348e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e348f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e348f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe348f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00e34920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  __time64_t _Var6;
  
  piVar2 = ((int *)GEN_TOP(param_1[1]));
  bVar3 = false;
  puVar4 = param_1;
  if (piVar2[5] == 0) {
    _Var6 = F_00c4b7c2(((__time64_t *)GEN_TOP(0x0)));
    LOCK();
    iVar1 = piVar2[0x12];
    piVar2[0x12] = 0;
    UNLOCK();
    if (iVar1 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((int)_Var6 - piVar2[0x10])));
      if (puVar4 <= ((undefined4 *)GEN_TOP(((uint)piVar2[0x11] >> 1)))) goto LAB_00e34980;
      puVar4 = ((undefined4 *)GEN_TOP(F_00e341f0(piVar2 + 2 GEN_EDX_ARG,*param_1,0)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(F_00e34310(piVar2 + 2 GEN_EDX_ARG,*param_1)));
    }
    bVar3 = true;
    piVar2[0x10] = (int)_Var6;
  }
LAB_00e34980: ;
  if (piVar2[5] != 0) {
    if ((piVar2[6] == 0) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) {
      return uVar5;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,*(undefined4 *)this)));
    if (bVar3) {
      piVar2[5] = 0;
      piVar2[6] = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e349c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e349c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe349c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  _InterlockedExchange((volatile long *)(((undefined4 *)this)), (long)(param_1));
  return (uint)this;
}

/* ref: FUN_00e349d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e349d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe349d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ba85e0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e34a00 */
GEN_LIB GEN_FRAME uint F_00e34a00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe34a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x24)));
  *((uint *)GEN_TOP((uVar1 + 0x90))) = uVar1 + 0x68;
  return uVar1;
}

/* ref: FUN_00e34a20 */
GEN_LIB GEN_FRAME unsigned int F_00e34a20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe34a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00e34490(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))) GEN_EDX_ARG,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00e34a40 */
GEN_LIB GEN_FRAME uint F_00e34a40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe34a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + 0x58))) + 0x88))) = 4;
  return param_1;
}

/* ref: FUN_00e34a60 */
GEN_LIB GEN_FRAME byte F_00e34a60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe34a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x24)));
  *((undefined4 *)GEN_TOP((iVar1 + 0x90))) = 0;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x58))) + 0x88))) = 3;
  return 0;
}

/* ref: FUN_00e34aa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e34aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
  }
  return 0;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf4 */
GEN_LIB GEN_NOFRAME byte F_00e34ae0(void)
{
  GEN_ENTER(0xe34ae0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00e34af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_size32 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_1 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  *((gen_size32 *)GEN_TOP(((int)this + 8))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((gen_size32 *)GEN_TOP(((int)this + 0x24))) = param_1;
  pvVar1 = F_00c51787(param_1);
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = pvVar1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c))) = pvVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x3c))) = 0;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))),0,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x48))))), (long)(0));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x2d;
  return (uint)this;
}

/* ref: ConnectionData_ConnectionManagerTmpl_TChatProtoUp_ChatProtoChannel_Network_Application::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34b70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe34b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[10])));
  F_00c4c68f(((undefined *)GEN_TOP(param_1[3])));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e34bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34bb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e34c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00e29b40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e34c30 */
GEN_LIB GEN_FRAME uint F_00e34c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe34c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e34c40 */
GEN_LIB GEN_FRAME uint F_00e34c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe34c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  if ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2])) {
    do {
      F_00e34920(&(*(undefined4 *)&gen_args[3]) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]) + 3);
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          (*(int * PTR32 *)&gen_args[1]) = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            (*(int * PTR32 *)&gen_args[1]) = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          while (((*(int * PTR32 *)&gen_args[1]) = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2]))))) {
            cVar1 = *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
            piVar2 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
      }
    } while ((*(int * PTR32 *)&gen_args[1]) != (*(int * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e34cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e34af0(this GEN_EDX_FWD,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574fc));
  *((int *)GEN_TOP(((int)this + 0x54))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_2;
  F_00ba7100((int)this + 0x5c GEN_EDX_ARG);
  F_00ba85b0((int)this + 0x68 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x58))));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[1])REFP(0x11574d8));
  *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1098))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x109c))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10a8));
  *((undefined4 *)GEN_TOP(((int)this + 0x10c0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10a4))) = 0;
  F_00ba8040();
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x8c))),(LONG)this);
  F_00baba80(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00ba78e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe34a00)));
  F_00ba7890(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe34a20)));
  F_00ba7b00(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe34a60)));
  F_00ba7a40(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe34a40)),5);
  F_00ba9ae0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,(int)this + 0x5c);
  F_00ba7aa0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG,((code *)REFP(0xe34a40)),*((undefined4 *)GEN_TOP((param_1 + 0x70))));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = *((undefined4 *)GEN_TOP((param_1 + 0x74)));
  return (uint)this;
}

/* ref: FUN_00e34dd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e34dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574fc));
  F_00ba74d0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD);
  F_00baa650(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1094))));
    *((undefined4 *)GEN_TOP(((int)this + 0x1094))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 0x104))) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10a8));
  F_00ba85e0(((undefined *)GEN_TOP(((int)this + 0x68))) GEN_EDX_ARG);
  F_00bac250(((undefined *)GEN_TOP(((int)this + 0x5c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x11574e0));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))));
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_00e34e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe34e60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e34ec0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e34ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe34ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e34ec0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00e34f00 */
GEN_LIB GEN_FRAME uint F_00e34f00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe34f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00e34c40(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00e34f30 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e34f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x104)));
  uVar4 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  this_00 = ((undefined *)GEN_TOP(F_004069f0(0x10c8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00e34cd0(this_00 GEN_EDX_ARG,(int)this + 0x8c,this);
  }
  *((uint *)GEN_TOP(((int)this + 0x104))) = uVar4;
  uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0xe0)));
  uVar3 = F_0042a990((int)this + 0x8c GEN_EDX_ARG);
  F_00ba86c0(((undefined *)GEN_TOP((uVar4 + 0x68))) GEN_EDX_ARG,uVar3,uVar2);
  return 1;
}

/* ref: Application::Network::ChatProtoChannel::ServiceConsumerConnectionManager::ConsumerConnection::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e34fa0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe34fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00e34dd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00e34fd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e34fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe34fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  F_00e34c40(&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))),this)
  ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x50));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
}

/* ref: FUN_00e35020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e35020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe35020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00e34ec0(this GEN_EDX_FWD,piVar2[2]);
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

/* ref: FUN_00e35070 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e35070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe35070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042cc20(this GEN_EDX_FWD,((char *)REFP(0x1157514)),REFG(undefined4, 0x108cc50));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0x3e81388;
  *((undefined2 *)GEN_TOP(((int)this + 0x54))) = 0xbff9;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  return (uint)this;
}

/* ref: FUN_00e350b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e350b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe350b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e35020(this GEN_EDX_FWD);
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
    F_00e2ccd0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e35150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e35150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe35150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (this != param_1) {
    F_0042ccf0(this GEN_EDX_FWD,param_1);
    *((undefined2 *)GEN_TOP(((int)this + 0x54))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x54)));
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x58)));
    *((undefined2 *)GEN_TOP(((int)this + 0x5c))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5c)));
    *((undefined2 *)GEN_TOP(((int)this + 0x5e))) = *((undefined2 *)GEN_TOP(((int)param_1 + 0x5e)));
    F_00c2eb30(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG,
                 *((int *)GEN_TOP(((int)param_1 + 100))) - *((int *)GEN_TOP(((int)param_1 + 0x60))));
    iVar1 = *((int *)GEN_TOP(((int)param_1 + 100))) - *((int *)GEN_TOP(((int)param_1 + 0x60)));
    if (iVar1 != 0) {
      F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x60))),*((int *)GEN_TOP(((int)param_1 + 0x60))),iVar1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x70)));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = *((undefined4 *)GEN_TOP(((int)param_1 + 0x74)));
  }
  return (uint)this;
}

/* ref: FUN_00e351c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e351c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe351c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_0042b630(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  F_00e35150(this GEN_EDX_ARG,param_1);
  return (uint)this;
}

/* ref: FUN_00e351f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e351f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe351f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00e350b0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

