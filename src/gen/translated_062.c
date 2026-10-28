#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00737ff0 */
GEN_FRAME uint F_00737ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x737ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738010 */
GEN_FRAME uint F_00738010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738030 */
GEN_FRAME uint F_00738030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738050 */
GEN_FRAME uint F_00738050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_00738070 */
GEN_FRAME uint F_00738070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00738090 */
GEN_FRAME unsigned int F_00738090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_007380b0 */
GEN_FRAME unsigned int F_007380b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7380b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_007380d0 */
GEN_FRAME unsigned int F_007380d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7380d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c GEN_EDX_ARG,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return;
}

/* ref: FUN_00738130 */
GEN_FRAME uint F_00738130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738150 */
GEN_FRAME uint F_00738150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738170 */
GEN_FRAME uint F_00738170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00738190 */
GEN_FRAME uint F_00738190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_007381c0 */
GEN_FRAME unsigned int F_007381c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7381c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_007381e0 */
GEN_FRAME unsigned int F_007381e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7381e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00738220 */
GEN_FRAME uint F_00738220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738220u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00738250 */
GEN_FRAME unsigned int F_00738250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00738330 */
GEN_FRAME uint GEN_THISCALL F_00738330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738350 */
GEN_FRAME uint GEN_THISCALL F_00738350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738370 */
GEN_FRAME uint F_00738370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_007383b0 */
GEN_FRAME uint GEN_THISCALL F_007383b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7383b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007383e0 */
GEN_FRAME uint GEN_THISCALL F_007383e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7383e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738420 */
GEN_FRAME uint GEN_THISCALL F_00738420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738440 */
GEN_FRAME uint GEN_THISCALL F_00738440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738480 */
GEN_FRAME uint GEN_THISCALL F_00738480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384a0 */
GEN_FRAME uint GEN_THISCALL F_007384a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384d0 */
GEN_FRAME uint GEN_THISCALL F_007384d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007384f0 */
GEN_FRAME uint GEN_THISCALL F_007384f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7384f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738510 */
GEN_FRAME uint GEN_THISCALL F_00738510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738530 */
GEN_FRAME uint GEN_THISCALL F_00738530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007385a0 */
GEN_FRAME uint F_007385a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7385a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_007385c0 */
GEN_FRAME unsigned int F_007385c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7385c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00720120(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_007385e0 */
GEN_FRAME uint GEN_STDCALL F_007385e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7385e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00738600 */
GEN_FRAME uint GEN_STDCALL F_00738600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
    param_1[2] = *(undefined4 *)(param_2 + 8);
    param_1[4] = *(undefined4 *)(param_2 + 0x10);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x18);
    param_1[7] = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
    param_1[9] = *(undefined4 *)(param_2 + 0x24);
    param_1[10] = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x2c);
  }
  return (uint)param_1;
}

/* ref: FUN_00738650 */
GEN_FRAME unsigned int GEN_STDCALL F_00738650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738650u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00728760(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00738670 */
GEN_FRAME uint GEN_THISCALL F_00738670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x738670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00738690 */
GEN_FRAME uint GEN_THISCALL F_00738690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x738690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  *(undefined1 *)this = *param_1;
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar4 = (undefined4 *)((int)this + 8);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd8);
  puVar4 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  iVar1 = (int)param_1 - (int)this;
  param_1 = (undefined1 *)0x1;
  puVar3 = ((undefined1 *)GEN_TOP(((int)puVar2 + (8 - (int)puVar3)))) + (int)this;
  do {
    *(undefined4 *)(puVar3 - 8) = *puVar2;
    *(undefined4 *)(puVar3 - 4) = puVar2[1];
    F_0042cbc0(puVar3 GEN_EDX_FWD,puVar3 + iVar1);
    puVar2 = puVar2 + 0x17;
    puVar3 = puVar3 + 0x5c;
    param_1 = (undefined1 *)((int)param_1 - 1);
  } while (-1 < (int)param_1);
  return (uint)this;
}

