#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a5c6d0 */
GEN_FRAME byte GEN_THISCALL F_00a5c6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6e0 */
GEN_FRAME uint GEN_THISCALL F_00a5c6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((-1 < (int)(*(uint *)&gen_a1)) && ((*(uint *)&gen_a1) < 3)) {
    *(undefined1 *)((*(uint *)&gen_a1) + 0x22f + (int)this) = (undefined1)param_2;
  }
  return (*(uint *)&gen_a1);
}

/* ref: FUN_00a5c700 */
GEN_FRAME uint GEN_THISCALL F_00a5c700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 4) {
    *(undefined1 *)(param_1 + 600 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c720 */
GEN_FRAME uint GEN_THISCALL F_00a5c720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 4) {
    bVar3 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 600 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 600 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a5c760 */
GEN_FRAME uint GEN_THISCALL F_00a5c760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x25c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c780 */
GEN_FRAME uint GEN_THISCALL F_00a5c780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x268) = param_2;
  return param_2;
}

/* ref: FUN_00a5c790 */
GEN_FRAME uint GEN_THISCALL F_00a5c790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5c790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + param_1 * 2 + 0x272) = (undefined2)param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x296) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_00a5c7c0 */
GEN_FRAME byte GEN_THISCALL F_00a5c7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2d3 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c7e0 */
GEN_FRAME uint GEN_THISCALL F_00a5c7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x308) = param_2;
  return param_2;
}

/* ref: FUN_00a5c7f0 */
GEN_FRAME uint GEN_THISCALL F_00a5c7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x3aa8) = param_1;
  *(undefined2 *)((int)this + 0x3aac) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00a5c810 */
GEN_FRAME float10 F_00a5c810(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_00a5c840 */
GEN_FRAME float10 F_00a5c840(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00a5c880 */
GEN_FRAME float10 F_00a5c880(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xff) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)*(double *)&REFG(undefined, 0x1088100))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00a5c8c0 */
GEN_FRAME uint GEN_THISCALL F_00a5c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8e0 */
GEN_FRAME uint GEN_THISCALL F_00a5c8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8f0 */
GEN_FRAME uint GEN_THISCALL F_00a5c8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 7) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c900 */
GEN_FRAME uint GEN_THISCALL F_00a5c900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 8 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5c920 */
GEN_FRAME uint GEN_THISCALL F_00a5c920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c940 */
GEN_FRAME uint GEN_THISCALL F_00a5c940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c950 */
GEN_FRAME uint GEN_THISCALL F_00a5c950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c970 */
GEN_FRAME uint GEN_THISCALL F_00a5c970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 10) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c990 */
GEN_FRAME uint GEN_THISCALL F_00a5c990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0xc) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9a0 */
GEN_FRAME uint GEN_THISCALL F_00a5c9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9b0 */
GEN_FRAME uint GEN_THISCALL F_00a5c9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 5) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9d0 */
GEN_FRAME uint GEN_THISCALL F_00a5c9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5c9f0 */
GEN_FRAME uint GEN_THISCALL F_00a5c9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1df1 + in_ecx;
}

/* ref: FUN_00a5ca10 */
GEN_FRAME uint GEN_THISCALL F_00a5ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x12ea + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca30 */
GEN_FRAME uint GEN_THISCALL F_00a5ca30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x15bc + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca50 */
GEN_FRAME uint GEN_THISCALL F_00a5ca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_00a5ca70 */
GEN_FRAME uint GEN_THISCALL F_00a5ca70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_00a5ca90 */
GEN_FRAME uint GEN_THISCALL F_00a5ca90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5cab0 */
GEN_FRAME uint GEN_THISCALL F_00a5cab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1890 + param_2 * 8;
}

/* ref: FUN_00a5cad0 */
GEN_FRAME uint GEN_THISCALL F_00a5cad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00a5caf0 */
GEN_FRAME uint GEN_THISCALL F_00a5caf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5caf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00a5cb10 */
GEN_FRAME uint GEN_THISCALL F_00a5cb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00a5cb30 */
GEN_FRAME uint GEN_THISCALL F_00a5cb30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00a5cb50 */
GEN_FRAME uint GEN_THISCALL F_00a5cb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00a5cb70 */
GEN_FRAME uint GEN_THISCALL F_00a5cb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00a5cb90 */
GEN_FRAME uint GEN_THISCALL F_00a5cb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00a5cbb0 */
GEN_FRAME uint GEN_THISCALL F_00a5cbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00a5cbd0 */
GEN_FRAME uint GEN_THISCALL F_00a5cbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00a5cbf0 */
GEN_FRAME uint GEN_THISCALL F_00a5cbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00a5cc10 */
GEN_FRAME uint GEN_THISCALL F_00a5cc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00a5cc20 */
GEN_FRAME uint GEN_THISCALL F_00a5cc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc30 */
GEN_FRAME uint GEN_THISCALL F_00a5cc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5cc50 */
GEN_FRAME uint GEN_THISCALL F_00a5cc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4d9ef((int)this + 0x10,0x40,param_1,0x3f);
  return uVar1;
}

/* ref: FUN_00a5cc70 */
GEN_FRAME byte GEN_THISCALL F_00a5cc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x50) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc80 */
GEN_FRAME byte GEN_THISCALL F_00a5cc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x51) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc90 */
GEN_FRAME byte GEN_THISCALL F_00a5cc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x52) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cca0 */
GEN_FRAME byte GEN_THISCALL F_00a5cca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x53) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccb0 */
GEN_FRAME byte GEN_THISCALL F_00a5ccb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x54) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccc0 */
GEN_FRAME uint GEN_THISCALL F_00a5ccc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccd0 */
GEN_FRAME uint GEN_THISCALL F_00a5ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cce0 */
GEN_FRAME ushort GEN_THISCALL F_00a5cce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x60) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5ccf0 */
GEN_FRAME ushort GEN_THISCALL F_00a5ccf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x62) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd00 */
GEN_FRAME ushort GEN_THISCALL F_00a5cd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 100) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd10 */
GEN_FRAME ushort GEN_THISCALL F_00a5cd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x66) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd20 */
GEN_FRAME byte GEN_THISCALL F_00a5cd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x68) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd30 */
GEN_FRAME byte GEN_THISCALL F_00a5cd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x69) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd40 */
GEN_FRAME byte GEN_THISCALL F_00a5cd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x6a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd50 */
GEN_FRAME uint GEN_THISCALL F_00a5cd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1f0) = *param_2;
  *(undefined4 *)(in_ecx + 500) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1f8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a5cd80 */
GEN_FRAME byte GEN_THISCALL F_00a5cd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd90 */
GEN_FRAME byte GEN_THISCALL F_00a5cd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x204) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cda0 */
GEN_FRAME uint GEN_THISCALL F_00a5cda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x208) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdb0 */
GEN_FRAME uint GEN_THISCALL F_00a5cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdc0 */
GEN_FRAME uint GEN_THISCALL F_00a5cdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x210) = param_2;
  return param_2;
}

/* ref: FUN_00a5cde0 */
GEN_FRAME uint GEN_THISCALL F_00a5cde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x388) = param_1;
  *(undefined4 *)((int)this + 0x38c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce00 */
GEN_FRAME uint GEN_THISCALL F_00a5ce00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c90) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce10 */
GEN_FRAME byte GEN_THISCALL F_00a5ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce20 */
GEN_FRAME uint GEN_THISCALL F_00a5ce20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c80) = param_1;
  *(undefined4 *)((int)this + 0x1c84) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce40 */
GEN_FRAME uint GEN_THISCALL F_00a5ce40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c88) = param_1;
  *(undefined4 *)((int)this + 0x1c8c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce60 */
GEN_FRAME byte GEN_THISCALL F_00a5ce60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c95) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce70 */
GEN_FRAME byte GEN_THISCALL F_00a5ce70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce80 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5ce80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5ce80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return;
}

/* ref: FUN_00a5cea0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5cea0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5cea0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return;
}

/* ref: FUN_00a5cec0 */
GEN_FRAME uint GEN_THISCALL F_00a5cec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00a5ced0 */
GEN_FRAME byte GEN_THISCALL F_00a5ced0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x30) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cee0 */
GEN_FRAME byte GEN_THISCALL F_00a5cee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x31) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cef0 */
GEN_FRAME byte GEN_THISCALL F_00a5cef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x35) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf00 */
GEN_FRAME uint GEN_THISCALL F_00a5cf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf10 */
GEN_FRAME uint GEN_THISCALL F_00a5cf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf20 */
GEN_FRAME byte GEN_THISCALL F_00a5cf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf30 */
GEN_FRAME byte GEN_THISCALL F_00a5cf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf60 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5cf60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5cf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return;
}

/* ref: FUN_00a5cf80 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5cf80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x7cc) = param_2;
  return;
}

/* ref: FUN_00a5cfa0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5cfa0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5cfa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x184) = param_2;
  return;
}

/* ref: FUN_00a5cfc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5cfc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5cfc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18c) = param_2;
  return;
}

/* ref: FUN_00a5cfe0 */
GEN_FRAME uint GEN_THISCALL F_00a5cfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cfe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1ec) = param_2;
  return param_2;
}

/* ref: FUN_00a5cff0 */
GEN_FRAME uint GEN_THISCALL F_00a5cff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1d0) = param_2;
  return param_2;
}

/* ref: FUN_00a5d000 */
GEN_FRAME byte GEN_THISCALL F_00a5d000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d010 */
GEN_FRAME uint GEN_THISCALL F_00a5d010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e4) = param_2;
  return param_2;
}

/* ref: FUN_00a5d020 */
GEN_FRAME uint GEN_THISCALL F_00a5d020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5d040 */
GEN_FRAME ushort GEN_THISCALL F_00a5d040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18a) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5d070 */
GEN_FRAME uint GEN_THISCALL F_00a5d070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b07230((undefined *)((int)this + 0x10) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a5d090 */
GEN_NOFRAME uint GEN_THISCALL F_00a5d090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5d090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x90) = 1;
  uVar1 = F_008edf60(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Network::PacketElement::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a5d0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this - 8);
  pPVar2 = this + iVar1 * 0x58;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    pPVar2 = pPVar2 - 0x58;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this - 8);
  }
  return (uint)(this - 8);
}

/* ref: Client::Game::Network::PacketContext::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a5d110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this - 4);
  pPVar2 = this + iVar1 * 0x30;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    pPVar2 = pPVar2 - 0x30;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this - 4);
  }
  return (uint)(this - 4);
}

/* ref: FUN_00a5d1c0 */
GEN_FRAME uint GEN_THISCALL F_00a5d1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_00a5d1d0 */
GEN_FRAME uint GEN_THISCALL F_00a5d1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1e0 */
GEN_FRAME uint GEN_THISCALL F_00a5d1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1f0 */
GEN_FRAME uint GEN_THISCALL F_00a5d1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d200 */
GEN_FRAME uint GEN_THISCALL F_00a5d200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d210 */
GEN_FRAME uint GEN_THISCALL F_00a5d210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x24) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d220 */
GEN_FRAME uint GEN_THISCALL F_00a5d220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + param_1 * 4 + 4) = *param_2;
  return param_1;
}

/* ref: FUN_00a5d240 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = (undefined4 *)((int)this + (uint)(ushort)param_1 * 4 + 4);
    uVar2 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((param_3 + (uVar3 & 0xffff) * 4)));
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

/* ref: FUN_00a5d290 */
GEN_FRAME byte GEN_THISCALL F_00a5d290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x271) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2a0 */
GEN_FRAME byte GEN_THISCALL F_00a5d2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3a6d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2b0 */
GEN_FRAME byte GEN_THISCALL F_00a5d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2c0 */
GEN_FRAME uint GEN_THISCALL F_00a5d2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x5a8c + param_2 * 4;
}

/* ref: FUN_00a5d2f0 */
GEN_FRAME uint GEN_THISCALL F_00a5d2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5d2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00edfd00(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Global::QueueSpawn */
GEN_FRAME byte GEN_THISCALL F_00a5d350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar3 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + *(int *)this))) = param_1;
  puVar4 = param_2;
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x10 + *(int *)this)));
  for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)this;
  iVar1 = *(int *)((int)this + 0xc) * 0x2a0;
  *(undefined4 *)(iVar1 + 8 + iVar2) = param_3;
  *(undefined4 *)(iVar1 + 0xc + iVar2) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x298 + *(int *)this))) = 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return 1;
}

/* ref: FUN_00a5d400 */
GEN_FRAME byte GEN_STDCALL F_00a5d400(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d400u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d420 */
GEN_FRAME uint GEN_THISCALL F_00a5d420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < (uint)in_ecx[1])) {
    uVar1 = uVar1 * 0x2a0;
    *(undefined1 *)(uVar1 + 0x298 + *in_ecx) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5d450 */
GEN_FRAME byte GEN_THISCALL F_00a5d450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d500 */
GEN_FRAME byte GEN_STDCALL F_00a5d500(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d500u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d520 */
GEN_FRAME uint GEN_THISCALL F_00a5d520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d540 */
GEN_FRAME byte GEN_THISCALL F_00a5d540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d5f0 */
GEN_FRAME byte GEN_STDCALL F_00a5d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d610 */
GEN_FRAME uint GEN_THISCALL F_00a5d610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d630 */
GEN_FRAME uint GEN_THISCALL F_00a5d630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 300;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5d660 */
GEN_FRAME uint GEN_THISCALL F_00a5d660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x191;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d6a0 */
GEN_FRAME uint GEN_THISCALL F_00a5d6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xa5d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  param_1[6] = param_2;
  param_1[0xb] = (undefined4)gen_fl2bits(param_7);
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[0xc] = (undefined4)gen_fl2bits(param_8);
  *param_1 = 0x195;
  param_1[1] = 0x30;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xd] = (undefined4)gen_fl2bits(param_9);
  return (uint)param_1;
}

/* ref: FUN_00a5d700 */
GEN_FRAME uint GEN_THISCALL F_00a5d700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa5d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined2 *)((int)this + 0x24) = (undefined2)param_5;
  *(undefined2 *)((int)this + 0x26) = (undefined2)param_6;
  *(undefined4 *)this = 0x196;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x28) = param_7;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  return (uint)this;
}

/* ref: FUN_00a5d750 */
GEN_FRAME uint GEN_THISCALL F_00a5d750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x197;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d790 */
GEN_FRAME uint GEN_THISCALL F_00a5d790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5d790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x198;
  *(undefined4 *)((int)this + 4) = 0x48;
  *(undefined4 *)((int)this + 0x24) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d7e0 */
GEN_FRAME uint GEN_THISCALL F_00a5d7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xa5d7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x19) = (undefined1)param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_8);
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[0xb] = (undefined4)gen_fl2bits(param_9);
  *param_1 = 0x199;
  param_1[1] = 0x30;
  *(undefined2 *)(param_1 + 9) = (undefined2)param_6;
  *(undefined2 *)((int)param_1 + 0x26) = (undefined2)param_7;
  param_1[0xc] = (undefined4)gen_fl2bits(param_10);
  return (uint)param_1;
}

