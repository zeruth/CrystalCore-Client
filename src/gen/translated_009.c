#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0047c5f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0xe))) == '\0') {
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

/* ref: FUN_0047c690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x71))) == '\0') {
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

/* ref: FUN_0047c6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x71))) == '\0') {
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

/* ref: FUN_0047c750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047c750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47c750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00473f10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047c780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c780(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47c780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047c790 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047c790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47c790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047c7b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047c7b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47c7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047c7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47c7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  uint uVar2;
  short local_8;
  
  sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 1)));
  if (*((char *)GEN_TOP(((int)this + 0x12))) != '\0') {
    local_8 = CONCAT11((char)sVar1,(char)((ushort)sVar1 >> 8));
    sVar1 = local_8;
  }
  uVar2 = (uint)(ushort)(sVar1 + 3) + *((int *)GEN_TOP(((int)this + 0xc)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
    return 0xffffffff;
  }
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  uVar2 = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar2;
  return uVar2;
}

/* ref: FUN_0047c800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0047c830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  puVar2 = param_2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)this;
}

/* ref: FUN_0047c860 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047c860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47c860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)(byte)(*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 1))) + 2) + *((int *)GEN_TOP(((int)this + 0xc)));
  if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar1) {
    return 0xffffffff;
  }
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  uVar1 = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_0047c890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = *param_1;
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047c8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047c9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0042cc20(this GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_0047ca20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ca20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47ca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x474710));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_3;
  return (uint)this;
}

/* ref: FUN_0047ca50 */
GEN_OWN GEN_FRAME uint F_0047ca50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47ca50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0047ca90 */
GEN_OWN GEN_FRAME unsigned int F_0047ca90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47ca90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0047cab0 */
GEN_OWN GEN_FRAME unsigned int F_0047cab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0047cad0 */
GEN_OWN GEN_FRAME unsigned int F_0047cad0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0047caf0 */
GEN_OWN GEN_FRAME uint F_0047caf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47caf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_0047cb50 */
GEN_OWN GEN_FRAME unsigned int F_0047cb50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00560a60(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cb90 */
GEN_OWN GEN_FRAME unsigned int F_0047cb90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cbc0 */
GEN_OWN GEN_FRAME unsigned int F_0047cbc0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0047cc30 */
GEN_OWN GEN_FRAME unsigned int F_0047cc30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47cc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_0047ccd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ccd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047ccf0 */
GEN_OWN GEN_FRAME uint F_0047ccf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047cd20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047cd20(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47cd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0047cd30 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0047cd30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47cd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_0047cd60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47cd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x58,0,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = 1;
    *(undefined * PTR32 *)this = this_00;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_0047cdb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cdb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47cdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047cde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cde0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x58))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0047ce10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0047ce40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ce40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047ce70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ce70(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0047cea0 */
GEN_OWN GEN_FRAME uint F_0047cea0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47cea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_0047ceb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ceb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ceb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004747d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047cf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47cf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047cf40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047cf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47cf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474890(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047cf50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47cf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004748f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047cf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47cf60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047cf80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047cf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47cf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474950(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047cf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47cf90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047cfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47cfb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047cfd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047cfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47cfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004749b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047cfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047cfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47cfe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047d020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47d020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474a10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047d040 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047d040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47d040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474a80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047d050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d070 */
GEN_OWN GEN_FRAME uint F_0047d070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047d080 */
GEN_OWN GEN_FRAME uint F_0047d080(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c46e20(param_3,param_1,param_2 - param_1);
  return uVar1 + (param_2 - param_1);
}

/* ref: FUN_0047d0a0 */
GEN_OWN GEN_FRAME uint F_0047d0a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(0x0));
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_0047d0c0 */
GEN_OWN GEN_FRAME uint F_0047d0c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0047d100 */
GEN_OWN GEN_FRAME uint F_0047d100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x47d100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_0047d140 */
GEN_OWN GEN_FRAME uint F_0047d140(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0047d180 */
GEN_OWN GEN_FRAME uint F_0047d180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_00596cd0(this GEN_EDX_ARG,iVar1);
    iVar1 = iVar1 + 8;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_0047d1c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = *(undefined1 *)(param_1 + 0x17);
  return (uint)this;
}

/* ref: FUN_0047d2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d2e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047d2f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047d2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047d360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0047d380 */
GEN_OWN GEN_FRAME uint F_0047d380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d3a0 */
GEN_OWN GEN_FRAME uint F_0047d3a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0047d3e0 */
GEN_OWN GEN_FRAME uint F_0047d3e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0047d400 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047d400(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47d400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_005a2670(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0047d410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d430 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047d430(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47d430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0047d450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047d450(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x47d450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_0047d460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x5c)));
  return (uint)this;
}

/* ref: FUN_0047d490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  puVar2 = param_1 + 2;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  return (uint)this;
}

/* ref: FUN_0047d4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d4c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d4f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x160))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x10c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d540(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x11c))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_0047d590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d590(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d5c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d5c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d5f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d620(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xfc))) GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xa8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  F_0042c880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d670 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0047d670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  uVar1 = F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_0047d710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_0047d750 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047d750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_0047d770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0047d790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d790(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047d7c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047d7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47d7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 8,0,400);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 8 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0047d820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047d820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47d820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_0047d840 */
GEN_OWN GEN_FRAME uint F_0047d840(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((param_1 + 8))) = *((int *)GEN_TOP((param_1 + 8))) + param_2;
  return param_1;
}

/* ref: FUN_0047d850 */
GEN_OWN GEN_FRAME uint F_0047d850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_0047d890 */
GEN_OWN GEN_FRAME uint F_0047d890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d8b0 */
GEN_OWN GEN_FRAME uint F_0047d8b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d8d0 */
GEN_OWN GEN_FRAME uint F_0047d8d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d8d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d8f0 */
GEN_OWN GEN_FRAME uint F_0047d8f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d910 */
GEN_OWN GEN_FRAME uint F_0047d910(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d930 */
GEN_OWN GEN_FRAME uint F_0047d930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d950 */
GEN_OWN GEN_FRAME uint F_0047d950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d970 */
GEN_OWN GEN_FRAME uint F_0047d970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d990 */
GEN_OWN GEN_FRAME uint F_0047d990(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d9b0 */
GEN_OWN GEN_FRAME uint F_0047d9b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0047d9d0 */
GEN_OWN GEN_FRAME uint F_0047d9d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47d9d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = param_3;
  return param_1;
}

/* ref: FUN_0047d9e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_0047d9e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47d9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_0047da10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047da10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47da10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0047da60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047da60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47da60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_0047da80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047da80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47da80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047daa0 */
GEN_OWN GEN_FRAME uint F_0047daa0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47daa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0047dac0 */
GEN_OWN GEN_FRAME uint F_0047dac0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(code * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x47dac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(code * param_5 = (code *)(uintptr_t)gen_a4;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*((undefined4 *)GEN_TOP((param_1 + iVar3 * 4))),
                       *((undefined4 *)GEN_TOP((param_1 - 4 + iVar3 * 4))));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 4)));
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 4)));
    iVar2 = param_3 - 1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 - 1) / 2;
      uVar1 = (*param_5)(*((undefined4 *)GEN_TOP((param_1 + iVar3 * 4))),*param_4);
      if ((char)uVar1 == '\0') {
        *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = *param_4;
        return uVar1;
      }
      *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 4)));
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *((uint *)GEN_TOP((param_1 + iVar3 * 4))) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_0047db80 */
GEN_OWN GEN_FRAME uint F_0047db80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47db80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_0047dbb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dbb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = ((int *)GEN_TOP((iVar2 + 0x54)));
  *piVar1 = *piVar1 + 1;
  *(int *)this = iVar2;
  return (uint)this;
}

