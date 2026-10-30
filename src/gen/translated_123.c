#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00ad4920 */
GEN_OWN GEN_FRAME uint F_00ad4920(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad4950 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad4950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    F_00ad37e0(param_1 + 2 GEN_EDX_ARG,param_2 + 2);
    F_0042cbc0(param_1 + 0x47 GEN_EDX_ARG,param_2 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4990 */
GEN_OWN GEN_FRAME uint F_00ad4990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad4990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * this;
  
  if (param_1 != param_2) {
    this = param_3 + 0x18;
    puVar2 = param_3;
    iVar3 = param_1 + 0x60;
    do {
      *puVar2 = *((undefined4 *)GEN_TOP((iVar3 - 0x60)));
      this[-0x17] = *((undefined4 *)GEN_TOP((iVar3 - 0x5c)));
      F_0042ccf0(this - 0x16 GEN_EDX_ARG,iVar3 - 0x58);
      this[-1] = *((undefined4 *)GEN_TOP((iVar3 - 4)));
      F_0042ccf0(this GEN_EDX_ARG,iVar3);
      this[0x15] = *((undefined4 *)GEN_TOP((iVar3 + 0x54)));
      this[0x16] = *((undefined4 *)GEN_TOP((iVar3 + 0x58)));
      F_0042ccf0(this + 0x17 GEN_EDX_ARG,iVar3 + 0x5c);
      this[0x2c] = *((undefined4 *)GEN_TOP((iVar3 + 0xb0)));
      this[0x2d] = *((undefined4 *)GEN_TOP((iVar3 + 0xb4)));
      this[0x2e] = *((undefined4 *)GEN_TOP((iVar3 + 0xb8)));
      F_0042ccf0(this + 0x2f GEN_EDX_ARG,iVar3 + 0xbc);
      iVar1 = iVar3 + 0x110;
      puVar2 = puVar2 + 0x5c;
      this = this + 0x5c;
      iVar3 = iVar3 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar2;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4a50 */
GEN_OWN GEN_FRAME unsigned int F_00ad4a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x47 GEN_EDX_ARG,param_3 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4a90 */
GEN_OWN GEN_FRAME uint F_00ad4a90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4a90u, gen_a0, gen_a1, gen_a2, 0u);
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
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4ad0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ad0190(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ad4b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4ba0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ad4bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad4bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad4c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c00(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad4c70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad4c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad4c80 */
GEN_OWN GEN_FRAME unsigned int F_00ad4c80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x47 GEN_EDX_ARG,param_3 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4cc0 */
GEN_OWN GEN_FRAME unsigned int F_00ad4cc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    F_00ad37e0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x47 GEN_EDX_ARG,param_3 + 0x47);
  }
  return;
}

/* ref: FUN_00ad4d00 */
GEN_OWN GEN_FRAME uint F_00ad4d00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4990(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4d20 */
GEN_OWN GEN_FRAME uint F_00ad4d20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4d20u, gen_a0, gen_a1, gen_a2, 0u);
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
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4d60 */
GEN_OWN GEN_FRAME uint F_00ad4d60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4d60u, gen_a0, gen_a1, gen_a2, 0u);
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
      F_00ad36e0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x1b8;
    this = ((undefined *)GEN_TOP(((int)this + 0x1b8)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4da0 */
GEN_OWN GEN_FRAME uint F_00ad4da0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4da0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4de0 */
GEN_OWN GEN_FRAME uint F_00ad4de0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4de0u, gen_a0, gen_a1, gen_a2, 0u);
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
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    }
    iVar1 = iVar1 + 0x58;
    this = ((undefined *)GEN_TOP(((int)this + 0x58)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4e20 */
GEN_OWN GEN_FRAME uint F_00ad4e20(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xad4e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      F_0042cbc0(puVar2 + 2 GEN_EDX_ARG,puVar1 + 2);
    }
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4e70 */
GEN_OWN GEN_FRAME uint F_00ad4e70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4e70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad4eb0 */
GEN_OWN GEN_FRAME uint F_00ad4eb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ef0 */
GEN_OWN GEN_FRAME uint F_00ad4ef0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f30 */
GEN_OWN GEN_FRAME uint F_00ad4f30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00ad36e0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x1b8)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4f70 */
GEN_OWN GEN_FRAME uint F_00ad4f70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4f70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4fb0 */
GEN_OWN GEN_FRAME uint F_00ad4fb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad4fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4ff0 */
GEN_OWN GEN_FRAME uint F_00ad4ff0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad4ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad5020 */
GEN_OWN GEN_FRAME uint F_00ad5020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad5020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5060 */
GEN_OWN GEN_FRAME uint F_00ad5060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xad5060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    puVar3 = param_3;
    do {
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar2 - 8)));
        puVar3[1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
        F_00ad37e0(puVar3 + 2 GEN_EDX_ARG,iVar2);
        F_0042cbc0(puVar3 + 0x47 GEN_EDX_ARG,iVar2 + 0x114);
      }
      iVar1 = iVar2 + 0x168;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0x170;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad50c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad50c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad50c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5100 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad5100(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad5100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5140 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad5140(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad5140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00ad36e0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x1b8)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad5180(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad5180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad51c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad51c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad51c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,iVar1 + (int)this);
        *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54 + (int)this)));
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x58)));
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ad4e20(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad5230 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad5230(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad5230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_0042cbc0(this GEN_EDX_ARG,(param_1 - (int)param_3) + (int)this);
      }
      this = ((undefined *)GEN_TOP(((int)this + 0x54)));
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad5270 */
GEN_OWN GEN_FRAME uint F_00ad5270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad5270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad5060(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad52a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad52a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad52a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad41d0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_00485c80(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad53f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad53f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad53f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x54)));
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x58)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    uVar2 = F_00ad4310(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
    for (uVar3 = uVar2; uVar3 != uVar1; uVar3 = uVar3 + 0x5c) {
      F_0042c880(((undefined *)GEN_TOP((uVar3 + 8))) GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad54e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad54e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad54e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042ccf0(this_00 GEN_EDX_FWD,pvVar2);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)));
    }
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = ((undefined *)GEN_TOP(((int)pvVar2 + 0x54)))) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 4))) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad5100(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1b8,0,0);
    F_00ad5140(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar1 != 0) {
      F_00485c80(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b8) * 0x1b8,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar2 - iVar1) / 0x1b8) * 0x1b8 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x1b8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad5180(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,0);
    F_00ad51c0(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad58e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad58e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad58e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x5c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x5c,0,0);
    F_00ad4e20(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    iVar4 = *(int *)this;
    if (iVar4 != 0) {
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x5c) {
        F_0042c880(((undefined *)GEN_TOP((iVar4 + 8))) GEN_EDX_ARG);
      }
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x5c) * 0x5c,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x5c) * 0x5c + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x5c + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad59d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad59d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad59d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0);
    F_00ad5230(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      for (; this_00 != pvVar1; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x54)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54) * 0x54,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad5ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ad5060(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad5ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad52a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad5b00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_00ad41d0(iVar1,iVar1,*(int *)this,this);
    F_00485c80(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return;
}

/* ref: FUN_00ad5b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad5370(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad5b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad53f0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad5b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad5470(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad5ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad5ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad54e0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad5bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5560(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5560(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x1b8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x1b8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5640(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5640(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad5ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad4990(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_00485ce0(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad5d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5720(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5720(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5800(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5800(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x5c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x5c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad58e0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad58e0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad59d0(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad59d0(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad5f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad5f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad5f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x170;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x170,0,0);
    F_00ad5060(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00485ce0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x170) * 0x170,0)
      ;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x170) * 0x170 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x170 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad6050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xad6050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  undefined * this_00;
  int iVar6;
  uint uVar7;
  
  if (this != (*(int * PTR32 *)&gen_args[0])) {
    iVar1 = (*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0]) >> 0x1f;
    iVar6 = ((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x58 + iVar1;
    uVar7 = iVar6 - iVar1;
    if (iVar6 == iVar1) {
      F_00ad52a0(this GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))));
      return (uint)this;
    }
    iVar1 = *(int *)this;
    uVar3 = (*((int *)GEN_TOP(((int)this + 4))) - iVar1) / 0x58;
    if (uVar7 <= uVar3) {
      this_00 = ((undefined *)GEN_TOP(F_00ad43a0(*(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[0])[1],iVar1)));
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      for (; this_00 != pvVar2; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
        F_0042c880(this_00 GEN_EDX_ARG);
      }
      *((int *)GEN_TOP(((int)this + 4))) = (((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x58) * 0x58 + *(int *)this;
      return (uint)this;
    }
    if (uVar7 <= (uint)((*((int *)GEN_TOP(((int)this + 8))) - iVar1) / 0x58)) {
      iVar6 = *(*(int * PTR32 *)&gen_args[0]) + uVar3 * 0x58;
      F_00ad43a0(*(*(int * PTR32 *)&gen_args[0]),iVar6,iVar1);
      uVar7 = F_00ad50c0(iVar6,(*(int * PTR32 *)&gen_args[0])[1],*((undefined4 *)GEN_TOP(((int)this + 4))));
      *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
      return (uint)this;
    }
    if (iVar1 != 0) {
      F_00489090(iVar1,*((undefined4 *)GEN_TOP(((int)this + 4))));
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x58) * 0x58,0);
    }
    piVar4 = (*(int * PTR32 *)&gen_args[0]);
    bVar5 = F_0047f480(this GEN_EDX_ARG,((*(int * PTR32 *)&gen_args[0])[1] - *(*(int * PTR32 *)&gen_args[0])) / 0x58);
    if (bVar5 != 0) {
      uVar7 = F_00ad50c0(*piVar4,piVar4[1],*(undefined4 *)this);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
    }
  }
  return (uint)this;
}

/* ref: FUN_00ad61e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad61e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad61e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5bc0(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((iVar4 + 0x54)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5bc0(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
  return;
}

/* ref: FUN_00ad6270 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad6270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5c50(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00ad36e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x1b8) * 0x1b8 + *(int *)this
                  );
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1b8;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5c50(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_00ad36e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x1b8;
  return;
}

/* ref: FUN_00ad6300 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad6300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad6300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*(int *)this != iVar1) {
    uVar2 = F_00ad4990(iVar1,iVar1,*(int *)this,this);
    F_00485ce0(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  }
  return;
}

/* ref: FUN_00ad6340 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad6340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5d30(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((iVar4 + 0x54)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5d30(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
  return;
}

/* ref: FUN_00ad63d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad63d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad63d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5dc0(this GEN_EDX_FWD,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,iVar4);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((iVar4 + 0x54)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5dc0(this GEN_EDX_ARG,1);
    }
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(pvVar3 GEN_EDX_ARG,param_1);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x58;
  return;
}

/* ref: FUN_00ad6460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar3 = *(undefined4 * PTR32 *)this, puVar3 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ad5e50(this GEN_EDX_FWD,1);
    }
    puVar3 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar3) / 0x5c) * 0x5c + *(int *)this)));
  }
  else {
    puVar3 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ad5e50(this GEN_EDX_ARG,1);
    }
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *puVar3;
    puVar1[1] = puVar3[1];
    uVar2 = F_0042cbc0(puVar1 + 2 GEN_EDX_ARG,puVar3 + 2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x5c;
  return uVar2;
}

/* ref: FUN_00ad64e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad64e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad64e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5ee0(this GEN_EDX_FWD,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
      return;
    }
  }
  else {
    if (uVar1 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad5ee0(this GEN_EDX_ARG,1);
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      F_0042cbc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1);
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x54;
  return;
}

/* ref: FUN_00ad6560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x170;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x170;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad5f70(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad5f70(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad65f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad65f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad65f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  F_00490be0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ad6620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ad6050(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00ad6640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad6640(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad6640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_0042b630(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = 0;
  return in_ecx;
}

/* ref: FUN_00ad6660 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad6660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ad6560(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x170) * 0x170 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ad6560(this GEN_EDX_ARG,1);
    }
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    F_00ad37e0(puVar1 + 2 GEN_EDX_ARG,puVar2 + 2);
    F_0042cbc0(puVar1 + 0x47 GEN_EDX_ARG,puVar2 + 0x47);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x170;
  return;
}

/* ref: FUN_00ad66f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad66f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad66f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
    F_00490be0(((undefined *)GEN_TOP(((int)param_1 + 0x58))) GEN_EDX_ARG,param_2 + 0x58);
  }
  return;
}

/* ref: FUN_00ad6720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  F_00ad6050(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1 + 0x58);
  return (uint)this;
}

/* ref: FUN_00ad6750 */
GEN_OWN GEN_FRAME unsigned int F_00ad6750(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad6750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    F_00490be0(((undefined *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG,param_3 + 0x58);
  }
  return;
}

/* ref: FUN_00ad6780 */
GEN_OWN GEN_FRAME unsigned int F_00ad6780(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad6780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    F_00490be0(((undefined *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG,param_3 + 0x58);
  }
  return;
}

/* ref: FUN_00ad67b0 */
GEN_OWN GEN_FRAME unsigned int F_00ad67b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad67b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
    F_00490be0(((undefined *)GEN_TOP(((int)param_2 + 0x58))) GEN_EDX_ARG,param_3 + 0x58);
  }
  return;
}

/* ref: FUN_00ad67e0 */
GEN_OWN GEN_FRAME uint F_00ad67e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad67e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  undefined * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
    F_00ad6050(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,iVar1 + 0x58);
    iVar1 = iVar1 + 0x68;
    this = ((undefined *)GEN_TOP(((int)this + 0x68)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad6830 */
GEN_OWN GEN_FRAME uint F_00ad6830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad6830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad67e0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad6850 */
GEN_OWN GEN_FRAME uint F_00ad6850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xad6850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
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
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((iVar1 + 0x54)));
      F_00490be0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,iVar1 + 0x58);
    }
    iVar1 = iVar1 + 0x68;
    this = ((undefined *)GEN_TOP(((int)this + 0x68)));
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad68a0 */
GEN_OWN GEN_FRAME uint F_00ad68a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad68a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad6850(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad68d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad68d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad68d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00ad6850(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00ad6900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad6900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00ad67e0(param_3,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2,param_1);
    F_00492fb0(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,param_1);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ad6950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x68,0,0);
    F_00ad6850(*(undefined4 *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00492fb0(*(int *)this,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,uVar3);
      F_00429760(*(int *)this,((*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68) * 0x68,0);
    }
    *((uint *)GEN_TOP(((int)this + 4))) = ((iVar1 - iVar2) / 0x68) * 0x68 + uVar3;
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 0x68 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00ad6a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad6a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (*(uint *)this != uVar2) {
    uVar1 = F_00ad67e0(uVar2,uVar2,*(uint *)this,this);
    uVar2 = F_00492fb0(uVar1,*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0xc,this);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00ad6a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - *(int *)this) / 0x68;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*((int *)GEN_TOP(((int)this + 8))) - *(int *)this) / 0x68;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00ad6950(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00ad6950(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00ad6af0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad6af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad6a60(this GEN_EDX_FWD,1);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar2 = ((int)(param_1 - uVar1) / 0x68) * 0x68 + *(int *)this;
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00ad6b74;
    F_0042cbc0(this_00 GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP((uVar2 + 0x54)));
  }
  else {
    if (uVar2 == *((uint *)GEN_TOP(((int)this + 8)))) {
      F_00ad6a60(this GEN_EDX_ARG,1);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00ad6b74;
    F_0042cbc0(this_00 GEN_EDX_ARG,param_1);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
    uVar2 = param_1;
  }
  F_00490be0(((undefined *)GEN_TOP(((int)this_00 + 0x58))) GEN_EDX_ARG,uVar2 + 0x58);
LAB_00ad6b74: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 0x68;
  return;
}

/* ref: FUN_00ad6bd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad6bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad6c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad6c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad6c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad6c30 */
GEN_OWN GEN_FRAME uint F_00ad6c30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x15;
}

/* ref: FUN_00ad6c40 */
GEN_OWN GEN_FRAME uint F_00ad6c40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6c50 */
GEN_OWN GEN_FRAME uint F_00ad6c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00ad6c60 */
GEN_OWN GEN_FRAME uint F_00ad6c60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00ad6c70 */
GEN_OWN GEN_FRAME uint F_00ad6c70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00ad6ca0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad6ca0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad6ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad6cd0 */
GEN_OWN GEN_FRAME uint F_00ad6cd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x65;
}

/* ref: FUN_00ad6ce0 */
GEN_OWN GEN_FRAME uint F_00ad6ce0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6cf0 */
GEN_OWN GEN_FRAME uint F_00ad6cf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00ad6d00 */
GEN_OWN GEN_FRAME uint F_00ad6d00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00ad6d10 */
GEN_OWN GEN_FRAME uint F_00ad6d10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00ad6d40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad6d40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad6d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad6d80 */
GEN_OWN GEN_FRAME uint F_00ad6d80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x14;
}