/* ref: FUN_00a5d840 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xa5d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_5;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_7;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined2 *)((int)this + 0x3c) = (undefined2)param_10;
  *(undefined4 *)this = 0x1ae;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x40) = param_11;
  *(undefined4 *)((int)this + 0x44) = param_12;
  return 0;
}

/* ref: FUN_00a5d8b0 */
GEN_FRAME uint GEN_THISCALL F_00a5d8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1b3;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: FUN_00a5d8e0 */
GEN_FRAME uint GEN_THISCALL F_00a5d8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d7;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5d920 */
GEN_FRAME uint GEN_THISCALL F_00a5d920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d8;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5d970 */
GEN_FRAME uint GEN_THISCALL F_00a5d970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d9;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d9c0 */
GEN_FRAME uint GEN_THISCALL F_00a5d9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1da;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da10 */
GEN_FRAME uint GEN_THISCALL F_00a5da10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1db;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da60 */
GEN_FRAME uint GEN_THISCALL F_00a5da60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dc;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dab0 */
GEN_FRAME uint GEN_THISCALL F_00a5dab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dd;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db00 */
GEN_FRAME uint GEN_THISCALL F_00a5db00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1de;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db50 */
GEN_FRAME uint GEN_THISCALL F_00a5db50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e0;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5db90 */
GEN_FRAME uint GEN_THISCALL F_00a5db90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e1;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5dbe0 */
GEN_FRAME uint GEN_THISCALL F_00a5dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e2;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc30 */
GEN_FRAME uint GEN_THISCALL F_00a5dc30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e3;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc80 */
GEN_FRAME uint GEN_THISCALL F_00a5dc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e4;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dcd0 */
GEN_FRAME uint GEN_THISCALL F_00a5dcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e5;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd20 */
GEN_FRAME uint GEN_THISCALL F_00a5dd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e6;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd70 */
GEN_FRAME uint GEN_THISCALL F_00a5dd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e7;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5ddc0 */
GEN_FRAME uint F_00a5ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5ddd0 */
GEN_FRAME uint F_00a5ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a5de00 */
GEN_FRAME uint GEN_STDCALL F_00a5de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5de00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a5de20 */
GEN_FRAME uint GEN_THISCALL F_00a5de20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1eb;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  return (uint)this;
}

/* ref: FUN_00a5de60 */
GEN_FRAME uint GEN_THISCALL F_00a5de60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ec;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  *(undefined4 *)((int)this + 0x27) = param_4[2];
  *(undefined4 *)((int)this + 0x2b) = param_4[3];
  return (uint)this;
}

/* ref: FUN_00a5deb0 */
GEN_FRAME uint GEN_THISCALL F_00a5deb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5ded0 */
GEN_FRAME uint GEN_THISCALL F_00a5ded0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ed;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  puVar2 = param_4;
  puVar3 = (undefined4 *)((int)this + 0x1f);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5df40 */
GEN_FRAME uint GEN_THISCALL F_00a5df40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5df40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5df60 */
GEN_FRAME uint GEN_THISCALL F_00a5df60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5df60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5df80 */
GEN_FRAME uint GEN_THISCALL F_00a5df80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5df80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)this = 0x1ee;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x20) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x28);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dff0 */
GEN_FRAME uint GEN_THISCALL F_00a5dff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5dff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5e030 */
GEN_FRAME uint GEN_THISCALL F_00a5e030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e050 */
GEN_FRAME uint GEN_THISCALL F_00a5e050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e070 */
GEN_FRAME uint GEN_THISCALL F_00a5e070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x262;
  in_ecx[1] = 0x18;
  *(undefined2 *)(in_ecx + 6) = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: Client::Network::Protocol::Zone::PacketReceiverCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a5e0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5e0e0 */
GEN_FRAME uint GEN_THISCALL F_00a5e0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e100 */
GEN_FRAME byte GEN_THISCALL F_00a5e100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a5e130 */
GEN_FRAME uint F_00a5e130(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a5e160 */
GEN_FRAME uint GEN_STDCALL F_00a5e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a5e180 */
GEN_FRAME uint GEN_THISCALL F_00a5e180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5e1a0 */
GEN_FRAME uint F_00a5e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00a5e1c0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a5e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e1f0 */
GEN_FRAME uint F_00a5e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5e200 */
GEN_FRAME uint F_00a5e200(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a5e220 */
GEN_FRAME uint GEN_THISCALL F_00a5e220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  *(undefined4 *)(uVar1 + 8) = param_1;
  *(undefined4 *)(uVar1 + 0xc) = param_2;
  return uVar1;
}

/* ref: FUN_00a5e240 */
GEN_FRAME uint GEN_THISCALL F_00a5e240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x2a0 >> 0x20) != 0) |
          (uint)((ulonglong)param_1 * 0x2a0);
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 0xa6) = 0;
    puVar2 = puVar2 + 0xa8;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e2c0 */
GEN_FRAME uint GEN_THISCALL F_00a5e2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar1) != '\0') {
      *(undefined1 *)(uVar3 * 0x2a0 + 0x298 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x2a0;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e350 */
GEN_FRAME uint GEN_THISCALL F_00a5e350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar2) != '\0') {
        *param_1 = uVar3;
        param_1[1] = uVar3 * 0x2a0 + iVar2;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e3d0 */
GEN_FRAME uint GEN_THISCALL F_00a5e3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
        *param_1 = uVar2;
        param_1[1] = uVar2 * 0x2a0 + iVar1;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e430 */
GEN_FRAME uint GEN_THISCALL F_00a5e430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e4b0 */
GEN_FRAME uint GEN_THISCALL F_00a5e4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e530 */
GEN_FRAME uint GEN_THISCALL F_00a5e530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e5a0 */
GEN_FRAME uint GEN_THISCALL F_00a5e5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e600 */
GEN_FRAME uint GEN_THISCALL F_00a5e600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e680 */
GEN_FRAME uint GEN_THISCALL F_00a5e680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e700 */
GEN_FRAME uint GEN_THISCALL F_00a5e700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e770 */
GEN_FRAME uint GEN_THISCALL F_00a5e770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e7e0 */
GEN_FRAME uint GEN_THISCALL F_00a5e7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e800 */
GEN_FRAME byte GEN_THISCALL F_00a5e800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a5e820 */
GEN_FRAME uint GEN_THISCALL F_00a5e820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e860 */
GEN_FRAME uint GEN_THISCALL F_00a5e860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e8a0 */
GEN_FRAME uint GEN_THISCALL F_00a5e8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e910 */
GEN_FRAME uint GEN_THISCALL F_00a5e910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a5e940 */
GEN_FRAME unsigned int F_00a5e940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e960 */
GEN_NOFRAME uint GEN_THISCALL F_00a5e960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = CONCAT22((short)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30)) >> 0x10),(undefined2)param_1);
  *(undefined2 *)((int)this + 0xb078) = (undefined2)param_1;
  if ((char)param_2 != '\0') {
    uVar5 = 0;
    uVar4 = 0;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined2 *)(gen_frame + 0x20)) = REFG(undefined2, 0x14b4eb8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x262;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    bVar1 = F_00974e00(this_00 GEN_EDX_ARG,puVar3,uVar4,uVar5);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00a5e9f0 */
GEN_FRAME uint GEN_THISCALL F_00a5e9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x1148) & 0xfffffffe;
  *(uint *)((int)this + 0x1148) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea10 */
GEN_FRAME uint GEN_THISCALL F_00a5ea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0xe9fd) = (char)param_1;
  *(char *)((int)this + 0xaf81) = (char)param_1;
  *(char *)((int)this + 0xebe0) = (char)param_1;
  uVar1 = *(uint *)((int)this + 0xff78) & 0xfffffffe;
  *(uint *)((int)this + 0xff78) = (char)param_1 != '\0' | uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea50 */
GEN_NOFRAME uint GEN_THISCALL F_00a5ea50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea70 */
GEN_NOFRAME uint GEN_THISCALL F_00a5ea70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea90 */
GEN_NOFRAME uint GEN_THISCALL F_00a5ea90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ea90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this - 8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5eb90 */
GEN_FRAME uint GEN_THISCALL F_00a5eb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5eba0 */
GEN_FRAME uint GEN_THISCALL F_00a5eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ebd0 */
GEN_FRAME uint GEN_STDCALL F_00a5ebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a5ec40 */
GEN_NOFRAME uint GEN_THISCALL F_00a5ec40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5ec40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x10,800);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x10,800);
  return (uint)uVar3;
}

/* ref: FUN_00a5ec90 */
GEN_FRAME uint GEN_THISCALL F_00a5ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5eca0 */
GEN_FRAME uint GEN_THISCALL F_00a5eca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5ecb0 */
GEN_FRAME uint GEN_STDCALL F_00a5ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a5ecc0 */
GEN_FRAME uint GEN_THISCALL F_00a5ecc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,800);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: Client::Game::Network::PacketQue::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a5ed30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a55930(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ed60 */
GEN_FRAME uint GEN_THISCALL F_00a5ed60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,800);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00a5edd0 */
GEN_FRAME uint GEN_THISCALL F_00a5edd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5edd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x10,800);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Client::Game::Network::PacketVFX::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a5ee20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this GEN_EDX_FWD);
  F_00a5ec40(this + 4 GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ee80 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5ee80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5ee80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc0) = param_2;
  return;
}

/* ref: FUN_00a5eed0 */
GEN_FRAME byte GEN_THISCALL F_00a5eed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x8f) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0x8f) = bVar1;
  return bVar1;
}

/* ref: FUN_00a5eef0 */
GEN_FRAME uint GEN_THISCALL F_00a5eef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf0) = param_2;
  return param_2;
}

/* ref: FUN_00a5ef00 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5ef00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa5ef00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return;
}

/* ref: FUN_00a5ef40 */
GEN_FRAME uint GEN_THISCALL F_00a5ef40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5ef40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0xf8) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xfc) = param_3;
  return param_1;
}

/* ref: FUN_00a5ef80 */
GEN_FRAME byte GEN_THISCALL F_00a5ef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ef80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x8f)) & 0x10;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5efe0 */
GEN_FRAME uint GEN_THISCALL F_00a5efe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5efe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x118) = param_2;
  return param_2;
}

/* ref: FUN_00a5f000 */
GEN_FRAME uint GEN_THISCALL F_00a5f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x170) = param_2;
  return param_2;
}

/* ref: FUN_00a5f010 */
GEN_FRAME float10 F_00a5f010(float gen_a0)
{
  GEN_ENTER(0xa5f010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a5f030 */
GEN_FRAME uint GEN_THISCALL F_00a5f030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5f030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,param_1,param_3);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,param_1,param_3);
  return uVar1;
}

/* ref: FUN_00a5f060 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return *(byte *)((int)this + 0x8e) >> 1 & 1;
}

/* ref: Client::Game::Object::GameObject::vf0 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(uint *)(this + 0x74) != 0xe0000000) {
    return *(uint *)(this + 0x74);
  }
  if (*(uint *)(this + 0x78) == 0) {
    return (uint)*(ushort *)(this + 0x88);
  }
  return *(uint *)(this + 0x78);
}

/* ref: FUN_00a5f0b0 */
GEN_FRAME uint F_00a5f0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f0b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if ((param_2 < 2) && (uVar1 = param_1, param_2 != 0)) {
    uVar1 = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00a5f0d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f0d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xec);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xec);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00a5f106;
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
LAB_00a5f106: ;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0xb,0);
  return;
}

/* ref: FUN_00a5f120 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    if (*(int *)((int)this + 0x7c) == 0) {
      F_00a1b5a0((undefined4 *)((int)this + 0xf0));
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)((int)this + 0xf0) = 0;
    (*pcVar1)(this,0xb,0);
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf17 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  float fVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  fVar2 = F_00aae7a0(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a5f1d0 */
GEN_NOFRAME float10 GEN_THISCALL F_00a5f1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xb4);
}

/* ref: FUN_00a5f1e0 */
GEN_FRAME uint GEN_THISCALL F_00a5f1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xd0);
  param_2[2] = *(undefined4 *)(in_ecx + 0xd8);
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xc4) +
                                  (float10)*(float *)(in_ecx + 0xd4)))));
  return (uint)param_2;
}

/* ref: Client::Game::Object::GameObject::vf22 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x20) = *(undefined4 *)(in_ecx + 0xb0);
  return;
}

/* ref: Client::Game::Object::GameObject::vf23 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00a5f230 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x70);
  if (((bVar1 & 1) != 0) &&
     ((REFG(int, 0x1379694) == 0 ||
      (((((bVar1 & 2) != 0 || (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0)) ||
        (*(int *)(REFG(int, 0x1379694) + 0xe4) != *(int *)((int)this + 0xe4))) &&
       ((((bVar1 & 4) != 0 || (*(int *)((int)this + 0x84) == -0x20000000)) ||
        (*(int *)(REFG(int, 0x1379694) + 0x74) != *(int *)((int)this + 0x84))))))))) {
    return *(byte *)((int)this + 0x8f) >> 4 & 1;
  }
  return 1;
}

/* ref: FUN_00a5f290 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_FWD);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)this;
}

/* ref: FUN_00a5f2b0 */
GEN_FRAME uint F_00a5f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f2b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xb8))(param_1 GEN_EDX_ARG);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)param_1;
}

/* ref: FUN_00a5f2e0 */
GEN_FRAME uint F_00a5f2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  longlong lVar1;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (lVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG), lVar1 != 0xe0000000)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a5f310 */
GEN_FRAME uint F_00a5f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xe0000000;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)
                    (param_1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a5f330 */
GEN_FRAME uint F_00a5f330(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0xe0000000;
  }
  return *(uint *)(param_1 + 0x74);
}

/* ref: Client::Game::Object::GameObject::vf24 */
GEN_FRAME uint GEN_THISCALL F_00a5f350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (*(int *)(in_ecx + 0x178) != 0) {
    *param_2 = *(int *)(in_ecx + 0x178);
    return 1;
  }
  return 0;
}

/* ref: FUN_00a5f380 */
GEN_FRAME uint GEN_THISCALL F_00a5f380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00 GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      return 1;
    }
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00a5f3d0 */
GEN_FRAME uint GEN_THISCALL F_00a5f3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  iVar2 = 0;
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00 GEN_EDX_ARG,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      iVar2 = 1;
    }
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,param_1 + iVar2);
  return uVar1 + iVar2;
}

/* ref: FUN_00a5f430 */
GEN_FRAME uint GEN_THISCALL F_00a5f430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x78) != param_1) {
    *(uint *)((int)this + 0x78) = param_1;
    uVar1 = F_00a35710(&REFG(undefined, 0x14a31e0) GEN_EDX_FWD,this);
  }
  return uVar1;
}