/* ref: FUN_0047dbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_0047dc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dc10(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47dc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) + param_2;
  return in_ecx;
}

/* ref: FUN_0047dc20 */
GEN_OWN GEN_FRAME uint F_0047dc20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x47dc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_0047dac0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_0047dc50 */
GEN_OWN GEN_FRAME unsigned int F_0047dc50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47dc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00560a60(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_0047dc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  return (uint)this;
}

/* ref: FUN_0047dca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00c45bc0(this GEN_EDX_FWD,0);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (param_1 == ((char *)GEN_TOP(0x0))) {
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)REFP(0x10911a0));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  F_00c45f09(this,param_1);
  return (uint)this;
}

/* ref: FUN_0047dd00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047dd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47dd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00c45e96(this);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  uVar1 = F_00c45be8(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0047dd70 */
GEN_OWN GEN_FRAME uint F_0047dd70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47dd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  undefined4 * puVar1;
  undefined * p_Var2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if ((param_1 != ((int *)GEN_TOP(0x0))) && (*param_1 == 0)) {
    puVar1 = ((undefined4 *)GEN_TOP(F_004069f0(0x18)));
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      iVar3 = *((int *)GEN_TOP((*param_2 + 0x18)));
      bVar4 = true;
      if (iVar3 == 0) {
        iVar3 = *param_2 + 0x1c;
      }
      F_0047dca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar3);
      puVar1[1] = 0;
      *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x109106c));
      p_Var2 = F_00c45a9d(((undefined *)(gen_frame + 0x24)));
      puVar1[2] = (*(uint *)((char *)(p_Var2)));
      puVar1[3] = (*(short * PTR32 *)(((char *)(p_Var2) + 4)));
      puVar1[4] = (*(int *)(((char *)(p_Var2) + 8)));
      puVar1[5] = (*(wchar_t * PTR32 *)(((char *)(p_Var2) + 12)));
    }
    *param_1 = (int)puVar1;
    if (bVar4) {
      F_0047dd00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return 2;
}

/* ref: FUN_0047de10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047de10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x47de10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  undefined1 * puVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP((param_1 + 4))) = param_2;
  puVar1 = param_3;
  if (param_3 == ((undefined1 *)GEN_TOP(0x0))) {
    puVar1 = &REFG(undefined1, 0x107fc63);
  }
  uVar2 = F_0042e430(((undefined *)GEN_TOP((param_1 + 0x10))) GEN_EDX_FWD,puVar1);
  if (param_4 != '\0') {
    *((undefined1 *)GEN_TOP((param_1 + 0xc))) = 1;
    uVar2 = F_0043f8b0(0x3b);
  }
  return uVar2;
}

/* ref: FUN_0047de50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047de50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47de50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_FWD);
  uVar1 = F_00479ae0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0047de70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0047de70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47de70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((byte *)GEN_TOP((in_ecx + 0x70ed))) = *((byte *)GEN_TOP((in_ecx + 0x70ed))) & 0xfe;
  *((undefined1 *)GEN_TOP((in_ecx + 0x2c))) = 1;
  if ((*((char *)GEN_TOP((in_ecx + 0x71d8))) == '\0') && (*((int *)GEN_TOP((in_ecx + 0x71d4))) == 100)) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x71d4))) = 0xffffffff;
    *((undefined1 *)GEN_TOP((in_ecx + 0x71d8))) = 0;
  }
  return;
}

/* ref: Client::UI::UIInputData::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dea0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47dea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)(param_1 + 0x850) = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)(param_1 + 0x864) != 0) {
    F_00406810(*(int *)(param_1 + 0x864));
    *(undefined4 *)(param_1 + 0x864) = 0;
    *(undefined4 *)(param_1 + 0x868) = 0;
  }
  F_00a34020(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompanyInvite::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047df00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47df00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1090ba8));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090ba0));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1090590));
  F_0042c880(param_1 + 9 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x1090864));
  F_00406b30(param_1[4]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047df50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047df50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47df50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar1 = F_00406b30(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxySearch::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047df70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47df70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  F_00406b30(param_1[6]);
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047dfb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047dfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047dfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47dfe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::CharaConfig::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e010(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (param_1[5] != 0) {
    F_00406810(param_1[5]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047e050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047e080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::RaptureGearsetModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (param_1[5] != 0) {
    F_00406810(param_1[5]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047e100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(*param_1))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf4 */