/* ref: FUN_00ad6d90 */
GEN_OWN GEN_FRAME uint F_00ad6d90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6d90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad6db0 */
GEN_OWN GEN_FRAME uint F_00ad6db0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6db0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad6dd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad6dd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad6dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_00ad6e00 */
GEN_OWN GEN_FRAME uint F_00ad6e00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 100;
}

/* ref: FUN_00ad6e10 */
GEN_OWN GEN_FRAME uint F_00ad6e10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x65)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x65)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00ad6e30 */
GEN_OWN GEN_FRAME uint F_00ad6e30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x65)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x65)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00ad6e50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad6e50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad6e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,400);
  return uVar1;
}

/* ref: FUN_00ad6e90 */
GEN_OWN GEN_FRAME uint F_00ad6e90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6ea0 */
GEN_OWN GEN_FRAME uint F_00ad6ea0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6eb0 */
GEN_OWN GEN_FRAME uint F_00ad6eb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6ec0 */
GEN_OWN GEN_FRAME uint F_00ad6ec0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad6f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad6f20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad6f80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad6f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad6f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x65))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x65))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x65))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x65))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x65)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x65)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x65))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00ad6fe0 */
GEN_OWN GEN_FRAME uint F_00ad6fe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad6fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad6ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad6ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad6ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7010 */
GEN_OWN GEN_FRAME uint F_00ad7010(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7020 */
GEN_OWN GEN_FRAME uint F_00ad7020(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7050 */
GEN_OWN GEN_FRAME uint F_00ad7050(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7060 */
GEN_OWN GEN_FRAME uint F_00ad7060(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7070 */
GEN_OWN GEN_FRAME uint F_00ad7070(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7080 */
GEN_OWN GEN_FRAME uint F_00ad7080(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad70b0 */
GEN_OWN GEN_FRAME uint F_00ad70b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad70b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad70c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad70c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad70c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad70e0 */
GEN_OWN GEN_FRAME uint F_00ad70e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad70e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad70f0 */
GEN_OWN GEN_FRAME uint F_00ad70f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad70f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00ad7160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad71a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad71a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad71a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ad71c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad71c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad71c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad71f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad71f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad71f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad7210 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ad7210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad7260 */
GEN_OWN GEN_FRAME uint F_00ad7260(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00ad72a0 */
GEN_OWN GEN_FRAME uint F_00ad72a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad72a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00ad7310 */
GEN_OWN GEN_FRAME undefined4 * GEN_THISCALL F_00ad7310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad7340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_FWD,param_1);
    if (bVar3 == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x65)));
  }
  return (uint)puVar2;
}

/* ref: FUN_00ad7380 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ad7380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ad73d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00ad73d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad73d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x65))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x65)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x65)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x65)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x65)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00ad7420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad7480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ad74f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad74f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP((param_1 + 8))) = *piVar2;
  if (*((char *)GEN_TOP((*piVar2 + 0x65))) == '\0') {
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

/* ref: FUN_00ad7550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x65))) == '\0') {
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

/* ref: FUN_00ad75c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad75c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad75c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad75d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad75d0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad75d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad75e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad75e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad75e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7670(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad7670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ad76c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad76c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad76c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad6f20(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad76d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad76d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad76d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad6f80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad76e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad76e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad76e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad7760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00ad7780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00ad7800 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad7800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad7800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x15)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ad7800(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  }
  return;
}

/* ref: FUN_00ad7880 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad7380(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad7890 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad73d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad7920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7920(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad7920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00ad7380(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00ad7950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7950(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad7950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  F_00ad73d0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00ad7980 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00ad7980(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xad7980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00ad7990 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad6f20(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad79a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad79a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad79a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad6f80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad79b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad79b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad79b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00ad79d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad79d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad79d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00ad79f0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad79f0(GEN_P(undefined * this, unsigned int gen_a0), GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad79f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00ad7a10 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00ad7a10(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad7a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x54))) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad7a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x15)));
  while (cVar1 == '\0') {
    F_00ad7800(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = ((int *)GEN_TOP(*piVar2));
    F_00429760(piVar2,0x18,400);
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

/* ref: FUN_00ad7aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad7380(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad7ab0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad7ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad7ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00ad73d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00ad7b40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7b40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad7b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7b50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad7b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad7b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad7b60u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00ad7380(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
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
      goto LAB_00ad7c7a;
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
      piVar4 = ((int *)GEN_TOP(F_00ad6db0(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x15))) == '\0') {
      uVar5 = F_00ad6d90(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00ad7c7a: ;
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
            F_00ad7420(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 0x14))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 0x14))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00ad7480(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              F_00ad7420(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ad7d38: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00ad7480(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 0x14))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01'))
            goto LAB_00ad7d38;
            if (*((char *)GEN_TOP((*piVar6 + 0x14))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 0x14))) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00ad7420(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 0x14))) = 1;
            F_00ad7480(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ad7dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  puVar4 = puVar3;
  if (*((char *)GEN_TOP(((int)puVar3[1] + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(puVar3[1]));
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      else {
        if ((*((char *)GEN_TOP(((int)puVar3 + 0x15))) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  if (*((char *)GEN_TOP(((int)puVar1 + 0x15))) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar1));
        puVar3 = puVar1;
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(puVar1[2]));
      }
      puVar1 = puVar2;
    } while (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad7e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad7e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  cVar1 = *((char *)GEN_TOP(((int)puVar4[1] + 0x65)));
  puVar2 = puVar4;
  local_8 = ((undefined4 *)GEN_TOP(puVar4[1]));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(local_8 + 3 GEN_EDX_FWD,param_2);
    if (bVar3 == 0) {
      if ((*((char *)GEN_TOP(((int)puVar4 + 0x65))) != '\0') &&
         (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,local_8 + 3), bVar3 != 0)) {
        puVar4 = local_8;
      }
      puVar5 = ((undefined4 *)GEN_TOP(*local_8));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(local_8[2]));
      local_8 = puVar2;
    }
    puVar2 = local_8;
    local_8 = puVar5;
    cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
  }
  if (*((char *)GEN_TOP(((int)puVar4 + 0x65))) == '\0') {
    puVar5 = ((undefined4 *)GEN_TOP(*puVar4));
  }
  else {
    puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  }
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar5 + 3);
    if (bVar3 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
      puVar4 = puVar5;
    }
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x65)));
  }
  param_1[1] = (int)puVar4;
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ad7f00 */
GEN_OWN GEN_FRAME uint F_00ad7f00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad7f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00ad7f10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad7f10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xad7f10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_5,0x18,400);
                    
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
LAB_00ad810d: ;
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
        goto LAB_00ad810d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *((undefined1 *)GEN_TOP((iVar2 + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar4[1] + 4))) + 0x14))) = 0;
      piVar4 = *((int * PTR32 *)GEN_TOP((piVar4[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x14)));
  } while( true );
}

/* ref: FUN_00ad8140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xad8140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *((uint *)GEN_TOP((param_1 + 8)))) {
    F_0042c880(param_5 + 3 GEN_EDX_FWD);
    F_00429760(param_5,0x68,400);
                    
    F_00c4579a(((char *)REFP(0x10849b0)));
  }
  *((uint *)GEN_TOP((param_1 + 8))) = *((uint *)GEN_TOP((param_1 + 8))) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
    (*((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))))[1] = param_5;
    **((undefined4 * PTR32 *)GEN_TOP((param_1 + 4))) = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_5;
      if (param_4 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4)))))) {
        **((int * PTR32 *)GEN_TOP((param_1 + 4))) = (int)param_5;
      }
      goto LAB_00ad81b6;
    }
    param_4[2] = param_5;
    iVar4 = *((int *)GEN_TOP((param_1 + 4)));
    if (param_4 != *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 8)))) goto LAB_00ad81b6;
  }
  *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = param_5;
LAB_00ad81b6: ;
  cVar1 = *((char *)GEN_TOP((param_5[1] + 100)));
  piVar3 = param_5;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)));
      *param_2 = param_5;
      *((undefined1 *)GEN_TOP((iVar4 + 100))) = 1;
      return (uint)param_2;
    }
    piVar5 = ((int *)GEN_TOP(piVar3[1]));
    piVar6 = ((int *)GEN_TOP(piVar5[1]));
    if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
      iVar4 = piVar6[2];
      if (*((char *)GEN_TOP((iVar4 + 100))) == '\0') {
        *(undefined1 *)(piVar5 + 0x19) = 1;
        *((undefined1 *)GEN_TOP((iVar4 + 100))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 100))) = 0;
        piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
      }
      else {
        if (piVar3 == ((int *)GEN_TOP(piVar5[2]))) {
          piVar3 = ((int *)GEN_TOP(piVar5[2]));
          piVar5[2] = *piVar3;
          if (*((char *)GEN_TOP((*piVar3 + 0x65))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*piVar3 + 4))) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar3;
          }
          else {
            piVar6 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(*piVar6))) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 100))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 100))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(*piVar5));
        *piVar5 = piVar6[2];
        if (*((char *)GEN_TOP((piVar6[2] + 0x65))) == '\0') {
          *((int * PTR32 *)GEN_TOP((piVar6[2] + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(piVar2[2]))) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00ad8341: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*((char *)GEN_TOP((iVar4 + 100))) != '\0') {
        if (piVar3 == ((int *)GEN_TOP(*piVar5))) {
          iVar4 = *piVar5;
          *piVar5 = *((int *)GEN_TOP((iVar4 + 8)));
          if (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 0x65))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 8))) + 4))) = piVar5;
          }
          *((int *)GEN_TOP((iVar4 + 4))) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = iVar4;
          }
          else {
            piVar3 = ((int *)GEN_TOP(piVar5[1]));
            if (piVar5 == ((int *)GEN_TOP(piVar3[2]))) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *((int * PTR32 *)GEN_TOP((iVar4 + 8))) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *((undefined1 *)GEN_TOP((piVar3[1] + 100))) = 1;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 100))) = 0;
        piVar5 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
        piVar6 = ((int *)GEN_TOP(piVar5[2]));
        piVar5[2] = *piVar6;
        if (*((char *)GEN_TOP((*piVar6 + 0x65))) == '\0') {
          *((int * PTR32 *)GEN_TOP((*piVar6 + 4))) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 4))) = piVar6;
        }
        else {
          piVar2 = ((int *)GEN_TOP(piVar5[1]));
          if (piVar5 == ((int *)GEN_TOP(*piVar2))) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00ad8341;
      }
      *(undefined1 *)(piVar5 + 0x19) = 1;
      *((undefined1 *)GEN_TOP((iVar4 + 100))) = 1;
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((piVar3[1] + 4))) + 100))) = 0;
      piVar3 = *((int * PTR32 *)GEN_TOP((piVar3[1] + 4)));
    }
    cVar1 = *((char *)GEN_TOP((piVar3[1] + 100)));
  } while( true );
}

/* ref: FUN_00ad8370 */
GEN_OWN GEN_FRAME unsigned int F_00ad8370(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad8370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00ad83e0 */
GEN_OWN GEN_FRAME unsigned int F_00ad83e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad83e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*((char *)GEN_TOP(((int)piVar4 + 0x65))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x65)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x65)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ad8450 */
GEN_OWN GEN_FRAME unsigned int F_00ad8450(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad8450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ad8470 */
GEN_OWN GEN_FRAME unsigned int F_00ad8470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad8470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    *((undefined4 *)GEN_TOP(((int)param_2 + 0x54))) = *((undefined4 *)GEN_TOP((param_3 + 0x54)));
  }
  return;
}