/* ref: FUN_00a5f450 */
GEN_FRAME uint GEN_THISCALL F_00a5f450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x74) != param_1) {
    *(uint *)((int)this + 0x74) = param_1;
    uVar1 = F_00a35720(&REFG(undefined, 0x14a31e0) GEN_EDX_FWD,this);
  }
  return uVar1;
}

/* ref: FUN_00a5f470 */
GEN_FRAME byte F_00a5f470(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    return 3;
  case 9: ;
    return 2;
  default: ;
    return 0;
  case 0xc: ;
    return 5;
  case 0xe: ;
    return 6;
  case 0x10: ;
    return 4;
  case 0x2d: ;
    return 7;
  }
}

/* ref: FUN_00a5f500 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xec) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec) GEN_EDX_FWD);
    if (uVar1 == 3) {
      return *(uint *)((int)this + 0xec);
    }
  }
  return 0;
}

/* ref: FUN_00a5f530 */
GEN_FRAME uint GEN_THISCALL F_00a5f530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_00a5f550 */
GEN_FRAME ushort GEN_THISCALL F_00a5f550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(ushort *)(in_ecx + 0xe8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5f570 */
GEN_FRAME byte GEN_THISCALL F_00a5f570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 8;
  *(byte *)(in_ecx + 0x70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5f590 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5f590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) && (*(int *)((int)this + 0x7c) == 0)) {
    F_005db410(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD,param_1,param_2);
    return;
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x94);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  (*pcVar1)(this);
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006e5cf0(this_00 GEN_EDX_ARG,this);
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf26 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 2 & 1;
}

/* ref: Client::Game::Object::GameObject::vf29 */
GEN_NOFRAME unsigned int F_00a5f5f0(void)
{
  GEN_ENTER(0xa5f5f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GameObject::vf30 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 3 & 1;
}

/* ref: Client::Game::Object::GameObject::vf34 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) & 0xf3;
  return;
}

/* ref: Client::Game::Object::GameObject::vf35 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 4) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 4;
    return (bVar1 & 8) >> 3;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf36 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 8) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 8;
    return (bVar1 & 4) >> 2;
  }
  return 0;
}

/* ref: FUN_00a5f680 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5f680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_FWD,1,(*(int *)(gen_frame + 0x8)));
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00a5f6d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_FWD,0,(*(int *)(gen_frame + 0x8)));
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf47 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5f710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  char cVar2;
  
  if ((((byte)this[0x8f] & 2) == 0) && (this_00 = *(undefined * PTR32 *)(this + 0xf0), this_00 != (undefined *)0x0))
  {
    cVar2 = (char)param_1;
    if (*(int *)((int)this_00 + 0x9c) != 0) {
      iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1a) >> 0x1d;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          if (cVar2 != '\0') {
            return;
          }
        }
        else {
          if (iVar1 != 2) {
            return;
          }
          if (cVar2 != '\x01') {
            return;
          }
        }
      }
      F_005e3480(this_00 GEN_EDX_FWD,param_1,param_2);
      return;
    }
    iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1d) >> 0x1d;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (cVar2 != '\0') {
          return;
        }
      }
      else {
        if (iVar1 != 2) {
          return;
        }
        if (cVar2 != '\x01') {
          return;
        }
      }
    }
    F_005f51d0(this_00 GEN_EDX_ARG,param_1,param_2);
  }
  return;
}

/* ref: FUN_00a5f7a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc4))(this GEN_EDX_FWD);
  if (((char)uVar2 != '\0') && (REFG(char, 0x1379c96) == '\0')) {
    bVar1 = F_005e1600();
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x9c))(this GEN_EDX_ARG);
      if ((char)uVar2 == '\0') {
        if ((((*(byte *)((int)this + 0x8e) & 0x80) != 0) && (*(int *)((int)this + 0x7c) == 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0)) {
          bVar1 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG);
          uVar2 = CONCAT31(extraout_var_00,bVar1);
          if (bVar1 == 1) {
            uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xbc))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG);
            if ((char)uVar2 == '\0') {
              uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG);
              return uVar2;
            }
          }
        }
      }
      else if ((*(byte *)((int)this + 0x8e) & 0x80) == 0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf49 */
GEN_NOFRAME byte F_00a5f830(void)
{
  GEN_ENTER(0xa5f830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf50 */
GEN_NOFRAME byte F_00a5f840(void)
{
  GEN_ENTER(0xa5f840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf51 */
GEN_NOFRAME uint F_00a5f850(void)
{
  GEN_ENTER(0xa5f850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a5f860 */
GEN_FRAME uint GEN_THISCALL F_00a5f860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar1 = F_005dbc90(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD,param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_1,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a5f8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00a5f8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xec);
  if (uVar1 == 0) {
    if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
      uVar1 = F_005e3290(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD,0x2d);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5f8c0 */
GEN_FRAME uint GEN_THISCALL F_00a5f8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)((int)this + 0x30) = 0;
    return in_EAX;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c4d9ef((int)this + 0x30,0x40,param_1,0xffffffff);
  if (0x3f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    uVar5 = 0x3e;
    do {
      bVar2 = *(byte *)((int)this + 0x30 + uVar5);
      if ((bVar2 & 0xc0) == 0xc0) {
        *(undefined1 *)(uVar5 + 0x30 + (int)this) = 0;
        return uVar5;
      }
      if (-1 < (char)bVar2) {
        return uVar5;
      }
      uVar4 = uVar5 - 1;
      *(undefined1 *)((int)this + uVar5 + 0x30) = 0;
      uVar5 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf31 */
GEN_NOFRAME byte GEN_THISCALL F_00a5f940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 5 & 1;
}

/* ref: Client::Game::Object::GameObject::vf32 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5f950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5f950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) | 0x20;
  return;
}

/* ref: Client::Game::Object::GameObject::vf48 */
GEN_NOFRAME byte F_00a5f960(void)
{
  GEN_ENTER(0xa5f960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GameObject::vf43 */
GEN_FRAME unsigned int GEN_THISCALL F_00a5f970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  this[0x90] = (undefined1)((byte)this[0x90] & 0xfc);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x74) = 0xe0000000;
  *(undefined4 *)(this + 0x84) = 0xe0000000;
  *(undefined2 *)(this + 0x88) = (undefined2)param_1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x70] = (undefined1)0x0;
  *(undefined2 *)(this + 0x8a) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x7c | 3);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 3 | 0xec);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x83);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfd);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0x8c) = 0xd;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xb4) = uVar1;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x124);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x128);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x130);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x138);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfe);
  *(undefined4 *)(this + 0x11c) = 0x900;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x90] = (undefined1)((byte)this[0x90] & 0xf3);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf44 */
GEN_NOFRAME uint GEN_THISCALL F_00a5fb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pGVar5;
  
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_FWD);
  if ((char)uVar4 == '\0') {
    pGVar5 = this;
    this_00 = (undefined *)F_006b8c00();
    uVar4 = F_006e5b10(this_00 GEN_EDX_ARG,pGVar5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  *(undefined4 *)(this + 0x174) = 0;
  if (piVar1 == (int *)0x0) goto LAB_00a5fbf9;
  if (*(int *)(this + 0x7c) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      goto LAB_00a5fbe2;
    }
  }
  else {
LAB_00a5fbe2: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0xb,0);
LAB_00a5fbf9: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    uVar4 = (*pcVar3)(this,0xb,0);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf12 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a5fc30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    return;
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  if (piVar1 == (int *)0x0) goto LAB_00a5fc7c;
  if (*(int *)(this + 0x7c) == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      goto LAB_00a5fc65;
    }
  }
  else {
LAB_00a5fc65: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0xb,0);
LAB_00a5fc7c: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    (*pcVar3)(this,0xb,0);
  }
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x6f);
  return;
}

/* ref: FUN_00a5fcc0 */
GEN_FRAME byte GEN_THISCALL F_00a5fcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5fcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1 GEN_EDX_FWD,param_1);
      return (byte)uVar3;
    }
  }
  else {
    bVar2 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG);
    if (bVar2 != 0) {
      bVar2 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_1);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a5fd10 */
GEN_NOFRAME uint GEN_THISCALL F_00a5fd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5fd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar5 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD);
    if (bVar5 != 0) {
      bVar5 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_2);
      if (bVar5 == 0) {
        param_2 = 0x2e;
      }
      bVar5 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_2);
      if (bVar5 != 0) {
        F_005eb040(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_1,param_2);
      }
      goto LAB_00a5fdf3;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0xec);
  if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x65) == '\x03')) {
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4 GEN_EDX_ARG,param_2);
    if ((char)uVar7 == '\0') {
      param_2 = 0x2e;
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x50))))(*(int * PTR32 *)((int)this + 0xec) GEN_EDX_ARG,param_2);
    if ((char)uVar7 != '\0') {
      pfVar6 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                                  (*(int * PTR32 *)((int)this + 0xec) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),param_2)));
      *param_1 = *pfVar6;
      param_1[1] = pfVar6[1];
      param_1[2] = pfVar6[2];
    }
  }
LAB_00a5fdf3: ;
  if (*(int *)((int)this + 0x7c) == 0) {
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0xb4);
    fVar8 = (float10)*(float *)((int)this + 0xb4);
    *param_1 = (float)(fVar8 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar8);
    param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG);
    if (((char)uVar7 != '\0') && (*(int *)((int)this + 0xec) != 0)) {
      fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x294)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar8 = (float10)fVar1;
      *param_1 = (float)(fVar8 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar8);
      param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    }
  }
  fVar2 = *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xd8);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) + (float10)*(float *)((int)this + 0xd4))));
  (*(float *)(gen_frame + 0x4)) = fVar3;
  *param_1 = (float)((float10)*param_1 + (float10)fVar2);
  param_1[1] = (float)((float10)param_1[1] + (float10)fVar3);
  param_1[2] = (float)((float10)param_1[2] + (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_00a5feb0 */
GEN_NOFRAME uint GEN_THISCALL F_00a5feb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD);
      return uVar1;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      return *(int *)((int)this + 0xec) + 0x30;
    }
  }
  return (int)this + 0xa0;
}

/* ref: FUN_00a5fef0 */
GEN_NOFRAME uint GEN_THISCALL F_00a5fef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa5fef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_FWD);
    return uVar1;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    return *(int *)((int)this + 0xec) + 0x30;
  }
  return (int)this + 0xa0;
}

/* ref: Client::Game::Object::GameObject::vf21 */
GEN_FRAME uint GEN_THISCALL F_00a5ff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 GVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD,param_1,(uint)((byte)this[0x8e] >> 6 & 1));
  GVar1 = this[0x8e];
  uVar2 = CONCAT31((int3)(uVar2 >> 8),GVar1);
  bVar3 = (byte)param_1;
  if ((((byte)GVar1 >> 6 & 1) != bVar3) &&
     (this[0x8e] = (undefined1)((bVar3 << 6 ^ (byte)GVar1) & 0x40 ^ (byte)GVar1), bVar3 != 0)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0xa0);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0xa8);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_00a5ffa0 */
GEN_NOFRAME float F_00a5ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ffa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  float * pfVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_00a5ffef: ;
    pfVar1 = (float *)(param_1 + 0xa0);
  }
  else if (*(int *)(param_1 + 0xf0) == 0) {
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0xec) + 0x30)));
    if (*(int *)(param_1 + 0xec) == 0) goto LAB_00a5ffef;
  }
  else {
    pfVar1 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0) GEN_EDX_ARG)));
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0) GEN_EDX_ARG)));
      goto LAB_00a6002f;
    }
    if (*(int *)(param_2 + 0xec) != 0) {
      pfVar2 = ((float *)GEN_TOP((*(int *)(param_2 + 0xec) + 0x30)));
      goto LAB_00a6002f;
    }
  }
  pfVar2 = (float *)(param_2 + 0xa0);
LAB_00a6002f: ;
  fVar3 = ((float10)GEN_TOD(atan2((float10)(float)((float10)*pfVar2 - (float10)*pfVar1),
                          (float10)(float)((float10)pfVar2[2] - (float10)pfVar1[2]))));
  fVar3 = (float10)(float)fVar3;
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
    fVar3 = (float10)(float)(fVar3 - (float10)*(float *)&REFG(undefined, 0x1334a30));
  }
  if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
    return (float)((float10)*(float *)&REFG(undefined, 0x1334a30) + fVar3);
  }
  return (float)fVar3;
}

/* ref: FUN_00a600a0 */
GEN_NOFRAME double F_00a600a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa600a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2 GEN_EDX_ARG);
    pfVar2 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
    return (double)((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) *
                                                                  (float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) +
                                                                 (float10)(float)((float10)pfVar2[2]
                                                                                 - (float10)pfVar1[2
                                                  ]) * (float10)(float)((float10)pfVar2[2] -
                                                                       (float10)pfVar1[2]))))))) -
                           (float10)*(float *)((int)param_1 + 0xc0)) -
                          (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return 0.0;
}

/* ref: FUN_00a60140 */
GEN_NOFRAME float F_00a60140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60140u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2 GEN_EDX_ARG);
    pfVar2 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
    return ((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) *
                                                          (float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) +
                                                         ((float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) *
                                                          (float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) +
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1]) *
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1])))))))) -
                   (float10)*(float *)((int)param_1 + 0xc0)) -
                  (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return (float)(float10)0;
}

/* ref: FUN_00a601f0 */
GEN_FRAME float GEN_THISCALL F_00a601f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa601f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  dVar1 = F_00a600a0(this,param_1);
  return (float)dVar1;
}

/* ref: FUN_00a60210 */
GEN_FRAME float F_00a60210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == param_2) {
    return 0.0;
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0) GEN_EDX_ARG);
      goto LAB_00a60264;
    }
    uVar1 = *(int *)(param_2 + 0xec) + 0x30;
    if (*(int *)(param_2 + 0xec) != 0) goto LAB_00a60264;
  }
  uVar1 = param_2 + 0xa0;
LAB_00a60264: ;
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0) GEN_EDX_ARG);
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(uVar2 + 4))));
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) -
                    (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0xec) + 0x34))))));
    }
  }
  return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(param_1 + 0xa4))));
}

/* ref: FUN_00a602d0 */
GEN_FRAME float GEN_THISCALL F_00a602d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa602d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a60210(this,param_1);
  return fVar1;
}