GEN_OWN GEN_NOFRAME uint F_0047e130(void)
{
  GEN_ENTER(0x47e130u, 0u, 0u, 0u, 0u);
  return 0x46000;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf5 */
GEN_OWN GEN_NOFRAME uint F_0047e140(void)
{
  GEN_ENTER(0x47e140u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf6 */
GEN_OWN GEN_NOFRAME uint F_0047e150(void)
{
  GEN_ENTER(0x47e150u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e160(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00476380(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Misc::RaptureMacroModule::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47e190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(uint *)(this + 8) || (param_2 != *(uint *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(uint *)(this + 8) = param_1;
  uVar1 = param_1 | param_2;
  *(uint *)(this + 0xc) = param_2;
  if (uVar1 == 0) {
    uVar1 = F_00447050(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0047e1d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0047e1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47e1d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (param_1 != 0) {
    F_00479e00(this GEN_EDX_FWD,*((uint *)GEN_TOP(((int)this + 0xc))) | param_1,(undefined1)param_2);
  }
  return;
}

/* ref: FUN_0047e1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e1f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1091214));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::UI::Shell::ShellCommandChatLinkshellIndex::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47e260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint in_ecx;
  undefined * this_00;
  undefined4 uVar1;
  
  if (param_2 < 10) {
    uVar1 = 3;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_007d5ab0(this_00 GEN_EDX_ARG,param_2);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47e2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  if (param_2 < 10) {
    this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,param_2 + 0xc6)));
    uVar1 = param_3;
    if (param_3 == 2) {
      uVar1 = (uint)(*((int *)GEN_TOP(((int)this_00 + 0x14))) != 0);
    }
    F_00414a40(this_00 GEN_EDX_ARG,(uint)(uVar1 == 0),1);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf7 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47e300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  if (9 < param_2) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,0xb9)));
  uVar1 = *((uint *)GEN_TOP(((int)this_00 + 0x14)));
  bVar2 = (byte)param_2;
  uVar3 = param_3;
  if (param_3 == 2) {
    uVar3 = (uint)((1 << GEN_SHC(bVar2, bVar2) & uVar1) != 0);
  }
  if (uVar3 == 0) {
    F_00414a40(this_00 GEN_EDX_ARG,1 << GEN_SHC(bVar2, bVar2) | uVar1,1);
    return 1;
  }
  F_00414a40(this_00 GEN_EDX_ARG,~(1 << GEN_SHC(bVar2, bVar2)) & uVar1,1);
  return 1;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e380(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47e3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 10) {
    if (param_3 == 0x46) {
      iVar2 = 0;
      do {
        uVar3 = param_2;
        iVar4 = iVar2;
        pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD)));
        F_0044bd80(pvVar1 GEN_EDX_ARG,uVar3,iVar4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      return 1;
    }
    if (param_3 < 0x10) {
      pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG)));
      F_0044bd80(pvVar1 GEN_EDX_ARG,param_2,param_3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf6 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47e430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  char cVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if (param_2 != 0xaa) {
    if (param_2 < 8) {
      uVar3 = 3;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG);
        *((byte *)GEN_TOP((uVar2 + 0x2c24c))) = *((byte *)GEN_TOP((uVar2 + 0x2c24c))) & 0x7f;
        F_007d5b50(this_00 GEN_EDX_ARG,param_2 + 10);
        return 1;
      }
    }
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG);
  cVar1 = *((char *)GEN_TOP((uVar2 + 0x2c24c)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG);
  if (-1 < cVar1) {
    *((byte *)GEN_TOP((uVar2 + 0x2c24c))) = *((byte *)GEN_TOP((uVar2 + 0x2c24c))) | 0x80;
    return 1;
  }
  *((byte *)GEN_TOP((uVar2 + 0x2c24c))) = *((byte *)GEN_TOP((uVar2 + 0x2c24c))) & 0x7f;
  return 1;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47e4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * this_00;
  uint uVar1;
  
  if (param_2 < 8) {
    this_00 = ((undefined *)GEN_TOP(F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_FWD,param_2 + 0xd0)));
    uVar1 = param_3;
    if (param_3 == 2) {
      uVar1 = (uint)(*((int *)GEN_TOP(((int)this_00 + 0x14))) != 0);
    }
    F_00414a40(this_00 GEN_EDX_ARG,(uint)(uVar1 == 0),1);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e530(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x47e560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    iVar2 = param_2 + 10;
    if (param_3 == 0x46) {
      iVar3 = 0;
      do {
        iVar4 = iVar2;
        iVar5 = iVar3;
        pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_FWD)));
        F_0044bd80(pvVar1 GEN_EDX_ARG,iVar4,iVar5);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      return 1;
    }
    if (param_3 < 0x10) {
      pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG)));
      F_0044bd80(pvVar1 GEN_EDX_ARG,iVar2,param_3);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0047e5d0 */
GEN_OWN GEN_FRAME uint F_0047e5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x47e5d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x1372414);
  if (REFG(undefined4, 0x15d678c) == 0) {
    F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
    if (REFG(undefined4, 0x15d678c) == 0) {
      REFG(undefined4, 0x15d6788) = REFG(undefined4, 0x15d6788) + 1;
      REFG(undefined4, 0x15d678c) = REFG(undefined4, 0x15d6788);
    }
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = REFG(undefined4, 0x15d678c);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  if (REFG(undefined4, 0x15d678c) < *((uint *)GEN_TOP((iVar1 + 0xc)))) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + REFG(undefined4, 0x15d678c) * 4)));
    if (uVar3 != 0) goto LAB_0047e6d1;
  }
  else {
    uVar3 = 0;
  }
  if (*((char *)GEN_TOP((iVar1 + 0x14))) == '\0') {
LAB_0047e653: ;
    if (uVar3 != 0) goto LAB_0047e6d1;
  }
  else {
    uVar3 = F_00c45d58();
    if (uVar4 < *((uint *)GEN_TOP((uVar3 + 0xc)))) {
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 8))) + uVar4 * 4)));
      goto LAB_0047e653;
    }
  }
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != 0) {
    F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar4;
  }
  uVar4 = F_0047dd70(&(*(uint *)(gen_frame + 0x8)),piVar2);
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (uVar4 == 0xffffffff) {
                    
    F_00c4c6c9();
  }
  REFG(undefined4, 0x1372414) = (*(uint *)(gen_frame + 0x8));
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
  if (*((int *)GEN_TOP((uVar3 + 4))) != -1) {
    *((int *)GEN_TOP((uVar3 + 4))) = *((int *)GEN_TOP((uVar3 + 4))) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  F_00c45ce1(uVar3);
LAB_0047e6d1: ;
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0047e6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047e750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047e770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: Utf8StringBasicStreamBuf_Utf8StringBasicStream_DU_char_traits_D_std::vf3 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0047e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  if (param_1 == 0xffffffff) {
    return 0xffffffff;
  }
  *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = (char)param_1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) - 1;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) = **((int * PTR32 *)GEN_TOP(((int)this + 0x24))) + 1;
  return param_1;
}