/* ref: FUN_00ad84a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad84a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad84a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad84c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad84c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad84c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad84d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad84d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad84d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = **((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad84f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad84f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad84f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00ad8500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad8500u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00ad7a40(this GEN_EDX_FWD);
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
    F_00ad7b60(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad85a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad85a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad85a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad85e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad85e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad85e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ad7dc0(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ad8600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad8600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad8500(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad8620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
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
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x65)));
  }
  *param_1 = (int)puVar2;
  return (uint)param_1;
}

/* ref: FUN_00ad8660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ad7e50(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00ad8680 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00ad8680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad8680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP(((int)param_1 + 0x65)));
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00ad8680(this GEN_EDX_FWD,((int *)GEN_TOP(piVar3[2])));
    piVar2 = ((int *)GEN_TOP(*piVar3));
    F_0042c880(piVar3 + 3 GEN_EDX_ARG);
    F_00429760(piVar3,0x68,400);
    piVar3 = piVar2;
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x65)));
  }
  return;
}

/* ref: FUN_00ad86d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad86d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad86d0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x65))) != '\0') {
                    
    F_00c457e7(((char *)REFP(0x10849c4)));
  }
  F_00ad73d0(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(*piVar3));
  if (*((char *)GEN_TOP(((int)piVar6 + 0x65))) == '\0') {
    piVar7 = piVar6;
    if ((*((char *)GEN_TOP((piVar3[2] + 0x65))) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[2])), (*(int * PTR32 *)&gen_args[1]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[1]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(piVar3[2]))) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
        if (*((char *)GEN_TOP(((int)piVar7 + 0x65))) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[1])[0x19];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 0x19))) = (char)piVar3[0x19];
      *(char *)(piVar3 + 0x19) = (char)iVar1;
      goto LAB_00ad87ea;
    }
  }
  else {
    piVar7 = ((int *)GEN_TOP(piVar3[2]));
  }
  piVar6 = ((int *)GEN_TOP(piVar3[1]));
  if (*((char *)GEN_TOP(((int)piVar7 + 0x65))) == '\0') {
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
    if (*((char *)GEN_TOP(((int)piVar7 + 0x65))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00ad6e30(piVar7)));
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int * PTR32 *)GEN_TOP((iVar1 + 8))) == piVar3) {
    if (*((char *)GEN_TOP(((int)piVar7 + 0x65))) == '\0') {
      uVar5 = F_00ad6e10(piVar7);
      *((uint *)GEN_TOP((iVar1 + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((iVar1 + 8))) = piVar6;
    }
  }
LAB_00ad87ea: ;
  if ((char)piVar3[0x19] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x19] != '\x01') break;
        piVar6 = ((int *)GEN_TOP(*piVar4));
        if (piVar7 == piVar6) {
          piVar6 = ((int *)GEN_TOP(piVar4[2]));
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00ad74f0(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(piVar4[2]));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x65))) == '\0') {
            if ((*((char *)GEN_TOP((*piVar6 + 100))) != '\x01') || (*((char *)GEN_TOP((piVar6[2] + 100))) != '\x01')) {
              if (*((char *)GEN_TOP((piVar6[2] + 100))) == '\x01') {
                *((undefined1 *)GEN_TOP((*piVar6 + 100))) = 1;
                *(undefined1 *)(piVar6 + 0x19) = 0;
                F_00ad7550(this GEN_EDX_ARG,piVar6);
                piVar6 = ((int *)GEN_TOP(piVar4[2]));
              }
              *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
              *(undefined1 *)(piVar4 + 0x19) = 1;
              *((undefined1 *)GEN_TOP((piVar6[2] + 100))) = 1;
              F_00ad74f0(this GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00ad88a8: ;
            *(undefined1 *)(piVar6 + 0x19) = 0;
          }
        }
        else {
          if ((char)piVar6[0x19] == '\0') {
            *(undefined1 *)(piVar6 + 0x19) = 1;
            *(undefined1 *)(piVar4 + 0x19) = 0;
            F_00ad7550(this GEN_EDX_ARG,piVar4);
            piVar6 = ((int *)GEN_TOP(*piVar4));
          }
          if (*((char *)GEN_TOP(((int)piVar6 + 0x65))) == '\0') {
            if ((*((char *)GEN_TOP((piVar6[2] + 100))) == '\x01') && (*((char *)GEN_TOP((*piVar6 + 100))) == '\x01'))
            goto LAB_00ad88a8;
            if (*((char *)GEN_TOP((*piVar6 + 100))) == '\x01') {
              *((undefined1 *)GEN_TOP((piVar6[2] + 100))) = 1;
              *(undefined1 *)(piVar6 + 0x19) = 0;
              F_00ad74f0(this GEN_EDX_ARG,piVar6);
              piVar6 = ((int *)GEN_TOP(*piVar4));
            }
            *(char *)(piVar6 + 0x19) = (char)piVar4[0x19];
            *(undefined1 *)(piVar4 + 0x19) = 1;
            *((undefined1 *)GEN_TOP((*piVar6 + 100))) = 1;
            F_00ad7550(this GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = ((int *)GEN_TOP(piVar4[1]));
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x19) = 1;
  }
  F_0042c880(piVar3 + 3 GEN_EDX_ARG);
  F_00429760(piVar3,0x68,400);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((int *)GEN_TOP(((int)this + 8))) = *((int *)GEN_TOP(((int)this + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[1]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ad8930 */
GEN_OWN GEN_FRAME unsigned int F_00ad8930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad8930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00ad8370(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00ad8950 */
GEN_OWN GEN_FRAME unsigned int F_00ad8950(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad8950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 in_ECX = 0;
  
  F_00ad83e0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00ad8970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8970u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      puVar2 = ((undefined4 *)GEN_TOP(F_00ad7f10(this GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00ad6f20(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[2])[3] < *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00ad7f10(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),local_8,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_00429760((*(int *)&gen_args[1]),0x18,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ad8a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad8a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined * this_00;
  undefined4 * puVar6;
  byte local_8;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
  local_8 = 1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  bVar3 = local_8;
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[2]) == '\0') {
      bVar3 = F_0042c7c0(this_00 GEN_EDX_FWD,puVar5 + 3);
    }
    else {
      bVar3 = F_0042c7c0(puVar5 + 3 GEN_EDX_ARG,this_00);
      bVar3 = bVar3 == 0;
    }
    if (bVar3 == 0) {
      puVar6 = ((undefined4 *)GEN_TOP(puVar5[2]));
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP(*puVar5));
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *((char *)GEN_TOP(((int)puVar6 + 0x65)));
  }
  (*(undefined4 * PTR32 *)&gen_args[2]) = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4)))))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00ad8140(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),1,puVar2,(*(int *)&gen_args[1]))));
      *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
    }
    F_00ad6f80(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[2]) + 3 GEN_EDX_ARG,this_00);
  if (bVar4 != 0) {
    puVar5 = ((undefined4 *)GEN_TOP(F_00ad8140(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]),bVar3,puVar2,(*(int *)&gen_args[1]))));
    *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  F_0042c880(this_00 GEN_EDX_ARG);
  F_00429760((*(int *)&gen_args[1]),0x68,400);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ad8b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad8b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
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

/* ref: FUN_00ad8ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xad8ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x68,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_1);
    puVar1[0x18] = *((undefined4 *)GEN_TOP((param_1 + 0x54)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00ad8c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad8c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ad8500(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad8c40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xad8c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00ad7dc0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00ad8370((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00ad8500(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ad8ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8ca0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ad8d10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad8d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad8d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00ad8680(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00ad8d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))))[1]));
  cVar1 = *((char *)GEN_TOP(((int)puVar5 + 0x65)));
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
    cVar1 = *((char *)GEN_TOP(((int)puVar4 + 0x65)));
  }
  if ((puVar2 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)))) &&
     (bVar3 = F_0042c7c0(param_2 GEN_EDX_ARG,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)param_1;
}

/* ref: FUN_00ad8dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xad8dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(*piVar2))) && (param_3 == piVar2)) {
    F_00ad8680(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((int *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *param_1 = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*((char *)GEN_TOP(((int)piVar3 + 0x65))) == '\0') {
      piVar2 = ((int *)GEN_TOP(piVar3[2]));
      if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
        param_2 = piVar2;
        piVar2 = ((int *)GEN_TOP(*piVar2));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x65)));
          param_2 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP((piVar3[1] + 0x65)));
        piVar4 = ((int *)GEN_TOP(piVar3[1]));
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(param_2[2]))))) {
          cVar1 = *((char *)GEN_TOP((param_2[1] + 0x65)));
          piVar4 = ((int *)GEN_TOP(param_2[1]));
          piVar2 = param_2;
        }
      }
    }
    F_00ad86d0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00ad8e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad8e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = F_00ad8dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00ad8ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8ea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00ad8970(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ad8f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x68,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,param_2);
    puVar1[0x18] = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  }
  F_00ad8a50(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00ad8f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad8f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ad8500(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad8fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad8fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad8fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x18,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[3] = param_1;
    puVar1[4] = param_2;
  }
  uVar2 = F_00ad8970(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00ad9010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xad9010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ad8ca0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 8)))) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
  }
  return 0;
}

/* ref: FUN_00ad9050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  short * psVar2;
  uint uVar3;
  
  psVar2 = (*(short * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(short * PTR32 *)&gen_args[0]) = ((short *)GEN_TOP((int)*(*(short * PTR32 *)&gen_args[0])));
  F_00ad8ca0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(short * PTR32 *)&gen_args[0]));
  if (((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 8)))) &&
     (piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,psVar2,(*(undefined4 *)&gen_args[1]));
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ad90a0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ad90a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad90a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  undefined4 * puVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1);
  (*(undefined4 *)(gen_frame + 0x5c)) = param_2;
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0x68,0,400)));
  *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  puVar1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  puVar1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *(undefined2 *)(puVar1 + 0x19) = 0;
  if (puVar1 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    F_0042cbc0(puVar1 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
    puVar1[0x18] = (*(undefined4 *)(gen_frame + 0x5c));
  }
  F_00ad8a50(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar1,0);
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00ad9140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xad9140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  F_00ad8d40(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) != *((int *)GEN_TOP(((int)this + 0x18)))) {
    return *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0x60)));
  }
  return 0;
}

/* ref: FUN_00ad9170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad9170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab98));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_FWD,1);
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
        puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)this + 4)));
  F_00ad7a40(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[0x18]));
    if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x65))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x65))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x65)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x65)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x65)));
        puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x65)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  piVar5 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4)));
  cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x65)));
  while (cVar1 == '\0') {
    F_00ad8680(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,piVar5[2]);
    piVar6 = ((int *)GEN_TOP(*piVar5));
    F_0042c880(piVar5 + 3 GEN_EDX_ARG);
    F_00429760(piVar5,0x68,400);
    piVar5 = piVar6;
    cVar1 = *((char *)GEN_TOP(((int)piVar6 + 0x65)));
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x18))))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_00ad8dc0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x18))),0x68,400);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  F_00ad8500((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4))));
  uVar9 = F_00429760(*((undefined4 *)GEN_TOP(((int)pvVar7 + 4))),0x18,400);
  return (uint)uVar9;
}

/* ref: FUN_00ad9300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[0]);
  F_00ad8ca0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  uVar2 = (*(uint *)(gen_frame + 0x4));
  if (((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)this + 8)))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 0x10))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    F_00ad7dc0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
    uVar2 = F_00ad8500(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_00ad9370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad9370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(uint *)&gen_args[0]);
  F_00ad8d40(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]));
  uVar3 = (*(uint *)&gen_args[0]);
  if (((*(uint *)&gen_args[0]) != *((uint *)GEN_TOP(((int)this + 0x18)))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x60))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    }
    F_00ad7e50(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    uVar3 = F_00ad8dc0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar3;
}

/* ref: FUN_00ad93e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00ad93e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad93e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab98));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_004296a0(0x18,0,400);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = *((int *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x15))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  uVar1 = F_004296a0(0x68,0,400);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 100))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x65))) = 1;
  return (uint)this;
}

/* ref: FUN_00ad9460 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00ad9460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xad9460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  code * pcVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  bVar4 = F_0042a980(param_1 GEN_EDX_FWD,0);
  if (bVar4 != 0x2f) {
    return 0xfffffffe;
  }
  if ((*(uint *)&REFG(undefined, 0x14c07b4) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c07b4) = *(uint *)&REFG(undefined, 0x14c07b4) | 1;
    F_0042cc20(&REFG(undefined, 0x14c0760) GEN_EDX_ARG,&REFG(undefined, 0x10eab90),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c730)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00ada2c0(param_1,&REFG(undefined, 0x14c0760),&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  iVar2 = (*(int *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x0))) >> 0x1f;
  if (((*(int *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 + iVar2 != iVar2) {
    F_00ad8d40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 *)(gen_frame + 0x0)));
    if (((*(undefined * PTR32 *)(gen_frame + 0x10)) != *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x18)))) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x60))), piVar1 != ((int *)GEN_TOP(0x0)))) {
      if (((*(int *)(gen_frame + 0x4)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x0))) / 0x54 == 1) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10eab93),REFG(undefined4, 0x108cc50));
        pcVar6 = *((gen_code32 *)GEN_TOP((*piVar1 + 4)));
      }
      else {
        iVar2 = *piVar1;
        uVar7 = REFG(undefined4, 0x108cc50);
        uVar5 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),uVar5 + 1,uVar7);
        pcVar6 = *((gen_code32 *)GEN_TOP((iVar2 + 4)));
      }
      (*pcVar6)(piVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0;
    }
  }
  F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00ad9630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad9630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ad8dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00ad9670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xad9670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  F_00ad7e50(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = 0;
  F_00ad83e0((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]),0);
  F_00ad8dc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ad96d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad96d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xad96d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00ad8dc0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))));
  uVar1 = F_00429760(*((undefined4 *)GEN_TOP(((int)this + 4))),0x68,400);
  return (uint)uVar1;
}

/* ref: Component::Shell::ShellCommands::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ad9750(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ad9170(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ad9780 */
GEN_OWN GEN_FRAME uint F_00ad9780(GEN_P(byte * in_eax, unsigned int gen_a0), GEN_P(uint * in_ecx, unsigned int gen_a1), GEN_P(int in_edx, unsigned int gen_a2))
{
  GEN_ENTER(0xad9780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * in_eax = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int in_edx = (int)gen_a2;)
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined1 * puVar4;
  uint * puVar5;
  
  bVar1 = *in_eax;
  if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
    *in_ecx = *((byte *)GEN_TOP(((bVar1 - 0x40) + in_edx))) + 0x40;
    in_ecx[1] = 0;
    return 1;
  }
  if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
    *in_ecx = *((byte *)GEN_TOP(((bVar1 - 0x60) + in_edx))) + 0x40;
    in_ecx[1] = 0;
    return 1;
  }
  if (bVar1 == 0xc3) {
    bVar2 = in_eax[1];
    if ((byte)(bVar2 + 0x80) < 0x20) {
      *in_ecx = *((byte *)GEN_TOP(((bVar2 - 0x60) + in_edx))) + 0x40;
      in_ecx[1] = 0;
      return 2;
    }
    if ((byte)(bVar2 + 0x60) < 0x20) {
      *in_ecx = *((byte *)GEN_TOP(((bVar2 - 0x80) + in_edx))) + 0x40;
      in_ecx[1] = 0;
      return 2;
    }
  }
  if (bVar1 < 0x80) {
    puVar5 = ((uint *)GEN_TOP(0x1));
    goto LAB_00ad9870;
  }
  if (0xbf < bVar1) {
    if (bVar1 < 0xe0) {
      puVar5 = ((uint *)GEN_TOP(0x2));
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xf0) {
      puVar5 = ((uint *)GEN_TOP(0x3));
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xf8) {
      puVar5 = (uint *)&REFG(undefined, 0x4);
      goto LAB_00ad9870;
    }
    if (bVar1 < 0xfc) {
      puVar5 = (uint *)&REFG(undefined, 0x5);
      goto LAB_00ad9870;
    }
    puVar5 = (uint *)&REFG(undefined, 0x6);
    if (bVar1 < 0xfe) goto LAB_00ad9870;
  }
  puVar5 = in_ecx;