/* ref: FUN_00738710 */
GEN_FRAME uint GEN_THISCALL F_00738710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x738710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_007387d0 */
GEN_NOFRAME uint GEN_THISCALL F_007387d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7387d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00738820 */
GEN_FRAME uint F_00738820(unsigned int gen_a0)
{
  GEN_ENTER(0x738820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00738830 */
GEN_NOFRAME uint GEN_THISCALL F_00738830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728950(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738840 */
GEN_FRAME uint GEN_THISCALL F_00738840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_00738890 */
GEN_NOFRAME uint GEN_THISCALL F_00738890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007289c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007388a0 */
GEN_FRAME uint GEN_THISCALL F_007388a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7388a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  F_0042cbc0((undefined *)((int)this + 0x58) GEN_EDX_ARG,param_2 + 0x54);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_2 + 0xa8);
  return (uint)this;
}

/* ref: FUN_007388f0 */
GEN_NOFRAME uint GEN_THISCALL F_007388f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7388f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728a30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738910 */
GEN_NOFRAME uint GEN_THISCALL F_00738910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728aa0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738920 */
GEN_FRAME uint GEN_THISCALL F_00738920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_00738960 */
GEN_NOFRAME uint GEN_THISCALL F_00738960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728b10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738a60 */
GEN_FRAME uint GEN_THISCALL F_00738a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738a80 */
GEN_NOFRAME uint GEN_THISCALL F_00738a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728c60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738a90 */
GEN_FRAME uint GEN_THISCALL F_00738a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ab0 */
GEN_FRAME uint GEN_THISCALL F_00738ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ad0 */
GEN_NOFRAME uint GEN_THISCALL F_00738ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728cc0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00738ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728d20(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738af0 */
GEN_FRAME uint GEN_THISCALL F_00738af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b10 */
GEN_NOFRAME uint GEN_THISCALL F_00738b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728d80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738b20 */
GEN_FRAME uint GEN_THISCALL F_00738b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b40 */
GEN_NOFRAME uint GEN_THISCALL F_00738b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728e00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738b50 */
GEN_NOFRAME uint GEN_THISCALL F_00738b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728e80(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738b60 */
GEN_FRAME uint GEN_THISCALL F_00738b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738b80 */
GEN_FRAME uint GEN_THISCALL F_00738b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ba0 */
GEN_NOFRAME uint GEN_THISCALL F_00738ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728f00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738bb0 */
GEN_FRAME uint GEN_THISCALL F_00738bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738bd0 */
GEN_NOFRAME uint GEN_THISCALL F_00738bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728a30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738be0 */
GEN_NOFRAME uint GEN_THISCALL F_00738be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00728f60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738bf0 */
GEN_FRAME uint GEN_THISCALL F_00738bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c20 */
GEN_FRAME uint GEN_THISCALL F_00738c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c50 */
GEN_FRAME uint GEN_THISCALL F_00738c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738c70 */
GEN_NOFRAME uint GEN_THISCALL F_00738c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738c80 */
GEN_NOFRAME uint GEN_THISCALL F_00738c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729060(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738c90 */
GEN_FRAME uint GEN_THISCALL F_00738c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738cb0 */
GEN_FRAME uint GEN_THISCALL F_00738cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00738ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007290d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738cf0 */
GEN_FRAME uint GEN_THISCALL F_00738cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d10 */
GEN_FRAME uint GEN_THISCALL F_00738d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d30 */
GEN_NOFRAME uint GEN_THISCALL F_00738d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729130(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738d40 */
GEN_NOFRAME uint GEN_THISCALL F_00738d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00729190(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738d50 */
GEN_FRAME uint GEN_THISCALL F_00738d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738d70 */
GEN_NOFRAME uint GEN_THISCALL F_00738d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x738d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007289c0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00738d80 */
GEN_FRAME uint GEN_THISCALL F_00738d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738da0 */
GEN_FRAME uint GEN_THISCALL F_00738da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738dc0 */
GEN_FRAME uint GEN_THISCALL F_00738dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return (uint)this;
}

/* ref: FUN_00738df0 */
GEN_FRAME uint GEN_THISCALL F_00738df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00738e10 */
GEN_FRAME uint GEN_THISCALL F_00738e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  return (uint)this;
}

/* ref: FUN_00738e40 */
GEN_FRAME uint GEN_THISCALL F_00738e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00738e60 */
GEN_FRAME uint GEN_THISCALL F_00738e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738e80 */
GEN_FRAME uint GEN_THISCALL F_00738e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ea0 */
GEN_FRAME uint GEN_THISCALL F_00738ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00738ed0 */
GEN_FRAME uint GEN_THISCALL F_00738ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738ef0 */
GEN_FRAME uint GEN_THISCALL F_00738ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  return (uint)this;
}

/* ref: FUN_00738f20 */
GEN_FRAME uint GEN_THISCALL F_00738f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738f40 */
GEN_FRAME uint F_00738f40(unsigned int gen_a0)
{
  GEN_ENTER(0x738f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00738f50 */
GEN_FRAME uint F_00738f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x738f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00738f60 */
GEN_FRAME uint GEN_THISCALL F_00738f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00738f80 */
GEN_FRAME uint GEN_THISCALL F_00738f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738fa0 */
GEN_FRAME uint GEN_THISCALL F_00738fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00738fc0 */
GEN_FRAME uint GEN_THISCALL F_00738fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00738fe0 */
GEN_FRAME unsigned int F_00738fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x738fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 0x22;
    puVar3 = puVar2 + 0x22;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 0x22; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00739020 */
GEN_FRAME unsigned int F_00739020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x739020u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
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
      if (*(char *)((int)piVar4 + 0x19) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x19) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x19);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x19);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x19);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00739090 */
GEN_FRAME unsigned int F_00739090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_007390c0 */
GEN_FRAME uint F_007390c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7390c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0x58;
    puVar3 = param_3;
    do {
      *puVar3 = *(undefined2 *)(iVar2 - 0x58);
      F_0042ccf0(puVar3 + 2 GEN_EDX_ARG,iVar2 - 0x54);
      F_0042ccf0(puVar3 + 0x2c GEN_EDX_ARG,iVar2);
      puVar3[0x56] = *(undefined2 *)(iVar2 + 0x54);
      *(undefined4 *)(puVar3 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(puVar3 + 0x5a) = *(undefined4 *)(iVar2 + 0x5c);
      iVar1 = iVar2 + 0x60;
      puVar3 = puVar3 + 0x5c;
      iVar2 = iVar2 + 0xb8;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739130 */
GEN_FRAME uint F_00739130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x739130u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 8;
    puVar3 = param_3;
    do {
      *puVar3 = *(undefined1 *)(iVar2 - 8);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar2 - 4);
      F_0042ccf0(puVar3 + 8 GEN_EDX_ARG,iVar2);
      puVar3[0x5c] = *(undefined1 *)(iVar2 + 0x54);
      puVar3[0x5d] = *(undefined1 *)(iVar2 + 0x55);
      *(undefined4 *)(puVar3 + 0x60) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(puVar3 + 100) = *(undefined4 *)(iVar2 + 0x5c);
      *(undefined4 *)(puVar3 + 0x68) = *(undefined4 *)(iVar2 + 0x60);
      *(undefined4 *)(puVar3 + 0x6c) = *(undefined4 *)(iVar2 + 100);
      *(undefined4 *)(puVar3 + 0x70) = *(undefined4 *)(iVar2 + 0x68);
      *(undefined4 *)(puVar3 + 0x74) = *(undefined4 *)(iVar2 + 0x6c);
      *(undefined4 *)(puVar3 + 0x78) = *(undefined4 *)(iVar2 + 0x70);
      *(undefined4 *)(puVar3 + 0x7c) = *(undefined4 *)(iVar2 + 0x74);
      *(undefined4 *)(puVar3 + 0x80) = *(undefined4 *)(iVar2 + 0x78);
      *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar2 + 0x7c);
      *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar2 + 0x80);
      *(undefined4 *)(puVar3 + 0x8c) = *(undefined4 *)(iVar2 + 0x84);
      *(undefined4 *)(puVar3 + 0x90) = *(undefined4 *)(iVar2 + 0x88);
      *(undefined4 *)(puVar3 + 0x94) = *(undefined4 *)(iVar2 + 0x8c);
      *(undefined4 *)(puVar3 + 0x98) = *(undefined4 *)(iVar2 + 0x90);
      *(undefined4 *)(puVar3 + 0x9c) = *(undefined4 *)(iVar2 + 0x94);
      *(undefined4 *)(puVar3 + 0xa0) = *(undefined4 *)(iVar2 + 0x98);
      *(undefined4 *)(puVar3 + 0xa4) = *(undefined4 *)(iVar2 + 0x9c);
      *(undefined4 *)(puVar3 + 0xa8) = *(undefined4 *)(iVar2 + 0xa0);
      *(undefined4 *)(puVar3 + 0xac) = *(undefined4 *)(iVar2 + 0xa4);
      *(undefined4 *)(puVar3 + 0xb0) = *(undefined4 *)(iVar2 + 0xa8);
      *(undefined4 *)(puVar3 + 0xb4) = *(undefined4 *)(iVar2 + 0xac);
      *(undefined4 *)(puVar3 + 0xb8) = *(undefined4 *)(iVar2 + 0xb0);
      *(undefined4 *)(puVar3 + 0xbc) = *(undefined4 *)(iVar2 + 0xb4);
      *(undefined4 *)(puVar3 + 0xc0) = *(undefined4 *)(iVar2 + 0xb8);
      *(undefined4 *)(puVar3 + 0xc4) = *(undefined4 *)(iVar2 + 0xbc);
      *(undefined4 *)(puVar3 + 200) = *(undefined4 *)(iVar2 + 0xc0);
      *(undefined4 *)(puVar3 + 0xcc) = *(undefined4 *)(iVar2 + 0xc4);
      *(undefined4 *)(puVar3 + 0xd0) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)(puVar3 + 0xd4) = *(undefined4 *)(iVar2 + 0xcc);
      *(undefined4 *)(puVar3 + 0xd8) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)(puVar3 + 0xdc) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined4 *)(puVar3 + 0xe0) = *(undefined4 *)(iVar2 + 0xd8);
      *(undefined4 *)(puVar3 + 0xe4) = *(undefined4 *)(iVar2 + 0xdc);
      *(undefined4 *)(puVar3 + 0xe8) = *(undefined4 *)(iVar2 + 0xe0);
      *(undefined4 *)(puVar3 + 0xec) = *(undefined4 *)(iVar2 + 0xe4);
      *(undefined4 *)(puVar3 + 0xf0) = *(undefined4 *)(iVar2 + 0xe8);
      *(undefined4 *)(puVar3 + 0xf4) = *(undefined4 *)(iVar2 + 0xec);
      *(undefined4 *)(puVar3 + 0xf8) = *(undefined4 *)(iVar2 + 0xf0);
      *(undefined4 *)(puVar3 + 0xfc) = *(undefined4 *)(iVar2 + 0xf4);
      *(undefined4 *)(puVar3 + 0x100) = *(undefined4 *)(iVar2 + 0xf8);
      *(undefined4 *)(puVar3 + 0x104) = *(undefined4 *)(iVar2 + 0xfc);
      *(undefined4 *)(puVar3 + 0x108) = *(undefined4 *)(iVar2 + 0x100);
      *(undefined4 *)(puVar3 + 0x10c) = *(undefined4 *)(iVar2 + 0x104);
      *(undefined4 *)(puVar3 + 0x110) = *(undefined4 *)(iVar2 + 0x108);
      *(undefined4 *)(puVar3 + 0x114) = *(undefined4 *)(iVar2 + 0x10c);
      *(undefined4 *)(puVar3 + 0x118) = *(undefined4 *)(iVar2 + 0x110);
      *(undefined4 *)(puVar3 + 0x11c) = *(undefined4 *)(iVar2 + 0x114);
      *(undefined4 *)(puVar3 + 0x120) = *(undefined4 *)(iVar2 + 0x118);
      *(undefined4 *)(puVar3 + 0x124) = *(undefined4 *)(iVar2 + 0x11c);
      *(undefined4 *)(puVar3 + 0x128) = *(undefined4 *)(iVar2 + 0x120);
      *(undefined4 *)(puVar3 + 300) = *(undefined4 *)(iVar2 + 0x124);
      *(undefined4 *)(puVar3 + 0x130) = *(undefined4 *)(iVar2 + 0x128);
      *(undefined4 *)(puVar3 + 0x134) = *(undefined4 *)(iVar2 + 300);
      *(undefined4 *)(puVar3 + 0x138) = *(undefined4 *)(iVar2 + 0x130);
      *(undefined4 *)(puVar3 + 0x13c) = *(undefined4 *)(iVar2 + 0x134);
      iVar1 = iVar2 + 0x138;
      puVar3 = puVar3 + 0x140;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739400 */