/* ref: Utf8StringBasicStreamBuf_Utf8StringBasicStream_DU_char_traits_D_std::vf13 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0047e830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47e830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  return 0;
}

/* ref: FUN_0047e8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e8c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047e8d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e8d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47e8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047e8e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047e8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = ((undefined4 *)GEN_TOP(*puVar1));
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,400);
      piVar6 = ((int *)GEN_TOP((uint)uVar7));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_0047e950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047e950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47e950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00473080(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047e970 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047e9c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47e9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047ea00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ea00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ea00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004731e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047ea10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ea10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ea10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0047b780(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047ea60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ea60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ea60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x192);
    uVar1 = (uint)uVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_0047ea90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ea90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ea90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0047b7f0(this GEN_EDX_FWD,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0047ebc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ebc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ebc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047ebf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ebf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0047ec10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ec10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_0047ec70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ec70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ec70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c4);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047ec90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ec90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ec90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047ecd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ecd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ecd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_0047ed10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ed10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_0047ed50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ed50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x71))) == '\0') {
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

/* ref: FUN_0047ee30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ee30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ee30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047ee90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047ee90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47ee90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047eef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047eef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47eef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047ef10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ef10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x19))) == '\0') {
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

/* ref: FUN_0047ef90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ef90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47ef90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047efa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047efa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47efa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047efc0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47efc0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0047eff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047eff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47eff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x71))) == '\0') {
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

/* ref: FUN_0047f070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047f080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047f0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0047f110 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047f110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47f110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047f130 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_0047f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x90)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = (int)this + (0xcf - (int)_Dst);
  return (int)this + 0x3c;
}

/* ref: FUN_0047f1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047f1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0047f1e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047f1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x18,0,400);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x18 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0047f240 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0047f240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x41)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0047f240(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x48,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x41)));
  }
  return;
}

/* ref: FUN_0047f280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x41))) == '\0') {
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

/* ref: FUN_0047f350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f350(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f360(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f370(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047f3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_0047f400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f400(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f410 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0047f410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x47f410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0047c010(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0047f420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f420(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047f470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f470(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f480 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047f480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x58,0,0);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0047f4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f4d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0047f4e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047f510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f510(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0047f520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_0047f560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f560(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47f560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_0047f580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047f5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047f5e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: Utf8StringBasicStreamBuf_Utf8StringBasicStream_DU_char_traits_D_std::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x3c))) GEN_EDX_FWD);
  F_00479ae0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0047f640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0047f670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x47f670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_0047f6a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_0047f720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47f720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x69))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x69))) != '\0') && (*param_2 < (int)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x69))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x69))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x69))) == '\0') {
    do {
      if (*param_2 < (int)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x69))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0047f810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047f870 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047f870(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047f8c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047f8c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047f910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x47f910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_0047f940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47f940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047f9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047f9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47f9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_0047fa10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047fa10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47fa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,400)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_0047fa50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fa50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47fa50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_0047c010(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047fa70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fa70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x47fa70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  uVar1 = param_1[5];
  if (uVar1 < param_2) {
    F_0047c420(param_1 GEN_EDX_ARG,param_2,param_1[4]);
    return (uint)(param_2 != 0);
  }
  if ((param_3 != '\0') && (param_2 < 0x10)) {
    uVar3 = param_1[4];
    if (param_2 < uVar3) {
      uVar3 = param_2;
    }
    if (0xf < uVar1) {
      uVar2 = *param_1;
      if (uVar3 != 0) {
        F_00c46aa0(param_1,uVar2,uVar3);
      }
      F_00429760(uVar2,param_1[5] + 1,0x192);
    }
    param_1[4] = uVar3;
    param_1[5] = 0xf;
    *((undefined1 *)GEN_TOP((uVar3 + (int)param_1))) = 0;
    return (uint)(param_2 != 0);
  }
  if (param_2 == 0) {
    param_1[4] = 0;
    if (0xf < uVar1) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *(undefined1 *)param_1 = 0;
  }
  return (uint)(param_2 != 0);
}

/* ref: FUN_0047fb30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_0047fb30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47fb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0047fb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fb40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x47fb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0047fb60 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_0047fb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x71))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x71))) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0047fbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47fbd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047fc10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP((param_1 + 8)));
}

/* ref: FUN_0047fc30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47fc30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047fc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47fc70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_2;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  return (uint)this;
}

/* ref: FUN_0047fcb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047fcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047fcd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047fcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047fcf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0047fcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0047fd10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047fd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x47fd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined1 uVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xe))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_0047b780(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar7 = ((int *)GEN_TOP(*piVar4));
  if (*((char *)GEN_TOP(((int)piVar7 + 0xe))) == '\0') {
    piVar8 = piVar7;
    if ((*((char *)GEN_TOP((piVar4[2] + 0xe))) == '\0') && (piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar4)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar4;
      piVar7 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar4[2]))) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar8 + 0xe))) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        (*(int * PTR32 *)&gen_args[1])[2] = piVar4[2];
        *((int * PTR32 *)GEN_TOP((piVar4[2] + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar4) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = (*(int * PTR32 *)&gen_args[1]);
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(piVar4[1]));
        if (((int *)GEN_TOP(*puVar3)) == piVar4) {
          *puVar3 = (*(int * PTR32 *)&gen_args[1]);
        }
        else {
          puVar3[2] = (*(int * PTR32 *)&gen_args[1]);
        }
      }
      (*(int * PTR32 *)&gen_args[1])[1] = piVar4[1];
      uVar1 = *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xd)));
      *((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xd))) = *((undefined1 *)GEN_TOP(((int)piVar4 + 0xd)));
      *((undefined1 *)GEN_TOP(((int)piVar4 + 0xd))) = uVar1;
      goto LAB_0047fe2a;
    }
  }
  else {
    piVar8 = ((int *)GEN_TOP(piVar4[2]));
  }
  piVar7 = ((int *)GEN_TOP(piVar4[1]));
  if (*((char *)GEN_TOP(((int)piVar8 + 0xe))) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) == piVar4) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = piVar8;
  }
  else if (((int *)GEN_TOP(*piVar7)) == piVar4) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))) == piVar4) {
    piVar5 = piVar7;
    if (*((char *)GEN_TOP(((int)piVar8 + 0xe))) == '\0') {
      piVar5 = ((int *)GEN_TOP(F_00472d50(piVar8)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar5;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar2 + 8))) == piVar4) {
    if (*((char *)GEN_TOP(((int)piVar8 + 0xe))) == '\0') {
      uVar6 = F_00473d90(piVar8);
      *((uint *)GEN_TOP((iVar2 + 8))) = uVar6;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar2 + 8))) = piVar7;
    }
  }
LAB_0047fe2a: ;
  if (*((char *)GEN_TOP(((int)piVar4 + 0xd))) == '\x01') {
    if (piVar8 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar5 = piVar7;
        if (*((char *)GEN_TOP(((int)piVar8 + 0xd))) != '\x01') break;
        piVar7 = ((int *)GEN_TOP(*piVar5));
        if (piVar8 == piVar7) {
          piVar7 = ((int *)GEN_TOP(piVar5[2]));
          if (*((char *)GEN_TOP(((int)piVar7 + 0xd))) == '\0') {
            *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = 1;
            *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 0;
            F_0047c630(this GEN_EDX_ARG,piVar5);
            piVar7 = ((int *)GEN_TOP(piVar5[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar7 + 0xe))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar7 + 0xd))) != '\x01') || (*((char *)GEN_TOP((piVar7[2] + 0xd))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar7[2] + 0xd))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar7 + 0xd))) = 1;
                *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = 0;
                F_00473d30(this GEN_EDX_ARG,piVar7);
                piVar7 = ((int *)GEN_TOP(piVar5[2]));
              }
              *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd)));
              *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 1;
              *((undefined1 *)GEN_TOP((piVar7[2] + 0xd))) = 1;
              F_0047c630(this GEN_EDX_ARG,piVar5);
              break;
            }
LAB_0047fee8: ;
            *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = 0;
          }
        }
        else {
          if (*((char *)GEN_TOP(((int)piVar7 + 0xd))) == '\0') {
            *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = 1;
            *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 0;
            F_00473d30(this GEN_EDX_ARG,piVar5);
            piVar7 = ((int *)GEN_TOP(*piVar5));
          }
          if (*((char *)GEN_TOP(((int)piVar7 + 0xe))) == '\0') {
            if ((*((char *)GEN_TOP((piVar7[2] + 0xd))) == '\x01') && (*((char *)GEN_TOP((*piVar7 + 0xd))) == '\x01'))
            goto LAB_0047fee8;
            if (*((char *)GEN_TOP((*piVar7 + 0xd))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar7[2] + 0xd))) = 1;
              *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = 0;
              F_0047c630(this GEN_EDX_ARG,piVar7);
              piVar7 = ((int *)GEN_TOP(*piVar5));
            }
            *((undefined1 *)GEN_TOP(((int)piVar7 + 0xd))) = *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd)));
            *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 1;
            *((undefined1 *)GEN_TOP((*piVar7 + 0xd))) = 1;
            F_00473d30(this GEN_EDX_ARG,piVar5);
            break;
          }
        }
        piVar7 = ((int *)GEN_TOP(piVar5[1]));
        piVar8 = piVar5;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *((undefined1 *)GEN_TOP(((int)piVar8 + 0xd))) = 1;
  }
  F_00429760(piVar4,0x10,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_0047ff70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ff70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_0047b780(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047ff90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0047ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x47ff90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00473f10(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0047ffb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0047ffb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47ffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x19)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0047ffb0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x1c,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  }
  return;
}

/* ref: FUN_0047fff0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0047fff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x47fff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0xe)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0047fff0(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x10,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0xe)));
  }
  return;
}

/* ref: FUN_0048005f */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_0048005f(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x48005fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_004800a0 */
GEN_OWN GEN_FRAME uint F_004800a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4800a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  undefined * pvVar1;
  
  pvVar1 = ((undefined *)GEN_TOP(0x0));
  if (param_2 != 0) {
    pvVar1 = F_00c48350(param_1,0,param_2);
  }
  return (uint)pvVar1;
}