LAB_00ad9870: ;
  *in_ecx = (uint)bVar1;
  in_ecx[1] = 0;
  if (1 < (int)puVar5) {
    puVar4 = ((undefined1 *)GEN_TOP(((int)puVar5 - 1)));
    do {
      in_eax = in_eax + 1;
      uVar3 = *in_ecx;
      *in_ecx = uVar3 << 8;
      in_ecx[1] = in_ecx[1] << 8 | uVar3 >> 0x18;
      bVar1 = *in_eax;
      uVar3 = *in_ecx;
      *in_ecx = *in_ecx + (uint)bVar1;
      in_ecx[1] = in_ecx[1] + (uint)CARRY4(uVar3,(uint)bVar1);
      puVar4 = puVar4 - 1;
    } while (puVar4 != ((undefined1 *)GEN_TOP(0x0)));
  }
  return (uint)puVar5;
}

/* ref: FUN_00ad98b0 */
GEN_OWN GEN_FRAME uint F_00ad98b0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad98b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  undefined * in_edx;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((char)param_4 == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10eaba0);
    in_edx = &REFG(undefined, 0x10eaba0);
    (*(char * PTR32 *)(gen_frame + 0x8)) = param_2;
  }
  else {
    in_edx = &REFG(undefined, 0x10eabe8);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined, 0x10eabe8);
    (*(char * PTR32 *)(gen_frame + 0x8)) = param_2;
  }
  do {
    bVar1 = *param_1;
    if (((bVar1 == 0) && (*param_2 == '\0')) || (param_3 <= (uint)((int)param_2 - (int)(*(char * PTR32 *)(gen_frame + 0x8))))) {
      return 0;
    }
    if ((bVar1 < 0x41) || (0x5a < bVar1)) {
      if ((bVar1 < 0x61) || (0x7a < bVar1)) {
        if (bVar1 == 0xc3) {
          bVar2 = param_1[1];
          if ((byte)(bVar2 + 0x80) < 0x20) {
            uVar3 = (byte)in_edx[bVar2 - 0x60] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
          else {
            if (0x1f < (byte)(bVar2 + 0x60)) goto LAB_00ad9993;
            uVar3 = (byte)in_edx[bVar2 - 0x80] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
        }
        else {
LAB_00ad9993: ;
          if (bVar1 < 0x80) {
            param_4 = 1;
          }
          else if (0xbf < bVar1) {
            if (bVar1 < 0xe0) {
              param_4 = 2;
            }
            else if (bVar1 < 0xf0) {
              param_4 = 3;
            }
            else if (bVar1 < 0xf8) {
              param_4 = 4;
            }
            else if (bVar1 < 0xfc) {
              param_4 = 5;
            }
            else if (bVar1 < 0xfe) {
              param_4 = 6;
            }
          }
          uVar3 = (uint)bVar1;
          iVar9 = 0;
          iVar4 = param_4;
          if (1 < param_4) {
            iVar7 = param_4 - 1;
            pbVar6 = param_1;
            do {
              pbVar6 = pbVar6 + 1;
              uVar5 = uVar3 >> 0x18;
              uVar8 = uVar3 * 0x100;
              uVar3 = uVar8 + *pbVar6;
              iVar9 = (iVar9 << 8 | uVar5) + (uint)CARRY4(uVar8,(uint)*pbVar6);
              iVar7 = iVar7 - 1;
              in_edx = (*(undefined * PTR32 *)(gen_frame + 0xc));
            } while (iVar7 != 0);
          }
        }
      }
      else {
        uVar3 = (byte)in_edx[bVar1 - 0x60] + 0x40;
        iVar9 = 0;
        iVar4 = 1;
      }
    }
    else {
      uVar3 = (byte)in_edx[bVar1 - 0x40] + 0x40;
      iVar9 = 0;
      iVar4 = 1;
    }
    param_1 = param_1 + iVar4;
    uVar5 = F_00ad9780(param_2,&(*(uint *)(gen_frame + 0x0)),in_edx);
    param_2 = param_2 + uVar5;
    if ((uVar3 != (*(uint *)(gen_frame + 0x0))) || (iVar9 != (*(int *)(gen_frame + 0x4)))) {
      if ((iVar9 <= (*(int *)(gen_frame + 0x4))) && ((iVar9 < (*(int *)(gen_frame + 0x4)) || (uVar3 < (*(uint *)(gen_frame + 0x0)))))) {
        return 0xffffffff;
      }
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ad9a70 */
GEN_OWN GEN_FRAME uint F_00ad9a70(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9a70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  undefined * in_edx;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((char)param_3 == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x10eaba0);
    in_edx = &REFG(undefined, 0x10eaba0);
  }
  else {
    in_edx = &REFG(undefined, 0x10eabe8);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x10eabe8);
  }
  do {
    bVar1 = *param_1;
    if ((bVar1 == 0) && (*param_2 == '\0')) {
      return 0;
    }
    if ((bVar1 < 0x41) || (0x5a < bVar1)) {
      if ((bVar1 < 0x61) || (0x7a < bVar1)) {
        if (bVar1 == 0xc3) {
          bVar2 = param_1[1];
          if ((byte)(bVar2 + 0x80) < 0x20) {
            uVar3 = (byte)in_edx[bVar2 - 0x60] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
          else {
            if (0x1f < (byte)(bVar2 + 0x60)) goto LAB_00ad9b39;
            uVar3 = (byte)in_edx[bVar2 - 0x80] + 0x40;
            iVar9 = 0;
            iVar4 = 2;
          }
        }
        else {
LAB_00ad9b39: ;
          if (bVar1 < 0x80) {
            param_3 = 1;
          }
          else if (0xbf < bVar1) {
            if (bVar1 < 0xe0) {
              param_3 = 2;
            }
            else if (bVar1 < 0xf0) {
              param_3 = 3;
            }
            else if (bVar1 < 0xf8) {
              param_3 = 4;
            }
            else if (bVar1 < 0xfc) {
              param_3 = 5;
            }
            else if (bVar1 < 0xfe) {
              param_3 = 6;
            }
          }
          uVar3 = (uint)bVar1;
          iVar9 = 0;
          iVar4 = param_3;
          if (1 < param_3) {
            iVar7 = param_3 - 1;
            pbVar6 = param_1;
            do {
              pbVar6 = pbVar6 + 1;
              uVar5 = uVar3 >> 0x18;
              uVar8 = uVar3 * 0x100;
              uVar3 = uVar8 + *pbVar6;
              iVar9 = (iVar9 << 8 | uVar5) + (uint)CARRY4(uVar8,(uint)*pbVar6);
              iVar7 = iVar7 - 1;
              in_edx = (*(undefined * PTR32 *)(gen_frame + 0x8));
            } while (iVar7 != 0);
          }
        }
      }
      else {
        uVar3 = (byte)in_edx[bVar1 - 0x60] + 0x40;
        iVar9 = 0;
        iVar4 = 1;
      }
    }
    else {
      uVar3 = (byte)in_edx[bVar1 - 0x40] + 0x40;
      iVar9 = 0;
      iVar4 = 1;
    }
    param_1 = param_1 + iVar4;
    uVar5 = F_00ad9780(param_2,&(*(uint *)(gen_frame + 0x0)),in_edx);
    param_2 = param_2 + uVar5;
    if ((uVar3 != (*(uint *)(gen_frame + 0x0))) || (iVar9 != (*(int *)(gen_frame + 0x4)))) {
      if ((iVar9 <= (*(int *)(gen_frame + 0x4))) && ((iVar9 < (*(int *)(gen_frame + 0x4)) || (uVar3 < (*(uint *)(gen_frame + 0x0)))))) {
        return 0xffffffff;
      }
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ad9c10 */
GEN_OWN GEN_FRAME uint F_00ad9c10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar1 = F_00ad9a70(uVar2,uVar1,param_3);
  return uVar1;
}

/* ref: FUN_00ad9c40 */
GEN_OWN GEN_FRAME uint F_00ad9c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xad9c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042a990(param_2 GEN_EDX_ARG);
  uVar2 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar1 = F_00ad98b0(uVar2,uVar1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ad9c70 */
GEN_OWN GEN_FRAME uint F_00ad9c70(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar1 = F_0042b790(param_2 GEN_EDX_ARG);
  uVar2 = F_0042b790(param_3 GEN_EDX_ARG);
  local_8 = 0;
  uVar3 = F_0042c8a0(param_1 GEN_EDX_ARG,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      F_0042d6c0(param_1 GEN_EDX_ARG,uVar3,uVar1,param_3);
      local_8 = local_8 + 1;
      uVar3 = F_0042c8a0(param_1 GEN_EDX_ARG,param_2,uVar3 + uVar2);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  return local_8;
}

/* ref: FUN_00ad9cf0 */
GEN_OWN GEN_FRAME byte F_00ad9cf0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0042b790(param_2 GEN_EDX_ARG);
  uVar2 = F_0042c8a0(param_1 GEN_EDX_ARG,param_2,0);
  if (uVar2 != REFG(undefined4, 0x108cc50)) {
    F_0042d6c0(param_1 GEN_EDX_ARG,uVar2,uVar1,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad9d30 */
GEN_OWN GEN_FRAME uint F_00ad9d30(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
  uVar3 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    return uVar3 & 0xffffff00;
  }
  if (uVar2 == uVar3) {
    bVar1 = F_0042b660(param_1 GEN_EDX_ARG,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_0042da40(param_1 GEN_EDX_ARG,0,uVar3,param_2);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00ad9d80 */
GEN_OWN GEN_FRAME uint F_00ad9d80(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
  uVar3 = F_0042b790(param_2 GEN_EDX_ARG);
  if (uVar2 < uVar3) {
    return uVar3 & 0xffffff00;
  }
  if (uVar2 == uVar3) {
    bVar1 = F_0042b660(param_1 GEN_EDX_ARG,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_0042da40(param_1 GEN_EDX_ARG,uVar2 - uVar3,uVar3,param_2);
  return (uint)(uVar2 == 0);
}

/* ref: FUN_00ad9dd0 */
GEN_OWN_GS GEN_FRAME uint F_00ad9dd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = F_0042c8d0(param_1 GEN_EDX_ARG,param_2,0);
  uVar2 = F_0042c910(param_1 GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  if (uVar1 == REFG(undefined4, 0x108cc50)) {
    if (uVar2 == REFG(undefined4, 0x108cc50)) goto LAB_00ad9e22;
    uVar1 = 0;
  }
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
  }
  if (uVar1 <= uVar2) {
    uVar1 = F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1,(uVar2 - uVar1) + 1);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)uVar3;
  }
LAB_00ad9e22: ;
  uVar1 = F_0042aca0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ad9e70 */
GEN_OWN GEN_FRAME unsigned int F_00ad9e70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = param_1;
  while (uVar1 = uVar1 / 10, uVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 + 1 + iVar2 / 3;
  iVar3 = 0;
  *((undefined1 *)GEN_TOP((iVar2 + param_2))) = 0;
  uVar1 = param_1;
  while (iVar2 = iVar2 - 1, -1 < iVar2) {
    if (iVar3 == 3) {
      *((undefined1 *)GEN_TOP((iVar2 + param_2))) = 0x2c;
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 1;
      *((char *)GEN_TOP((iVar2 + param_2))) = (char)uVar1 + (char)(uVar1 / 10) * -10 + '0';
      uVar1 = uVar1 / 10;
    }
  }
  return 0;
}

/* ref: FUN_00ad9f00 */
GEN_OWN GEN_FRAME uint F_00ad9f00(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(uint in_ebx, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(uint in_ebx = (uint)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  char * pcVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  pcVar2 = param_3;
  while( true ) {
    pcVar1 = pcVar2;
    uVar3 = in_eax / 10;
    *pcVar1 = ((char *)REFP(0x10eac34))[in_eax % 10];
    uVar4 = uVar4 + 1;
    pcVar2 = pcVar1 + 1;
    if ((in_ebx <= uVar4) || (uVar3 == 0)) break;
    in_eax = uVar3;
    if (uVar4 == (uVar4 / 3) * 3) {
      *pcVar2 = ',';
      pcVar2 = pcVar1 + 2;
    }
  }
  *pcVar2 = '\0';
  return (uint)param_3;
}

/* ref: FUN_00ad9f60 */
GEN_OWN_GS GEN_FRAME uint F_00ad9f60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xad9f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x28, 8, 4);
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24));
  F_00ad9f00(param_1,0x20,((char *)(gen_frame + 0x0)));
  F_0042aca0(param_2 GEN_EDX_ARG);
  pcVar2 = ((char *)(gen_frame + 0x0));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(((char *)(gen_frame + 0x0)) + 1);
  if (iVar3 != 0) {
    pcVar2 = ((char *)(gen_frame + 0x0)) + iVar3 - 1;
    do {
      F_0042e3c0(param_2 GEN_EDX_ARG,*pcVar2);
      pcVar2 = pcVar2 - 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  uVar4 = F_0042a990(param_2 GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00ad9fd0 */
GEN_OWN GEN_FRAME uint F_00ad9fd0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(LPCSTR param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xad9fd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(LPCSTR param_3 = (LPCSTR)gen_a2;)
  int cchWideChar;
  LPWSTR lpWideCharStr;
  
  cchWideChar = gen_imp_MultiByteToWideChar(0xfde9,0,param_3,-1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)F_00406bb0(cchWideChar * 2 + 2,0,0);
  gen_imp_MultiByteToWideChar(0xfde9,0,param_3,-1,lpWideCharStr,cchWideChar);
  gen_imp_WideCharToMultiByte(0,0,lpWideCharStr,0xffffffff,0,0,0,0);
  F_00c48350(param_1,0,param_2);
  gen_imp_WideCharToMultiByte(0,0,lpWideCharStr,0xffffffff,param_1,param_2,0,0);
  F_00406b30(lpWideCharStr);
  return (uint)param_1;
}

/* ref: FUN_00ada060 */
GEN_OWN GEN_FRAME uint F_00ada060(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xada060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0042a990(param_3 GEN_EDX_ARG);
  uVar1 = F_00ad9fd0(param_1,param_2,uVar1);
  return uVar1;
}

/* ref: FUN_00ada080 */
GEN_OWN_GS GEN_FRAME uint F_00ada080(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  uint uVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  uint * puVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  F_00ad9f00(param_1,0x20,((char *)(gen_frame + 0x8)));
  param_2[4] = 0;
  puVar6 = param_2;
  if (0xf < param_2[5]) {
    puVar6 = ((uint *)GEN_TOP(*param_2));
  }
  *(undefined1 *)puVar6 = 0;
  pcVar4 = ((char *)(gen_frame + 0x8));
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  uVar5 = (int)pcVar4 - (int)(((char *)(gen_frame + 0x8)) + 1);
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (uVar5 != 0) {
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)(gen_frame + 0x8)) + (uVar5 - 1);
    do {
      uVar3 = param_2[4];
      cVar2 = *(*(char * PTR32 *)(gen_frame + 0x4));
      if ((-uVar3 - 1 < 2) || (uVar1 = uVar3 + 1, uVar1 == 0xffffffff)) {
                    
        F_00c4579a(((char *)REFP(0x10802b0)));
      }
      if (param_2[5] < uVar1) {
        F_004e3ed0(param_2 GEN_EDX_ARG,uVar1,uVar3);
        if (uVar1 != 0) {
LAB_00ada118: ;
          puVar6 = param_2;
          if (0xf < param_2[5]) {
            puVar6 = ((uint *)GEN_TOP(*param_2));
          }
          *((char *)GEN_TOP(((int)puVar6 + param_2[4]))) = cVar2;
          param_2[4] = uVar1;
          puVar6 = param_2;
          if (0xf < param_2[5]) {
            puVar6 = ((uint *)GEN_TOP(*param_2));
          }
          *((undefined1 *)GEN_TOP(((int)puVar6 + uVar1))) = 0;
        }
      }
      else {
        if (uVar1 != 0) goto LAB_00ada118;
        param_2[4] = 0;
        if (param_2[5] < 0x10) {
          *(undefined1 *)param_2 = 0;
        }
        else {
          *((undefined1 *)GEN_TOP(*param_2)) = 0;
        }
      }
      (*(char * PTR32 *)(gen_frame + 0x4)) = (*(char * PTR32 *)(gen_frame + 0x4)) - 1;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < uVar5);
  }
  if (param_2[5] < 0x10) {
    return (uint)param_2;
  }
  return *param_2;
}

/* ref: FUN_00ada1b0 */
GEN_OWN_GS GEN_FRAME uint F_00ada1b0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xada1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
  uVar3 = F_0042c8d0(param_1 GEN_EDX_ARG,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      uVar4 = F_0042c8b0(param_1 GEN_EDX_ARG,param_2,uVar3);
      if (uVar4 == REFG(undefined4, 0x108cc50)) {
        uVar4 = uVar2;
      }
      uVar5 = F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3,uVar4 - uVar3);
      uVar3 = param_3[1];
      if ((uVar5 < uVar3) && (uVar1 = *param_3, uVar1 <= uVar5)) {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3 GEN_EDX_ARG,1);
        }
        this = ((undefined *)GEN_TOP(param_3[1]));
        if (this != ((undefined *)GEN_TOP(0x0))) {
          uVar5 = ((int)(uVar5 - uVar1) / 0x54) * 0x54 + *param_3;
LAB_00ada272: ;
          F_0042cbc0(this GEN_EDX_ARG,uVar5);
        }
      }
      else {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3 GEN_EDX_ARG,1);
        }
        this = ((undefined *)GEN_TOP(param_3[1]));
        if (this != ((undefined *)GEN_TOP(0x0))) goto LAB_00ada272;
      }
      param_3[1] = param_3[1] + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar3 = F_0042c8d0(param_1 GEN_EDX_ARG,param_2,uVar4 + 1);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  return uVar3;
}

/* ref: FUN_00ada2c0 */
GEN_OWN_GS GEN_FRAME uint F_00ada2c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xada2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
  uVar3 = F_0042c8d0(param_1 GEN_EDX_ARG,param_2,0);
  if (uVar3 != REFG(undefined4, 0x108cc50)) {
    do {
      if (uVar2 <= uVar3) {
        return uVar3;
      }
      if (uVar3 == 0) {
        (*(uint *)(gen_frame + 0x0)) = F_0042c8b0(param_1 GEN_EDX_ARG,param_2,0);
      }
      else {
        F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar3 - 1,1);
        (*(uint *)(gen_frame + 0x0)) = F_0042c8b0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      if ((*(uint *)(gen_frame + 0x0)) == REFG(undefined4, 0x108cc50)) {
        (*(uint *)(gen_frame + 0x0)) = uVar2;
      }
      uVar4 = F_0042d2f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar3,(*(uint *)(gen_frame + 0x0)) - uVar3);
      uVar3 = param_3[1];
      if ((uVar4 < uVar3) && (uVar1 = *param_3, uVar1 <= uVar4)) {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3 GEN_EDX_ARG,1);
        }
        this = ((undefined *)GEN_TOP(param_3[1]));
        if (this != ((undefined *)GEN_TOP(0x0))) {
          uVar4 = ((int)(uVar4 - uVar1) / 0x54) * 0x54 + *param_3;
LAB_00ada3bd: ;
          F_0042cbc0(this GEN_EDX_ARG,uVar4);
        }
      }
      else {
        if (uVar3 == param_3[2]) {
          F_00488ca0(param_3 GEN_EDX_ARG,1);
        }
        this = ((undefined *)GEN_TOP(param_3[1]));
        if (this != ((undefined *)GEN_TOP(0x0))) goto LAB_00ada3bd;
      }
      param_3[1] = param_3[1] + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar3 = F_0042c8d0(param_1 GEN_EDX_ARG,param_2,(*(uint *)(gen_frame + 0x0)) + 1);
    } while (uVar3 != REFG(undefined4, 0x108cc50));
  }
  return uVar3;
}

/* ref: FUN_00ada400 */
GEN_OWN_GS GEN_FRAME uint F_00ada400(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
  F_00ad9dd0(param_1,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = (uint)uVar2;
  if (*((char *)GEN_TOP(*param_1)) != '\0') {
    F_0048a040(param_2 GEN_EDX_ARG,param_1);
    uVar1 = F_0042aca0(param_1 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00ada470 */
GEN_OWN_GS GEN_FRAME uint F_00ada470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xada470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x104, 12, 4);
  char * PTR32 * ppcVar1;
  uint uVar2;
  char * pcVar3;
  undefined1 * puVar4;
  undefined * this;
  uint uVar5;
  char * PTR32 * ppcVar6;
  ulonglong uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100));
  uVar2 = F_0042a970(param_1 GEN_EDX_ARG);
  F_0042b630(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      pcVar3 = ((char *)GEN_TOP(F_0042a7e0(param_1 GEN_EDX_ARG,uVar5)));
      if (*pcVar3 == param_2) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
        F_00ad9dd0(((char * PTR32 *)(gen_frame + 0xa8)),((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        if (*((char * PTR32 *)(gen_frame + 0xa8))[0] != '\0') {
          F_0048a040(param_3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0xa8)));
          F_0042aca0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        }
      }
      else {
        puVar4 = ((undefined1 *)GEN_TOP(F_0042a7e0(param_1 GEN_EDX_ARG,uVar5)));
        F_0042dc00(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,*puVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10eac2c),REFG(undefined4, 0x108cc50));
  uVar2 = F_0042c8d0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),0);
  uVar5 = F_0042c910(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),REFG(undefined4, 0x108cc50));
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    if (uVar5 != REFG(undefined4, 0x108cc50)) {
      uVar2 = 0;
      goto LAB_00ada588;
    }
    F_0042aca0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  }
  else {
LAB_00ada588: ;
    if (uVar5 == REFG(undefined4, 0x108cc50)) {
      uVar5 = F_0042b790(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
    }
    if (uVar5 < uVar2) {
      F_0042aca0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
    }
    else {
      uVar2 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,(uVar5 - uVar2) + 1);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  if (*((char * PTR32 *)(gen_frame + 0xa8))[0] == '\0') goto LAB_00ada646;
  ppcVar6 = ((char * PTR32 *)GEN_TOP(param_3[1]));
  if ((((char * PTR32 *)(gen_frame + 0xa8)) < ppcVar6) && (ppcVar1 = ((char * PTR32 *)GEN_TOP(*param_3)), ppcVar1 <= ((char * PTR32 *)(gen_frame + 0xa8)))) {
    if (ppcVar6 == ((char * PTR32 *)GEN_TOP(param_3[2]))) {
      F_00488ca0(param_3 GEN_EDX_ARG,1);
    }
    this = ((undefined *)GEN_TOP(param_3[1]));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      ppcVar6 = ((char * PTR32 *)GEN_TOP(((((int)((char * PTR32 *)(gen_frame + 0xa8)) - (int)ppcVar1) / 0x54) * 0x54 + *param_3)));
LAB_00ada635: ;
      F_0042cbc0(this GEN_EDX_ARG,ppcVar6);
    }
  }
  else {
    if (ppcVar6 == ((char * PTR32 *)GEN_TOP(param_3[2]))) {
      F_00488ca0(param_3 GEN_EDX_ARG,1);
    }
    this = ((undefined *)GEN_TOP(param_3[1]));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      ppcVar6 = ((char * PTR32 *)(gen_frame + 0xa8));
      goto LAB_00ada635;
    }
  }
  param_3[1] = param_3[1] + 0x54;
  F_0042aca0(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
LAB_00ada646: ;
  uVar7 = F_0042c880(((char * PTR32 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_00ada660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xada660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  undefined * pvVar1;
  
  if (param_3 == 1) {
    if (0xf < (uint)param_1[5]) {
      param_1 = ((undefined4 *)GEN_TOP(*param_1));
    }
    *((byte *)GEN_TOP(((int)param_1 + param_2))) = param_4;
    return (uint)param_4;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = ((undefined4 *)GEN_TOP(*param_1));
  }
  pvVar1 = F_00c48350(((undefined *)GEN_TOP(((int)param_1 + param_2))),(int)(char)param_4,param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00ada6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xada6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a(((char *)REFP(0x10802b0)));
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a(((char *)REFP(0x10802b0)));
    }
    if (*((uint *)GEN_TOP(((int)this + 0x14))) < uVar1) {
      F_004e3ed0(this GEN_EDX_ARG,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
      if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_00ada660(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,(undefined1)param_2);
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
    if (0xf < *((uint *)GEN_TOP(((int)this + 0x14)))) {
      *((undefined1 *)GEN_TOP((*(int *)this + uVar1))) = 0;
      return (uint)this;
    }
    *((undefined1 *)GEN_TOP(((int)this + uVar1))) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ada770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xada770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ada6c0(this GEN_EDX_FWD,1,param_1);
  return uVar1;
}

/* ref: FUN_00ada790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xada790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(uint *)this = param_1 & 0x7f | param_2 << 7;
  return (uint)this;
}

/* ref: Component::Completion::CompletionModuleInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada7c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x10eac74));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Text::TextModuleInterface::FixedSheetInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada800(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ada830 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00ada830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  uVar3 = 1;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00ad9c10(uVar2,uVar1,uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (int)uVar1 < 0;
}

/* ref: FUN_00ada8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada8b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ada8c0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ada8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xada8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_1,REFG(undefined4, 0x108cc50));
  uVar2 = 1;
  uVar1 = F_0042a970(*(undefined4 *)this GEN_EDX_ARG);
  uVar1 = F_00ad9c40(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)this,uVar1,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1 == 0;
}

/* ref: FUN_00ada930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada930(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xada930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ada940 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00ada940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xada940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *param_1 == *(int *)this;
}

/* ref: FUN_00ada960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00ada960(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xada960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  F_0042cbc0(param_1 GEN_EDX_FWD,param_2);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x54))) = param_3;
  return (uint)param_1;
}

/* ref: Component::Completion::CompletionModule::vf7 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00ada9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xada9b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042aca0(param_2 GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(this + 0x10);
  iVar5 = *piVar1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_2);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar5 + 0xc))))(*(undefined4 *)(this + 0x10),param_1,uVar2);
  if (uVar2 == 1) {
    uVar2 = F_0042b790(this + 0x144 GEN_EDX_ARG);
    uVar3 = F_0042b790(param_2 GEN_EDX_ARG);
    uVar4 = F_0042b790(this + 0x198 GEN_EDX_ARG);
    iVar5 = (uVar3 - uVar2) - uVar4;
    uVar2 = F_0042b790(this + 0x144 GEN_EDX_ARG);
    uVar2 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,iVar5);
    F_0042ccf0(param_2 GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adaa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadaa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  pcVar2 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_FWD)));
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      if (pcVar2[1] == '.') {
        uVar4 = uVar4 + 1;
      }
      uVar3 = (byte)pcVar2[2] + 3;
    }
    else {
      uVar3 = F_0042acc0(cVar1);
    }
    pcVar2 = pcVar2 + uVar3;
    cVar1 = *pcVar2;
  }
  return uVar4;
}

/* ref: FUN_00adaac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adaac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadaac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x140;
}

/* ref: FUN_00adaad0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adaad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadaad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x194;
}

/* ref: Component::Completion::CompletionModule::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adaae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadaae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = (int)(*param_1 << 0x19) >> 0x19;
  if (iVar1 == -2) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) +
                      *((char *)GEN_TOP(((*param_1 >> 7) + *(int *)(this + 0x48)))) * 4)));
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_FWD)));
    return piVar2[1] - *piVar2 >> 2;
  }
  return (iVar1 != -1) - 2;
}

/* ref: FUN_00adab30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadab30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int * piVar4;
  
  if ((((-1 < param_1) && (param_1 < *((int *)GEN_TOP(((int)this + 0x48))) - *((int *)GEN_TOP(((int)this + 0x44))))) &&
      (iVar3 = (int)*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + param_1))), -1 < iVar3)) &&
     ((iVar3 < *((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 0x14))) >> 2 &&
      (iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar3 * 4))), iVar3 != 0)))) {
    bVar1 = F_00bc8ab0(iVar3 GEN_EDX_FWD);
    iVar3 = (int)(char)bVar1;
    if ((-1 < (char)bVar1) &&
       (iVar3 < (*((int *)GEN_TOP(((int)this + 0x134))) - *((int *)GEN_TOP(((int)this + 0x130)))) / 0x58)) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG)));
      if ((*piVar4 == 2) && (*((char *)GEN_TOP((iVar3 * 0x58 + 0x54 + *((int *)GEN_TOP(((int)this + 0x130)))))) != '\0'))
      {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      *param_2 = uVar2;
      return iVar3 * 0x58 + *((int *)GEN_TOP(((int)this + 0x130)));
    }
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00adabf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadabf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  code * pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  if (this[0x14] != (undefined1)0x0) {
    iVar3 = *(int *)(this + 0x18);
    (*(uint *)(gen_frame + 0x14)) = 0;
    if (*(int *)(this + 0x1c) - iVar3 >> 2 != 0) {
      do {
        piVar5 = *((int * PTR32 *)GEN_TOP((iVar3 + (*(uint *)(gen_frame + 0x14)) * 4)));
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
        bVar2 = F_00bc8ab0(piVar5 GEN_EDX_FWD);
        (*(byte *)(gen_frame + 0x1c)) = bVar2;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG);
        if ((uVar4 != 0) && ('\0' < (char)bVar2)) {
          if ((uint)(int)(char)(*(byte *)(gen_frame + 0x1c)) <
              (uint)((*(int *)(this + 0x138) - *(int *)(this + 0x134)) / 0x58)) {
            iVar6 = (char)(*(byte *)(gen_frame + 0x1c)) * 0x58;
            iVar3 = **(int * PTR32 *)(this + 0xc);
            uVar4 = F_0042a990(*(int *)(this + 0x134) + iVar6 GEN_EDX_ARG);
            piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar3 + 8))))(*(undefined4 *)(this + 0xc),uVar4)));
            if (piVar5 != ((int *)GEN_TOP(0x0))) {
              (*(undefined1 *)(gen_frame + 0x18)) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x134) + 0x54 + iVar6)));
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x2c))))(piVar5 GEN_EDX_ARG);
              (*(byte *)(gen_frame + 0x1c)) = (byte)uVar4;
              bVar2 = F_00bc8aa0((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              (*(byte *)(gen_frame + 0xc)) = bVar2;
              (*(undefined1 *)(gen_frame + 0xe)) = (*(undefined1 *)(gen_frame + 0x18));
              iVar3 = *(int *)(this + 0x134);
              (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x10);
              (*(byte *)(gen_frame + 0xd)) = (*(byte *)(gen_frame + 0x1c));
              pcVar1 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x5c)));
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x10eacb4));
              (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
              (*pcVar1)(piVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),iVar3 + iVar6);
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x10e90bc));
            }
          }
        }
        iVar3 = *(int *)(this + 0x18);
        uVar4 = (*(uint *)(gen_frame + 0x14)) + 1;
        (*(uint *)(gen_frame + 0x14)) = uVar4;
      } while (uVar4 < (uint)(*(int *)(this + 0x1c) - iVar3 >> 2));
    }
  }
  return;
}

/* ref: Component::Completion::CompletionModule::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adad20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadad20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (this[0x14] == (undefined1)0x0) {
    return 0;
  }
  if (param_1 < 0) {
    if ((int)(*(int *)(this + 0x3c) - *(uint *)(this + 0x38)) >> 2 == 0) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *param_2 = *(uint *)(this + 0x38);
    return (uint)(this + 0x28);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + *((char *)GEN_TOP((*(int *)(this + 0x48) + param_1))) * 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0);
  *param_2 = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  *(uint *)(this + 0x130) = uVar2;
  return uVar2;
}

/* ref: Component::Completion::CompletionModule::vf5 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00adada0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined * param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xadada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xdc, 4, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xd4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd8));
  piVar1 = *(int * PTR32 *)(this + 0x130);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 == 0) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    if (param_1 != *(int *)(this + 0x38)) {
      iVar4 = piVar1[1] - *piVar1;
      goto LAB_00adae05;
    }
  }
  iVar4 = *(int *)(this + 0x2c) - *(int *)(this + 0x28);
LAB_00adae05: ;
  if (iVar4 >> 2 <= param_2) {
    return 0xfffffffd;
  }
  iVar4 = param_2 * 4;
  uVar2 = *((uint *)GEN_TOP((iVar4 + param_1)));
  iVar3 = (int)(uVar2 << 0x19) >> 0x19;
  if (iVar3 == -2) {
    return uVar2 >> 7;
  }
  if (iVar3 == -1) {
    F_0042e430(param_3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*piVar1 + iVar4))));
    return 0xfffffffe;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x80,((char *)REFP(0x10eac60)),iVar3,uVar2 >> 7);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x20))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x54)));
  F_0042ccf0(param_3 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042e430(param_4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + iVar4))));
  return 0xffffffff;
}

/* ref: FUN_00adaf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adaf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadaf00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eace0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[4])REFP(0x10eaccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x10eacc0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  uVar1 = F_004296a0(0x1c,0,0x2be);
  *((uint *)GEN_TOP(((int)this + 0x5c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x5c)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x5c)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x5c))) + 0x19))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  F_0042b630((int)this + 0x88 GEN_EDX_ARG);
  F_0042b630((int)this + 0xdc GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  F_0042b630((int)this + 0x144 GEN_EDX_ARG);
  F_0042b630((int)this + 0x198 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00adb000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adb000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadb000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  
  uVar6 = *((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18))) >> 2;
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + uVar5 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  if (iVar2 != *((int *)GEN_TOP(((int)this + 0x1c)))) {
    F_00c46e20(iVar2,*((int *)GEN_TOP(((int)this + 0x1c))),0);
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x28)));
  if (iVar2 != *((int *)GEN_TOP(((int)this + 0x2c)))) {
    F_00c46e20(iVar2,*((int *)GEN_TOP(((int)this + 0x2c))),0);
    *((int *)GEN_TOP(((int)this + 0x2c))) = iVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x38))) != *((int *)GEN_TOP(((int)this + 0x3c)))) {
    *((int *)GEN_TOP(((int)this + 0x3c))) = *((int *)GEN_TOP(((int)this + 0x38)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x48)));
  if (iVar2 != *((int *)GEN_TOP(((int)this + 0x4c)))) {
    F_00c46e20(iVar2,*((int *)GEN_TOP(((int)this + 0x4c))),0);
    *((int *)GEN_TOP(((int)this + 0x4c))) = iVar2;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,0);
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x134)));
  if (pvVar3 != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x138)))) {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x138)));
    for (this_00 = pvVar3; this_00 != pvVar4; this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x58)))) {
      F_0042c880(this_00 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x138))) = pvVar3;
  }
  F_00adec30(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG);
  uVar6 = F_0042aca0((int)this + 0xdc GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  return uVar6;
}

/* ref: FUN_00adb160 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00adb160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadb160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00adb000(((undefined *)GEN_TOP(((int)this - 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00adb170 */
GEN_OWN_GS GEN_FRAME byte GEN_STDCALL F_00adb170(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(uint * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xadb170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(uint * param_6 = (uint *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * this;
  undefined * pvVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  if ((*(uint *)&REFG(undefined, 0x14c0864) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c0864) = *(uint *)&REFG(undefined, 0x14c0864) | 1;
    F_0042cc20(&REFG(undefined, 0x14c0810) GEN_EDX_ARG,((char *)REFP(0x10eac40)),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c750)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00ada1b0(param_1,&REFG(undefined, 0x14c0810),&(*(undefined * PTR32 *)(gen_frame + 0xc)));
  *param_6 = 0xffffffff;
  *param_2 = 0;
  iVar1 = *param_4;
  if (iVar1 != param_4[1]) {
    F_00c46e20(iVar1,param_4[1],0);
    param_4[1] = iVar1;
  }
  F_0042aca0(param_5 GEN_EDX_ARG);
  iVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0xc))) >> 0x1f;
  if (((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) - (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) / 0x54 + iVar1 == iVar1) {
    F_004876d0(&(*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    return 0;
  }
  if ((*(uint *)&REFG(undefined, 0x14c0864) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x14c0864) = *(uint *)&REFG(undefined, 0x14c0864) | 2;
    F_0042cc20(&REFG(undefined, 0x14c07b8) GEN_EDX_ARG,&REFG(undefined, 0x10eac48),REFG(undefined4, 0x108cc50));
    F_00c47de6(((code *)REFP(0x107c740)));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x24)) = 0;
  F_00adfab0(param_4 GEN_EDX_ARG,(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) - (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) / 0x54) * 2 - 2);
  (*(uint *)(gen_frame + 0x0)) = 1;
  if (1 < (uint)(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) - (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) / 0x54)) {
    (*(int *)(gen_frame + 0x4)) = 0x54;
    do {
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20));
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (*(undefined * PTR32 *)(gen_frame + 0x20))) {
        do {
          F_0042c880(this GEN_EDX_ARG);
          this = ((undefined *)GEN_TOP(((int)this + 0x54)));
        } while (this != pvVar2);
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar6;
      }
      F_00ada1b0((*(int *)(gen_frame + 0x4)) + (int)(*(undefined * PTR32 *)(gen_frame + 0xc)),&REFG(undefined, 0x14c07b8),&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
      iVar1 = ((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1c))) / 0x54;
      if (iVar1 == 2) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[1])REFP(0x10eac4c)),REFG(undefined4, 0x108cc50));
        bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        if (bVar3 == 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&REFG(undefined, 0x10eac50),REFG(undefined4, 0x108cc50));
          bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)));
          F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
          if (bVar3 == 0) {
            uVar4 = F_00a4cf70((*(undefined * PTR32 *)(gen_frame + 0x1c)),10);
            uVar5 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54,10);
            if ((-1 < (int)uVar4) && (-1 < (int)uVar5)) {
              (*(uint *)(gen_frame + 0x8)) = uVar4;
              F_00ae0280(param_4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)));
              (*(uint *)(gen_frame + 0x8)) = uVar5;
              F_00ae0280(param_4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)));
            }
          }
          else {
            F_0042ccf0(param_5 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54);
          }
        }
        else {
          uVar4 = F_00a4cf70((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54,10);
          *param_6 = uVar4;
        }
      }
      else if (iVar1 == 1) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&REFG(undefined, 0x10eac58),REFG(undefined4, 0x108cc50));
        bVar3 = F_0042ac50((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        if (bVar3 != 0) {
          *param_2 = 1;
        }
      }
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 0x54;
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
    } while ((*(uint *)(gen_frame + 0x0)) < (uint)(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) - (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) / 0x54));
  }
  F_0042ccf0(param_3 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0xc)));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar6 != pvVar2; pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x54)))) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0x1c)),(((*(int *)(gen_frame + 0x24)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x1c))) / 0x54) * 0x54,0x35);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x24)) = 0;
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined * PTR32 *)(gen_frame + 0xc)) != ((undefined *)GEN_TOP(0x0))) {
    for (; pvVar6 != pvVar2; pvVar6 = ((undefined *)GEN_TOP(((int)pvVar6 + 0x54)))) {
      F_0042c880(pvVar6 GEN_EDX_ARG);
    }
    F_00429760((*(undefined * PTR32 *)(gen_frame + 0xc)),(((*(int *)(gen_frame + 0x14)) - (int)(*(undefined * PTR32 *)(gen_frame + 0xc))) / 0x54) * 0x54,0x35);
  }
  return 1;
}