/* ref: FUN_00a602f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a602f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa602f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 4) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
    this_00 = (undefined *)F_006b8c00();
    F_006d9de0(this_00 GEN_EDX_ARG);
    F_006d9e70(this_00 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if ((piVar4 != (int *)0x0) &&
             (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c4))(piVar4 GEN_EDX_ARG), (char)uVar3 == '\0')) {
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar5 = 0;
      piVar4 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar2 = 0;
      if (piVar4 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c0))(piVar4 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x118) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xfb;
  }
  return;
}

/* ref: FUN_00a60400 */
GEN_FRAME unsigned int GEN_THISCALL F_00a60400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 0x20) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if ((piVar5 != (int *)0x0) &&
             (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x208))(piVar5 GEN_EDX_ARG), (char)uVar3 == '\0')) {
            return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar4 = 0;
      piVar5 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar2 = 0;
      if (piVar5 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x1fc))(piVar5 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x170) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xdf;
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf28 */
GEN_NOFRAME byte GEN_THISCALL F_00a60500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (((byte)this[0x8e] & 0x80) != 0) {
    if ((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) &&
       (bVar1 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_FWD), bVar1 != 0)) {
      return 1;
    }
    if (((*(int *)(this + 0xec) != 0) && (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) &&
       (bVar1 = F_00b5ba80(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x88)), bVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a60560 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a60560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)((int)this + 0xf0);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0xec) != 0) {
      iVar1 = *(int *)((int)this + 0xec);
      *param_1 = *(float *)(iVar1 + 0x30);
      param_1[1] = *(float *)(iVar1 + 0x34);
      param_1[2] = *(float *)(iVar1 + 0x38);
      iVar1 = *(int *)((int)this + 0xec);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 0x40);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar1 + 0x44);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x48);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar1 + 0x4c);
      (*(float *)(gen_frame + 0x0)) = *(float *)(iVar1 + 0x50);
      (*(float *)(gen_frame + 0x4)) = *(float *)(iVar1 + 0x54);
      (*(float *)(gen_frame + 0x8)) = *(float *)(iVar1 + 0x58);
    }
  }
  else {
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                (*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG)));
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
    param_1[2] = pfVar2[2];
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xec))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf4))))
                                (*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x0)) = *pfVar2;
    (*(float *)(gen_frame + 0x4)) = pfVar2[1];
    (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x10)));
  *param_2 = (float)((float10)*param_2 * (float10)(*(float *)(gen_frame + 0x0)));
  param_2[1] = (float)((float10)param_2[1] * (float10)(*(float *)(gen_frame + 0x4)));
  param_2[2] = (float)((float10)param_2[2] * (float10)(*(float *)(gen_frame + 0x8)));
  F_00aaeb00((uint)param_2,(*(float *)(gen_frame + 0x2c)));
  *param_1 = (float)((float10)*param_1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_1[1] + (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_1[2]);
  return;
}

/* ref: FUN_00a606e0 */
GEN_FRAME byte GEN_THISCALL F_00a606e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa606e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  bool bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  if ((uVar3 == 0) || (uVar3 = F_00974710(uVar3 GEN_EDX_ARG), (char)uVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (REFG(int, 0x1379694) == 0) {
      return 0;
    }
  }
  else if (REFG(int, 0x1379694) == 0) goto LAB_00a6075d;
  if ((((*(uint *)(REFG(int, 0x1379694) + 0xe4) != 0) &&
       (uVar3 = *(uint *)((int)this + 0xe4), *(uint *)(REFG(int, 0x1379694) + 0xe4) == uVar3)) &&
      (uVar3 != 0)) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4 GEN_EDX_ARG,uVar3);
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_00a6075d: ;
  uVar3 = *(uint *)((int)this + 0xe4);
  iVar6 = 0;
  if ((uVar3 != 0) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4 GEN_EDX_ARG,uVar3);
    if (uVar3 != 0) {
      ((uint *)(gen_frame + 0x8))[0] = uVar3;
      iVar6 = 1;
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,((uint *)(gen_frame + 0x8)) + iVar6);
  uVar3 = uVar3 + iVar6;
  if ((uVar3 != 0) && (uVar7 = 0, uVar3 != 0)) {
    do {
      piVar1 = (int *)((uint *)(gen_frame + 0x8))[(int)(uVar7)];
      if ((piVar1 != (int *)0x0) &&
         (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG), (char)uVar5 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}

/* ref: FUN_00a607e0 */
GEN_FRAME uint GEN_THISCALL F_00a607e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa607e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00463610(param_1,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a5f8c0(this GEN_EDX_ARG,uVar1);
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 1;
  }
  return uVar2;
}

/* ref: FUN_00a60820 */
GEN_NOFRAME uint GEN_THISCALL F_00a60820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  if ((((uVar2 != 0) && (*(int *)((int)this + 0xf0) == 0)) && (*(int *)((int)this + 0xec) == 0)) &&
     (REFG(char, 0x1379c96) == '\0')) {
    piVar1 = (int *)F_005f3270(1,uVar2,0);
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)F_005f3270(6,*(undefined4 *)((int)this + 0x7c),0), piVar1 == (int *)0x0))
    {
      return 0;
    }
    *(undefined4 *)((int)this + 0xc0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xc0), REFG(float, 0x10928e4));
    if (*(byte *)((int)piVar1 + 0x11) == 1) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1 GEN_EDX_ARG);
        *(uint *)((int)this + 0xec) = uVar2;
      }
    }
    else {
      uVar2 = *(byte *)((int)piVar1 + 0x11) - 6;
      if (uVar2 == 0) {
        *(int * PTR32 *)((int)this + 0xf0) = piVar1;
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00a608c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa608c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  undefined3 uVar3;
  uint uVar2;
  
  GVar1 = this[0x8e];
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,GVar1);
  if ((-1 < (char)GVar1) && (((byte)GVar1 & 0x20) != 0)) {
    uVar2 = CONCAT31(uVar3,GVar1) & 0xffffffef | 0x80;
    this[0x8e] = SUB41(uVar2,0);
    if (*(int *)(this + 0x7c) != 0) {
      uVar2 = F_00a60820(this GEN_EDX_FWD);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a608f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a608f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int * piVar1;
  byte bVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = *(undefined * PTR32 *)((int)this + 0xf0);
  if (this_00 == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1 GEN_EDX_FWD,param_1,param_2);
      goto LAB_00a60a28;
    }
LAB_00a60967: ;
    fVar6 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0xb0))));
    fVar7 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0xb0))));
    iVar4 = *(int *)((int)this + 0x7c);
    ((float *)(gen_frame + 0x0))[0] = (float)fVar7;
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar6));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x20)) = (float)fVar6;
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    if (iVar4 == 0) {
LAB_00a609fc: ;
      pfVar3 = (float *)((int)this + 0xa0);
    }
    else if (*(int *)((int)this + 0xf0) == 0) {
      if (*(int *)((int)this + 0xec) == 0) goto LAB_00a609fc;
      pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
    }
    else {
      pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                  (*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG)));
    }
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + fVar6);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 + (float10)pfVar3[2]);
  }
  else {
    bVar2 = F_005d5fe0(this_00 GEN_EDX_ARG);
    if (bVar2 == 0) goto LAB_00a60967;
    F_005eaf50(this_00 GEN_EDX_ARG,((float *)(gen_frame + 0x0)),param_2);
  }
  pfVar3 = ((float *)(gen_frame + 0x0));
  pfVar5 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
LAB_00a60a28: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a60a40 */
GEN_NOFRAME uint GEN_THISCALL F_00a60a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  byte bVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x3c)) = param_2;
  if (*(int *)((int)this + 0x7c) != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xf0);
    if (piVar4 != (int *)0x0) {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xe4))(piVar4 GEN_EDX_FWD)));
      goto LAB_00a60aad;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
      goto LAB_00a60aad;
    }
  }
  puVar6 = (undefined4 *)((int)this + 0xa0);
LAB_00a60aad: ;
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  piVar4 = *(int * PTR32 *)((int)this + 0xf0);
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
  puVar6 = param_1;
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xec);
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
    if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x65) == '\x03')) {
      uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4 GEN_EDX_ARG,(*(int *)(gen_frame + 0x3c)));
      if (((char)uVar7 == '\0') || ((*(int *)(gen_frame + 0x3c)) == 0x2e)) {
        if ((*(byte *)((int)this + 0x8f) & 0x80) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0xec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),0x2e);
          puVar8 = (undefined4 *)F_004bd7b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),*(float *)((int)this + 0xb4));
          uVar1 = *puVar8;
          (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
          uVar2 = puVar8[1];
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          uVar3 = puVar8[2];
          *(undefined4 *)((int)this + 0x160) = uVar1;
          *(undefined4 *)((int)this + 0x164) = uVar2;
          *(undefined4 *)((int)this + 0x168) = uVar3;
          *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0x7f;
        }
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x160);
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x164);
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x168);
        puVar8 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0xc,&(*(undefined4 *)(gen_frame + 0x20)));
        *param_1 = *puVar8;
        param_1[1] = puVar8[1];
        param_1[2] = puVar8[2];
      }
      else {
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x40))((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)))));
        puVar8 = ((undefined4 *)(gen_frame + 0x80));
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0xb0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = (*(undefined4 *)(gen_frame + 0xb4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined4 *)(gen_frame + 0xb8));
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
    }
  }
  else {
    bVar5 = F_005d5fe0(piVar4 GEN_EDX_ARG);
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x38));
    if (bVar5 != 0) {
      bVar5 = F_005eae70((*(int * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x3c)));
      if (bVar5 == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0x2e;
      }
      F_005eaf50(piVar4 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x80)),(*(int *)(gen_frame + 0x3c)));
      *param_1 = (*(undefined4 *)(gen_frame + 0xb0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0xb4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xb8));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return (uint)puVar6;
}

/* ref: FUN_00a60ca0 */
GEN_NOFRAME byte GEN_THISCALL F_00a60ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa60ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10)),0x3d,param_2,(*(undefined4 *)(gen_frame + 0x4)))));
      puVar6 = puVar4;
      puVar7 = param_1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00a60dc0;
    }
  }
  else {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG);
    if (bVar3 != 0) {
      bVar3 = F_005eaf50(*(undefined * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,param_1,0x2e);
      puVar4 = (undefined4 *)(uint)bVar3;
      goto LAB_00a60dc0;
    }
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
LAB_00a60d70: ;
    puVar4 = (undefined4 *)((int)this + 0xa0);
  }
  else if (*(int *)((int)this + 0xf0) == 0) {
    if (*(int *)((int)this + 0xec) == 0) goto LAB_00a60d70;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG)));
  }
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = uVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar2;
  param_1[0xc] = *puVar4;
  param_1[0xd] = puVar4[1];
  param_1[0xe] = puVar4[2];
LAB_00a60dc0: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return (byte)puVar4;
}

/* ref: FUN_00a60de0 */
GEN_NOFRAME uint GEN_THISCALL F_00a60de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa60de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  float * pfVar7;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      fVar2 = *(float *)((int)this + 0xc4);
      fVar1 = *(float *)((int)this + 0xa8);
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar3 = *(float *)((int)this + 0xa4);
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0x18)) = fVar1;
      fVar1 = (float)((float10)fVar3 + (float10)fVar2);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0) GEN_EDX_FWD,&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *(float *)((int)this + 0xd8);
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x28)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe8))))
                        (*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
      return uVar6;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xc4);
      pfVar7 = (float *)F_00a5feb0(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x2c)) = *pfVar7;
      uVar6 = F_00a5feb0(this GEN_EDX_ARG);
      fVar1 = *(float *)(uVar6 + 4);
      (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x2c));
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar6 = F_00a5feb0(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x18)) = *(float *)(uVar6 + 8);
      bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0) GEN_EDX_ARG,&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *(float *)((int)this + 0xd8);
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x24)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x2c)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x28)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG);
      if (((char)in_EAX == '\0') || (*(char *)((int)this + 0x2e08) == '\0')) {
        in_EAX = *(uint *)((int)this + 0xec);
        *(float *)(in_EAX + 0x30) = (*(float *)(gen_frame + 0x10));
        *(float *)(in_EAX + 0x34) = (*(float *)(gen_frame + 0x14));
        *(float *)(in_EAX + 0x38) = (*(float *)(gen_frame + 0x18));
        *(uint *)(in_EAX + 0x24) = *(uint *)(in_EAX + 0x24) | 2;
      }
      piVar4 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar4 + 0x65) == '\x03') {
        in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61000 */
GEN_NOFRAME uint GEN_THISCALL F_00a61000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined3 extraout_var = 0;
  float10 fVar7;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar7 = (float10)fVar2;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * (float10)REFG(float, 0x1302c80));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar7);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)REFG(float, 0x1302c88));
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      (*(float *)(gen_frame + 0xc)) = (float)fVar7;
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf0))))
                        (*(int * PTR32 *)((int)this + 0xf0) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
      return uVar6;
    }
    iVar3 = *(int *)((int)this + 0xec);
    if (iVar3 != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      F_0054cfd0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(float, 0x1302c80),fVar1);
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      *(float *)(iVar3 + 0x40) = (*(float *)(gen_frame + 0x0));
      *(float *)(iVar3 + 0x44) = (*(float *)(gen_frame + 0x4));
      *(float *)(iVar3 + 0x48) = (*(float *)(gen_frame + 0x8));
      *(float *)(iVar3 + 0x4c) = (*(float *)(gen_frame + 0xc));
      piVar4 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar4 + 0x65) == '\x03') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,1);
      }
    }
    bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0) GEN_EDX_ARG,&REFG(float, 0x1375ac0));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) {
      in_EAX = F_00a60de0(this GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61140 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a61140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      piVar2 = *(int * PTR32 *)((int)this + 0xf0);
      (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
      return;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      iVar3 = *(int *)((int)this + 0xec);
      *(undefined4 *)(iVar3 + 0x58) = uVar1;
      *(undefined4 *)(iVar3 + 0x50) = uVar1;
      *(undefined4 *)(iVar3 + 0x54) = uVar1;
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      piVar2 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar2 + 0x65) == '\x03') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2 GEN_EDX_ARG,1);
      }
    }
  }
  return;
}

/* ref: FUN_00a611f0 */
GEN_FRAME byte GEN_THISCALL F_00a611f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa611f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_2 == (uint *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(uint *)(gen_frame + 0x38)) = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0xc));
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    F_009755f0(this_00 GEN_EDX_ARG,puVar4);
    uVar2 = (*(uint *)(gen_frame + 0x34));
    uVar3 = (*(uint *)(gen_frame + 0x38));
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
  }
  uVar1 = *(uint *)((int)this + param_1 * 8 + 0xfc);
  if ((uVar3 <= uVar1) && ((uVar3 < uVar1 || (uVar2 < *(uint *)((int)this + param_1 * 8 + 0xf8)))))
  {
    return 0;
  }
  *(uint *)((int)this + param_1 * 8 + 0xf8) = uVar2;
  *(uint *)((int)this + param_1 * 8 + 0xfc) = uVar3;
  return 1;
}