/* ref: FUN_004800c0 */
GEN_OWN GEN_FRAME uint F_004800c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4800c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004800d0 */
GEN_OWN GEN_FRAME unsigned int F_004800d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4800d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00480100 */
GEN_OWN GEN_FRAME uint F_00480100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  }
  return (uint)this;
}

/* ref: FUN_00480130 */
GEN_OWN GEN_FRAME uint F_00480130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0047d100(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00480150 */
GEN_OWN GEN_FRAME uint F_00480150(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar1);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00480190 */
GEN_OWN GEN_FRAME uint F_00480190(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 8) {
    F_00596cd0(this GEN_EDX_ARG,iVar1);
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  }
  return (uint)this;
}

/* ref: FUN_004801c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004801c0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4801c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004801d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004801d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4801d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004801f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_004801f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4801f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_0042cbc0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG,param_2 + 0x54);
  }
  return;
}

/* ref: FUN_00480220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00480220(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x480220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00480240 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00480240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x480240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00480260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480260(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00480290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x480290u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x1c,400);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x18)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x18))) == '\0') {
        *(undefined1 *)(piVar5 + 6) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x19))) == '\0') {
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
LAB_0048048d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x18))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x19))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x18))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x19))) == '\0') {
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
        goto LAB_0048048d;
      }
      *(undefined1 *)(piVar5 + 6) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x18))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x18))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x18)));
  } while( true );
}

/* ref: FUN_004804c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004804c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4804c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x10,400);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0xd)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0xd))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0xd))) == '\0') {
        *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0xd))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0xd))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0xe))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0xd))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0xd))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0xe))) == '\0') {
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
LAB_004806bd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0xd))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0xe))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0xd))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0xd))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0xe))) == '\0') {
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
        goto LAB_004806bd;
      }
      *((undefined1 *)GEN_TOP(((int)piVar5 + 0xd))) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0xd))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0xd))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0xd)));
  } while( true );
}

/* ref: FUN_004806f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004806f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x4806f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_00429760(param_5,0x48,400);
                    
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
  cVar1 = *((char *)GEN_TOP((param_5[1] + 0x40)));
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar2 + 0x40))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar4[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar2 = piVar6[2];
      if (*((char *)GEN_TOP((iVar2 + 0x40))) == '\0') {
        *(undefined1 *)(piVar5 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((iVar2 + 0x40))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x40))) = 0;
        piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
      }
      else {
        if (piVar4 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar4 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar4;
          if (*((char *)GEN_TOP((*piVar4 + 0x41))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x40))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x40))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x41))) == '\0') {
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
LAB_004808ed: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*((char *)GEN_TOP((iVar2 + 0x40))) != '\0') {
        if (piVar4 == ((int *)GEN_TOP(*piVar5))) {
          iVar2 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar2 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 0x41))) == '\0') {
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
        *((undefined1 *)GEN_TOP((piVar4[1] + 0x40))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x40))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x41))) == '\0') {
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
        goto LAB_004808ed;
      }
      *(undefined1 *)(piVar5 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x40))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x40))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x40)));
  } while( true );
}

/* ref: FUN_00480920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00480940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00480940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x480940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474890(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00480950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x480950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004748f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00480980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00480980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x480980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474950(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004809b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004809b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4809b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004809d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004809d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4809d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_004809f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004809f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4809f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004749b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00480a20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00480a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x480a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474a10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00480a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x480a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00474a80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00480a40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00480a60 */
GEN_OWN GEN_FRAME uint F_00480a60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00480a70 */
GEN_OWN GEN_FRAME uint F_00480a70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x480a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00480aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x480aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined2 *)GEN_TOP(((int)puVar1 + 0xd))) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined1 *)(puVar1 + 3) = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00480af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x480af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x10,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined2 *)GEN_TOP(((int)puVar1 + 0xd))) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    *(undefined1 *)(puVar1 + 3) = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00480b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00480b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x480b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2 + 2);
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(param_2 + 0x17);
  return (uint)this;
}