GEN_FRAME unsigned int F_00739400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: FUN_00739440 */
GEN_FRAME unsigned int F_00739440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00739480 */
GEN_FRAME unsigned int F_00739480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 10;
    puVar3 = puVar2 + 10;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 10; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_007394b0 */
GEN_FRAME uint F_007394b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7394b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined2 * puVar1;
  undefined2 * puVar2;
  undefined2 * puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    puVar3 = param_3;
    do {
      *puVar3 = puVar2[-2];
      *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar2 - 1);
      puVar3[2] = *puVar2;
      puVar3[3] = puVar2[1];
      puVar3[4] = puVar2[2];
      puVar3[5] = puVar2[3];
      puVar3[6] = puVar2[4];
      puVar3[7] = puVar2[5];
      *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar2 + 6);
      *(undefined1 *)((int)puVar3 + 0x11) = *(undefined1 *)((int)puVar2 + 0xd);
      *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(puVar2 + 7);
      *(undefined1 *)((int)puVar3 + 0x13) = *(undefined1 *)((int)puVar2 + 0xf);
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(puVar2 + 8);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar2 + 10);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar2 + 0xc);
      *(undefined1 *)((int)puVar3 + 0x1d) = *(undefined1 *)((int)puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x10 GEN_EDX_ARG,puVar2 + 0xe);
      puVar1 = puVar2 + 0x38;
      puVar3 = puVar3 + 0x3a;
      puVar2 = puVar2 + 0x3a;
    } while (puVar1 != param_2);
    return (uint)puVar3;
  }
  return (uint)param_3;
}

/* ref: FUN_00739570 */
GEN_FRAME uint F_00739570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_007395b0 */
GEN_FRAME uint F_007395b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7395b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined1 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 8;
    do {
      *param_3 = *(undefined4 *)(puVar4 - 8);
      param_3[1] = *(undefined4 *)(puVar4 - 4);
      *(undefined1 *)(param_3 + 2) = *puVar4;
      param_3[3] = *(undefined4 *)(puVar4 + 4);
      *(undefined1 *)(param_3 + 4) = puVar4[8];
      *(undefined1 *)((int)param_3 + 0x11) = puVar4[9];
      *(undefined1 *)((int)param_3 + 0x12) = puVar4[10];
      param_3[5] = *(undefined4 *)(puVar4 + 0xc);
      param_3[6] = *(undefined4 *)(puVar4 + 0x10);
      F_0042ccf0(param_3 + 7 GEN_EDX_ARG,puVar4 + 0x14);
      puVar2 = param_3 + 0x50;
      puVar5 = (undefined4 *)(puVar4 + 0x68);
      puVar6 = param_3 + 0x1c;
      for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar1 = puVar4 + 0x138;
      puVar4 = puVar4 + 0x140;
      param_3 = puVar2;
    } while (puVar1 != param_2);
  }
  return (uint)param_3;
}