/* ref: FUN_00a61290 */
GEN_NOFRAME uint GEN_THISCALL F_00a61290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  iVar2 = *(int *)((int)this + 0x7c);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x128);
  if (iVar2 != 0) {
    F_00a60560(this GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: FUN_00a61360 */
GEN_NOFRAME uint GEN_THISCALL F_00a61360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  iVar2 = *(int *)((int)this + 0x7c);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x130);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x134);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x138);
  if (iVar2 != 0) {
    F_00a60560(this GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: Client::Game::Object::GameObject::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_00a61430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 GVar6;
  code * pcVar7;
  byte bVar8;
  uint uVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  if ((((byte)this[0x8e] & 0x20) == 0) &&
     (uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc0))(this GEN_EDX_FWD), (char)uVar9 != '\0')) {
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x20);
  }
  if (((((byte)this[0x8e] & 8) == 0) && (((byte)this[0x8e] & 0x20) != 0)) &&
     (bVar8 = F_00a606e0(this GEN_EDX_ARG), bVar8 != 0)) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 0x74);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 8);
    (*pcVar7)(this);
  }
  if ((((byte)this[0x8e] & 0x10) == 0) &&
     (uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG), (char)uVar9 != '\0')) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 0x6c);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x10);
    (*pcVar7)(this);
  }
  GVar6 = this[0x8e];
  if (((((byte)GVar6 & 4) == 0) && (((byte)GVar6 & 0x20) != 0)) &&
     ((((byte)GVar6 & 8) != 0 &&
      ((((byte)GVar6 & 0x10) != 0 && (bVar8 = F_00a606e0(this GEN_EDX_ARG), bVar8 != 0)))))) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 100);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 4);
    (*pcVar7)(this);
  }
  fVar1 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x144);
  fVar3 = *(float *)(this + 0x124);
  fVar4 = *(float *)(this + 0x148);
  fVar5 = *(float *)(this + 0x128);
  fVar12 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  fVar13 = (float10)(float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar14 = (float10)(float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar12 * fVar12 + fVar13 * fVar13))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar15 = (float10)fVar2;
  bVar11 = GEN_ISNAN(fVar15) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || fVar15 == (float10)0)) {
    if (fVar2 < REFG(float, 0x10e5d90)) {
      *(float *)(this + 0x120) = fVar1;
      *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x144);
      *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x148);
    }
    else {
      fVar16 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
      if (fVar15 * fVar16 < (float10)*(double *)&REFG(undefined, 0x10e5d88)) {
        pfVar10 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10e5d88);
        fVar12 = (float10)*pfVar10 * fVar14;
        fVar13 = (float10)pfVar10[1] * fVar14;
        fVar14 = fVar14 * (float10)pfVar10[2];
      }
      else {
        fVar12 = fVar12 * fVar16;
        fVar13 = fVar13 * fVar16;
        fVar14 = fVar14 * fVar16;
      }
      (*(float *)(gen_frame + 0x4)) = (float)fVar13;
      (*(float *)(gen_frame + 0x0)) = (float)fVar12;
      *(float *)(this + 0x120) = ((float)GEN_TOF(((float10)*(float *)(this + 0x120) + (float10)(*(float *)(gen_frame + 0x0)))));
      *(float *)(this + 0x124) = ((float)GEN_TOF(((float10)*(float *)(this + 0x124) + (float10)(*(float *)(gen_frame + 0x4)))));
      *(float *)(this + 0x128) = ((float)GEN_TOF(((float10)*(float *)(this + 0x128) + (float10)(float)fVar14)))
      ;
    }
  }
  fVar1 = *(float *)(this + 0x150);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x154);
  fVar3 = *(float *)(this + 0x134);
  fVar4 = *(float *)(this + 0x158);
  fVar5 = *(float *)(this + 0x138);
  fVar12 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  fVar15 = (float10)(float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar13 = (float10)(float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar15 * fVar15) + fVar13 * fVar13)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  bVar11 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || (float10)fVar2 == (float10)0)) {
    if (fVar2 <= REFG(float, 0x10e5d84)) {
      *(float *)(this + 0x130) = fVar1;
      *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x154);
      fVar12 = (float10)*(float *)(this + 0x158);
    }
    else {
      pfVar10 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
      fVar12 = (float10)REFG(double, 0x1094800);
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      *(float *)(this + 0x130) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x130) + (float10)(float)((float10)*pfVar10 * fVar12))))
      ;
      *(float *)(this + 0x134) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x134) + (float10)(float)((float10)fVar1 * fVar12))));
      fVar12 = (float10)(float)(fVar12 * (float10)fVar2) + (float10)*(float *)(this + 0x138);
    }
    *(float *)(this + 0x138) = (float)fVar12;
  }
  F_00a602f0(this GEN_EDX_ARG);
  F_00a60400(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
  uVar9 = F_00a5f7a0(this GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_00a61740 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a61740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xcc))(this GEN_EDX_ARG)));
      if (piVar3 != (int *)0x0) {
        bVar1 = *(byte *)((int)this + 0x8e);
        *(int * PTR32 *)((int)this + 0xf0) = piVar3;
        if (((-1 < (char)bVar1) && ((bVar1 & 0x20) != 0)) &&
           (*(byte *)((int)this + 0x8e) = bVar1 & 0xef | 0x80, *(int *)((int)this + 0x7c) != 0)) {
          F_00a60820(this GEN_EDX_ARG);
        }
        F_00a1eab0(((undefined1 *)(gen_frame + 0x0)),this);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x100))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  return;
}

/* ref: Client::Game::Object::GameObject::vf5 */
GEN_FRAME uint GEN_THISCALL F_00a617e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa617e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xd0) = param_2;
  *(float *)((int)param_1 + 0xd4) = param_3;
  *(float *)((int)param_1 + 0xd8) = param_4;
  uVar1 = F_00a60de0(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf6 */
GEN_FRAME uint GEN_THISCALL F_00a61820(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa61820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*(float *)((int)param_1 + 0xe0);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
  if (bVar2 == bVar3) {
    *(float *)((int)param_1 + 0xe0) = param_2;
    uVar1 = F_00a61000(param_1 GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf16 */
GEN_FRAME uint GEN_THISCALL F_00a61850(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xa0) = param_2;
  *(float *)((int)param_1 + 0xa4) = param_3;
  *(float *)((int)param_1 + 0xa8) = param_4;
  uVar1 = F_00a60de0(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf18 */
GEN_FRAME uint GEN_THISCALL F_00a61890(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa61890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xb0) = param_2;
  uVar1 = F_00a61000(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf19 */
GEN_FRAME unsigned int GEN_THISCALL F_00a618b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa618b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0xb4) = param_2;
  F_00a61140(param_1 GEN_EDX_FWD);
  *(byte *)((int)param_1 + 0x8f) = *(byte *)((int)param_1 + 0x8f) | 0x80;
  return;
}

/* ref: FUN_00a618e0 */
GEN_NOFRAME byte GEN_THISCALL F_00a618e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa618e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xec) == 0) {
    return 1;
  }
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xec) + 100))) >> 3 & 1;
}

/* ref: FUN_00a61900 */
GEN_NOFRAME uint GEN_THISCALL F_00a61900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 | 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec) GEN_EDX_FWD);
    if (uVar2 == 4) {
      uVar2 = F_00699cb0(*(undefined4 *)((int)this + 0xec) GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: FUN_00a61940 */
GEN_NOFRAME uint GEN_THISCALL F_00a61940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec) GEN_EDX_FWD);
    if (uVar2 == 4) {
      uVar2 = F_0068b730(*(undefined4 *)((int)this + 0xec) GEN_EDX_ARG,(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf9 */
GEN_FRAME byte GEN_THISCALL F_00a61980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa61980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x11c);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  *(uint *)(this + 0x11c) = uVar2;
  if (((*(int *)(this + 0xf0) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a5f680(this GEN_EDX_FWD,param_2);
    return 1;
  }
  if (((*(int *)(this + 0xec) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a61900(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf10 */
GEN_FRAME byte GEN_THISCALL F_00a619f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa619f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c)));
  uVar2 = 1 << ((byte)(*(int *)&gen_args[1]) & 0x1f) | uVar1;
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c))) = uVar2;
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
    if ((char)(*(undefined4 *)&gen_args[2]) == '\x01') {
      (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0,(*(int *)&gen_args[1]));
    return 1;
  }
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    F_00a61940((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf37 */
GEN_FRAME uint GEN_THISCALL F_00a61a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  code * pcVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  bool bVar9;
  
  if (((byte)this[0x8f] & 8) == 0) {
LAB_00a61a85: ;
    return in_EAX & 0xffffff00;
  }
  uVar4 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  in_EAX = F_00974710(uVar4 GEN_EDX_ARG);
  if ((((char)in_EAX != '\0') && (REFG(int, 0x1379694) == 0)) ||
     (in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG), (char)in_EAX == '\0')) goto LAB_00a61a85;
  if (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0) GEN_EDX_ARG);
    if (bVar3 == 0) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  uVar4 = F_00a5f380(this GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0xc4)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)0x0;
  if (uVar4 != 0) {
    (*(char *)(gen_frame + 0xdb)) = '\0';
    piVar7 = ((int *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0xd0)) = uVar4;
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1 != (int *)0x0) {
        if (*(short *)((int)piVar1 + 10) == 0xd) {
          uVar4 = F_006ce010(piVar1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x84)),0x10);
          uVar6 = 0;
          (*(uint *)(gen_frame + 0xcc)) = uVar4;
          if (uVar4 != 0) {
            do {
              bVar9 = (*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0;
              piVar1 = (int *)((undefined4 *)(gen_frame + 0x84))[(int)(uVar6)];
              *piVar7 = (int)piVar1;
              if ((bVar9) &&
                 (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1 GEN_EDX_ARG,this), (char)uVar4 != '\0')) {
                (*(char *)(gen_frame + 0xdb)) = '\x01';
                (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
              }
              if (*(short *)(*piVar7 + 10) == 0x1a) {
                (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < (*(uint *)(gen_frame + 0xcc)));
          }
        }
        else {
          if (((*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0) &&
             (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1 GEN_EDX_ARG,this), (char)uVar4 != '\0')) {
            (*(char *)(gen_frame + 0xdb)) = '\x01';
            (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
          }
          if (*(short *)(*piVar7 + 10) == 0x1a) {
            (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
          }
        }
      }
      piVar7 = piVar7 + 1;
      uVar4 = (*(uint *)(gen_frame + 0xd0)) - 1;
      (*(uint *)(gen_frame + 0xd0)) = uVar4;
    } while (uVar4 != 0);
    if ((((*(int * PTR32 *)(gen_frame + 0xd4)) != (int *)0x0) && ((*(int * PTR32 *)(gen_frame + 0xc8)) != (int *)0x0)) && ((*(int * PTR32 *)(gen_frame + 0xd4)) != (*(int * PTR32 *)(gen_frame + 0xc8)))) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc8)) + 0x1d0))((*(int * PTR32 *)(gen_frame + 0xc8)) GEN_EDX_ARG,this);
      (*(char *)(gen_frame + 0xdb)) = (char)uVar4;
    }
    this[0x8f] = (undefined1)((byte)this[0x8f] ^ ((*(char *)(gen_frame + 0xdb)) << 4 ^ (byte)this[0x8f]) & 0x10);
  }
  piVar7 = (*(int * PTR32 *)(gen_frame + 0xd4));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x90))(this GEN_EDX_ARG);
  cVar2 = (char)uVar4;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 0)) = cVar2;
  (*(uint *)(gen_frame + 0xd0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd0)), 1, 3),cVar2);
  bVar3 = F_00a5f230(this GEN_EDX_ARG);
  if (bVar3 == 0) {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x28);
  }
  else {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x24);
  }
  (*pcVar5)(8,(*(uint *)(gen_frame + 0xd0)));
  if (cVar2 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG,1,0);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61900(this GEN_EDX_ARG);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61940(this GEN_EDX_ARG);
      }
    }
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  if ((char)uVar4 != '\0') {
    bVar3 = F_005e1600();
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      bVar3 = F_005d99e0();
      uVar4 = CONCAT31(extraout_var_01,bVar3);
      if (bVar3 != 0) goto LAB_00a61c9e;
    }
  }
  if (((byte)this[0x8e] & 0x80) != 0) {
    return uVar4 & 0xffffff00;
  }
LAB_00a61c9e: ;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)this[0x8e] >> 1) & 0xffffff01;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = (char)uVar4;
  (*(uint *)(gen_frame + 0xcc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xcc)), 1, 3),(char)uVar4);
  if (piVar7 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x1d4))(piVar7 GEN_EDX_ARG,this,(*(uint *)(gen_frame + 0xcc)));
  }
  uVar6 = (*(uint *)(gen_frame + 0xc4));
  uVar8 = 0;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 * '\x02' ^ (byte)this[0x8e]) & 0xffffff02;
  this[0x8e] = (undefined1)((byte)this[0x8e] ^ (byte)uVar4);
  if ((*(uint *)(gen_frame + 0xc4)) != 0) {
    do {
      piVar7 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar8)];
      if (piVar7 != (int *)0x0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc0))(piVar7 GEN_EDX_ARG,this);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xf7);
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: Client::Game::Object::GameObject::vf27 */
GEN_NOFRAME uint GEN_THISCALL F_00a61d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa61d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5fd10(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x2d);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x120) = uVar1;
  *(undefined4 *)(this + 0x124) = uVar2;
  *(undefined4 *)(this + 0x128) = uVar3;
  *(undefined4 *)(this + 0x140) = uVar1;
  *(undefined4 *)(this + 0x144) = uVar2;
  *(undefined4 *)(this + 0x148) = uVar3;
  puVar5 = (undefined4 *)F_00a5fd10(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x46);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x130) = uVar1;
  *(undefined4 *)(this + 0x134) = uVar2;
  *(undefined4 *)(this + 0x138) = uVar3;
  *(undefined4 *)(this + 0x150) = uVar1;
  *(undefined4 *)(this + 0x154) = uVar2;
  *(undefined4 *)(this + 0x158) = uVar3;
  F_00a60de0(this GEN_EDX_ARG);
  F_00a61000(this GEN_EDX_ARG);
  F_00a61140(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,0xb,(uint)(*(int *)(this + 0x7c) != 0));
  pcVar4 = *(gen_code32 *)(*(int *)this + 0x8c);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  uVar6 = (*pcVar4)(this);
  if ((char)uVar6 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG,1,0);
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61900(this GEN_EDX_ARG);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61940(this GEN_EDX_ARG);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a61e80 */
GEN_FRAME uint GEN_THISCALL F_00a61e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61e80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61eb0 */
GEN_FRAME uint GEN_THISCALL F_00a61eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61eb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61ee0 */
GEN_FRAME uint GEN_THISCALL F_00a61ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x160) = *param_2;
  *(undefined4 *)(in_ecx + 0x164) = param_2[1];
  *(undefined4 *)(in_ecx + 0x168) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a61f10 */
GEN_FRAME uint GEN_THISCALL F_00a61f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x160);
  param_2[1] = *(undefined4 *)(in_ecx + 0x164);
  param_2[2] = *(undefined4 *)(in_ecx + 0x168);
  return (uint)param_2;
}