/* ref: FUN_00480bb0 */
GEN_OWN GEN_FRAME uint F_00480bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x480bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_7;
  uVar3 = param_10;
  while (param_4 != uVar1) {
    uVar1 = uVar1 - 1;
    iVar5 = 0;
    if (param_5 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_5;
    }
    uVar2 = uVar1;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar1) {
      uVar2 = uVar1 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    uVar3 = uVar3 - 1;
    if (param_8 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar4 = uVar3;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar3) {
      uVar4 = uVar3 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    F_0042ccf0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar4 * 4))) GEN_EDX_ARG,
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar2 * 4))));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != ((int *)GEN_TOP(0x0))) {
    if (((undefined4 *)GEN_TOP(*param_8)) == ((undefined4 *)GEN_TOP(0x0))) {
      param_1[2] = uVar3;
      return (uint)param_1;
    }
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  param_1[2] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00480c40 */
GEN_OWN GEN_FRAME uint F_00480c40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9), GEN_P(undefined4 param_11, unsigned int gen_a10))
{
  GEN_ENTER(0x480c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a10;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = param_10;
  for (uVar2 = param_4; uVar2 != param_7; uVar2 = uVar2 + 1) {
    if (param_2 == ((int *)GEN_TOP(0x0))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_2;
    }
    uVar1 = uVar2;
    if (*((uint *)GEN_TOP((iVar6 + 8))) <= uVar2) {
      uVar1 = uVar2 - *((uint *)GEN_TOP((iVar6 + 8)));
    }
    iVar5 = 0;
    if (param_8 != ((int *)GEN_TOP(0x0))) {
      iVar5 = *param_8;
    }
    uVar3 = uVar4;
    if (*((uint *)GEN_TOP((iVar5 + 8))) <= uVar4) {
      uVar3 = uVar4 - *((uint *)GEN_TOP((iVar5 + 8)));
    }
    F_0042ccf0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 4))) + uVar3 * 4))) GEN_EDX_ARG,
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + uVar1 * 4))));
    uVar4 = uVar4 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar4;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*param_8));
  }
  return (uint)param_1;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00480cd0 */
GEN_OWN GEN_FRAME unsigned int F_00480cd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00480d10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x480d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00480d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00480d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x480d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00480d60 */
GEN_OWN GEN_FRAME uint F_00480d60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x480d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00480db0 */
GEN_OWN GEN_FRAME unsigned int F_00480db0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00480de0 */
GEN_OWN GEN_FRAME unsigned int F_00480de0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00480e10 */
GEN_OWN GEN_FRAME unsigned int F_00480e10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00480e40 */
GEN_OWN GEN_FRAME unsigned int F_00480e40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00480e70 */
GEN_OWN GEN_FRAME unsigned int F_00480e70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00480ea0 */
GEN_OWN GEN_FRAME unsigned int F_00480ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00480ed0 */
GEN_OWN GEN_FRAME unsigned int F_00480ed0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00480f00 */
GEN_OWN GEN_FRAME unsigned int F_00480f00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00480f30 */
GEN_OWN GEN_FRAME unsigned int F_00480f30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00480f60 */
GEN_OWN GEN_FRAME unsigned int F_00480f60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x480f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00480f90 */
GEN_OWN GEN_FRAME uint F_00480f90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x480f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = ((undefined *)GEN_TOP(((int)this + 0x54)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00480fd0 */
GEN_OWN GEN_FRAME unsigned int F_00480fd0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x480fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00481020 */
GEN_OWN GEN_FRAME uint F_00481020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005a2670(param_2 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00481030 */
GEN_OWN GEN_FRAME uint F_00481030(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481040 */
GEN_OWN GEN_FRAME uint F_00481040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481050 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00481050(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = *((undefined4 *)GEN_TOP((param_2 + 0x58)));
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x5c))) = *((undefined4 *)GEN_TOP((param_2 + 0x5c)));
  }
  return;
}

/* ref: FUN_00481080 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00481080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x481080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x94)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = (int)this + (0xd3 - (int)_Dst);
  uVar1 = F_0042e360(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00481120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00481120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    puVar2 = param_2 + 2;
    puVar3 = param_1 + 2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)puVar3 = *(undefined1 *)puVar2;
  }
  return (uint)param_1;
}

/* ref: FUN_00481150 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00481150(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x481150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481160 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00481160(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x481160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x160))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x10c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xb8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004811a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004811a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4811a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x11c))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0xbc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP((param_1 + 0x60))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004811e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004811e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4811e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_004811f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004811f0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4811f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481200 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00481200(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x481200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481210 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00481210(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x481210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xfc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0xa8))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00481250 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00481250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00481270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1 + 3);
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_004812b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004812b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4812b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004812d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004812d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4812d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) - 1;
  if (*((int *)GEN_TOP(((int)this + 0x54))) < 1) {
    F_0042c880(this GEN_EDX_FWD);
    F_00406ad0(this);
  }
  return;
}

/* ref: FUN_004812f0 */
GEN_OWN GEN_FRAME uint F_004812f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4812f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00481310 */
GEN_OWN GEN_FRAME uint F_00481310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x481310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = param_2 - param_1 >> 2;
  uVar4 = iVar5 - (param_2 - param_1 >> 0x1f);
  iVar6 = (int)uVar4 >> 1;
  if (0 < iVar6) {
    iVar7 = iVar6 * 2 + 2;
    do {
      iVar1 = iVar6 * 4;
      iVar6 = iVar6 - 1;
      (*(int *)(gen_frame + 0x4)) = iVar7 - 2;
      (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar1)));
      iVar1 = iVar6;
      for (iVar7 = iVar7 - 2; iVar7 < iVar5; iVar7 = iVar7 * 2 + 2) {
        uVar2 = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar7 * 4)));
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        uVar4 = (*param_3)(uVar3,uVar2);
        if ((char)uVar4 != '\0') {
          iVar7 = iVar7 - 1;
        }
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + iVar7 * 4)));
        iVar1 = iVar7;
      }
      param_2 = iVar1;
      if (iVar7 == iVar5) {
        param_2 = iVar5 - 1;
        *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 - 4 + iVar5 * 4)));
      }
      uVar4 = F_00475cc0(param_1,param_2,iVar6,&(*(undefined4 *)(gen_frame + 0x0)),param_3);
      iVar7 = (*(int *)(gen_frame + 0x4));
    } while (0 < iVar6);
  }
  return uVar4;
}

/* ref: FUN_004813c0 */
GEN_OWN GEN_FRAME uint F_004813c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(code * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4813c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_3 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 - 1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = ((undefined4 *)GEN_TOP(F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)))
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_00481460 */
GEN_OWN GEN_FRAME unsigned int F_00481460(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x481460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00481490 */
GEN_OWN GEN_FRAME uint F_00481490(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x481490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (param_2 == ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004814c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004814c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4814c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004814f0 */
GEN_OWN GEN_FRAME uint F_004814f0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x4814f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00481550 */
GEN_OWN GEN_FRAME uint F_00481550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x481550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int * param_7 = (int *)(uintptr_t)gen_a6;)
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_00481570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x481570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_00481590 */
GEN_OWN GEN_FRAME uint F_00481590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x481590u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4)));
  *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) - 4))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_0047dac0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 - 4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_004815d0 */
GEN_OWN GEN_FRAME uint F_004815d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4815d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00560a60(this GEN_EDX_ARG,param_1);
    }
    param_1 = param_1 + 8;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: Client::System::String::Utf8StringBasicStream::~Utf8StringBasicStream */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00481610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x481610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)this - 0x98))) GEN_EDX_FWD);
  F_00479ae0(((undefined *)GEN_TOP(((int)this - 0xd4))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((int)this - 0xd8)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) - 0xd8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar1;
}