/* ref: FUN_00739630 */
GEN_FRAME uint GEN_THISCALL F_00739630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739650 */
GEN_FRAME uint GEN_THISCALL F_00739650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739670 */
GEN_FRAME uint GEN_THISCALL F_00739670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739690 */
GEN_FRAME uint GEN_THISCALL F_00739690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396b0 */
GEN_FRAME uint GEN_THISCALL F_007396b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396d0 */
GEN_FRAME uint GEN_THISCALL F_007396d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007396f0 */
GEN_FRAME uint GEN_THISCALL F_007396f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7396f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739710 */
GEN_FRAME uint GEN_THISCALL F_00739710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739730 */
GEN_FRAME uint GEN_THISCALL F_00739730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739750 */
GEN_FRAME uint GEN_THISCALL F_00739750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739770 */
GEN_FRAME uint GEN_THISCALL F_00739770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739790 */
GEN_FRAME uint GEN_THISCALL F_00739790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397b0 */
GEN_FRAME uint GEN_THISCALL F_007397b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397d0 */
GEN_FRAME uint GEN_THISCALL F_007397d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_007397f0 */
GEN_FRAME uint GEN_THISCALL F_007397f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7397f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739810 */
GEN_FRAME uint GEN_THISCALL F_00739810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739830 */
GEN_FRAME uint GEN_THISCALL F_00739830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739850 */
GEN_FRAME uint GEN_THISCALL F_00739850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739870 */
GEN_FRAME uint GEN_THISCALL F_00739870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)this = *param_1;
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = (undefined4 *)((int)this + 8);
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xd8);
  puVar3 = (undefined4 *)((int)this + 0xd8);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  iVar1 = (int)param_1 - (int)this;
  puVar3 = (undefined4 *)((int)this + 0xf8);
  param_1 = (undefined1 *)0x2;
  do {
    puVar3[-1] = *puVar2;
    *puVar3 = *(undefined4 *)(iVar1 + (int)puVar3);
    F_0042ccf0(puVar3 + 1 GEN_EDX_FWD,puVar2 + 2);
    puVar2 = puVar2 + 0x17;
    puVar3 = puVar3 + 0x17;
    param_1 = (undefined1 *)((int)param_1 - 1);
  } while (param_1 != (undefined1 *)0x0);
  return (uint)this;
}

/* ref: FUN_007398f0 */
GEN_NOFRAME uint GEN_THISCALL F_007398f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7398f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00726b40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00739910 */
GEN_FRAME byte GEN_THISCALL F_00739910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x10,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x10 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_007399e0 */
GEN_NOFRAME uint GEN_THISCALL F_007399e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7399e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c190(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_007399f0 */
GEN_NOFRAME uint GEN_THISCALL F_007399f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x7399f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c1f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00739a00 */
GEN_NOFRAME uint GEN_THISCALL F_00739a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x739a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c250(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00739a10 */
GEN_FRAME uint GEN_STDCALL F_00739a10(unsigned int gen_a0)
{
  GEN_ENTER(0x739a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00739a20 */
GEN_FRAME uint GEN_STDCALL F_00739a20(unsigned int gen_a0)
{
  GEN_ENTER(0x739a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00739a40 */
GEN_NOFRAME uint GEN_THISCALL F_00739a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x739a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c310(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00739a60 */
GEN_NOFRAME uint GEN_THISCALL F_00739a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x739a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0072c380(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00739a70 */
GEN_FRAME uint GEN_THISCALL F_00739a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739a90 */
GEN_FRAME uint GEN_THISCALL F_00739a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739ab0 */
GEN_FRAME uint GEN_THISCALL F_00739ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739ad0 */
GEN_FRAME uint GEN_THISCALL F_00739ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739af0 */
GEN_FRAME uint GEN_THISCALL F_00739af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739b10 */
GEN_FRAME uint F_00739b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00739b30 */
GEN_FRAME uint F_00739b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00739b50 */
GEN_FRAME uint GEN_THISCALL F_00739b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4) GEN_EDX_FWD,param_2);
  return (uint)this;
}

/* ref: FUN_00739b80 */
GEN_FRAME uint GEN_THISCALL F_00739b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *param_1;
  puVar2 = param_2;
  puVar3 = this;
  for (iVar1 = 10; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x2c) = param_2[10];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_2 + 0xb);
  F_0042cbc0((undefined *)((int)this + 0x34) GEN_EDX_FWD,param_2 + 0xc);
  *(undefined4 *)((int)this + 0x88) = param_2[0x21];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_2 + 0x22);
  return (uint)this;
}

/* ref: FUN_00739bf0 */
GEN_FRAME byte GEN_THISCALL F_00739bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00739c10 */
GEN_FRAME unsigned int F_00739c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00739c30 */
GEN_FRAME uint F_00739c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880(param_2 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739c40 */
GEN_FRAME uint F_00739c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00739c70 */
GEN_FRAME uint F_00739c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: FUN_00739d00 */
GEN_FRAME uint F_00739d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this GEN_EDX_ARG,iVar1);
    }
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00739d40 */
GEN_FRAME unsigned int F_00739d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 4) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
    }
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00739d90 */
GEN_FRAME unsigned int F_00739d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00739dc0 */
GEN_FRAME uint GEN_THISCALL F_00739dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739de0 */
GEN_FRAME uint GEN_THISCALL F_00739de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e00 */
GEN_FRAME uint GEN_THISCALL F_00739e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e20 */
GEN_FRAME uint GEN_THISCALL F_00739e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e40 */
GEN_FRAME uint GEN_THISCALL F_00739e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x739e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00739e60 */
GEN_FRAME unsigned int GEN_STDCALL F_00739e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x739e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0072cf40(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00739e80 */
GEN_FRAME uint GEN_STDCALL F_00739e80(unsigned int gen_a0)
{
  GEN_ENTER(0x739e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 8) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739ea0 */
GEN_FRAME uint GEN_STDCALL F_00739ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x18) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739ec0 */
GEN_FRAME uint GEN_STDCALL F_00739ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_1 + 0x58) GEN_EDX_ARG);
  uVar1 = F_0042c880((undefined *)(param_1 + 4) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739ee0 */
GEN_FRAME uint GEN_STDCALL F_00739ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x739ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x1c) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739f00 */
GEN_FRAME uint GEN_STDCALL F_00739f00(unsigned int gen_a0)
{
  GEN_ENTER(0x739f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_1 + 0x20) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00739f20 */
GEN_FRAME uint GEN_THISCALL F_00739f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00739f40 */
GEN_FRAME uint GEN_THISCALL F_00739f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00739f60 */
GEN_FRAME uint GEN_THISCALL F_00739f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58) GEN_EDX_ARG,param_1 + 0x16);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_1 + 0x2b);
  return (uint)this;
}

/* ref: FUN_00739fa0 */
GEN_FRAME uint GEN_THISCALL F_00739fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00739fc0 */
GEN_FRAME uint GEN_THISCALL F_00739fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00739fe0 */
GEN_FRAME uint GEN_THISCALL F_00739fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x739fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073a000 */
GEN_FRAME uint GEN_THISCALL F_0073a000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a020 */
GEN_FRAME uint GEN_THISCALL F_0073a020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0073a040 */
GEN_FRAME uint GEN_THISCALL F_0073a040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073a060 */
GEN_FRAME uint GEN_THISCALL F_0073a060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0073a080 */
GEN_FRAME uint GEN_THISCALL F_0073a080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a0b0 */
GEN_FRAME uint GEN_THISCALL F_0073a0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a0e0 */
GEN_FRAME uint GEN_THISCALL F_0073a0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  iVar1 = 10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 - 1;
    *puVar3 = *puVar2;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  F_0042cbc0((undefined *)((int)this + 0x34) GEN_EDX_FWD,param_1 + 0xd);
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x23);
  return (uint)this;
}