/* ref: FUN_00a61f40 */
GEN_FRAME unsigned int GEN_THISCALL F_00a61f40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61f40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  *(float *)(in_ecx + 0x18) = param_4;
  return;
}

/* ref: FUN_00a61f70 */
GEN_FRAME uint GEN_THISCALL F_00a61f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00a61fd0 */
GEN_FRAME uint GEN_THISCALL F_00a61fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa61fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x58);
}

/* ref: FUN_00a62010 */
GEN_FRAME byte GEN_THISCALL F_00a62010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa62010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x149) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a62020 */
GEN_FRAME uint GEN_THISCALL F_00a62020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa62020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a62040 */
GEN_FRAME float10 F_00a62040(float gen_a0)
{
  GEN_ENTER(0xa62040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a620a0 */
GEN_NOFRAME byte F_00a620a0(void)
{
  GEN_ENTER(0xa620a0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (((REFG(undefined4, 0x14a9a08) != 0) && (1 < *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28))) &&
     (*(byte *)(REFG(undefined4, 0x14a9a08) + 0x28) < 5)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a620f0 */
GEN_FRAME uint F_00a620f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa620f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar2;
  }
  if (REFG(undefined4, 0x14a9a08) != 0) {
    bVar1 = *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28);
    if (bVar1 == 1) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
      if ((uVar3 != 1) && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), uVar3 == 2)) {
        return (uint)*(byte *)(param_1 + 0x65);
      }
    }
    else if ((1 < bVar1) && (bVar1 < 5)) {
      return (uint)*(byte *)(param_1 + 0x65);
    }
  }
  return 0;
}

/* ref: FUN_00a62170 */
GEN_FRAME byte F_00a62170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62170u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (REFG(undefined4, 0x14a9a08) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(REFG(undefined4, 0x14a9a08) + 0x28);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if ((((uVar2 == 1) || (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), uVar2 == 2)) &&
      ((uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG), uVar2 == 1 ||
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG), uVar2 == 2)))) && (cVar4 != '\0')) {
    uVar2 = F_00a620f0(param_1);
    uVar3 = F_00a620f0(param_2);
    uVar2 = F_00ab22c0(uVar2);
    return *(char *)(uVar2 + uVar3) == '\x01';
  }
  return 0;
}

/* ref: FUN_00a62220 */
GEN_FRAME uint F_00a62220(unsigned int gen_a0)
{
  GEN_ENTER(0xa62220u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  uVar4 = 0;
  if (uVar3 != 1) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if (uVar4 != 2) goto LAB_00a6224a;
  }
  if (iVar1 != 0) {
    bVar2 = F_00a62170(iVar1,param_1);
    return CONCAT31(extraout_var,bVar2);
  }
LAB_00a6224a: ;
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00a62270 */
GEN_FRAME byte F_00a62270(unsigned int gen_a0)
{
  GEN_ENTER(0xa62270u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if ((uVar3 != 1) && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG), uVar3 != 2)) {
    return 1;
  }
  if (iVar1 == 0) {
    return 1;
  }
  bVar2 = F_00a62170(iVar1,param_1);
  return bVar2 == 0;
}

/* ref: FUN_00a622c0 */
GEN_NOFRAME unsigned int F_00a622c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00a622d0 */
GEN_NOFRAME unsigned int F_00a622d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00a622e0 */
GEN_FRAME unsigned int F_00a622e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa622e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 3) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xd8))(param_1 GEN_EDX_ARG);
      uVar1 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x48));
      if (uVar1 != 0) {
        F_00aa8240(param_1 GEN_EDX_ARG,*(undefined4 *)(uVar1 + 0x18),*(undefined4 *)(uVar1 + 0x1c));
      }
    }
    else {
      if (param_2 == 6) {
        F_00aa8240(param_1 GEN_EDX_ARG,0x102b9,1);
        return;
      }
      if (param_2 == 7) {
        F_00aa8240(param_1 GEN_EDX_ARG,0x10707,1);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00a62350 */
GEN_FRAME unsigned int F_00a62350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00aa2e00(param_1 GEN_EDX_ARG,param_2,param_3,0,1,0);
  }
  return;
}

/* ref: FUN_00a62370 */
GEN_FRAME uint F_00a62370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62370u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != (undefined *)0x0) {
    in_EAX = F_00aa3ff0(param_1 GEN_EDX_ARG,0,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00a62390 */
GEN_FRAME uint F_00a62390(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa62390u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_00a9faf0(param_1 GEN_EDX_ARG);
  uVar3 = param_2;
  if ((-1 < (int)param_2) || ((int)param_2 < 3)) {
    if (((uVar1 & 0x7f) < 0x12) && (((uVar1 & 0x7f) != 0 && (*(char *)(param_1 + 0x2ea7) != '\0'))))
    {
      switch((unsigned int)(uintptr_t)(uVar1 & 0x7f)) {
      case 1: ;
        iVar2 = param_2 + 0x90;
        break;
      case 2: ;
        iVar2 = param_2 + 0x93;
        break;
      case 3: ;
        iVar2 = param_2 + 0x96;
        break;
      default: ;
        iVar2 = param_2 + 0x9c;
        break;
      case 0xb: ;
        iVar2 = param_2 + 0x9f;
        break;
      case 0xd: ;
        iVar2 = param_2 + 0x99;
      }
      uVar3 = F_00ab4730(iVar2,param_1,param_3,param_4,param_5,param_6,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00a62460 */
GEN_NOFRAME uint F_00a62460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62460u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (((param_1 != (undefined *)0x0) && ((*(int *)&gen_a1) != 0)) &&
     (uVar6 = (uint)*(byte *)((*(int *)&gen_a1) + 0x2de8), uVar6 != 0)) {
    if (REFG(undefined1, 0x1338ad4) == 0) {
      local_14 = *(byte *)((int)param_1 + 0x1689) + 10;
    }
    else {
      local_18 = 0;
      if (REFG(undefined1, 0x1338ad4) != 0) {
        do {
          puVar2 = (undefined4 *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,local_18);
          this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,*puVar2);
          if (this != (undefined *)0x0) {
            pfVar3 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
            pfVar4 = (float *)F_00a5feb0(this GEN_EDX_ARG);
            if (!(*(double *)&REFG(undefined, 0x1088118) <=
                 (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) *
                                                      (float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) +
                                                     ((float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) *
                                                      (float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) +
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1]) *
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1])))))))))) {
              bVar1 = F_0054c430(this GEN_EDX_ARG);
              if (bVar1 == 0) {
                local_14 = local_14 + 10 + (uint)*(byte *)((int)this + 0x1689);
              }
              else {
                local_14 = local_14 + (*(byte *)((int)this + 0x1689) + 10) / 2;
              }
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < (int)(uint)REFG(undefined1, 0x1338ad4));
      }
    }
    uVar5 = local_14 / (int)(*(byte *)((*(int *)&gen_a1) + 0x1689) + 10) - 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if (6 < (int)uVar5) {
      uVar5 = 6;
    }
    return uVar5;
  }
  return 0;
}

/* ref: FUN_00a625d0 */
GEN_FRAME byte F_00a625d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa625d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 0x2deb) >> 1 & 1;
}

/* ref: FUN_00a625f0 */
GEN_FRAME byte F_00a625f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa625f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = F_00ab22f0(*(undefined4 *)(param_1 + 0x80));
    bVar1 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab22f0(*(undefined4 *)(param_2 + 0x80));
    bVar2 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab2900((uint)bVar1);
    if (uVar3 != 0) {
      return *(byte *)(uVar3 + bVar2);
    }
  }
  return 0;
}

/* ref: FUN_00a62650 */
GEN_NOFRAME uint F_00a62650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  float fVar5;
  
  if (param_2 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG);
    if ((uVar2 == 2) &&
       ((*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)((int)param_2 + 0x2dea), *(byte *)((int)param_2 + 0x2dea) != 0)) {
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[0xb79]);
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      do {
        this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + (*(uint *)(gen_frame + 0x18)));
        if ((this != (int *)0x0) && (this != param_2)) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG);
          if ((uVar2 == 2) &&
             (((char)this[0x62] != '\x02' && ((*(byte *)((int)this + 0x2dd2) & 2) == 0)))) {
            uVar2 = F_00a5feb0(this GEN_EDX_ARG);
            uVar3 = F_00a5feb0(param_2 GEN_EDX_ARG);
            pvVar4 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar3,uVar2);
            fVar5 = F_004bd280(pvVar4 GEN_EDX_ARG);
            if (!((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar5)) {
              pvVar4 = (undefined *)F_006b8c00();
              bVar1 = F_006d7160(pvVar4 GEN_EDX_ARG);
              if ((((bVar1 != 0) || (param_2[0x39] == this[0x39])) &&
                  (*(byte *)((int)this + 0x2dea) == (*(uint *)(gen_frame + 0x10)))) &&
                 ((*(byte *)((int)this + 0x2deb) & 1) == (byte)param_3)) {
                *(int * PTR32 *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4) = this;
                (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
              }
            }
          }
        }
        uVar2 = (*(uint *)(gen_frame + 0x18)) + 4;
        (*(uint *)(gen_frame + 0x18)) = uVar2;
      } while (uVar2 < 400);
      return (*(uint *)(gen_frame + 0x1c));
    }
  }
  return 0;
}

/* ref: FUN_00a62780 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a62780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa62780u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xe0000000;
  in_ecx[1] = 0xe0000000;
  return;
}

/* ref: FUN_00a62930 */
GEN_NOFRAME unsigned int F_00a62930(void)
{
  GEN_ENTER(0xa62930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00a62940 */
GEN_FRAME unsigned int GEN_THISCALL F_00a62940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa62940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e64e4)));
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2c8) = 1;
    *(undefined4 *)(in_ecx + 0x2c4) = uVar1;
    return;
  }
  *(undefined1 *)(in_ecx + 0x2c8) = 0;
  return;
}

/* ref: FUN_00a62970 */
GEN_FRAME unsigned int GEN_THISCALL F_00a62970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa62970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d0) = 1;
    *(undefined4 *)(in_ecx + 0x2cc) = uVar1;
    return;
  }
  *(undefined1 *)(in_ecx + 0x2d0) = 0;
  return;
}

/* ref: FUN_00a629a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a629a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa629a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10adb9c)));
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d8) = 1;
    *(undefined4 *)(in_ecx + 0x2d4) = uVar1;
    return;
  }
  *(undefined1 *)(in_ecx + 0x2d8) = 0;
  return;
}

/* ref: FUN_00a629e0 */
GEN_FRAME uint GEN_THISCALL F_00a629e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa629e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x40 + in_ecx;
}

/* ref: FUN_00a629f0 */
GEN_FRAME byte F_00a629f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa629f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
  case 0x13: ;
    return 0;
  case 2: ;
  case 0x14: ;
    return 1;
  case 3: ;
  case 0x15: ;
    return 2;
  case 4: ;
  case 0x16: ;
    return 3;
  case 5: ;
  case 0x17: ;
    return 4;
  case 6: ;
  case 0x18: ;
    return 5;
  case 7: ;
  case 0x19: ;
    return 6;
  default: ;
    return 0xff;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
    return 7;
  }
}

/* ref: FUN_00a62a70 */
GEN_FRAME byte F_00a62a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa62a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return 2;
  case 2: ;
    return 3;
  case 3: ;
    return 4;
  case 4: ;
    return 5;
  case 5: ;
    return 6;
  case 6: ;
    return 7;
  case 7: ;
    return 0x1a;
  default: ;
    return 0xff;
  }
}

/* ref: FUN_00a62ad0 */
GEN_FRAME byte F_00a62ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa62ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\b') {
    return 1;
  }
  if ((char)param_1 != '\t') {
    if ((char)param_1 != '\n') {
      return 0xff;
    }
    return 3;
  }
  return 2;
}

/* ref: FUN_00a62b00 */
GEN_FRAME byte F_00a62b00(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\x01') {
    return 8;
  }
  if ((char)param_1 != '\x02') {
    if ((char)param_1 != '\x03') {
      return 0xff;
    }
    return 10;
  }
  return 9;
}

/* ref: FUN_00a62b20 */
GEN_FRAME byte F_00a62b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a62b40 */
GEN_FRAME byte F_00a62b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 3;
  }
  return -((byte)param_1 < 0xb) & 5;
}

/* ref: FUN_00a62b60 */
GEN_FRAME uint GEN_STDCALL F_00a62b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (((byte)param_1 < 8) || (10 < (byte)param_1)) {
    switch((unsigned int)(uintptr_t)((byte)param_1)) {
    case 0: ;
      iVar1 = 1;
      break;
    case 1: ;
      iVar1 = 2;
      break;
    case 2: ;
      iVar1 = 3;
      break;
    case 3: ;
      iVar1 = 4;
      break;
    case 4: ;
      iVar1 = 5;
      break;
    case 5: ;
      iVar1 = 6;
      break;
    case 6: ;
      iVar1 = 7;
      break;
    case 7: ;
      iVar1 = 0x1a;
      break;
    default: ;
      iVar1 = 0xff;
    }
    iVar1 = iVar1 * 1000;
  }
  else if ((byte)param_1 == 8) {
    iVar1 = 100000;
  }
  else if ((byte)param_1 == 9) {
    iVar1 = 200000;
  }
  else if ((byte)param_1 == 10) {
    iVar1 = 300000;
  }
  else {
    iVar1 = 25500000;
  }
  return (byte)param_3 + 1 + (iVar1 + (uint)(byte)param_2) * 10;
}