/* ref: FUN_00481650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = **((uint * PTR32 *)GEN_TOP(((int)this + 0x30)));
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x0))))) = uVar3;
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,0);
  if (*((int *)GEN_TOP((uVar3 + 4))) != -1) {
    *((int *)GEN_TOP((uVar3 + 4))) = *((int *)GEN_TOP((uVar3 + 4))) + 1;
  }
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  piVar2 = ((int *)GEN_TOP(F_0047e5d0(&(*(undefined4 *)(gen_frame + 0x0)))));
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  iVar1 = *((int *)GEN_TOP((uVar3 + 4)));
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *((int *)GEN_TOP((uVar3 + 4))) = iVar1 - 1;
  }
  iVar1 = *((int *)GEN_TOP((uVar3 + 4)));
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  puVar4 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar3)));
  if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,param_1);
  return uVar3;
}

/* ref: FUN_004816e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004816e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4816e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)this;
}

/* ref: FUN_00481720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: FUN_00481770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00481790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004817e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004817e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4817e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x481810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 4), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00481890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_004818b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004818b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4818b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00481920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004819f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004819f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4819f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x481a00u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x19))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00473360(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x19))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[6];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 6))) = (char)piVar3[6];
      *(char *)(piVar3 + 6) = (char)iVar1;
      goto LAB_00481b1a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00471fa0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x19))) == '\0') {
      uVar5 = F_00471f80(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00481b1a: ;
  if ((char)piVar3[6] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[6] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_0047ef10(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x18))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x18))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
                *(undefined1 *)(piVar6 + 6) = 0;
                F_0047b2e0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 6) = (char)piVar4[6];
              *(undefined1 *)(piVar4 + 6) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              F_0047ef10(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00481bd8: ;
            *(undefined1 *)(piVar6 + 6) = 0;
          }
        }
        else {
          if ((char)piVar6[6] == '\0') {
            *(undefined1 *)(piVar6 + 6) = 1;
            *(undefined1 *)(piVar4 + 6) = 0;
            F_0047b2e0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x19))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x18))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01'))
            goto LAB_00481bd8;
            if (*((char *)GEN_TOP((*piVar6 + 0x18))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x18))) = 1;
              *(undefined1 *)(piVar6 + 6) = 0;
              F_0047ef10(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 6) = (char)piVar4[6];
            *(undefined1 *)(piVar4 + 6) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x18))) = 1;
            F_0047b2e0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 6) = 1;
  }
  F_00429760(piVar3,0x1c,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00481c60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00481c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x481c60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00481c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) < param_1) {
    uVar3 = 0;
    if ((param_1 != 0) && (uVar3 = F_004069f0(param_1), uVar3 == 0)) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_00c46e20(uVar3,*(int *)this,*((int *)GEN_TOP(((int)this + 4))) - *(int *)this);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    *(uint *)this = uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = uVar3 + param_1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3 + (iVar2 - iVar1);
  }
  return param_1;
}

/* ref: FUN_00481d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481da0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00481dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00481de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x481de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar4 = ((int *)GEN_TOP(*puVar1));
  }
  uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) + param_1;
  if (((piVar4 == ((int *)GEN_TOP(0x0))) || (((int *)GEN_TOP(*piVar4)) == ((int *)GEN_TOP(0x0)))) ||
     (piVar4 = *((int * PTR32 *)GEN_TOP(*piVar4)), piVar4 == ((int *)GEN_TOP(0x0)))) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + (uVar2 - *((uint *)GEN_TOP((iVar3 + 8)))) * 4)));
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
}

/* ref: FUN_00481e30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00481e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x481e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
    if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
      uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
    }
    uVar3 = F_0042c880(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) GEN_EDX_FWD);
    uVar2 = (uint)uVar3;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00481e70 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00481e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x481e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * _Dst;
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  _Dst = ((undefined *)GEN_TOP(((int)this + 0x94)));
  F_00c48350(_Dst,-1,0x40);
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = _Dst;
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = _Dst;
  **((int * PTR32 *)GEN_TOP(((int)this + 0x38))) = (int)this + (0xd3 - (int)_Dst);
  return (int)this + 0x40;
}

/* ref: FUN_00481f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x481f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00481f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00481f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x481f10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x41))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00473110(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x41))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x41))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x41))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x10))) = (char)piVar3[0x10];
      *(char *)(piVar3 + 0x10) = (char)iVar1;
      goto LAB_0048202a;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x41))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x41))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_004723a0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x41))) == '\0') {
      uVar5 = F_00472380(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_0048202a: ;
  if ((char)piVar3[0x10] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x10] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x10] == '\0') {
            *(undefined1 *)(piVar6 + 0x10) = 1;
            *(undefined1 *)(piVar4 + 0x10) = 0;
            F_0047f280(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x41))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x40))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x40))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x40))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x40))) = 1;
                *(undefined1 *)(piVar6 + 0x10) = 0;
                F_0047b5e0(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x10) = (char)piVar4[0x10];
              *(undefined1 *)(piVar4 + 0x10) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x40))) = 1;
              F_0047f280(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_004820e8: ;
            *(undefined1 *)(piVar6 + 0x10) = 0;
          }
        }
        else {
          if ((char)piVar6[0x10] == '\0') {
            *(undefined1 *)(piVar6 + 0x10) = 1;
            *(undefined1 *)(piVar4 + 0x10) = 0;
            F_0047b5e0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x41))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x40))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x40))) == '\x01'))
            goto LAB_004820e8;
            if (*((char *)GEN_TOP((*piVar6 + 0x40))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x40))) = 1;
              *(undefined1 *)(piVar6 + 0x10) = 0;
              F_0047f280(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x10) = (char)piVar4[0x10];
            *(undefined1 *)(piVar4 + 0x10) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x40))) = 1;
            F_0047b5e0(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x10) = 1;
  }
  F_00429760(piVar3,0x48,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00482170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00482170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x41)));
  while (cVar1 == '\0') {
    F_0047f240(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x48,400);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x41)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00482200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482200(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00482210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482210(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00482220 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00482220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0047c010(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00482230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00482240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00482260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004822c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004822c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4822c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 4 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00482340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x69))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x69))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00482380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0047f720(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_004823a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004823a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4823a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *((int *)GEN_TOP(((int)this + 0x10))) = iVar2;
      if (iVar2 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 4))),0xc,0x192);
    }
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,0x192);
    uVar3 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00482420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00482440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004824a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004824a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4824a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x19))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x19))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004824e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004824e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4824e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00482530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00481c90(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00481c90(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_004825d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004825d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4825d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x71)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x71)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00482650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00482650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
      uVar2 = *((int *)GEN_TOP(((int)this + 0x10))) - 1 + *((int *)GEN_TOP(((int)this + 0xc)));
      if (*((uint *)GEN_TOP(((int)this + 8))) <= uVar2) {
        uVar2 = uVar2 - *((uint *)GEN_TOP(((int)this + 8)));
      }
      F_0042c880(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 4))) GEN_EDX_FWD);
      piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      }
    }
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar3 != 0) {
    iVar3 = iVar3 - 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar3 * 4))),0x54,400);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar4 = F_00429760(*((int *)GEN_TOP(((int)this + 4))),*((int *)GEN_TOP(((int)this + 8))) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar2;
}

/* ref: FUN_00482720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0047bed0(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00482740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,400)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_004827f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004827f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4827f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_00482870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x71))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x71))) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004828b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004828b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4828b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(0x0));
  if ((*(int * PTR32 *)this != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    piVar3 = ((int *)GEN_TOP(*puVar1));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*piVar3)) != ((undefined4 *)GEN_TOP(0x0)))) {
    *param_1 = *((undefined4 *)GEN_TOP(*piVar3));
  }
  return (uint)param_1;
}

/* ref: FUN_004828f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004828f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4828f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((((int *)GEN_TOP(*param_1)) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(*param_1)), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    *(undefined4 *)this = *puVar1;
  }
  *((int *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00482920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x482920u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *param_1 = 0;
  param_1[1] = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00482950 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00482950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_0042c880(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP(((int)this + 0xc))) * 4))) GEN_EDX_FWD);
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 8))) <= *((uint *)GEN_TOP(((int)this + 0xc)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x10)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return;
}

/* ref: FUN_00482990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x482990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00482170(this GEN_EDX_FWD);
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x41))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x41))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x41)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x41)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x41)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x41)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00481f10(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00482a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x482a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7(((char *)REFP(0x1080298)));
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_0047c380(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_0047c380(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar3) {
    F_0047c420(this GEN_EDX_ARG,uVar3,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar1 = this;
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar3;
  if (*((uint *)GEN_TOP(((int)this + 0x14))) < 0x10) {
    *((undefined1 *)GEN_TOP(((int)this + uVar3))) = 0;
    return (uint)this;
  }
  *((undefined1 *)GEN_TOP((*(int *)this + uVar3))) = 0;
  return (uint)this;
}

/* ref: FUN_00482b20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00482b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
  while (cVar1 == '\0') {
    F_0047ffb0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x1c,400);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0x19)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00482b80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00482b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x482b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0xe)));
  while (cVar1 == '\0') {
    F_0047fff0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x10,400);
    piVar2 = piVar3;
    cVar1 = *((char *)GEN_TOP(((int)piVar3 + 0xe)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar4 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar4 + 8))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar4;
}

/* ref: FUN_00482be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x482be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00482a30(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00482c00 */
GEN_OWN GEN_FRAME uint F_00482c00(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x482c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (piVar1[2] == *param_4) break;
      piVar1 = ((int *)GEN_TOP(*piVar1));
    } while (piVar1 != param_3);
  }
  *param_1 = (int)piVar1;
  return (uint)param_1;
}