/* ref: FUN_0073a140 */
GEN_FRAME uint GEN_THISCALL F_0073a140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  iVar1 = 1;
  this_00 = (undefined *)((int)this + 0x1b4);
  do {
    this_00 = (undefined *)((int)this_00 - 0x5c);
    F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073a180 */
GEN_FRAME uint GEN_THISCALL F_0073a180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1 + 3);
  return (uint)this;
}

/* ref: FUN_0073a1b0 */
GEN_FRAME uint GEN_THISCALL F_0073a1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a1d0 */
GEN_FRAME byte GEN_THISCALL F_0073a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x14,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x14 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073a230 */
GEN_FRAME byte GEN_THISCALL F_0073a230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0xb8,0,800);
    *(uint *)((int)this + 8) = param_1 * 0xb8 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073a290 */
GEN_FRAME uint GEN_THISCALL F_0073a290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073a2b0 */
GEN_FRAME uint GEN_THISCALL F_0073a2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a2d0 */
GEN_FRAME uint GEN_THISCALL F_0073a2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073a2f0 */
GEN_FRAME uint GEN_THISCALL F_0073a2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58) GEN_EDX_ARG,param_1 + 0x16);
  *(undefined1 *)((int)this + 0xac) = *(undefined1 *)(param_1 + 0x2b);
  return (uint)this;
}

/* ref: FUN_0073a330 */
GEN_FRAME uint GEN_THISCALL F_0073a330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_0072cbb0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a360 */
GEN_FRAME uint GEN_THISCALL F_0073a360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  F_00720450((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a390 */
GEN_FRAME uint GEN_THISCALL F_0073a390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_0042cc20(this GEN_EDX_FWD,*param_1,REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a3c0 */
GEN_FRAME uint GEN_THISCALL F_0073a3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  iVar1 = 10;
  puVar2 = param_1;
  puVar3 = this;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 - 1;
    *puVar3 = *puVar2;
  }
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  F_0042cbc0((undefined *)((int)this + 0x34) GEN_EDX_FWD,param_1 + 0xd);
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined1 *)((int)this + 0x8c) = *(undefined1 *)(param_1 + 0x23);
  return (uint)this;
}

/* ref: FUN_0073a430 */
GEN_FRAME uint GEN_THISCALL F_0073a430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  F_0042cbc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_1 + 3);
  return (uint)this;
}

/* ref: FUN_0073a460 */
GEN_FRAME uint GEN_THISCALL F_0073a460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0073a480 */
GEN_FRAME uint GEN_THISCALL F_0073a480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a4a0 */
GEN_FRAME uint GEN_THISCALL F_0073a4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0073a4d0 */
GEN_FRAME unsigned int F_0073a4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0073a500 */
GEN_FRAME uint GEN_THISCALL F_0073a500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0073a520 */
GEN_FRAME unsigned int F_0073a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_0073a540 */
GEN_FRAME uint F_0073a540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_0073a570 */
GEN_FRAME uint F_0073a570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a590 */
GEN_FRAME uint F_0073a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a5b0 */
GEN_FRAME uint F_0073a5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a5d0 */
GEN_FRAME uint F_0073a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a5f0 */
GEN_FRAME unsigned int F_0073a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0073a620 */
GEN_FRAME uint F_0073a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a640 */
GEN_FRAME uint F_0073a640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a660 */
GEN_FRAME uint GEN_THISCALL F_0073a660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_0073a6a0 */
GEN_FRAME uint GEN_THISCALL F_0073a6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_0073a6d0 */
GEN_FRAME uint GEN_THISCALL F_0073a6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_0073a700 */
GEN_FRAME uint GEN_THISCALL F_0073a700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a720 */
GEN_FRAME uint GEN_THISCALL F_0073a720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_0073a760 */
GEN_FRAME uint GEN_THISCALL F_0073a760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_0073a790 */
GEN_FRAME uint GEN_THISCALL F_0073a790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_0073a7c0 */
GEN_FRAME uint GEN_THISCALL F_0073a7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0073a7e0 */
GEN_FRAME uint F_0073a7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a820 */
GEN_FRAME uint F_0073a820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a860 */
GEN_FRAME uint F_0073a860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0073a890 */
GEN_FRAME uint F_0073a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0072db20(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_0073a8b0 */
GEN_FRAME unsigned int F_0073a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c GEN_EDX_ARG,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return;
}

/* ref: FUN_0073a910 */
GEN_FRAME unsigned int F_0073a910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73a910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *param_3;
    F_0042cbc0(param_2 + 2 GEN_EDX_ARG,param_3 + 2);
    F_0042cbc0(param_2 + 0x2c GEN_EDX_ARG,param_3 + 0x2c);
    param_2[0x56] = param_3[0x56];
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x5a);
  }
  return;
}