/* ref: FUN_00a62c20 */
GEN_NOFRAME uint F_00a62c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62c20u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int * in_ecx;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  if (param_1 < 0x158) {
    in_ecx = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_1)]));
  }
  else {
    in_ecx = (int *)0x0;
  }
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = REFG(void * PTR32, 0x14c4e84);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e64e4)));
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10e64e4)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  if (in_ecx != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
      uVar2 = *(uint *)(uVar3 + 0x40);
      (*(uint *)(gen_frame + 0x5c)) = uVar2;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar2 = F_00ab1ed0(uVar2);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
          if (*(int *)(uVar3 + 0x50) == param_3) {
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            uVar3 = F_00475fa0(*(undefined4 *)(uVar3 + 0x58),*(undefined4 *)(uVar3 + 0x5c));
            uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x68)) = *(undefined4 *)(uVar2 + 0x48);
            uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            F_00ac9740(in_ecx,uVar3,(uint)*(byte *)(uVar2 + 0x44),(*(uint *)(gen_frame + 0x68)));
            uVar3 = F_00ab1ed0((*(uint *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x68)) = (uint)*(ushort *)(uVar3 + 0xc);
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(uVar3 + 0x4c);
            iVar4 = 0;
            (*(int *)(gen_frame + 0x64)) = 0;
            (*(int *)(gen_frame + 0x60)) = 0;
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            if (*(char *)(uVar3 + 0x148) != '\0') {
              iVar5 = 0x58;
              do {
                uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
                if ((*(int *)(iVar5 + uVar3) != -0x20000000) &&
                   (uVar3 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(int *)(iVar5 + uVar3),
                                         *(undefined4 *)(iVar5 + 4 + uVar3)), uVar3 != 0)) {
                  ((uint *)(gen_frame + 0x70))[(int)((*(int *)(gen_frame + 0x64)))] = (uint)*(ushort *)(uVar3 + 0x88);
                  (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
                }
                (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 1;
                iVar5 = iVar5 + 8;
                uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
                iVar4 = (*(int *)(gen_frame + 0x64));
              } while ((*(int *)(gen_frame + 0x60)) < (int)(uint)*(byte *)(uVar3 + 0x148));
            }
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            (*(char *)(gen_frame + 0x6f)) = *(char *)(uVar3 + 0x149) + '\x01';
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            *(char *)(uVar3 + 0x149) = (*(char *)(gen_frame + 0x6f));
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            if (((*(char *)(uVar3 + 0x148) == '\0') && ((*(uint *)(gen_frame + 0x5c)) != 0x2dd)) && ((*(uint *)(gen_frame + 0x5c)) != 0x2de))
            {
              F_00a7d290(600,in_ecx,0,0,0,REFG(float, 0x10916ec));
            }
            if (iVar4 != 0) {
              uVar3 = F_0068eb90((*(uint *)(gen_frame + 0x68)));
              (*(uint *)(gen_frame + 0x58)) = uVar3;
              (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x68));
              F_00b5be60((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x54)),(uint)*(ushort *)(in_ecx + 0x22),&(*(uint *)(gen_frame + 0x58)),iVar4,
                           ((uint *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x0)));
            }
            uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG);
            F_00ac3da0(uVar3 GEN_EDX_ARG);
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*in_ecx + 0xd8))(in_ecx GEN_EDX_ARG)));
            F_00ac3e30(this GEN_EDX_ARG,uVar6,uVar7,uVar8);
          }
          bVar1 = F_00a9f620(in_ecx GEN_EDX_ARG);
          uVar3 = CONCAT31(extraout_var,bVar1);
          if (bVar1 != 0) {
            REFG(int, 0x14bd004) = param_3;
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a62f70 */
GEN_FRAME uint F_00a62f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa62f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  
  uVar2 = param_2;
  if (((param_2 < 0x158) && (piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(param_2)])), piVar1 != (int *)0x0)) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\0')) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1 GEN_EDX_ARG);
    uVar2 = 0;
    if (uVar3 != 0) {
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_00ac69e0(this GEN_EDX_ARG,param_3,param_4);
    }
  }
  return uVar2;
}

/* ref: FUN_00a62fd0 */
GEN_FRAME unsigned int F_00a62fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
      F_00aa3950(param_1 GEN_EDX_ARG,0,1);
      return;
    case 2: ;
      F_00aa3950(param_1 GEN_EDX_ARG,1,1);
      return;
    case 3: ;
    case 6: ;
    case 7: ;
      F_00a622e0(param_1,param_2);
    }
  }
  return;
}

/* ref: FUN_00a63030 */
GEN_FRAME unsigned int F_00a63030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63030u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
      F_00aa3950(param_1 GEN_EDX_ARG,1,2);
      return;
    case 3: ;
    case 6: ;
    case 7: ;
      F_00a622e0(param_1,param_2);
    }
  }
  return;
}

/* ref: FUN_00a63080 */
GEN_NOFRAME uint F_00a63080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * this;
  undefined4 uVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  float fVar8;
  
  uVar1 = REFG(undefined4, 0x1379694);
  *param_1 = 0;
  puVar3 = param_1;
  if ((param_2 != (int *)0x0) &&
     (puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG))), puVar3 == (undefined4 *)0x2)) {
    if (*(byte *)((int)param_2 + 0x2de9) == 0) {
      (*(uint *)(gen_frame + 0x28)) = 0;
      puVar4 = (undefined1 *)F_00a62460(uVar1,param_2);
      (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = puVar4;
      if ((int)puVar4 < 1) {
        return (uint)puVar4;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)param_2 + 0x2de9);
      (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = (undefined1 *)(uint)*(byte *)(param_2 + 0xb7a);
      if (&REFG(undefined, 0x6) < (undefined1 *)(uint)*(byte *)(param_2 + 0xb7a)) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x6);
      }
    }
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(param_2[0xb79]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &REFG(undefined4, 0x14a9a1c);
    do {
      this = (int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      if (((((this != (int *)0x0) && (this != param_2)) &&
           (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG), uVar5 == 2)) &&
          (((char)this[0x62] != '\x02' && ((*(byte *)((int)this + 0x2dd2) & 2) == 0)))) &&
         (bVar2 = F_00a62170(param_2,this), bVar2 == 0)) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) {
          if (((*(char *)((int)this + 0x2de9) == '\0') && ((*(byte *)((int)this + 0x2deb) & 2) != 0)
              ) && (bVar2 = F_00a625f0(param_2,this), bVar2 != 0)) goto LAB_00a631a6;
        }
        else if (*(byte *)((int)this + 0x2de9) == (*(uint *)(gen_frame + 0x28))) {
LAB_00a631a6: ;
          pvVar6 = (undefined *)F_006b8c00();
          bVar2 = F_006d7160(pvVar6 GEN_EDX_ARG);
          if ((bVar2 != 0) || (param_2[0x39] == this[0x39])) {
            uVar5 = F_00a5feb0(this GEN_EDX_ARG);
            uVar7 = F_00a5feb0(param_2 GEN_EDX_ARG);
            pvVar6 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar7,uVar5);
            fVar8 = F_004bd280(pvVar6 GEN_EDX_ARG);
            (*(float *)(gen_frame + 0x20)) = fVar8;
            if (!((float10)(*(float *)(gen_frame + 0x1c)) < (float10)fVar8)) {
              F_00a627d0(param_1 GEN_EDX_ARG,this,fVar8,(uint)(*(undefined1 * PTR32 *)(gen_frame + 0x2c)));
            }
          }
        }
      }
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar3;
    } while ((int)puVar3 < 0x14a9bac);
  }
  return (uint)puVar3;
}

/* ref: FUN_00a63230 */
GEN_FRAME uint F_00a63230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa63230u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  piVar1 = param_1;
  *param_1 = 0;
  param_1[1] = param_2;
  if (*(char *)(param_2 + 0x2dea) != '\0') {
    if ((*(byte *)(param_2 + 0x2deb) & 1) == 0) {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),param_2,1);
      if (uVar2 == 0) {
        return 0;
      }
      param_1[1] = ((int *)(gen_frame + 0x0))[0];
      param_1[2] = param_2;
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),((int *)(gen_frame + 0x0))[0],0);
      iVar3 = 0;
      if (0 < (int)uVar2) {
        piVar4 = param_1 + 3;
        do {
          if (((int *)(gen_frame + 0x0))[(int)(iVar3)] != param_2) {
            *piVar4 = ((int *)(gen_frame + 0x0))[(int)(iVar3)];
            piVar4 = piVar4 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar2);
      }
    }
    else {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),param_2,0);
      if (0 < (int)uVar2) {
        piVar4 = ((int *)(gen_frame + 0x0));
        piVar5 = param_1 + 2;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      }
    }
  }
  uVar2 = F_00a63080(param_1,param_1[1]);
  iVar3 = *param_1;
  param_1 = (int *)0x0;
  if (0 < iVar3) {
    piVar4 = piVar1 + 7;
    do {
      uVar2 = F_00a62650(((int *)(gen_frame + 0x0)),piVar4[-2],0);
      if (0 < (int)uVar2) {
        piVar5 = ((int *)(gen_frame + 0x0));
        piVar6 = piVar4;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      uVar2 = (int)param_1 + 1;
      piVar4 = piVar4 + 5;
      param_1 = (int *)uVar2;
    } while ((int)uVar2 < *piVar1);
  }
  return uVar2;
}

/* ref: FUN_00a63320 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a63320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = 0;
  pbVar2 = (byte *)((int)this + 0x38);
  do {
    *pbVar2 = bVar1;
    bVar1 = bVar1 + 1;
    pbVar2 = pbVar2 + 0x40;
  } while (bVar1 < 0xb);
  *(undefined1 *)((int)this + 0x2c0) = 0;
  *(undefined1 *)((int)this + 0x2c8) = 0;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  *(undefined1 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  return 0;
}

/* ref: FUN_00a63370 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a63370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)((int)this + 0x2c8) != '\0') {
    F_00ab1160((float *)((int)this + 0x2c4),1);
    if (*(float *)((int)this + 0x2c4) <= 0.0) {
      *(undefined1 *)((int)this + 0x2c8) = 0;
      F_00ab4370(0xae,REFG(undefined4, 0x1379694),REFG(undefined4, 0x1379694),0,0);
    }
  }
  if (*(char *)((int)this + 0x2d0) != '\0') {
    F_00ab1160((float *)((int)this + 0x2cc),1);
    if (*(float *)((int)this + 0x2cc) <= 0.0) {
      *(undefined1 *)((int)this + 0x2d0) = 0;
      F_00ab4370(0xd7,REFG(undefined4, 0x1379694),REFG(undefined4, 0x1379694),0,0);
    }
  }
  if (*(char *)((int)this + 0x2d8) != '\0') {
    F_00ab1160((float *)((int)this + 0x2d4),1);
    if (*(float *)((int)this + 0x2d4) <= 0.0) {
      *(undefined1 *)((int)this + 0x2d8) = 0;
      piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar3 = 1;
      uVar2 = 0x1d507;
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG)));
      F_007c8bb0(this_00 GEN_EDX_ARG,uVar2,uVar3,uVar4,uVar5);
    }
  }
  return;
}

/* ref: FUN_00a63450 */
GEN_NOFRAME byte GEN_THISCALL F_00a63450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x30) == '\0') {
    return 0;
  }
  bVar1 = *(byte *)((int)this + 0x38);
  if ((bVar1 < 8) || (10 < bVar1)) {
    switch((unsigned int)(uintptr_t)(bVar1)) {
    case 0: ;
      uVar3 = 1;
      break;
    case 1: ;
      uVar3 = 2;
      break;
    case 2: ;
      uVar3 = 3;
      break;
    case 3: ;
      uVar3 = 4;
      break;
    case 4: ;
      uVar3 = 5;
      break;
    case 5: ;
      uVar3 = 6;
      break;
    case 6: ;
      uVar3 = 7;
      break;
    case 7: ;
      uVar3 = 0x1a;
      break;
    default: ;
      uVar3 = 0xff;
    }
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_FWD,uVar3,0);
    bVar1 = *(byte *)((int)this + 0x30);
    if ((((uVar2 & 0xffff) < (uint)bVar1 * 10) || ((short)uVar2 == 0)) || (4 < bVar1)) {
      bVar1 = bVar1 - 1;
    }
  }
  else {
    bVar1 = F_00a68940(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
    uVar2 = F_00ab3fa0((uint)bVar1);
    if ((uVar2 == 0) || (bVar1 = *(byte *)((int)this + 0x30), *(byte *)(uVar2 + 0x20) <= bVar1)) {
      return *(char *)((int)this + 0x30) - 1;
    }
    if (2 < bVar1) {
      return bVar1 - 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00a63520 */
GEN_FRAME byte GEN_THISCALL F_00a63520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa63520u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ushort * puVar6;
  uint uVar7;
  undefined * this_00;
  
  iVar2 = REFG(int, 0x1379694);
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    if ((REFG(undefined1, 0x14b4ec2) & 0x20) == 0) {
      return 0;
    }
  }
  else if ((REFG(undefined1, 0x14b4ec2) & 0x40) == 0) {
    return 0;
  }
  if ((REFG(int, 0x1379694) == 0) || (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD), uVar5 == 0)) {
    return 0;
  }
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    bVar4 = F_00a629f0((uint)*(byte *)(iVar2 + 0x1688));
    uVar5 = (uint)bVar4;
    if (0x7e < bVar4) {
      return 0;
    }
  }
  else {
    if (REFG(char, 0x14ab29a) == '\x01') {
      uVar5 = 8;
    }
    else if (REFG(char, 0x14ab29a) == '\x02') {
      uVar5 = 9;
    }
    else {
      if (REFG(char, 0x14ab29a) != '\x03') {
        return 0;
      }
      uVar5 = 10;
    }
    bVar4 = (byte)uVar5;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
  this_00 = ((undefined *)GEN_TOP((uVar5 * 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  bVar4 = *(byte *)((int)this_00 + 0x30);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),bVar4);
  if ((char)(*(uint *)&gen_args[2]) == '\0') {
    uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*(byte *)(iVar2 + 0x1688),0);
    if (((uint)bVar4 * 10 <= (uVar5 & 0xffff)) &&
       (uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)*(byte *)(iVar2 + 0x1688),0), (short)uVar5 != 0))
    goto LAB_00a6362e;
  }
  else {
    bVar3 = F_00a68940(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG);
    uVar5 = F_00ab3fa0((uint)bVar3);
    if ((uVar5 != 0) && (bVar4 < *(byte *)(uVar5 + 0x20))) {
LAB_00a6362e: ;
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
      do {
        uVar5 = F_00a62b60((*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[2]));
        uVar5 = F_00ab3d80(uVar5);
        if ((uVar5 != 0) && (bVar4 = F_0090bbf0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[2])), bVar4 == 0)) {
          bVar4 = 0;
          do {
            puVar6 = (ushort *)F_00ab3db0((uint)*(ushort *)(uVar5 + 8 + (uint)bVar4 * 2));
            lVar1 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? ((((ulonglong)(((ulonglong)(byte)((char)(*(uint *)&gen_args[2]) * '\x05') < 0x40) ? ((1L << (ulonglong)(byte)((char)(*(uint *)&gen_args[2]) * '\x05'))) : 0)) << (ulonglong)bVar4)) : 0));
            if (((((uint)lVar1 & *(uint *)((int)this_00 + 0x28)) == 0 &&
                  ((uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this_00 + 0x2c)) == 0) &&
                (*puVar6 != 0)) &&
               (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xa8))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG), uVar7 == *puVar6)) {
              return 1;
            }
            bVar4 = bVar4 + 1;
          } while (bVar4 < 4);
        }
        bVar4 = (char)(*(uint *)&gen_args[2]) + 1;
        (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),bVar4);
        if (9 < bVar4) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00a63700 */
GEN_FRAME uint GEN_THISCALL F_00a63700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa63700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_2 + 5);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x2c) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)((int)this + (uint)bVar1 * 0x40 + 0x34) = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)((int)this + (uint)bVar1 * 0x40 + 0x30) = *(undefined1 *)(param_2 + 4);
  iVar4 = 0;
  do {
    *(undefined1 *)((int)this + iVar4 + (uint)bVar1 * 0x40) = *(undefined1 *)(param_2 + 6 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x28);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  uVar5 = 0x3b;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG);
  this_00 = (undefined *)F_00763050(uVar3 GEN_EDX_ARG,uVar5);
  F_008df6e0(this_00 GEN_EDX_ARG,0);
  uVar3 = F_008df6e0(this_00 GEN_EDX_ARG,2);
  return uVar3;
}