/* ref: FUN_00482c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00482c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x482c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2 + 2);
  *((undefined1 *)GEN_TOP(((int)this + 0x60))) = *(undefined1 *)(param_2 + 0x17);
  return (uint)this;
}

/* ref: FUN_00482ca0 */
GEN_OWN GEN_FRAME uint F_00482ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00482cb0 */
GEN_OWN GEN_FRAME uint F_00482cb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP((param_2 + 0x58))) GEN_EDX_ARG);
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00482cd0 */
GEN_OWN GEN_FRAME unsigned int F_00482cd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x482cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_0042cbc0(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG,param_3 + 0x54);
  }
  return;
}

/* ref: FUN_00482d00 */
GEN_OWN GEN_FRAME uint F_00482d00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x482d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00480bb0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00482d80 */
GEN_OWN GEN_FRAME uint F_00482d80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x482d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_8)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar3 = *((undefined4 *)GEN_TOP(*param_8));
  }
  uVar2 = 0;
  if ((param_5 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_5)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = *((undefined4 *)GEN_TOP(*param_5));
  }
  uVar1 = 0;
  if ((param_2 != ((int *)GEN_TOP(0x0))) && (((undefined4 *)GEN_TOP(*param_2)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar1 = *((undefined4 *)GEN_TOP(*param_2));
  }
  F_00480c40(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00482e00 */
GEN_OWN GEN_FRAME unsigned int F_00482e00(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x482e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00482e30 */
GEN_OWN GEN_FRAME uint F_00482e30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  F_0042c880(((undefined *)GEN_TOP(((int)param_2 + 0x54))) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00482e60 */
GEN_OWN GEN_FRAME uint F_00482e60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x482e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_2 + 0xc))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00482e70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00482e70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x482e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(((undefined *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00482e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x482e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0x19))) == '\0') {
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
    } while (*((char *)GEN_TOP(((int)puVar1 + 0x19))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_00480290(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00474a10(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00480290(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x1c,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00482f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00482f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x482f70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*((char *)GEN_TOP(((int)puVar2[1] + 0xe))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar2[1]));
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
        local_8 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) < *(byte *)(puVar2 + 3);
      }
      else {
        local_8 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) <= *(byte *)(puVar2 + 3);
      }
      if (local_8 == false) {
        puVar1 = ((undefined4 *)GEN_TOP(puVar2[2]));
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP(*puVar2));
      }
    } while (*((char *)GEN_TOP(((int)puVar1 + 0xe))) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (local_8 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar2 = ((undefined4 *)GEN_TOP(F_004804c0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_004747d0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[2]) + 3))) < *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004804c0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x10,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00483050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00483050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x483050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  bool local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x41)));
  local_8 = true;
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar2 = local_8;
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[2]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
          puVar5 = ((undefined4 *)GEN_TOP(F_004806f0(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar3,(*(int *)&gen_args[1]))));
          *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
        }
        F_004748f0(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
      }
      puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[2])[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[4] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        puVar5 = ((undefined4 *)GEN_TOP(F_004806f0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar2,puVar3,(*(int *)&gen_args[1]))));
        *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      F_00429760((*(int *)&gen_args[1]),0x48,400);
      *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      if (((uint)puVar5[5] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14)))) ||
         (((uint)puVar5[5] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) &&
          ((uint)puVar5[4] <= *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))))))) {
        local_8 = false;
        goto LAB_004830c3;
      }
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      local_8 = true;
    }
    else {
      if ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) < (uint)puVar5[5]) ||
         ((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x14))) <= (uint)puVar5[5] &&
          (*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) <= (uint)puVar5[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_8 = !bVar2;
      if (local_8) {
        puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
      }
      else {
LAB_004830c3: ;
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      }
    }
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x41)));
    puVar3 = puVar5;
    puVar5 = puVar4;
    bVar2 = local_8;
  } while( true );
}