/* ref: FUN_0073a970 */
GEN_FRAME uint GEN_THISCALL F_0073a970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf0 */
GEN_FRAME uint GEN_THISCALL F_0073a9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73a9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8b60));
  if (this[0xc] == (undefined1)0x0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
    if (piVar1 != (int *)0x0) {
      uVar3 = 1;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
      uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
      if (uVar2 != 0) {
        F_007e3970(uVar2 GEN_EDX_ARG);
      }
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b8a64));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073aa00 */
GEN_NOFRAME uint GEN_THISCALL F_0073aa00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x73aa00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  char * pcVar2;
  bool bVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined * puVar6;
  int * piVar7;
  undefined * pvVar8;
  int iVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)(REFG(int, 0x1488344) + 0x100);
  piVar7 = *(int * PTR32 *)((int)this + 0x1c);
  if ((piVar7 != (int *)0x0) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xb8))(piVar7 GEN_EDX_FWD), (char)uVar4 != '\0')
     ) {
    pvVar8 = *(undefined * PTR32 *)((int)this + 0x1c);
    if (*(char *)((int)this + 0x35) == '\0') {
      if (*(int *)((int)this + 0x28) != 0) {
        F_006d4be0(pvVar8,*(int *)((int)this + 0x28),0,1,0);
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x60)) = 0x278;
      uVar4 = F_0042a970((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      if (uVar4 < 0x40) {
        if (0xf < uVar4) {
          (*(undefined4 *)(gen_frame + 0x60)) = 0x279;
        }
      }
      else {
        (*(undefined4 *)(gen_frame + 0x60)) = 0x27a;
      }
      (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
      F_00aa0000(pvVar8 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x60)),0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    }
    iVar9 = *(int *)((int)this + 0x2c);
    if (iVar9 != 0) {
      (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
      (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac0)));
      (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      F_00aa0000(pvVar8 GEN_EDX_ARG,iVar9,0,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
    }
    if (*(int *)((int)this + 0x30) == 0) {
      if (*(char *)((int)this + 0x34) != '\0') {
        F_00aa05d0(pvVar8 GEN_EDX_ARG,0);
      }
    }
    else {
      F_006d4be0(pvVar8,*(int *)((int)this + 0x30),0,0,(uint)*(byte *)((int)this + 0x34));
    }
  }
  piVar7 = *(int * PTR32 *)((int)this + 0x1c);
  if ((piVar7 == (int *)0x0) || (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xb8))(piVar7 GEN_EDX_ARG), (char)uVar4 == '\0')
     ) {
    (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = &REFG(undefined1, 0x107fc63);
  }
  else {
    puVar5 = ((undefined1 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xc))))(*(int * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG)));
    (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = puVar5;
  }
  pcVar2 = (char *)*(*(undefined4 * PTR32 *)(gen_frame + 0x5c));
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  if (*pcVar2 == '\0') {
    puVar6 = &REFG(undefined, 0x10919e8);
  }
  else {
    puVar6 = (undefined *)F_0042a990((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  }
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)) GEN_EDX_ARG,6);
  (*(undefined * PTR32 *)(gen_frame + 0x6c)) = puVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,6);
  cVar1 = *(char *)((int)this + 0x36);
  (*(undefined1 * PTR32 *)(gen_frame + 0x74)) = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x78)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x7c)) = (uint)(cVar1 == '\0');
  uVar10 = *(undefined4 *)((int)this + 0x18);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x84)) = uVar10;
  uVar10 = *(undefined4 *)((int)this + 0x24);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x94)) = uVar10;
  bVar3 = *(int *)((int)this + 0x20) < 1;
  if (bVar3) {
    *(int *)((int)this + 0x40) = (int)this + 0x38;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,4);
    (*(uint *)(gen_frame + 0x8c)) = 0;
  }
  else {
    *(int *)((int)this + 0x40) = (int)this + 0x3c;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,4);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - 1;
    (*(uint *)(gen_frame + 0x8c)) = 1;
  }
  (*(uint *)(gen_frame + 0x8c)) = (uint)!bVar3;
  piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar10 = 0x39;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x48))(piVar7 GEN_EDX_ARG);
  pvVar8 = (undefined *)F_00763050(uVar4 GEN_EDX_ARG,uVar10);
  if (pvVar8 != (undefined *)0x0) {
    if (*(int *)((int)this + 8) == 0) {
      uVar4 = F_0086aef0(pvVar8 GEN_EDX_ARG,8,&(*(undefined4 *)(gen_frame + 0x68)),this,0);
      *(uint *)((int)this + 8) = uVar4;
    }
    else {
      F_007d0ef0(pvVar8 GEN_EDX_ARG,*(int *)((int)this + 8),8,&(*(undefined4 *)(gen_frame + 0x68)));
    }
  }
  puVar5 = ((undefined1 *)(gen_frame + 0xa8));
  iVar9 = 7;
  do {
    puVar5 = puVar5 - 8;
    uVar4 = F_005a2670(puVar5 GEN_EDX_ARG);
    iVar9 = iVar9 - 1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0) GEN_EDX_ARG);
  return uVar4;
}

/* ref: Client::Game::Event::LuaActor::vf0 */
GEN_FRAME uint GEN_THISCALL F_0073ad60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(this + 8 GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaEventObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_0073adb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(this + 8 GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Event::LuaAetheryte::vf0 */
GEN_FRAME uint GEN_THISCALL F_0073ae00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)(this + 8) != '\0') {
    uVar1 = F_0042a990(this + 8 GEN_EDX_FWD);
    F_00a023f0(*(undefined * PTR32 *)(this + 0x5c) GEN_EDX_ARG,uVar1);
  }
  F_0042c880(this + 8 GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0073ae50 */
GEN_FRAME uint GEN_THISCALL F_0073ae50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073ae80 */
GEN_FRAME uint GEN_THISCALL F_0073ae80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ae80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aea0 */
GEN_FRAME uint GEN_THISCALL F_0073aea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73aea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aec0 */
GEN_FRAME uint GEN_THISCALL F_0073aec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73aec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073aed0 */
GEN_FRAME uint GEN_THISCALL F_0073aed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73aed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af10 */
GEN_FRAME uint GEN_THISCALL F_0073af10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73af10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073af20 */
GEN_FRAME uint GEN_THISCALL F_0073af20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73af20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af40 */
GEN_FRAME uint GEN_THISCALL F_0073af40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73af40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073af50 */
GEN_FRAME uint GEN_THISCALL F_0073af50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73af50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073af90 */
GEN_FRAME uint GEN_THISCALL F_0073af90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73af90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073afb0 */
GEN_FRAME uint GEN_THISCALL F_0073afb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73afb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073afc0 */
GEN_FRAME uint GEN_THISCALL F_0073afc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73afc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b020 */
GEN_FRAME uint GEN_THISCALL F_0073b020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b030 */
GEN_FRAME uint GEN_THISCALL F_0073b030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b050 */
GEN_FRAME uint GEN_THISCALL F_0073b050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b060 */
GEN_FRAME uint GEN_THISCALL F_0073b060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b080 */
GEN_FRAME uint GEN_THISCALL F_0073b080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b090 */
GEN_FRAME uint GEN_THISCALL F_0073b090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b0a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0073b0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_FWD,0);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return;
}

/* ref: FUN_0073b0e0 */
GEN_FRAME uint GEN_THISCALL F_0073b0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b0e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b100 */
GEN_FRAME byte GEN_THISCALL F_0073b100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0x1c < param_1) {
                    
    F_00c457e7("invalid bitset<N> position");
  }
  return (*((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4))) & 1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_0073b140 */