/* ref: FUN_00a63780 */
GEN_FRAME uint GEN_THISCALL F_00a63780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 in_ecx;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(int *)(gen_frame + 0x10)) = 0;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  ((int *)(gen_frame + 0x14))[2] = 0;
  puVar2 = ((undefined4 *)(gen_frame + 0x24));
  iVar5 = 6;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 5;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar3 = F_00414500(in_ecx GEN_EDX_FWD,0xad);
  if (*(int *)(uVar3 + 0x14) != 0) {
    uVar3 = F_006b8c00();
    bVar1 = F_006c5260(uVar3 GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar4 = F_00533b10(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      uVar3 = F_00533a10(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      if (*(uint *)this == uVar4) {
        if (*(uint *)((int)this + 4) == uVar3) goto LAB_00a63953;
        *(uint *)((int)this + 4) = uVar3;
      }
      else {
        *(uint *)this = uVar4;
        uVar3 = uVar4;
      }
      uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,uVar3);
      uVar3 = 0;
      if ((((uVar4 != 0) &&
           (uVar3 = CONCAT31((int3)(uVar4 >> 8),2), *(char *)(uVar4 + 0x188) != '\x02')) &&
          ((*(byte *)(uVar4 + 0x2dd2) & 2) == 0)) &&
         (uVar3 = F_00a62220(uVar4), (char)uVar3 != '\0')) {
        F_00a63230(&(*(uint *)(gen_frame + 0xc)),uVar4);
        iVar5 = 0;
        do {
          if (((int *)(gen_frame + 0x14))[(int)(iVar5)] != 0) {
            F_00994090(REFG(void * PTR32, 0x1487c8c) GEN_EDX_ARG,(uint)*(ushort *)((*(int *)(gen_frame + 0x10)) + 0x88),
                         (uint)*(ushort *)(((int *)(gen_frame + 0x14))[(int)(iVar5)] + 0x88));
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
        uVar3 = (*(uint *)(gen_frame + 0xc));
        if (0 < (int)(*(uint *)(gen_frame + 0xc))) {
          piVar6 = ((int *)(gen_frame + 0x14)) + 3;
          (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0xc));
          do {
            iVar5 = *piVar6;
            F_00994090(REFG(void * PTR32, 0x1487c8c) GEN_EDX_ARG,(uint)*(ushort *)((*(int *)(gen_frame + 0x10)) + 0x88),
                         (uint)*(ushort *)(iVar5 + 0x88));
            piVar7 = piVar6 + 2;
            iVar8 = 3;
            do {
              uVar3 = 0;
              if (*piVar7 != 0) {
                bVar1 = F_00994090(REFG(void * PTR32, 0x1487c8c) GEN_EDX_ARG,(uint)*(ushort *)(iVar5 + 0x88),
                                     (uint)*(ushort *)(*piVar7 + 0x88));
                uVar3 = CONCAT31(extraout_var_00,bVar1);
              }
              piVar7 = piVar7 + 1;
              iVar8 = iVar8 - 1;
            } while (iVar8 != 0);
            piVar6 = piVar6 + 5;
            (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
          } while ((*(uint *)(gen_frame + 0x4)) != 0);
        }
      }
    }
  }
LAB_00a63953: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00a63970 */
GEN_FRAME byte GEN_THISCALL F_00a63970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00a63520(this GEN_EDX_FWD,param_1,0);
  if (bVar1 == 0) {
    bVar1 = F_00a63520(this GEN_EDX_ARG,param_1,1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00a63a40 */
GEN_FRAME uint GEN_THISCALL F_00a63a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc4) = param_2;
  return param_2;
}

/* ref: FUN_00a63a90 */
GEN_FRAME uint GEN_THISCALL F_00a63a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x28);
  iVar2 = 10;
  do {
    *(undefined1 *)(puVar1 + 4) = 0xff;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-10] = 0;
    puVar1[-9] = 0;
    puVar1[-8] = 0;
    puVar1[-7] = 0;
    puVar1[-6] = 0;
    puVar1[-5] = 0;
    puVar1[-4] = 0;
    puVar1[-3] = 0;
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: Client::Game::Object::GameObject::vf2 */
GEN_NOFRAME byte F_00a63b00(void)
{
  GEN_ENTER(0xa63b00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00a63b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::Game::Object::GameObject::vf4 */
GEN_FRAME uint GEN_THISCALL F_00a63b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_00a63b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8b);
}

/* ref: Client::Game::Object::GameObject::vf8 */
GEN_FRAME byte GEN_THISCALL F_00a63b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Object::GameObject::vf14 */
GEN_FRAME uint GEN_THISCALL F_00a63b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::GameObject::vf15 */
GEN_FRAME uint GEN_THISCALL F_00a63b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf20 */
GEN_NOFRAME unsigned int F_00a63bb0(void)
{
  GEN_ENTER(0xa63bb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GameObject::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_00a63bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffffff7) == 0);
}

/* ref: Client::Game::Object::GameObject::vf39 */
GEN_NOFRAME uint GEN_THISCALL F_00a63bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffff7ff) == 0);
}

/* ref: Client::Game::Object::GameObject::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_00a63bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)((*(uint *)(in_ecx + 0x11c) & 0xfffff7f7) == 0);
}

/* ref: Client::Game::Object::GameObject::vf41 */
GEN_FRAME uint GEN_THISCALL F_00a63c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a60a40(this GEN_EDX_FWD,param_1,0x2e);
  return param_1;
}

/* ref: Client::Game::Object::GameObject::vf42 */
GEN_NOFRAME uint GEN_THISCALL F_00a63c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::Game::Object::GameObject::vf46 */
GEN_NOFRAME byte F_00a63c40(void)
{
  GEN_ENTER(0xa63c40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf52 */
GEN_NOFRAME unsigned int F_00a63c50(void)
{
  GEN_ENTER(0xa63c50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::Object::GameObject::vf45 */
GEN_FRAME uint GEN_THISCALL F_00a63c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::GroundAttributeInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a63d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForPacketMove::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00a63d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: Client::Game::Control::MoveControl::JumpPacketInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a63db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::JumpController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a63e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d74));
  *(undefined * PTR32 * PTR32 *)(this + 0xd0) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  *(undefined * PTR32 * PTR32 *)(this + 0x80) = (*(undefined * PTR32 (*)[1])REFP(0x10e6d6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::ActionMoveController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a63e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e6d7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a63ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00a63ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c9da70(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e6d84));
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a63ee0 */
GEN_FRAME float10 F_00a63ee0(float gen_a0)
{
  GEN_ENTER(0xa63ee0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a63f00 */
GEN_NOFRAME uint GEN_THISCALL F_00a63f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa63f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00406bb0(0x187040,0,0);
  *(uint *)((int)this + 0x3f8) = uVar1;
  *(undefined4 *)((int)this + 0x400) = 0x2f50;
  uVar1 = F_00406bb0(0x127b40,0,0);
  *(uint *)((int)this + 0x3fc) = uVar1;
  puVar3 = this;
  for (iVar2 = 100; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0;
  }
  puVar3 = (undefined4 *)((int)this + 0x19c);
  for (iVar2 = 0x96; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined1 *)((int)this + 0x408) = 1;
  return 0;
}

/* ref: FUN_00a63f80 */
GEN_FRAME unsigned int GEN_THISCALL F_00a63f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa63f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 < 100) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
    if (piVar1 != (int *)0x0) {
      bVar2 = piVar1 == REFG(int * PTR32, 0x1379694);
      if (bVar2) {
        F_00afe380();
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1 GEN_EDX_ARG,0);
      *(undefined4 *)((int)this + param_1 * 4 + 4) = 0;
    }
    F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
    if (bVar2) {
      REFG(int * PTR32, 0x1379694) = (int *)0x0;
    }
  }
  return;
}

/* ref: FUN_00a64000 */
GEN_FRAME uint GEN_THISCALL F_00a64000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1;
  if ((int)param_1 < 100) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
    if ((piVar1 == (int *)0x0) || (piVar1[0x1d] != param_2)) {
      uVar2 = F_00a54fa0(&REFG(undefined * PTR32, 0x1334920) GEN_EDX_FWD,param_2);
    }
    else {
      bVar3 = piVar1 == REFG(int * PTR32, 0x1379694);
      if (bVar3) {
        F_00afde00(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,0);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1 GEN_EDX_ARG,0);
      *(undefined4 *)((int)this + param_1 * 4 + 4) = 0;
      uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
      if (bVar3) {
        REFG(int * PTR32, 0x1379694) = (int *)0x0;
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a64090 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    this = (undefined *)((int)this + 4);
    bVar3 = false;
    if (iVar2 < 100) {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1 != (int *)0x0) {
        bVar3 = piVar1 == REFG(int * PTR32, 0x1379694);
        if (bVar3) {
          F_00afe380();
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1 GEN_EDX_ARG,0);
        *(int *)this = 0;
      }
      F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
      if (bVar3) {
        REFG(int * PTR32, 0x1379694) = (int *)0x0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  return;
}

/* ref: FUN_00a64110 */
GEN_NOFRAME uint GEN_THISCALL F_00a64110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64110u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    in_ecx = in_ecx + 1;
    if (*in_ecx == 0) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 100);
  return 0xffffffff;
}

/* ref: FUN_00a641b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a641b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa641b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x3f4);
  if (0 < iVar2) {
    piVar1 = (int *)((int)this + 0x19c);
    do {
      (*param_1)(*piVar1 + param_2);
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00a642c0 */
GEN_FRAME uint GEN_FASTCALL F_00a642c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa642c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_3 + 400 + param_2 * 4);
  uVar2 = *(undefined4 *)(param_3 + param_2 * 4);
  *(undefined4 *)(param_3 + param_2 * 4) = *(undefined4 *)(param_3 + param_1 * 4);
  *(undefined4 *)(param_3 + 400 + param_2 * 4) = *(undefined4 *)(param_3 + 400 + param_1 * 4);
  *(undefined4 *)(param_3 + param_1 * 4) = uVar2;
  *(undefined4 *)(param_3 + 400 + param_1 * 4) = uVar1;
  return param_3;
}

/* ref: FUN_00a64300 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64300u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  
  uVar6 = param_2;
  do {
    fVar8 = (float10)*((float *)GEN_TOP((param_1 + 400 + ((int)(uVar6 + param_3) >> 1) * 4)));
    uVar4 = uVar6;
    iVar7 = param_3;
    while( true ) {
      pfVar5 = (float *)(param_1 + 400 + uVar4 * 4);
      if ((float10)*pfVar5 < fVar8) {
        do {
          pfVar1 = pfVar5 + 1;
          pfVar5 = pfVar5 + 1;
          uVar4 = uVar4 + 1;
        } while ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*pfVar1)) && !(fVar8 <= (float10)*pfVar1));
      }
      pfVar5 = (float *)(param_1 + 400 + iVar7 * 4);
      if (fVar8 < (float10)*pfVar5) {
        do {
          pfVar1 = pfVar5 - 1;
          pfVar5 = pfVar5 - 1;
          iVar7 = iVar7 - 1;
        } while ((!GEN_ISNAN((float10)*pfVar1) && !GEN_ISNAN(fVar8)) && !((float10)*pfVar1 <= fVar8));
      }
      if (iVar7 <= (int)uVar4) break;
      uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
      uVar2 = *(undefined4 *)(param_1 + 400 + uVar4 * 4);
      *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + iVar7 * 4);
      *(undefined4 *)(param_1 + 400 + uVar4 * 4) = *(undefined4 *)(param_1 + 400 + iVar7 * 4);
      *(undefined4 *)(param_1 + iVar7 * 4) = uVar3;
      *(undefined4 *)(param_1 + 400 + iVar7 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      iVar7 = iVar7 - 1;
    }
    if ((int)uVar6 < (int)(uVar4 - 1)) {
      F_00a64300(param_1 GEN_EDX_FWD,uVar6,uVar4 - 1);
    }
    uVar6 = iVar7 + 1;
  } while ((int)uVar6 < param_3);
  return 0;
}

/* ref: FUN_00a643d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a643d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa643d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa0be0(*(undefined * PTR32 *)this GEN_EDX_FWD);
    }
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return;
}

/* ref: FUN_00a64400 */
GEN_NOFRAME unsigned int F_00a64400(void)
{
  GEN_ENTER(0xa64400u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    F_00aa0c40(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00a64420 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a64420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa64420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = 100;
  do {
    this = (undefined *)((int)this + 4);
    if (*(undefined * PTR32 *)this != (undefined *)0x0) {
      F_00aa8770(*(undefined * PTR32 *)this GEN_EDX_FWD);
    }
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return;
}

/* ref: FUN_00a64450 */
GEN_FRAME uint GEN_THISCALL F_00a64450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  while( true ) {
    piVar2 = piVar2 + 1;
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x74) == param_1)) break;
    iVar1 = iVar1 + 1;
    if (99 < iVar1) {
      return 0;
    }
  }
  return *(uint *)((int)this + iVar1 * 4 + 4);
}

/* ref: FUN_00a64490 */
GEN_FRAME uint GEN_THISCALL F_00a64490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa64490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  int * piVar8;
  bool bVar9;
  
  if (param_1 != (byte *)0x0) {
    iVar6 = 0;
    piVar8 = this;
    do {
      piVar8 = piVar8 + 1;
      piVar2 = (int *)*piVar8;
      if (piVar2 != (int *)0x0) {
        if ((char)param_2 != '\0') {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD);
          if (uVar3 != 1) goto LAB_00a644f9;
        }
        pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)*piVar8 + 0xc))((int *)*piVar8 GEN_EDX_ARG)));
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00a644f0: ;
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00a644f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00a644f0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00a644f5: ;
        if (iVar5 == 0) {
          return *(uint *)((int)this + iVar6 * 4 + 4);
        }
      }
LAB_00a644f9: ;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 100);
  }
  return 0;
}

/* ref: FUN_00a64520 */
GEN_FRAME uint GEN_THISCALL F_00a64520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
        if (uVar2 == 2) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          if (((char)uVar2 == '\x03') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64590 */
GEN_FRAME uint GEN_THISCALL F_00a64590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    piVar4 = this;
    do {
      piVar4 = piVar4 + 1;
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
        if (uVar2 == 2) {
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          if (((char)uVar2 == '\x02') && (*(int *)(*piVar4 + 0x84) == *(int *)(param_1 + 0x74))) {
            return *(uint *)((int)this + iVar3 * 4 + 4);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0;
}

/* ref: FUN_00a64600 */
GEN_FRAME unsigned int GEN_THISCALL F_00a64600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa64600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 8);
  iVar3 = 0x14;
  do {
    iVar1 = piVar2[-1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[3];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return 0;
}