/* ref: FUN_00adb580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adb580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3), GEN_P(char * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xadb580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  char cVar1;
  int * in_ecx;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int * piVar4;
  
  cVar1 = *param_3;
  piVar4 = ((int *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),cVar1)));
  if ((cVar1 != '\0') && (cVar1 != '.')) {
    in_ecx = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) +
                      *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + param_1))) * 4)));
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx GEN_EDX_FWD,param_3,param_2);
    piVar4 = ((int *)GEN_TOP(0x0));
    if (uVar3 != 0) {
      bVar2 = F_00bc8aa0(in_ecx GEN_EDX_ARG);
      (*(char * PTR32 *)(gen_frame + 0x0)) = param_4;
      (*(uint *)(gen_frame + 0x8)) = bVar2 & 0x7f | param_2 << 7;
      (*(char * PTR32 *)(gen_frame + 0x4)) = param_3;
      F_00ae04f0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(char * PTR32 *)(gen_frame + 0x0)));
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
      if ((*piVar4 == 0) && (param_3 != param_4)) {
        bVar2 = F_00bc8aa0(in_ecx GEN_EDX_ARG);
        (*(char * PTR32 *)(gen_frame + 0x0)) = param_3;
        (*(char * PTR32 *)(gen_frame + 0x4)) = param_3;
        (*(uint *)(gen_frame + 0x8)) = bVar2 & 0x7f | param_2 << 7;
        piVar4 = ((int *)GEN_TOP(F_00ae04f0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(char * PTR32 *)(gen_frame + 0x0)))));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Component::Completion::CompletionModule::vf2 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00adb640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadb640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  char * pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  pcVar2 = (char *)(*(int * PTR32 *)&gen_args[1]);
  if (((this[0x14] != (undefined1)0x0) && (*(char *)(*(int * PTR32 *)&gen_args[1]) != '\0')) &&
     (*(char *)(*(int * PTR32 *)&gen_args[1]) != '.')) {
    (*(int * PTR32 *)&gen_args[1]) = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + *((char *)GEN_TOP((*(int *)(this + 0x48) + (*(int *)&gen_args[0])))) * 4)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,pcVar2,(*(int *)&gen_args[2]));
    if (uVar4 != 0) {
      puVar1 = *(undefined4 * PTR32 *)(this + 0x5c);
      puVar5 = ((undefined4 *)GEN_TOP(F_00ade6a0(&(*(int *)&gen_args[0]),*puVar1,puVar1,uVar4)));
      if (((undefined4 *)GEN_TOP(*puVar5)) != puVar1) {
        F_00ade9d0(this + 0x58 GEN_EDX_ARG,&(*(int *)&gen_args[0]),((undefined4 *)GEN_TOP(*puVar5)));
        F_0042aca0(this + 0xdc GEN_EDX_ARG);
      }
      bVar3 = F_00bc8aa0((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x8)) = (*(int *)&gen_args[2]) << 7 | bVar3 & 0x7f;
      (*(uint *)(gen_frame + 0x0)) = uVar4;
      (*(uint *)(gen_frame + 0x4)) = uVar4;
      F_00ae04f0(this + 0x58 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x0)));
    }
  }
  return;
}

/* ref: FUN_00adb700 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00adb700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xadb700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  char * pcVar8;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  uVar4 = F_0042a990((*(int *)&gen_args[1]) GEN_EDX_FWD);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 8))))(*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar4)));
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  if ((piVar5 != ((int *)GEN_TOP(0x0))) && (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG), (char)uVar4 == '\0')) {
    if (-1 < (*(int *)&gen_args[2])) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_ARG,(*(int *)&gen_args[2]));
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x2c))))(piVar5 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar4;
    (*(int *)&gen_args[2]) = 0;
    do {
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x54)));
      (*(int *)&gen_args[1]) = 0;
      piVar6 = ((int *)GEN_TOP((*pcVar2)(piVar5,(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]))));
      if (piVar6 == ((int *)GEN_TOP(0x0))) {
        if ((*(int *)&gen_args[1]) == -1) {
          return 1;
        }
      }
      else {
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
        pcVar8 = ((char *)GEN_TOP(F_00cb0950(pvVar7 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)))));
        iVar1 = (*(int *)&gen_args[1]);
        if ((*pcVar8 != '\0') && (*pcVar8 != '.')) {
          piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x18))) +
                            *((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x48))) + (*(int *)&gen_args[0])))) * 4)));
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x10))))(piVar6 GEN_EDX_ARG,pcVar8,(*(int *)&gen_args[1]));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x18));
          if (uVar4 != 0) {
            bVar3 = F_00bc8aa0(piVar6 GEN_EDX_ARG);
            pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
            (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar8;
            (*(char * PTR32 *)(gen_frame + 0x4)) = pcVar8;
            (*(uint *)(gen_frame + 0x8)) = bVar3 & 0x7f | iVar1 << 7;
            F_00ae04f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x58))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(char * PTR32 *)(gen_frame + 0x0)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)pvVar7 + 0xc))) GEN_EDX_ARG);
            piVar5 = (*(int * PTR32 *)(gen_frame + 0x18));
          }
        }
      }
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while( true );
  }
  return 0;
}

/* ref: FUN_00adb830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adb830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadb830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eace0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[4])REFP(0x10eaccc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x10eacc0));
  F_00adb000(this GEN_EDX_FWD);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG);
  F_00adfeb0(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0xdc))) GEN_EDX_ARG);
  F_0042c880(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x78)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x80))) - iVar1 >> 2) * 4,0x2be);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x68)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x70))) - iVar1 >> 2) * 4,0x2be);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  F_00adeec0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))),
               *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c))));
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0x1c,0x2be);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  if (iVar1 != 0) {
    F_00429760(iVar1,*((int *)GEN_TOP(((int)this + 0x50))) - iVar1,0x2be);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x38)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x40))) - iVar1 >> 2) * 4,0x2be);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x30))) - iVar1 >> 2) * 4,0x2be);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x20))) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1090598));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[4])REFP(0x10eaca0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10eac74));
  return uVar2;
}

/* ref: FUN_00adb9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adb9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xadb9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (*(uint *)&gen_args[0]) + 1;
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x4c))) - *((int *)GEN_TOP(((int)this + 0x48)))) < uVar5) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
    iVar4 = *((int *)GEN_TOP(((int)this + 0x48)));
    ((undefined1 *)(gen_frame + 0x8))[0] = 0xff;
    if ((uint)(iVar1 - iVar4) < uVar5) {
      F_00adfc80(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_FWD,iVar1,(iVar4 - iVar1) + uVar5,((undefined1 *)(gen_frame + 0x8)));
    }
    else if (uVar5 < (uint)(iVar1 - iVar4)) {
      iVar4 = iVar4 + uVar5;
      (*(int *)(gen_frame + 0x4)) = iVar4;
      if (iVar4 != iVar1) {
        F_00c46e20(iVar4,iVar1,0);
        *((int *)GEN_TOP(((int)this + 0x4c))) = (*(int *)(gen_frame + 0x4));
      }
    }
    *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[0]) + *((int *)GEN_TOP(((int)this + 0x48)))))) = *((undefined1 *)GEN_TOP(((int)this + 0x15)));
  }
  iVar1 = (*(uint *)&gen_args[0]);
  *((char *)GEN_TOP(((int)this + 0x15))) = *((char *)GEN_TOP(((int)this + 0x15))) + '\x01';
  F_00ae05e0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&(*(uint *)&gen_args[3]));
  F_00ae0570(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
  uVar5 = iVar1 << 7 | 0x7e;
  (*(uint *)&gen_args[0]) = uVar5;
  F_00ae01a0(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]));
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0x2be)));
  *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
  *(undefined2 *)(puVar2 + 6) = 0;
  if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2[3] = (*(undefined4 *)&gen_args[2]);
    puVar2[4] = (*(undefined4 *)&gen_args[1]);
    puVar2[5] = uVar5;
  }
  F_00adefd0((int)this + 0x58 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar2,0);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG)));
  if (*piVar3 == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x1c,0,0x2be)));
    *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    *(undefined2 *)(puVar2 + 6) = 0;
    if (puVar2 + 3 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar2[3] = (*(undefined4 *)&gen_args[1]);
      puVar2[4] = (*(undefined4 *)&gen_args[1]);
      puVar2[5] = uVar5;
    }
    F_00adefd0((int)this + 0x58 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar2,0);
  }
  return (*(uint *)&gen_args[3]);
}

/* ref: FUN_00adbb20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00adbb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadbb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  byte * pbVar7;
  int iVar8;
  uint uVar9;
  byte * pbVar10;
  uint uVar11;
  undefined4 * puVar12;
  bool bVar13;
  
  puVar12 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x5c)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar12;
  puVar6 = ((undefined4 *)GEN_TOP(F_00ade710(((undefined1 *)(gen_frame + 0x4)),*puVar12,puVar12,param_1)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)GEN_TOP(*puVar6));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != puVar12) {
    do {
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      puVar12 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x68)));
      if (puVar12 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c)))) {
        do {
          pbVar7 = ((byte *)GEN_TOP(*puVar12));
          pbVar10 = ((byte *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x10))[4]));
          do {
            bVar1 = *pbVar7;
            bVar13 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00adbb94: ;
              iVar8 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00adbb99;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar13 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00adbb94;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_00adbb99: ;
          if (iVar8 == 0) goto LAB_00adbd2c;
          puVar12 = puVar12 + 1;
        } while (puVar12 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x6c))));
      }
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 4;
      puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x6c)));
      if ((puVar12 < puVar6) && (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x68))), puVar3 <= puVar12))
      {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x70)))) {
          iVar8 = (int)puVar6 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x70))) - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_0049f580(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x68))) GEN_EDX_ARG,uVar11);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0x6c))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0x6c))) =
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar4 + 0x68))) + ((int)puVar12 - (int)((int)(uintptr_t)puVar3) >> 2) * 4)))
          ;
        }
      }
      else {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x70)))) {
          iVar8 = (int)puVar6 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x68))) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x70))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x68))) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_0049f580(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x68))) GEN_EDX_ARG,uVar11);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0x6c))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)pvVar4 + 0x6c))) = *puVar12;
        }
      }
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      *((int *)GEN_TOP(((int)pvVar4 + 0x6c))) = *((int *)GEN_TOP(((int)pvVar4 + 0x6c))) + 4;
      puVar12 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x7c)));
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 5;
      if ((puVar6 < puVar12) && (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x78))), puVar3 <= puVar6))
      {
        if (puVar12 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x80)))) {
          iVar8 = (int)puVar12 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar8 == -1) {
LAB_00adbda5: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar9 = iVar8 + 1;
          uVar11 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x80))) - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00adf7d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x78))) GEN_EDX_ARG,uVar11);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0x7c))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0x7c))) =
               *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar5 + 0x78))) + ((int)puVar6 - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar12 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x80)))) {
          iVar8 = (int)puVar12 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x78))) >> 2;
          if (iVar8 == -1) goto LAB_00adbda5;
          uVar9 = iVar8 + 1;
          uVar11 = (int)*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x80))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x78))) >> 2;
          if (uVar11 < uVar9) {
            if (-(uVar11 >> 1) - 1 < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            F_00adf7d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x78))) GEN_EDX_ARG,uVar11);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0x7c))) != ((undefined4 *)GEN_TOP(0x0))) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)pvVar5 + 0x7c))) = *puVar6;
        }
      }
      *((int *)GEN_TOP(((int)pvVar5 + 0x7c))) = *((int *)GEN_TOP(((int)pvVar5 + 0x7c))) + 4;
LAB_00adbd2c: ;
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      if (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x19))) == '\0') {
        puVar6 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x10))[2]));
        if (*((char *)GEN_TOP(((int)puVar6 + 0x19))) == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar6 + 0x19)));
          puVar3 = ((undefined4 *)GEN_TOP(*puVar6));
          while (cVar2 == '\0') {
            cVar2 = *((char *)GEN_TOP(((int)*puVar3 + 0x19)));
            puVar6 = puVar3;
            puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar6;
        }
        else {
          puVar6 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x10))[1]));
          cVar2 = *((char *)GEN_TOP(((int)puVar6 + 0x19)));
          puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          while ((cVar2 == '\0' && (puVar3 == ((undefined4 *)GEN_TOP(puVar6[2]))))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(puVar6[1]));
            cVar2 = *((char *)GEN_TOP(((int)puVar6 + 0x19)));
            puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar6;
        }
      }
      puVar6 = ((undefined4 *)GEN_TOP(F_00ade710(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x10)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)),param_1)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = ((undefined4 *)GEN_TOP(*puVar6));
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    } while ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != puVar12);
  }
  return 0;
}

/* ref: Component::Completion::CompletionModule::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adbdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadbdb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined * this_00;
  undefined * this_01;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (this[0x14] == (undefined1)0x0) {
    return 0;
  }
  uVar2 = F_0042a970(param_1 GEN_EDX_FWD);
  if (uVar2 != 0) {
    this_00 = this + 0x88;
    F_0042ccf0(this_00 GEN_EDX_ARG,param_1);
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG)));
    if (*piVar3 == 0) {
      F_0042ab30(this_00 GEN_EDX_ARG);
      F_0042b8f0(this_00 GEN_EDX_ARG);
    }
    this_01 = this + 0xdc;
    bVar1 = F_0042b6f0(this_00 GEN_EDX_ARG,this_01);
    if (bVar1 != 0) {
      F_0042ccf0(this_01 GEN_EDX_ARG,this_00);
      F_0049f4d0(this + 0x68 GEN_EDX_ARG);
      if (*(int *)(this + 0x78) != *(int *)(this + 0x7c)) {
        *(int *)(this + 0x7c) = *(int *)(this + 0x78);
      }
      F_00adbb20(this GEN_EDX_ARG,param_1);
      F_00adbb20(this GEN_EDX_ARG,this_01);
    }
    if (*(int *)(this + 0x68) != *(int *)(this + 0x6c)) {
      iVar4 = *(int *)(this + 0x78);
      if (*(int *)(this + 0x7c) - iVar4 >> 2 == 0) {
        iVar4 = 0;
      }
      *param_2 = iVar4;
      *(undefined * PTR32 *)(this + 0x130) = this + 0x68;
      return (uint)(this + 0x68);
    }
    return 0;
  }
  if (*(int *)(this + 0x3c) - *(int *)(this + 0x38) >> 2 != 0) {
    *param_2 = *(int *)(this + 0x38);
    return (uint)(this + 0x28);
  }
                    
  F_00c457e7(((char *)REFP(0x1090aa4)));
}

/* ref: Component::Completion::CompletionModule::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adbec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xadbec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint * this_00;
  char * pcVar4;
  char * pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  uVar8 = *(*(uint * PTR32 *)&gen_args[1]);
  if (uVar8 != (*(uint * PTR32 *)&gen_args[1])[1]) {
    F_00c46e20(uVar8,(*(uint * PTR32 *)&gen_args[1])[1],0);
    this_00[1] = uVar8;
  }
  pcVar5 = ((char *)GEN_TOP(F_0042a990((*(uint *)&gen_args[0]) GEN_EDX_ARG)));
  cVar1 = *pcVar5;
  (*(uint * PTR32 *)&gen_args[1]) = (uint *)pcVar5;
  do {
    if (cVar1 == '\0') {
      (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) - (int)pcVar5 & 0xffff)));
      F_00ae06e0(this_00 GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]));
      return (int)(this_00[1] - *this_00) >> 1;
    }
    (*(uint *)&gen_args[0]) = (int)(*(uint * PTR32 *)&gen_args[1]) - (int)pcVar5 & 0xffff;
    puVar2 = ((undefined4 *)GEN_TOP(this_00[1]));
    uVar9 = (undefined2)((int)(*(uint * PTR32 *)&gen_args[1]) - (int)pcVar5);
    if (*(char *)(*(uint * PTR32 *)&gen_args[1]) == '\x02') {
      if ((&(*(uint *)&gen_args[0]) < puVar2) && (puVar3 = ((undefined4 *)GEN_TOP(*this_00)), puVar3 <= &(*(uint *)&gen_args[0]))) {
        if (puVar2 == ((undefined4 *)GEN_TOP(this_00[2]))) {
          iVar6 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)this_00[2] - (int)((int)(uintptr_t)puVar3) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00 GEN_EDX_ARG,uVar8);
          }
        }
        if (((undefined2 *)GEN_TOP(this_00[1])) != ((undefined2 *)GEN_TOP(0x0))) {
          *((undefined2 *)GEN_TOP(this_00[1])) =
               *((undefined2 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[0]) - (int)((int)(uintptr_t)puVar3) >> 1) * 2)));
          this_00[1] = this_00[1] + 2;
          (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + *((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 2))) + 3)));
          goto LAB_00adc0ae;
        }
      }
      else {
        if (puVar2 == ((undefined4 *)GEN_TOP(this_00[2]))) {
          iVar6 = (int)((int)puVar2 - *this_00) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)((int)this_00[2] - *this_00) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00 GEN_EDX_ARG,uVar8);
          }
        }
        if (((undefined2 *)GEN_TOP(this_00[1])) != ((undefined2 *)GEN_TOP(0x0))) {
          *((undefined2 *)GEN_TOP(this_00[1])) = uVar9;
        }
      }
      this_00[1] = this_00[1] + 2;
      (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + *((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 2))) + 3)));
    }
    else {
      if (&(*(uint *)&gen_args[0]) < puVar2) {
        puVar3 = ((undefined4 *)GEN_TOP(*this_00));
        if (&(*(uint *)&gen_args[0]) < puVar3) goto LAB_00adc054;
        if (puVar2 == ((undefined4 *)GEN_TOP(this_00[2]))) {
          iVar6 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 1;
          if (iVar6 == -1) goto LAB_00adc0e0;
          uVar7 = iVar6 + 1;
          uVar8 = (int)this_00[2] - (int)((int)(uintptr_t)puVar3) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00 GEN_EDX_ARG,uVar8);
          }
        }
        if (((undefined2 *)GEN_TOP(this_00[1])) != ((undefined2 *)GEN_TOP(0x0))) {
          *((undefined2 *)GEN_TOP(this_00[1])) =
               *((undefined2 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[0]) - (int)((int)(uintptr_t)puVar3) >> 1) * 2)));
        }
      }
      else {
LAB_00adc054: ;
        if (puVar2 == ((undefined4 *)GEN_TOP(this_00[2]))) {
          iVar6 = (int)((int)puVar2 - *this_00) >> 1;
          if (iVar6 == -1) {
LAB_00adc0e0: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar7 = iVar6 + 1;
          uVar8 = (int)((int)this_00[2] - *this_00) >> 1;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00ae00b0(this_00 GEN_EDX_ARG,uVar8);
          }
        }
        if (((undefined2 *)GEN_TOP(this_00[1])) != ((undefined2 *)GEN_TOP(0x0))) {
          *((undefined2 *)GEN_TOP(this_00[1])) = uVar9;
        }
      }
      pcVar4 = (char *)(*(uint * PTR32 *)&gen_args[1]);
      this_00[1] = this_00[1] + 2;
      uVar8 = F_0042acc0(*(char *)(*(uint * PTR32 *)&gen_args[1]));
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)(pcVar4 + uVar8);
    }
LAB_00adc0ae: ;
    cVar1 = *(char *)(*(uint * PTR32 *)&gen_args[1]);
  } while( true );
}

/* ref: FUN_00adc0f0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00adc0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined1 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xadc0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0x19c, 4, 4);
  int iVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined * pvVar7;
  char * _Str;
  char * pcVar8;
  char * pcVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x194)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x198));
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  if (*((char *)GEN_TOP(((int)this + 0x14))) != '\0') {
    return 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    return 0;
  }
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  uVar4 = F_0042a990(param_1 GEN_EDX_ARG);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 8))))(*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar4)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
  if (piVar5 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))(piVar5 GEN_EDX_ARG,2);
    F_00adfe30(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),*((undefined4 *)GEN_TOP(((int)this + 0x134))),
                 *((undefined4 *)GEN_TOP(((int)this + 0x138))));
    F_0042cbc0(((undefined1 *)(gen_frame + 0x13c)) GEN_EDX_ARG,param_1);
    (*(undefined1 *)(gen_frame + 0x190)) = 0;
    F_00ae0650(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x13c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x13c)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x14)));
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    ((int *)(gen_frame + 0x18))[2] = 0;
    uVar4 = (*pcVar2)(piVar5);
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    if (uVar4 != 0) {
      do {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x54))))(piVar5 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0xc)))));
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG)));
          _Str = ((char *)GEN_TOP(F_00cb0950(pvVar7 GEN_EDX_ARG,1)));
          piVar5 = ((int *)GEN_TOP(F_00cb0910(pvVar7 GEN_EDX_ARG,0)));
          iVar1 = *piVar5;
          pcVar8 = ((char *)GEN_TOP(F_00cb0950(pvVar7 GEN_EDX_ARG,2)));
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
          pcVar8 = ((char *)GEN_TOP(F_00cb0950(pvVar7 GEN_EDX_ARG,3)));
          F_0042cc20(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG,_Str,REFG(undefined4, 0x108cc50));
          if ((*pcVar8 == '\0') || (*pcVar8 == '-')) {
            pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
          }
          uVar4 = iVar1 - 1;
          if (uVar4 < 0x100) {
            if (*_Str == '\0') {
              F_00adb580((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(undefined4 *)(gen_frame + 0xc)),(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8);
            }
            else {
              pcVar9 = F_00c51220(_Str,0x23);
              if (pcVar9 == ((char *)GEN_TOP(0x0))) {
                (*(uint *)(gen_frame + 0x28)) = 0;
              }
              else {
                uVar10 = F_0046f610(pcVar9 + 1,10);
                (*(uint *)(gen_frame + 0x28)) = uVar10;
              }
              uVar12 = (undefined1)uVar4;
              if (*_Str == '@') {
                uVar10 = F_00406b90(0x8c,0,0);
                if (uVar10 == 0) {
                  F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8,0);
                }
                else {
                  uVar10 = F_00bc8bc0(uVar10 GEN_EDX_ARG,uVar12,0);
                  F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8,uVar10);
                }
              }
              else if (*_Str == '#') {
                uVar10 = F_00406b90(200,0,0);
                if (uVar10 == 0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = F_00bc8cb0(uVar10 GEN_EDX_ARG,0xff,0xff,(*(uint *)(gen_frame + 0x28)));
                }
                F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8,uVar10);
                if (param_4 != ((undefined1 *)GEN_TOP(0x0))) {
                  *param_4 = uVar12;
                }
              }
              else {
                bVar3 = F_00adb170(((undefined1 *)(gen_frame + 0x140)),&(*(undefined1 *)(gen_frame + 0x37)),((undefined1 *)(gen_frame + 0xe8)),((int *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x0)));
                uVar10 = (*(uint *)(gen_frame + 0x28));
                if (bVar3 != 0) {
                  if ((*(uint *)(gen_frame + 0x28)) == 0) {
                    uVar10 = F_00406b90(0x8c,0,0);
                    if (uVar10 == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = F_00bc8bc0(uVar10 GEN_EDX_ARG,uVar12,
                                            (char)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x138))) -
                                                   *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x134)))) / 0x58));
                    }
                    this = (*(undefined * PTR32 *)(gen_frame + 0x38));
                    pvVar7 = ((undefined *)GEN_TOP(F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8,uVar10)));
                    F_00bc8eb0(pvVar7 GEN_EDX_ARG,((int *)(gen_frame + 0x18)));
                    F_00bc8ae0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x94)));
                    bVar3 = F_00adb700(this GEN_EDX_ARG,uVar4,((undefined1 *)(gen_frame + 0xe8)),(*(undefined4 *)(gen_frame + 0x0)));
                    if (bVar3 == 0) {
                      F_00adb000(this GEN_EDX_ARG);
                      F_0042c880(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
                      break;
                    }
                  }
                  else {
                    uVar11 = F_00406b90(200,0,0);
                    if (uVar11 == 0) {
                      uVar10 = 0;
                    }
                    else {
                      uVar10 = F_00bc8cb0(uVar11 GEN_EDX_ARG,uVar12,
                                            (char)((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x138))) -
                                                   *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x134)))) / 0x58),uVar10)
                      ;
                    }
                    pvVar7 = ((undefined *)GEN_TOP(F_00adb9d0((*(undefined * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar4,(*(char * PTR32 *)(gen_frame + 0x30)),pcVar8,uVar10)));
                    F_00bc8eb0(pvVar7 GEN_EDX_ARG,((int *)(gen_frame + 0x18)));
                    F_00bc8ae0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x94)));
                    this = (*(undefined * PTR32 *)(gen_frame + 0x38));
                  }
                  F_0042cbc0(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xe8)));
                  (*(undefined1 *)(gen_frame + 0x90)) = (*(undefined1 *)(gen_frame + 0x37));
                  F_00ae0650(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x3c)));
                  F_0042c880(((undefined1 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
                }
              }
            }
          }
          F_0042c880(((undefined1 *)(gen_frame + 0x140)) GEN_EDX_ARG);
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x14));
          this = (*(undefined * PTR32 *)(gen_frame + 0x38));
        }
        uVar4 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
      } while (uVar4 < (*(uint *)(gen_frame + 0x10)));
    }
    if ((*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0x18))) & 0xfffffffcU) != 0) {
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x144))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,(int)this + 4);
      *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
      if (((int *)(gen_frame + 0x18))[0] != 0) {
        F_00429760(((int *)(gen_frame + 0x18))[0],(((int *)(gen_frame + 0x18))[2] - ((int *)(gen_frame + 0x18))[0] >> 2) * 4,0x2be);
      }
      ((int *)(gen_frame + 0x18))[0] = 0;
      ((int *)(gen_frame + 0x18))[1] = 0;
      ((int *)(gen_frame + 0x18))[2] = 0;
      F_0042c880(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
      return 1;
    }
    if (((int *)(gen_frame + 0x18))[0] != 0) {
      F_00429760(((int *)(gen_frame + 0x18))[0],(((int *)(gen_frame + 0x18))[2] - ((int *)(gen_frame + 0x18))[0] >> 2) * 4,0x2be);
    }
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    ((int *)(gen_frame + 0x18))[2] = 0;
    F_0042c880(((undefined1 *)(gen_frame + 0x94)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00adc6b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc6b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc6e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc6e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc6f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc6f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00adc710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc710(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00adc720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc720(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00adc750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc750(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x58 + *in_ecx;
}

/* ref: FUN_00adc760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc760(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x58 + *in_ecx;
}

/* ref: FUN_00adc780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc780(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc800(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc860 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adc860(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adc890 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adc890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adc8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adc8c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adc930 */
GEN_OWN GEN_FRAME uint F_00adc930(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x18;
}