GEN_FRAME uint GEN_THISCALL F_0073b140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b160 */
GEN_FRAME uint GEN_THISCALL F_0073b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b170 */
GEN_FRAME uint GEN_THISCALL F_0073b170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b190 */
GEN_FRAME uint GEN_THISCALL F_0073b190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b1a0 */
GEN_FRAME uint GEN_THISCALL F_0073b1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b1c0 */
GEN_FRAME uint GEN_THISCALL F_0073b1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b1d0 */
GEN_FRAME uint GEN_THISCALL F_0073b1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b1f0 */
GEN_FRAME uint GEN_THISCALL F_0073b1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b200 */
GEN_FRAME uint GEN_THISCALL F_0073b200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b210 */
GEN_FRAME uint GEN_THISCALL F_0073b210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b230 */
GEN_FRAME uint GEN_THISCALL F_0073b230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b250 */
GEN_FRAME uint GEN_THISCALL F_0073b250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b260 */
GEN_FRAME uint GEN_THISCALL F_0073b260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b270 */
GEN_NOFRAME uint GEN_THISCALL F_0073b270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724c40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b280 */
GEN_FRAME uint GEN_THISCALL F_0073b280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724c40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073b2a0 */
GEN_NOFRAME uint GEN_THISCALL F_0073b2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007316f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b2b0 */
GEN_FRAME byte GEN_THISCALL F_0073b2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_0073b2d0 */
GEN_FRAME byte GEN_THISCALL F_0073b2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b300 */
GEN_NOFRAME uint GEN_THISCALL F_0073b300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724ce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b310 */
GEN_FRAME uint GEN_THISCALL F_0073b310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724ce0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073b360 */
GEN_FRAME uint GEN_THISCALL F_0073b360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b370 */
GEN_FRAME uint GEN_THISCALL F_0073b370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b380 */
GEN_FRAME byte GEN_THISCALL F_0073b380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b3b0 */
GEN_FRAME uint GEN_THISCALL F_0073b3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b3c0 */
GEN_FRAME uint GEN_THISCALL F_0073b3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b3d0 */
GEN_FRAME byte GEN_THISCALL F_0073b3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b410 */
GEN_NOFRAME uint GEN_THISCALL F_0073b410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00724e40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b420 */
GEN_FRAME uint GEN_THISCALL F_0073b420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73b420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00724e40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_0073b440 */
GEN_FRAME byte GEN_THISCALL F_0073b440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b460 */
GEN_FRAME byte GEN_THISCALL F_0073b460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FormatStringCallback_VTalkCallback_Event_Game_Client_Event::vf1 */
GEN_FRAME uint GEN_THISCALL F_0073b480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x73b480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0073aa00(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0073b4b0 */
GEN_FRAME byte GEN_THISCALL F_0073b4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b4e0 */
GEN_FRAME byte GEN_THISCALL F_0073b4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b500 */
GEN_FRAME uint GEN_THISCALL F_0073b500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b510 */
GEN_FRAME uint GEN_THISCALL F_0073b510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b520 */
GEN_FRAME byte GEN_THISCALL F_0073b520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b550 */
GEN_FRAME byte GEN_THISCALL F_0073b550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b570 */
GEN_FRAME uint GEN_THISCALL F_0073b570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b580 */
GEN_FRAME uint GEN_THISCALL F_0073b580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b5b0 */
GEN_FRAME uint GEN_THISCALL F_0073b5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b5c0 */
GEN_FRAME uint GEN_THISCALL F_0073b5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b5d0 */
GEN_FRAME byte GEN_THISCALL F_0073b5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b5f0 */
GEN_FRAME byte GEN_THISCALL F_0073b5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b620 */
GEN_FRAME byte GEN_THISCALL F_0073b620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b660 */
GEN_FRAME uint GEN_THISCALL F_0073b660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b680 */
GEN_FRAME uint GEN_THISCALL F_0073b680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6a0 */
GEN_FRAME uint GEN_THISCALL F_0073b6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6b0 */
GEN_FRAME uint GEN_THISCALL F_0073b6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b6c0 */
GEN_NOFRAME uint GEN_THISCALL F_0073b6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731b70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b6f0 */
GEN_NOFRAME uint GEN_THISCALL F_0073b6f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731b70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b700 */
GEN_FRAME byte GEN_THISCALL F_0073b700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b720 */
GEN_NOFRAME uint GEN_THISCALL F_0073b720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731c40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b760 */
GEN_NOFRAME uint GEN_THISCALL F_0073b760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731c40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b780 */
GEN_FRAME uint GEN_THISCALL F_0073b780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b790 */
GEN_FRAME uint GEN_THISCALL F_0073b790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b7a0 */
GEN_FRAME byte GEN_THISCALL F_0073b7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b7f0 */
GEN_FRAME uint GEN_THISCALL F_0073b7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b800 */
GEN_FRAME uint GEN_THISCALL F_0073b800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b810 */
GEN_FRAME byte GEN_THISCALL F_0073b810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b840 */
GEN_FRAME uint GEN_THISCALL F_0073b840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b850 */
GEN_FRAME uint GEN_THISCALL F_0073b850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b860 */
GEN_FRAME uint GEN_THISCALL F_0073b860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b870 */
GEN_FRAME uint GEN_THISCALL F_0073b870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b880 */
GEN_NOFRAME uint GEN_THISCALL F_0073b880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731e40(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b8a0 */
GEN_FRAME byte GEN_THISCALL F_0073b8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b8d0 */
GEN_FRAME uint GEN_THISCALL F_0073b8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073b8e0 */
GEN_FRAME uint GEN_THISCALL F_0073b8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b8e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073b8f0 */
GEN_FRAME byte GEN_THISCALL F_0073b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073b940 */
GEN_NOFRAME uint GEN_THISCALL F_0073b940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00731fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b970 */
GEN_NOFRAME uint GEN_THISCALL F_0073b970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73b970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732040(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073b9d0 */
GEN_FRAME byte GEN_THISCALL F_0073b9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_0073b9f0 */
GEN_FRAME byte GEN_THISCALL F_0073b9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73b9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0073ba30 */
GEN_FRAME unsigned int GEN_THISCALL F_0073ba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ba30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073ba30(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

/* ref: FUN_0073baa0 */
GEN_NOFRAME uint GEN_THISCALL F_0073baa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73baa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0073bb00 */
GEN_FRAME uint GEN_THISCALL F_0073bb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073bb10 */
GEN_FRAME uint GEN_THISCALL F_0073bb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073bb20 */
GEN_FRAME uint GEN_THISCALL F_0073bb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73bb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073bb60 */
GEN_FRAME unsigned int GEN_THISCALL F_0073bb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073bb60(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_0073bbe0 */
GEN_FRAME uint GEN_THISCALL F_0073bbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73bbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_007325b0(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073bc00 */
GEN_FRAME unsigned int GEN_THISCALL F_0073bc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073bc00(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,0x322);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}

/* ref: FUN_0073bc70 */
GEN_NOFRAME uint GEN_THISCALL F_0073bc70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73bc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0073bd10 */
GEN_NOFRAME uint GEN_THISCALL F_0073bd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73bd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0073bd30 */
GEN_FRAME uint GEN_STDCALL F_0073bd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73bd30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073bd50 */
GEN_NOFRAME uint GEN_THISCALL F_0073bd50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73bd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0073bd90 */
GEN_FRAME uint GEN_STDCALL F_0073bd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73bd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073bdc0 */
GEN_NOFRAME uint GEN_THISCALL F_0073bdc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73bdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,800);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,800);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_0073be40 */
GEN_NOFRAME uint GEN_THISCALL F_0073be40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73be40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0073be60 */
GEN_FRAME uint GEN_THISCALL F_0073be60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0073bec0 */
GEN_NOFRAME uint GEN_THISCALL F_0073bec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73bec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,800);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_0073bee0 */
GEN_FRAME uint GEN_THISCALL F_0073bee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073bf10 */
GEN_FRAME uint GEN_THISCALL F_0073bf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x31) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0073c030 */
GEN_FRAME unsigned int GEN_THISCALL F_0073c030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x19);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073c030(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x1c,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  return;
}

/* ref: FUN_0073c070 */
GEN_FRAME uint GEN_THISCALL F_0073c070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x19) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0073c0f0 */
GEN_FRAME unsigned int GEN_THISCALL F_0073c0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x1d);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073c0f0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x20,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}

/* ref: FUN_0073c130 */
GEN_FRAME uint GEN_THISCALL F_0073c130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x1d) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0073c1b0 */
GEN_FRAME uint GEN_THISCALL F_0073c1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x89) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0073c230 */
GEN_FRAME uint GEN_THISCALL F_0073c230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  if (param_2 != 0) {
    *in_ecx = *in_ecx & 0x1fffffff;
  }
  return param_2;
}

/* ref: FUN_0073c250 */
GEN_FRAME uint GEN_THISCALL F_0073c250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c290 */
GEN_FRAME uint GEN_THISCALL F_0073c290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c2d0 */
GEN_FRAME uint GEN_THISCALL F_0073c2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_0073c370 */
GEN_FRAME uint GEN_THISCALL F_0073c370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0073c380 */
GEN_FRAME uint GEN_THISCALL F_0073c380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0073c3c0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c3c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 1) * 2,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0073c400 */
GEN_FRAME uint GEN_STDCALL F_0073c400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73c400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073c430 */
GEN_FRAME uint GEN_THISCALL F_0073c430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x9d) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x9d) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c470 */
GEN_FRAME uint GEN_THISCALL F_0073c470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x9d) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x9d) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c4d0 */
GEN_FRAME uint GEN_THISCALL F_0073c4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c4e0 */
GEN_FRAME uint GEN_THISCALL F_0073c4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_0073c520 */
GEN_FRAME uint GEN_THISCALL F_0073c520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c530 */
GEN_FRAME uint GEN_THISCALL F_0073c530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c540 */
GEN_FRAME uint GEN_THISCALL F_0073c540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c550 */
GEN_FRAME uint GEN_THISCALL F_0073c550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c560 */
GEN_FRAME uint GEN_THISCALL F_0073c560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0073c580 */
GEN_FRAME uint GEN_THISCALL F_0073c580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c590 */
GEN_FRAME uint GEN_THISCALL F_0073c590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c5b0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007262e0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c5c0 */
GEN_FRAME uint GEN_THISCALL F_0073c5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c5d0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732c10(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c5e0 */
GEN_FRAME uint GEN_THISCALL F_0073c5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c5f0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732c70(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c600 */
GEN_FRAME uint GEN_THISCALL F_0073c600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c610 */
GEN_FRAME uint GEN_THISCALL F_0073c610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x10 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073c630 */
GEN_FRAME uint GEN_STDCALL F_0073c630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73c630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073c640 */
GEN_FRAME uint GEN_THISCALL F_0073c640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * -0xb8;
  return (uint)in_ecx;
}

/* ref: FUN_0073c660 */
GEN_FRAME uint GEN_THISCALL F_0073c660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c670 */
GEN_NOFRAME uint GEN_THISCALL F_0073c670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732de0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c680 */
GEN_FRAME uint GEN_THISCALL F_0073c680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x14;
  return (uint)param_1;
}

/* ref: FUN_0073c6a0 */
GEN_FRAME uint GEN_THISCALL F_0073c6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c6b0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c6b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732eb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c6c0 */
GEN_FRAME uint GEN_THISCALL F_0073c6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x25) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x25) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x25) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073c750 */
GEN_FRAME uint GEN_STDCALL F_0073c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x73c750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0073c770 */
GEN_NOFRAME uint GEN_THISCALL F_0073c770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0073c7d0 */
GEN_FRAME uint GEN_THISCALL F_0073c7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c7e0 */
GEN_NOFRAME uint GEN_THISCALL F_0073c7e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00732f60(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c7f0 */
GEN_FRAME byte GEN_THISCALL F_0073c7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 0x140,0,800);
    *(uint *)((int)this + 8) = param_1 * 0x140 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0073c850 */
GEN_FRAME unsigned int GEN_THISCALL F_0073c850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73c850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0073c850(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,800);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_0073c8d0 */
GEN_FRAME uint GEN_THISCALL F_0073c8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  F_0042cbc0((undefined *)((int)this + 0xc) GEN_EDX_FWD,param_2 + 2);
  return (uint)this;
}

/* ref: FUN_0073c900 */
GEN_FRAME uint GEN_THISCALL F_0073c900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c910 */
GEN_NOFRAME uint GEN_THISCALL F_0073c910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73c910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00733140(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073c920 */
GEN_FRAME uint GEN_THISCALL F_0073c920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c930 */
GEN_FRAME uint GEN_THISCALL F_0073c930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c960 */
GEN_FRAME uint GEN_THISCALL F_0073c960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c970 */
GEN_FRAME uint GEN_THISCALL F_0073c970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0073c980 */
GEN_FRAME uint GEN_THISCALL F_0073c980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_0073c9c0 */
GEN_FRAME uint GEN_THISCALL F_0073c9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73c9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_0073ca00 */
GEN_FRAME uint GEN_THISCALL F_0073ca00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x140 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca30 */
GEN_NOFRAME uint GEN_THISCALL F_0073ca30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x73ca30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_007267d0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0073ca40 */
GEN_FRAME uint GEN_THISCALL F_0073ca40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73ca40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca60 */
GEN_FRAME uint GEN_THISCALL F_0073ca60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73ca60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x10 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_0073ca80 */
GEN_FRAME uint GEN_THISCALL F_0073ca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073cab0 */
GEN_FRAME uint GEN_THISCALL F_0073cab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73cab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0073cae0 */
GEN_FRAME uint GEN_THISCALL F_0073cae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73cae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073cbb0 */
GEN_FRAME uint GEN_THISCALL F_0073cbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73cbb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_007316f0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_0073ccca;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_00723cd0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00725910(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_0073ccca: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_007333f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00733450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_007333f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_0073cd88: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00733450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_0073cd88;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_007333f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00733450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,800);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0073ce10 */
GEN_FRAME uint GEN_THISCALL F_0073ce10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x73ce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0073cef0 */
GEN_FRAME uint GEN_THISCALL F_0073cef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x73cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