/* ref: FUN_00adc940 */
GEN_OWN GEN_FRAME uint F_00adc940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x19;
}

/* ref: FUN_00adc950 */
GEN_OWN GEN_FRAME uint F_00adc950(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adc960 */
GEN_OWN GEN_FRAME uint F_00adc960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_00adc970 */
GEN_OWN GEN_FRAME uint F_00adc970(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_00adc980 */
GEN_OWN GEN_FRAME uint F_00adc980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00adc990 */
GEN_OWN GEN_FRAME uint F_00adc990(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x19)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x19)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00adc9b0 */
GEN_OWN GEN_FRAME uint F_00adc9b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadc9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x19)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00adc9f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adc9f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadc9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adca20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adca20(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadca20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adca70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00adca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00adcac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcac0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00adcb20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcb20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcba0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcba0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcc10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcc10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcc30 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcc30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adccb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adccb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x58,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcce0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00adcce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadcce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x19))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x19))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x19)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x19)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x19)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x19)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00adcd50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcd50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcd90 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcd90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adcde0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adcde0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce10 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adce10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adce40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadce40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adce50 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adce50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadce50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00adce70 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00adce70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadce70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00adcea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadcea0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adceb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adceb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadceb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcec0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadcec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adced0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adced0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadced0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcee0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadcee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcef0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcef0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadcef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00adcf00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadcf00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00adcf80 */
GEN_OWN GEN_FRAME uint F_00adcf80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcf90 */
GEN_OWN GEN_FRAME uint F_00adcf90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcfa0 */
GEN_OWN GEN_FRAME uint F_00adcfa0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcfb0 */
GEN_OWN GEN_FRAME uint F_00adcfb0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcfc0 */
GEN_OWN GEN_FRAME uint F_00adcfc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcfd0 */
GEN_OWN GEN_FRAME uint F_00adcfd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcfd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcfe0 */
GEN_OWN GEN_FRAME uint F_00adcfe0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcfe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00adcff0 */
GEN_OWN GEN_FRAME uint F_00adcff0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadcff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add000 */
GEN_OWN GEN_FRAME uint F_00add000(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add010 */
GEN_OWN GEN_FRAME uint F_00add010(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add030 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add030(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add050 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add050(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add070 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add0a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add0a0(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined2 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add0c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00add0f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00add0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadd0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x19))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x19))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x19))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x19))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x19)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x19)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x19))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00add150 */
GEN_OWN GEN_FRAME uint F_00add150(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadd160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00add180 */
GEN_OWN GEN_FRAME uint F_00add180(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add190 */
GEN_OWN GEN_FRAME uint F_00add190(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1a0 */
GEN_OWN GEN_FRAME uint F_00add1a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1b0 */
GEN_OWN GEN_FRAME uint F_00add1b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1c0 */
GEN_OWN GEN_FRAME uint F_00add1c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1d0 */
GEN_OWN GEN_FRAME uint F_00add1d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1e0 */
GEN_OWN GEN_FRAME uint F_00add1e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add1f0 */
GEN_OWN GEN_FRAME byte F_00add1f0(void)
{
  GEN_ENTER(0xadd1f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00add210 */
GEN_OWN GEN_FRAME byte F_00add210(void)
{
  GEN_ENTER(0xadd210u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00add220 */
GEN_OWN GEN_FRAME uint F_00add220(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00add250 */
GEN_OWN GEN_FRAME byte F_00add250(void)
{
  GEN_ENTER(0xadd250u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00add260 */
GEN_OWN GEN_FRAME byte F_00add260(void)
{
  GEN_ENTER(0xadd260u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00add270 */
GEN_OWN GEN_FRAME uint F_00add270(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00add2d0 */
GEN_OWN GEN_FRAME uint F_00add2d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add2e0 */
GEN_OWN GEN_FRAME uint F_00add2e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add2f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x54))) = *((undefined1 *)GEN_TOP((param_1 + 0x54)));
  return (uint)this;
}

/* ref: FUN_00add340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add340(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00add350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xadd350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00adcce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00add370 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00add370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00add390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add390(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xadd390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00add3a0 */
GEN_OWN GEN_FRAME uint F_00add3a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add3b0 */
GEN_OWN GEN_FRAME uint F_00add3b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add400 */
GEN_OWN GEN_FRAME uint F_00add400(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xadd410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00add440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0042c880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00add470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00add490 */
GEN_OWN GEN_FRAME uint F_00add490(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add4a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00add4a0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xadd4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00add500 */
GEN_OWN GEN_FRAME uint F_00add500(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xadd500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00add520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00add520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xadd520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

