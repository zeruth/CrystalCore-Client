#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bb0c90 */
GEN_FRAME uint GEN_THISCALL F_00bb0c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ca0 */
GEN_FRAME uint GEN_THISCALL F_00bb0ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb0cc0 */
GEN_FRAME uint GEN_THISCALL F_00bb0cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0cd0 */
GEN_FRAME uint GEN_THISCALL F_00bb0cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ce0 */
GEN_FRAME uint GEN_THISCALL F_00bb0ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0cf0 */
GEN_FRAME uint GEN_THISCALL F_00bb0cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baf300(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0d10 */
GEN_FRAME uint GEN_THISCALL F_00bb0d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baed40(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0d30 */
GEN_FRAME uint GEN_THISCALL F_00bb0d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0d30u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00bb0d40 */
GEN_FRAME uint GEN_THISCALL F_00bb0d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb0d80 */
GEN_FRAME uint GEN_THISCALL F_00bb0d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0d90 */
GEN_FRAME uint GEN_THISCALL F_00bb0d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0db0 */
GEN_FRAME uint GEN_THISCALL F_00bb0db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb0e20 */
GEN_FRAME uint F_00bb0e20(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bb0e80 */
GEN_FRAME uint GEN_THISCALL F_00bb0e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baf1b0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00bb0ea0 */
GEN_FRAME uint F_00bb0ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bb0ed0 */
GEN_FRAME byte GEN_THISCALL F_00bb0ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bb0ef0 */
GEN_FRAME uint GEN_THISCALL F_00bb0ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0f00 */
GEN_FRAME uint GEN_THISCALL F_00bb0f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0f00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb0f80 */
GEN_FRAME uint F_00bb0f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0f80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bb1010 */
GEN_FRAME unsigned int F_00bb1010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bb1030 */
GEN_FRAME uint F_00bb1030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bb1060 */
GEN_FRAME uint F_00bb1060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1080 */
GEN_FRAME uint F_00bb1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb10a0 */
GEN_FRAME uint GEN_THISCALL F_00bb10a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb10a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb10d0 */
GEN_FRAME uint F_00bb10d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb10d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1100 */
GEN_FRAME uint GEN_THISCALL F_00bb1100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb1120 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb1120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: FUN_00bb1140 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafad0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb1150 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafb30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb1170 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafba0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb1190 */
GEN_FRAME uint GEN_THISCALL F_00bb1190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11b0 */
GEN_FRAME uint GEN_THISCALL F_00bb11b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb11b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11d0 */
GEN_FRAME uint GEN_THISCALL F_00bb11d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb11d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11f0 */
GEN_FRAME uint GEN_THISCALL F_00bb11f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb11f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25a);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb1240 */
GEN_FRAME unsigned int F_00bb1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00bb12b0 */
GEN_FRAME unsigned int F_00bb12b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb12b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return;
}

/* ref: FUN_00bb1320 */
GEN_FRAME uint GEN_THISCALL F_00bb1320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb1340 */
GEN_FRAME uint GEN_THISCALL F_00bb1340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb1360 */
GEN_FRAME uint GEN_THISCALL F_00bb1360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb1380 */
GEN_FRAME uint F_00bb1380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb13a0 */
GEN_FRAME uint F_00bb13a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb13a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb13d0 */
GEN_FRAME uint F_00bb13d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb13d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1400 */
GEN_FRAME uint F_00bb1400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1420 */
GEN_FRAME uint F_00bb1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1440 */
GEN_FRAME unsigned int F_00bb1440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1440u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb1470 */
GEN_FRAME unsigned int F_00bb1470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb14a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb14a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb14a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG param_1 = (LONG)gen_a1;
  return (uint)(gen_imp_InterlockedExchange((LONG *)((int)this + 0x24),param_1));
}

/* ref: FUN_00bb14e0 */
GEN_FRAME uint GEN_THISCALL F_00bb14e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb14e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb1510 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb1550 */
GEN_FRAME uint GEN_THISCALL F_00bb1550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb15e0 */
GEN_FRAME uint GEN_THISCALL F_00bb15e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb15e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb1600 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb1640 */
GEN_FRAME uint GEN_THISCALL F_00bb1640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb16a0 */
GEN_FRAME uint GEN_THISCALL F_00bb16a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb1730 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb1770 */
GEN_FRAME uint GEN_THISCALL F_00bb1770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb1800 */
GEN_FRAME uint GEN_THISCALL F_00bb1800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  ulonglong uVar7;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  iVar2 = *param_1;
  puVar5 = (undefined4 *)*puVar1;
  piVar6 = param_1;
  while (puVar5 != puVar1) {
    if (puVar5[2] == iVar2) {
      puVar3 = (undefined4 *)puVar5[1];
      puVar4 = (undefined4 *)*puVar5;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      uVar7 = F_00429760(puVar5,0xc,0x25a);
      piVar6 = (int *)uVar7;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
      puVar5 = puVar4;
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00bb1870 */
GEN_FRAME uint GEN_THISCALL F_00bb1870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb1890 */
GEN_FRAME uint GEN_THISCALL F_00bb1890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb18a0 */
GEN_FRAME uint GEN_THISCALL F_00bb18a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb18a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb18c0 */
GEN_FRAME uint GEN_THISCALL F_00bb18c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb18c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb1910 */
GEN_FRAME uint GEN_THISCALL F_00bb1910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb1920 */
GEN_FRAME uint GEN_THISCALL F_00bb1920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb1940 */
GEN_FRAME byte GEN_THISCALL F_00bb1940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb1980 */
GEN_FRAME uint GEN_THISCALL F_00bb1980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb19a0 */
GEN_FRAME uint GEN_THISCALL F_00bb19a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb19a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb19f0 */
GEN_FRAME uint GEN_THISCALL F_00bb19f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb19f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb1a80 */
GEN_FRAME byte GEN_THISCALL F_00bb1a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00bb1af0 */
GEN_FRAME uint GEN_THISCALL F_00bb1af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1b30 */
GEN_FRAME uint GEN_THISCALL F_00bb1b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1b90 */
GEN_FRAME uint GEN_THISCALL F_00bb1b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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

/* ref: FUN_00bb1c50 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00bb1c70 */
GEN_FRAME uint GEN_THISCALL F_00bb1c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1c80 */
GEN_FRAME uint GEN_THISCALL F_00bb1c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bb1d90 */
GEN_FRAME uint GEN_THISCALL F_00bb1d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1d90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb1e10 */
GEN_FRAME uint GEN_THISCALL F_00bb1e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb1e20 */
GEN_FRAME uint GEN_THISCALL F_00bb1e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1e20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb1e30 */
GEN_FRAME uint GEN_THISCALL F_00bb1e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1e40 */
GEN_FRAME uint GEN_THISCALL F_00bb1e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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

/* ref: FUN_00bb1ec0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb1ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb1ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      piVar1 = (int *)0x0;
      if (*(int *)((int)this + 4) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)((int)this + 4));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb1f50 */
GEN_FRAME uint GEN_THISCALL F_00bb1f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1f60 */
GEN_FRAME uint GEN_THISCALL F_00bb1f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1f70 */
GEN_FRAME uint GEN_THISCALL F_00bb1f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb1f80 */
GEN_FRAME uint GEN_THISCALL F_00bb1f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1f80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb1fc0 */
GEN_FRAME uint GEN_THISCALL F_00bb1fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1fc0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00bb1ff0 */
GEN_FRAME uint GEN_THISCALL F_00bb1ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1ff0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2060 */
GEN_FRAME uint GEN_THISCALL F_00bb2060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2060u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2090 */
GEN_FRAME uint GEN_STDCALL F_00bb2090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb2110 */
GEN_FRAME uint GEN_THISCALL F_00bb2110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2140 */
GEN_FRAME uint GEN_STDCALL F_00bb2140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb2180 */
GEN_FRAME uint GEN_THISCALL F_00bb2180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2180u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb2280 */
GEN_FRAME uint GEN_THISCALL F_00bb2280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2280u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb22b0 */
GEN_FRAME uint GEN_THISCALL F_00bb22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb22b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2320 */
GEN_FRAME uint GEN_THISCALL F_00bb2320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2320u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2350 */
GEN_FRAME uint GEN_STDCALL F_00bb2350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb2390 */
GEN_FRAME uint GEN_THISCALL F_00bb2390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb23f0 */
GEN_FRAME uint GEN_STDCALL F_00bb23f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb23f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb2410 */
GEN_FRAME uint GEN_THISCALL F_00bb2410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2410u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb24e0 */
GEN_FRAME uint GEN_THISCALL F_00bb24e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb24e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2510 */
GEN_FRAME byte GEN_THISCALL F_00bb2510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb2530 */
GEN_FRAME uint GEN_THISCALL F_00bb2530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb2540 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb2540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00bb2540(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0x25a);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

/* ref: FUN_00bb2580 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb2580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00bb2580(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0x25c);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}

/* ref: FUN_00bb25c0 */
GEN_FRAME uint GEN_THISCALL F_00bb25c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb25c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb2600 */
GEN_FRAME unsigned int F_00bb2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00bb1240(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00bb2620 */
GEN_FRAME unsigned int F_00bb2620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00bb12b0(param_1,param_2,param_3,in_ECX);
  return;
}

/* ref: FUN_00bb2640 */
GEN_FRAME unsigned int F_00bb2640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: FUN_00bb2660 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: FUN_00bb2680 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

/* ref: FUN_00bb26a0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb26a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb26a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb26e0 */
GEN_FRAME uint GEN_THISCALL F_00bb26e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb26e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0x25a);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00bb28dd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00bb28dd;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_00bb2910 */
GEN_NOFRAME uint GEN_THISCALL F_00bb2910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb2910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafba0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00bb2920 */
GEN_FRAME uint GEN_THISCALL F_00bb2920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb2920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0x25c);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
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
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00bb2b1d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00bb2b1d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_00bb2b50 */
GEN_FRAME uint GEN_THISCALL F_00bb2b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb2b70 */
GEN_FRAME uint GEN_THISCALL F_00bb2b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb2b90 */
GEN_FRAME uint GEN_THISCALL F_00bb2b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb2bb0 */
GEN_FRAME uint GEN_THISCALL F_00bb2bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb2c00 */
GEN_FRAME uint GEN_THISCALL F_00bb2c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(int *)*param_2 = *(int *)*param_2 + 1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00bb2c30 */
GEN_FRAME unsigned int F_00bb2c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00bb2c60 */
GEN_FRAME unsigned int F_00bb2c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2c60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00bb2c80 */
GEN_FRAME unsigned int F_00bb2c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2c80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bb2cb0 */
GEN_FRAME unsigned int F_00bb2cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00bb2ce0 */
GEN_FRAME unsigned int F_00bb2ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb2d10 */
GEN_FRAME unsigned int F_00bb2d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00bb2d40 */
GEN_FRAME uint GEN_THISCALL F_00bb2d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00bb2d80 */
GEN_NOFRAME uint GEN_THISCALL F_00bb2d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb2d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb2dc0 */
GEN_FRAME uint GEN_THISCALL F_00bb2dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2dc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb2e20 */
GEN_FRAME uint GEN_THISCALL F_00bb2e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb2e30 */
GEN_FRAME uint GEN_THISCALL F_00bb2e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb2e40 */
GEN_FRAME uint GEN_THISCALL F_00bb2e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2e40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb2e60 */
GEN_FRAME uint GEN_THISCALL F_00bb2e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb2ed0 */
GEN_FRAME uint GEN_THISCALL F_00bb2ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb2ee0 */
GEN_FRAME uint GEN_THISCALL F_00bb2ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb2ee0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00baed40(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
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
      goto LAB_00bb2ffa;
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
      piVar4 = (int *)F_00bae7b0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00bae790(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00bb2ffa: ;
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
            F_00bb1b90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00bb0640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_00bb1b90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb30b8: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb0640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_00bb30b8;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00bb1b90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00bb0640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25a);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb3180 */
GEN_FRAME uint GEN_THISCALL F_00bb3180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3180u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb31a0 */
GEN_FRAME uint GEN_THISCALL F_00bb31a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00bb3220 */
GEN_FRAME uint GEN_THISCALL F_00bb3220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3230 */
GEN_FRAME uint GEN_THISCALL F_00bb3230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3270 */
GEN_FRAME uint GEN_THISCALL F_00bb3270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3280 */
GEN_FRAME uint GEN_THISCALL F_00bb3280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb32c0 */
GEN_FRAME uint GEN_THISCALL F_00bb32c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb32c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb32d0 */
GEN_FRAME uint GEN_THISCALL F_00bb32d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb32d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb32e0 */
GEN_FRAME uint GEN_THISCALL F_00bb32e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb32e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb32f0 */
GEN_FRAME uint GEN_THISCALL F_00bb32f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb32f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  F_00baf300(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
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
      goto LAB_00bb340a;
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
      piVar4 = (int *)F_00baeb90(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_00baeb70(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00bb340a: ;
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
            F_00bb1e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_00bb08c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_00bb1e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb34c8: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_00bb08c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_00bb34c8;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_00bb1e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_00bb08c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb3550 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      piVar1 = (int *)0x0;
      if (*(int *)((int)this + 4) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)((int)this + 4));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb3590 */
GEN_FRAME uint GEN_THISCALL F_00bb3590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      if (*(int *)((int)this + 4) != 0) {
        F_00406ad0(*(int *)((int)this + 4));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb35f0 */
GEN_FRAME uint GEN_THISCALL F_00bb35f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb35f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      if (*(int *)((int)this + 4) != 0) {
        F_00406ad0(*(int *)((int)this + 4));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb36b0 */
GEN_FRAME uint GEN_THISCALL F_00bb36b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb36b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3760 */
GEN_FRAME uint GEN_THISCALL F_00bb3760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3770 */
GEN_FRAME uint GEN_STDCALL F_00bb3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb3780 */
GEN_FRAME uint GEN_THISCALL F_00bb3780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3870 */
GEN_FRAME uint GEN_THISCALL F_00bb3870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00bb2180(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00bb3890 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3890u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x25a);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00bb3910 */
GEN_FRAME uint GEN_THISCALL F_00bb3910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb3970 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bb39b0 */
GEN_FRAME uint GEN_STDCALL F_00bb39b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb39b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb39c0 */
GEN_FRAME uint GEN_STDCALL F_00bb39c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb39c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb39d0 */
GEN_FRAME uint GEN_THISCALL F_00bb39d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb39d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb3ac0 */
GEN_FRAME uint GEN_THISCALL F_00bb3ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb0c00(this GEN_EDX_FWD,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb3ae0 */
GEN_FRAME uint GEN_THISCALL F_00bb3ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb3b30 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bb3bb0 */
GEN_FRAME uint GEN_THISCALL F_00bb3bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00bb2410(this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00bb3bd0 */
GEN_FRAME uint GEN_THISCALL F_00bb3bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3be0 */
GEN_FRAME uint GEN_THISCALL F_00bb3be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bb3bf0 */
GEN_FRAME uint GEN_THISCALL F_00bb3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3bf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb3c20 */
GEN_FRAME uint GEN_THISCALL F_00bb3c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3c20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb3c40 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_00bb2540(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0x25a);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00bb3ca0 */
GEN_FRAME uint GEN_STDCALL F_00bb3ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb3ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_00bb2580(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0x25c);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00bb3d40 */
GEN_FRAME uint GEN_STDCALL F_00bb3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb3d50 */
GEN_FRAME uint GEN_THISCALL F_00bb3d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(int *)*param_2 = *(int *)*param_2 + 1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00bb3d80 */
GEN_FRAME unsigned int F_00bb3d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: FUN_00bb3da0 */
GEN_FRAME unsigned int F_00bb3da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb3da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
  }
  return;
}

/* ref: FUN_00bb3dc0 */
GEN_FRAME uint GEN_THISCALL F_00bb3dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00bb26e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00bafb30(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00bb26e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0x25a);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb3ea0 */
GEN_FRAME uint GEN_THISCALL F_00bb3ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb3ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00bb2920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00bafad0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00bb2920((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0x25c);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb3f80 */
GEN_FRAME uint GEN_THISCALL F_00bb3f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb3f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb3fe0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb3fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb3fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      piVar1 = (int *)0x0;
      if (*(int *)((int)this + 0xc) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)((int)this + 0xc));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb4020 */
GEN_FRAME unsigned int F_00bb4020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb4050 */
GEN_FRAME unsigned int F_00bb4050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4050u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb4070 */
GEN_FRAME unsigned int F_00bb4070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb40a0 */
GEN_FRAME unsigned int F_00bb40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb40a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb40d0 */
GEN_FRAME unsigned int F_00bb40d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb40d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4100 */
GEN_FRAME unsigned int F_00bb4100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4130 */
GEN_FRAME uint GEN_THISCALL F_00bb4130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00bb4160 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb41a0 */
GEN_FRAME uint GEN_THISCALL F_00bb41a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb41a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ba85e0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb41d0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb41d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb41d0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: FUN_00bb4220 */
GEN_FRAME uint GEN_THISCALL F_00bb4220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bb4280 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4280u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: FUN_00bb42d0 */
GEN_FRAME uint GEN_THISCALL F_00bb42d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb42d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bb4330 */
GEN_FRAME uint GEN_THISCALL F_00bb4330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb4380 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb3890(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00bb43b0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb43b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb43b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bb43f0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb43f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb43f0u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x25a);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x25a);
  return (uint)uVar3;
}

/* ref: FUN_00bb4440 */
GEN_FRAME uint GEN_THISCALL F_00bb4440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bb44a0 */
GEN_FRAME uint GEN_THISCALL F_00bb44a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb44a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb44f0 */
GEN_FRAME uint GEN_THISCALL F_00bb44f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb44f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb0c00(this GEN_EDX_FWD,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00bb4550 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bb4590 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00bb4600 */
GEN_FRAME uint GEN_THISCALL F_00bb4600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb4600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00bb3c40(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00bb2ee0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00bb46a0 */
GEN_FRAME uint GEN_THISCALL F_00bb46a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb46a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00bb46c0 */
GEN_FRAME uint GEN_THISCALL F_00bb46c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb46c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
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

/* ref: FUN_00bb4740 */
GEN_FRAME uint GEN_THISCALL F_00bb4740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb4740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00bb3ce0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00bb32f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00bb47e0 */
GEN_FRAME uint GEN_THISCALL F_00bb47e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb47e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00bb4800 */
GEN_FRAME uint GEN_THISCALL F_00bb4800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4800u, gen_a0, gen_a1, gen_a2, 0u);
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
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00bb4840 */
GEN_FRAME uint GEN_STDCALL F_00bb4840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb4880 */
GEN_FRAME uint GEN_STDCALL F_00bb4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,0x25a);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    *(int *)*param_3 = *(int *)*param_3 + 1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb48c0 */
GEN_FRAME uint GEN_THISCALL F_00bb48c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb48c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00bb3ea0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00bb4920 */
GEN_FRAME uint GEN_THISCALL F_00bb4920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25a);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_00bb3dc0(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00bb4980 */
GEN_FRAME unsigned int F_00bb4980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb49b0 */
GEN_FRAME unsigned int F_00bb49b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb49b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb49d0 */
GEN_FRAME unsigned int F_00bb49d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb49d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4a00 */
GEN_FRAME unsigned int F_00bb4a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bb4a30 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb4a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4a30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4a60 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb4a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00bb4a90 */
GEN_FRAME uint GEN_STDCALL F_00bb4a90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb4a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_1 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb4ae0 */
GEN_FRAME uint GEN_THISCALL F_00bb4ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb4b40 */
GEN_FRAME uint GEN_THISCALL F_00bb4b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      if (*(int *)((int)this + 0xc) != 0) {
        F_00406ad0(*(int *)((int)this + 0xc));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb4ba0 */
GEN_FRAME unsigned int GEN_STDCALL F_00bb4ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(int *)param_2[2] = *(int *)param_2[2] + 1;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

/* ref: FUN_00bb4bd0 */
GEN_FRAME uint GEN_THISCALL F_00bb4bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_00a15ee0(this GEN_EDX_ARG,uVar3 + param_2,0xffffffff);
    F_00a15ee0(this GEN_EDX_ARG,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_00a16590(this GEN_EDX_ARG,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_00bb4cc0 */
GEN_FRAME uint GEN_THISCALL F_00bb4cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb4cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = REFG(undefined4 * PTR32, 0x14c5960);
  for (puVar3 = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14c5960))); puVar3 != REFG(undefined4 * PTR32, 0x14c5960); puVar3 = (undefined4 *)*puVar3)
  {
  }
  uVar1 = REFG(undefined4 * PTR32, 0x14c5960)[1];
  puVar3 = (undefined4 *)F_004296a0(0xc,0,0x25a);
  puVar3[1] = uVar1;
  *puVar3 = puVar2;
  if (puVar3 + 2 != (undefined4 *)0x0) {
    puVar3[2] = param_1;
  }
  if (*(int *)&REFG(undefined, 0x14c5964) != -2) {
    *(int *)&REFG(undefined, 0x14c5964) = *(int *)&REFG(undefined, 0x14c5964) + 1;
    puVar2[1] = puVar3;
    *(undefined4 * PTR32 *)puVar3[1] = puVar3;
    *(undefined4 *)this = param_1;
    return (uint)this;
  }
                    
  F_00c4579a("list<T> too long");
}

/* ref: FUN_00bb4dd0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x25a);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bb4e10 */
GEN_FRAME byte GEN_THISCALL F_00bb4e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (int)((uint)*(ushort *)(param_1 + 2) << 0x10) >> 0x1f | *(uint *)(param_1 + 4);
  uVar5 = CONCAT22(*(ushort *)(param_1 + 2),*(undefined2 *)(param_1 + 0x10));
  uVar1 = *(uint *)((int)this + 0x34);
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  uVar3 = F_00bb0c00((undefined *)((int)this + 0x30) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x4)));
  uVar2 = *(uint *)((int)this + 0x34);
  if (uVar3 != uVar2) {
    if ((*(uint *)(uVar3 + 0x14) <= uVar4) &&
       ((uVar4 != *(uint *)(uVar3 + 0x14) || (*(uint *)(uVar3 + 0x10) <= uVar5)))) {
      return uVar3 != uVar1;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  return uVar2 != uVar1;
}

/* ref: FUN_00bb4f20 */
GEN_NOFRAME uint GEN_THISCALL F_00bb4f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb3890(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x25a);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::PingClient::PingClientRequest::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb4f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb4f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  if (*(HANDLE *)(this + 0x20) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*(HANDLE *)(this + 0x20));
  }
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)(this + 0x18));
  }
  if (0xf < *(uint *)(this + 0x5c)) {
    F_00406ad0(*(undefined4 *)(this + 0x48));
  }
  *(undefined4 *)(this + 0x5c) = 0xf;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x48] = (undefined1)0x0;
  F_004cf880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb4ff0 */
GEN_FRAME uint GEN_THISCALL F_00bb4ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb4ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb5030 */
GEN_FRAME uint GEN_THISCALL F_00bb5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00bb2180((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00bb1240((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00bb4600((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00bb50e0 */
GEN_FRAME uint GEN_THISCALL F_00bb50e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
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

/* ref: FUN_00bb5150 */
GEN_FRAME uint GEN_THISCALL F_00bb5150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb5190 */
GEN_FRAME uint GEN_THISCALL F_00bb5190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00bb2410((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00bb12b0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00bb4740((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00bb51f0 */
GEN_FRAME uint GEN_THISCALL F_00bb51f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x25a);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00bb5360 */
GEN_FRAME uint GEN_THISCALL F_00bb5360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
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

/* ref: FUN_00bb53e0 */
GEN_FRAME uint GEN_THISCALL F_00bb53e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb53e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
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

/* ref: FUN_00bb5460 */
GEN_FRAME uint GEN_THISCALL F_00bb5460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x25a);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x25a);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00bb5510 */
GEN_FRAME uint GEN_THISCALL F_00bb5510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x25c);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00bb55a0 */
GEN_FRAME uint F_00bb55a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb55a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb55f0 */
GEN_FRAME uint GEN_STDCALL F_00bb55f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb55f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_1 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb5640 */
GEN_FRAME uint GEN_STDCALL F_00bb5640(unsigned int gen_a0)
{
  GEN_ENTER(0xbb5640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)(param_1 + 8));
      piVar1 = (int *)0x0;
      if (*(int *)(param_1 + 0xc) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)(param_1 + 0xc));
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb5690 */
GEN_FRAME unsigned int F_00bb5690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(int *)param_3[2] = *(int *)param_3[2] + 1;
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}

/* ref: FUN_00bb56c0 */
GEN_FRAME uint GEN_THISCALL F_00bb56c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb56c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00bb4bd0(this GEN_EDX_FWD,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00bb4bd0(this GEN_EDX_ARG,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00a16590(this GEN_EDX_ARG,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerBase::vf3 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb57c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb57c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  iVar3 = *(int *)(this + 0x24);
  while (iVar3 != 0) {
    if (*(int * PTR32 *)(this + 0x14) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(this + 0x14);
    }
    uVar2 = *(uint *)(this + 0x20) >> 2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + (*(uint *)(this + 0x20) & 3) * 4)));
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
    if (*(int *)(this + 0x24) != 0) {
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      if ((uint)(*(int *)(this + 0x1c) * 4) <= *(uint *)(this + 0x20)) {
        *(undefined4 *)(this + 0x20) = 0;
      }
      iVar3 = *(int *)(this + 0x24) - 1;
      *(int *)(this + 0x24) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x20) = 0;
      }
    }
    iVar3 = *(int *)(this + 0x24);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2c)));
}

/* ref: Client::Network::Socket::PollerBase::PeerSocket::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb5870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::vf4 */
GEN_NOFRAME uint F_00bb58e0(void)
{
  GEN_ENTER(0xbb58e0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1104794));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::PeerSocket::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb5920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::PeerSocket::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb5950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb5980 */
GEN_FRAME uint GEN_THISCALL F_00bb5980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4740(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb59c0 */
GEN_FRAME uint GEN_THISCALL F_00bb59c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb59c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb5a40 */
GEN_FRAME uint GEN_THISCALL F_00bb5a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00bb51f0(this GEN_EDX_FWD,1);
  }
  uVar4 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar1 = (undefined4 *)puVar3[uVar4];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar3 = param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00bb5ac0 */
GEN_FRAME uint GEN_THISCALL F_00bb5ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
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

/* ref: FUN_00bb5b30 */
GEN_FRAME uint GEN_THISCALL F_00bb5b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    piVar2 = (int *)param_2[2];
    if ((piVar2 != (int *)0x0) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        puVar3 = (undefined4 *)param_2[3];
        if (puVar3 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb5bf0 */
GEN_FRAME uint GEN_THISCALL F_00bb5bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
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

/* ref: FUN_00bb5c60 */
GEN_FRAME uint GEN_THISCALL F_00bb5c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5460(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5460(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bb5cd0 */
GEN_FRAME uint GEN_THISCALL F_00bb5cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5510(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5510(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bb5d30 */
GEN_NOFRAME uint GEN_THISCALL F_00bb5d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb5d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar1 = *(int * PTR32 *)this;
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar4 = *(uint *)this;
  *(uint *)(uVar4 + 4) = uVar4;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar5 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      if ((piVar1 != (int *)0x0) && (piVar5[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar5[2]);
          puVar3 = (undefined4 *)piVar5[3];
          if (puVar3 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
          }
        }
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      uVar6 = F_00429760(piVar5,0x10,0x25a);
      uVar4 = (uint)uVar6;
      piVar5 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar4;
}

/* ref: FUN_00bb5da0 */
GEN_FRAME uint F_00bb5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar2 = *piVar2 - 1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1)));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb5df0 */
GEN_FRAME uint F_00bb5df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)(param_2 + 8));
      piVar1 = (int *)0x0;
      if (*(int *)(param_2 + 0xc) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)(param_2 + 0xc));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb5e40 */
GEN_FRAME uint GEN_THISCALL F_00bb5e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb5e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    piVar5 = (int *)param_4[6];
    if ((piVar5 != (int *)0x0) && (param_4[7] != 0)) {
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        F_00406ad0(param_4[6]);
        puVar2 = (undefined4 *)param_4[7];
        if (puVar2 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
        }
      }
      param_4[6] = 0;
      param_4[7] = 0;
    }
    F_00429760(param_4,0x28,0x25c);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar5 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar3 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar6 = (int *)piVar5[1];
    piVar7 = (int *)piVar6[1];
    if (piVar6 == (int *)*piVar7) {
      iVar3 = piVar7[2];
      if (*(char *)(iVar3 + 0x20) == '\0') {
        *(undefined1 *)(piVar6 + 8) = 1;
        *(undefined1 *)(iVar3 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar6[2]) {
          piVar5 = (int *)piVar6[2];
          piVar6[2] = *piVar5;
          if (*(char *)(*piVar5 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar5 + 4) = piVar6;
          }
          piVar5[1] = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
          }
          else {
            piVar7 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar7) {
              *piVar7 = (int)piVar5;
            }
            else {
              piVar7[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar6;
          piVar6[1] = (int)piVar5;
          piVar5 = piVar6;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar6 = *(int * PTR32 *)(piVar5[1] + 4);
        piVar7 = (int *)*piVar6;
        *piVar6 = piVar7[2];
        if (*(char *)(piVar7[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar7[2] + 4) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar7;
          piVar7[2] = (int)piVar6;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
          else {
            *piVar4 = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
        }
LAB_00bb606d: ;
        piVar6[1] = (int)piVar7;
      }
    }
    else {
      iVar3 = *piVar7;
      if (*(char *)(iVar3 + 0x20) != '\0') {
        if (piVar5 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar3 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar3 + 8) + 4))) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar3;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar5[2]) {
              piVar5[2] = iVar3;
            }
            else {
              *piVar5 = iVar3;
            }
          }
          *(int * PTR32 *)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar5 = piVar6;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar6 = *(int * PTR32 *)(piVar5[1] + 4);
        piVar7 = (int *)piVar6[2];
        piVar6[2] = *piVar7;
        if (*(char *)(*piVar7 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar7 + 4) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar7;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar4) {
            *piVar4 = (int)piVar7;
          }
          else {
            piVar4[2] = (int)piVar7;
          }
        }
        *piVar7 = (int)piVar6;
        goto LAB_00bb606d;
      }
      *(undefined1 *)(piVar6 + 8) = 1;
      *(undefined1 *)(iVar3 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
      piVar5 = *(int * PTR32 *)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0x20);
  } while( true );
}

/* ref: FUN_00bb60a0 */
GEN_FRAME uint GEN_THISCALL F_00bb60a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb60a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
    puVar1[6] = param_1[2];
    puVar1[7] = param_1[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb6100 */
GEN_FRAME uint GEN_THISCALL F_00bb6100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00bb6170 */
GEN_FRAME uint GEN_THISCALL F_00bb6170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4600(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb61b0 */
GEN_FRAME uint GEN_THISCALL F_00bb61b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb61b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00bb61e0 */
GEN_FRAME uint GEN_THISCALL F_00bb61e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb61e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00bb5c60(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00bb6270 */
GEN_FRAME uint GEN_THISCALL F_00bb6270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6270u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00baf1b0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00bb6392;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00baea40(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00baea20(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00bb6392: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00bb0750((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00bb645c: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb0750((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00bb645c;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00bb0750((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (int *)piVar3[6];
  if ((piVar6 != (int *)0x0) && (piVar3[7] != 0)) {
    *piVar6 = *piVar6 - 1;
    if (*piVar6 == 0) {
      F_00406ad0(piVar3[6]);
      puVar2 = (undefined4 *)piVar3[7];
      if (puVar2 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      }
    }
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb6510 */
GEN_FRAME uint GEN_THISCALL F_00bb6510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00bb5cd0(this GEN_EDX_ARG,(uVar2 - iVar3) + param_1);
    puVar4 = *(undefined1 * PTR32 *)((int)this + 4);
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00bb6590 */
GEN_FRAME uint GEN_THISCALL F_00bb6590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    piVar2 = (int *)param_2[2];
    if ((piVar2 != (int *)0x0) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        if (param_2[3] != 0) {
          F_00406ad0(param_2[3]);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb6620 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *(uint *)(uVar3 + 4) = uVar3;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      if ((piVar1 != (int *)0x0) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          if (piVar4[3] != 0) {
            F_00406ad0(piVar4[3]);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00bb66a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb66a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar5 = param_1;
  while (cVar1 == '\0') {
    F_00bb66a0(this GEN_EDX_FWD,(int *)piVar5[2]);
    piVar2 = (int *)piVar5[6];
    piVar3 = (int *)*piVar5;
    if ((piVar2 != (int *)0x0) && (piVar5[7] != 0)) {
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        F_00406ad0(piVar5[6]);
        puVar4 = (undefined4 *)piVar5[7];
        if (puVar4 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
        }
      }
      piVar5[6] = 0;
      piVar5[7] = 0;
    }
    F_00429760(piVar5,0x28,0x25c);
    piVar5 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  return;
}

/* ref: FUN_00bb6720 */
GEN_FRAME uint GEN_THISCALL F_00bb6720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb6720u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_00bb5e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00bafba0(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00bb5e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00bb5da0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd,(uint *)((*(int *)&gen_args[2]) + 0x10));
      F_00429760((*(int *)&gen_args[2]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00bb6793;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00bb6793: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: Client::Network::Socket::PollerImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb6850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  F_00ba8d10(this GEN_EDX_FWD);
  F_00bb4280(this + 0x354 GEN_EDX_ARG);
  F_00c0fdb0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6890 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb5d30(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb68b0 */
GEN_FRAME uint GEN_THISCALL F_00bb68b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb68b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb6590(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)this);
  return uVar1;
}

/* ref: FUN_00bb68e0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb68e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00bb66a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00bb6910 */
GEN_FRAME uint GEN_THISCALL F_00bb6910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *(int *)param_2[2] = *(int *)param_2[2] + 1;
    puVar1[6] = param_2[2];
    puVar1[7] = param_2[3];
  }
  F_00bb6720(this GEN_EDX_ARG,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00bb69b0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb69b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb69b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb5d30(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::SocketImpl::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb69d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ba9d20(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6a00 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb6620(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb6a20 */
GEN_FRAME uint GEN_THISCALL F_00bb6a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00bb66a0(this GEN_EDX_FWD,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00bb6270(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00bb6b10 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb6620(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb6b30 */
GEN_FRAME uint GEN_THISCALL F_00bb6b30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00bb6b50 */
GEN_FRAME uint GEN_THISCALL F_00bb6b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb6b90 */
GEN_FRAME uint GEN_THISCALL F_00bb6b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb6a20(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb6c10 */
GEN_FRAME uint GEN_THISCALL F_00bb6c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00baadb0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6c40 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6c90 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6ce0 */
GEN_FRAME uint GEN_THISCALL F_00bb6ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb6d40 */
GEN_FRAME uint GEN_THISCALL F_00bb6d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb6dd0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb6dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb6dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      this_00 = *(undefined * PTR32 *)((int)this + 0xc);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6e20 */
GEN_FRAME uint GEN_THISCALL F_00bb6e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      this_00 = *(undefined * PTR32 *)((int)this + 0xc);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDPSocket::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bb6e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bab900(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6eb0 */
GEN_FRAME uint GEN_STDCALL F_00bb6eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)(param_1 + 8));
      this = *(undefined * PTR32 *)(param_1 + 0xc);
      if (this != (undefined *)0x0) {
        F_00baadb0(this GEN_EDX_ARG);
        piVar1 = (int *)F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6f00 */
GEN_FRAME uint F_00bb6f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      this = *(undefined * PTR32 *)(param_2 + 0xc);
      if (this != (undefined *)0x0) {
        F_00baadb0(this GEN_EDX_ARG);
        piVar1 = (int *)F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6f50 */
GEN_FRAME uint GEN_THISCALL F_00bb6f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 * puVar6;
  undefined * this_01;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  puVar1 = *(undefined4 * PTR32 *)this;
  piVar2 = (int *)*param_1;
  this_01 = (undefined *)param_1[1];
  puVar6 = (undefined4 *)*puVar1;
  while (puVar6 != puVar1) {
    if ((undefined *)puVar6[3] == this_01) {
      puVar3 = (undefined4 *)puVar6[1];
      puVar4 = (undefined4 *)*puVar6;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      piVar5 = (int *)puVar6[2];
      if ((piVar5 != (int *)0x0) && (puVar6[3] != 0)) {
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          F_00406ad0(puVar6[2]);
          this_00 = (undefined *)puVar6[3];
          if (this_00 != (undefined *)0x0) {
            F_00baadb0(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
        }
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      F_00429760(puVar6,0x10,0x25a);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if (((piVar2 != (int *)0x0) && (this_01 != (undefined *)0x0)) && (*piVar2 = *piVar2 - 1, *piVar2 == 0)
     ) {
    F_00406ad0(piVar2);
    F_00baadb0(this_01 GEN_EDX_ARG);
    this_01 = (undefined *)F_00406ad0(this_01);
  }
  return (uint)this_01;
}

/* ref: FUN_00bb7020 */
GEN_FRAME uint GEN_THISCALL F_00bb7020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *(uint *)(uVar3 + 4) = uVar3;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      if ((piVar1 != (int *)0x0) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          this_00 = (undefined *)piVar4[3];
          if (this_00 != (undefined *)0x0) {
            F_00baadb0(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00bb70b0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb70b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb70b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb7020(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb7100 */
GEN_NOFRAME uint GEN_THISCALL F_00bb7100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb7100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb7020(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb7120 */
GEN_FRAME uint GEN_THISCALL F_00bb7120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bac070(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb7150 */
GEN_FRAME uint GEN_THISCALL F_00bb7150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  if (pvVar1 != (undefined *)0x0) {
    F_00c09a50(pvVar1 GEN_EDX_FWD);
    F_00406ad0(pvVar1);
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00bac070(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
  }
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,1);
    }
    F_00406ad0(piVar2);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb7200 */
GEN_FRAME unsigned int F_00bb7200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7200u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  if (in_edx == 0) {
    if (in_eax != (short *)0x0) {
      sVar1 = *in_eax;
      psVar2 = in_eax;
      while (sVar1 != 0) {
        psVar2 = psVar2 + 1;
        in_edx = in_edx + 1;
        sVar1 = *psVar2;
      }
    }
    if (in_edx == 0) {
      return 0;
    }
  }
  iVar3 = param_3 - (int)in_eax;
  do {
    sVar1 = *in_eax;
    *(short *)(iVar3 + (int)in_eax) = sVar1;
    in_edx = in_edx - 1;
    in_eax = in_eax + 1;
    if (sVar1 == 0) {
      return 0;
    }
  } while (in_edx != 0);
  return 0;
}

/* ref: FUN_00bb7240 */
GEN_FRAME uint F_00bb7240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7240u, gen_a0, gen_a1, 0u, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  short sVar1;
  short * psVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_2;
  if ((param_2 == 0) && (uVar4 = 0, in_eax != (short *)0x0)) {
    sVar1 = *in_eax;
    psVar2 = in_eax;
    while (sVar1 != 0) {
      psVar2 = psVar2 + 1;
      uVar4 = uVar4 + 1;
      sVar1 = *psVar2;
    }
  }
  pvVar3 = F_00c51787(uVar4 * 2 + 2);
  uVar5 = 0;
  if (*in_eax != 0) {
    iVar6 = (int)pvVar3 - (int)in_eax;
    do {
      if (uVar4 <= uVar5) break;
      *(short *)(iVar6 + (int)in_eax) = *in_eax;
      in_eax = in_eax + 1;
      uVar5 = uVar5 + 1;
    } while (*in_eax != 0);
  }
  *(undefined2 *)((int)pvVar3 + uVar5 * 2) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00bb72b0 */
GEN_NOFRAME uint F_00bb72b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb72b0u, gen_a0, 0u, 0u, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  short sVar1;
  short * psVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (in_eax != (short *)0x0) {
    sVar1 = *in_eax;
    psVar2 = in_eax;
    while (sVar1 != 0) {
      psVar2 = psVar2 + 1;
      uVar5 = uVar5 + 1;
      sVar1 = *psVar2;
    }
  }
  pvVar3 = F_00c51787(uVar5 * 2 + 2);
  uVar4 = 0;
  if (*in_eax != 0) {
    iVar6 = (int)pvVar3 - (int)in_eax;
    do {
      if (uVar5 <= uVar4) break;
      *(short *)(iVar6 + (int)in_eax) = *in_eax;
      in_eax = in_eax + 1;
      uVar4 = uVar4 + 1;
    } while (*in_eax != 0);
  }
  *(undefined2 *)((int)pvVar3 + uVar4 * 2) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00bb7330 */
GEN_FRAME uint F_00bb7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7330u, gen_a0, gen_a1, 0u, 0u);
  ushort in_ax = (ushort)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ax == 0x20) {
    return 1;
  }
  return 1 << ((byte)in_ax & 0x1f) & *((uint *)GEN_TOP((param_2 + 0xc + (uint)(in_ax >> 5) * 4)));
}

/* ref: FUN_00bb7360 */
GEN_FRAME uint F_00bb7360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7360u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort * local_8;
  
  iVar4 = 0;
  local_8 = in_eax;
  while( true ) {
    while( true ) {
      uVar1 = *local_8;
      if ((uVar1 == 0) ||
         ((uVar1 != 0x20 &&
          ((int)(1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_3 + 0xc + (uint)(uVar1 >> 5) * 4)))) < 1)
          ))) break;
      local_8 = local_8 + 1;
    }
    uVar2 = *(ushort *)(in_esi + iVar4 * 2);
    while ((uVar2 != 0 &&
           ((uVar2 == 0x20 ||
            (0 < (int)(1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_3 + 0xc + (uint)(uVar2 >> 5) * 4)))
                      )))))) {
      uVar2 = *(ushort *)(in_esi + 2 + iVar4 * 2);
      iVar4 = iVar4 + 1;
    }
    uVar3 = (uint)uVar1 - (uint)*(ushort *)(in_esi + iVar4 * 2);
    if ((uVar3 != 0) || (uVar1 == 0)) break;
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}

/* ref: FUN_00bb7400 */
GEN_FRAME uint F_00bb7400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7400u, gen_a0, gen_a1, 0u, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  bVar1 = *in_eax;
  uVar5 = (uint)bVar1;
  uVar3 = 1;
  if ((char)bVar1 < '\0') {
    uVar2 = CONCAT11(bVar1,in_eax[1]);
    if ((uVar2 & 0xe0c0) == 0xc080) {
      uVar5 = uVar2 >> 2 & 0x7c0 | uVar2 & 0x3f;
      uVar3 = 2;
    }
    else {
      uVar3 = (uint)CONCAT21(uVar2,in_eax[2]);
      if ((uVar3 & 0xf0c0c0) != 0xe08080) {
        *param_2 = 0;
        return 1;
      }
      uVar5 = ((uint3)(CONCAT21(uVar2,in_eax[2]) >> 2) & 0x3c000 | uVar3 & 0x3f00) >> 2 |
              uVar3 & 0x3f;
      uVar3 = 3;
    }
  }
  uVar4 = (undefined2)uVar5;
  if (0xffff < uVar5) {
    uVar4 = 0;
  }
  *param_2 = uVar4;
  return uVar3;
}

/* ref: FUN_00bb74a0 */
GEN_FRAME uint F_00bb74a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb74a0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *in_eax;
  uVar5 = 0;
  do {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        *(undefined2 *)(param_2 + uVar5 * 2) = 0;
      }
      return uVar5;
    }
    uVar4 = (uint)bVar1;
    sVar3 = 0;
    iVar6 = 1;
    if ((char)bVar1 < '\0') {
      uVar2 = CONCAT11(bVar1,in_eax[1]);
      if ((uVar2 & 0xe0c0) == 0xc080) {
        uVar4 = uVar2 >> 2 & 0x7c0 | uVar2 & 0x3f;
        iVar6 = 2;
        goto LAB_00bb7534;
      }
      uVar4 = (uint)CONCAT21(uVar2,in_eax[2]);
      if ((uVar4 & 0xf0c0c0) == 0xe08080) {
        uVar4 = ((uint3)(CONCAT21(uVar2,in_eax[2]) >> 2) & 0x3c000 | uVar4 & 0x3f00) >> 2 |
                uVar4 & 0x3f;
        iVar6 = 3;
        goto LAB_00bb7534;
      }
    }
    else {
LAB_00bb7534: ;
      sVar3 = (short)uVar4;
      if (0xffff < uVar4) {
        sVar3 = 0;
      }
    }
    in_eax = in_eax + iVar6;
    if (sVar3 == 0) {
      sVar3 = (short)param_3;
    }
    if (param_2 != 0) {
      *(short *)(param_2 + uVar5 * 2) = sVar3;
    }
    bVar1 = *in_eax;
    uVar5 = uVar5 + 1;
  } while( true );
}

/* ref: FUN_00bb75e0 */
GEN_FRAME uint F_00bb75e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb75e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar1 = *(*(ushort * PTR32 *)&gen_args[1]);
  puVar6 = (*(ushort * PTR32 *)&gen_args[1]);
  puVar3 = (*(ushort * PTR32 *)&gen_args[1]);
  while (uVar1 != 0) {
    puVar6 = puVar6 + 1;
    uVar4 = (undefined1)uVar1;
    if (uVar1 < 0x80) {
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar3) >> 8),uVar4)));
      iVar7 = 1;
    }
    else {
      uVar5 = (undefined1)(uVar1 >> 6);
      (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))) = (undefined2)((uint)((int)(uintptr_t)puVar3) >> 0x10);
      if (uVar1 < 0x800) {
        (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP((CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))),CONCAT11(uVar4,uVar5)) & 0xffff3fff | 0x80c0)));
        iVar7 = 2;
      }
      else {
        uVar2 = CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))),CONCAT11(uVar5,(byte)(uVar1 >> 0xc))) & 0xffff3fff;
        (*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 3)))) = (undefined1)(uVar2 >> 0x18);
        (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP((CONCAT13((*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 3)))),CONCAT12(uVar4,(short)uVar2)) & 0xff3fffff | 0x8080e0)));
        iVar7 = 3;
      }
    }
    if (((*(int *)&gen_args[0]) != 0) && (iVar7 != 0)) {
      F_00c46aa0((*(int *)&gen_args[0]) + uVar8,&(*(ushort * PTR32 *)&gen_args[1]),iVar7);
    }
    uVar8 = uVar8 + iVar7;
    puVar3 = (*(ushort * PTR32 *)&gen_args[1]);
    uVar1 = *puVar6;
  }
  if ((*(int *)&gen_args[0]) != 0) {
    *(undefined1 *)(uVar8 + (*(int *)&gen_args[0])) = 0;
  }
  return uVar8;
}

/* ref: FUN_00bb76a0 */
GEN_NOFRAME uint F_00bb76a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb76a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_eax = (uint)gen_a0;
  int in_edx = (int)gen_a1;
  int in_esi = (int)gen_a2;
  ushort in_di = (ushort)gen_a3;
  int iVar1;
  
  if ((int)in_eax < in_edx) {
    do {
      iVar1 = (int)(in_eax + in_edx) >> 1;
      if (*(ushort *)(in_esi + iVar1 * 2) < in_di) {
        in_eax = iVar1 + 1;
        iVar1 = in_edx;
      }
      in_edx = iVar1;
    } while ((int)in_eax < iVar1);
  }
  if (*(ushort *)(in_esi + in_eax * 2) != in_di) {
    in_eax = 0xffffffff;
  }
  return in_eax;
}

/* ref: FUN_00bb76d0 */
GEN_FRAME ushort F_00bb76d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb76d0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return *in_eax;
  }
  uVar2 = *in_eax;
  bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + in_esi)));
  if (bVar1 != 0) {
    uVar2 = *((ushort *)GEN_TOP((in_esi + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
  }
  return uVar2;
}

/* ref: FUN_00bb7710 */
GEN_FRAME uint F_00bb7710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb7710u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_4 != 0) {
    uVar3 = *in_eax;
    bVar1 = *((byte *)GEN_TOP(((uVar3 >> 8) + 0x800c + in_ecx)));
    if (bVar1 != 0) {
      uVar3 = *((ushort *)GEN_TOP((in_ecx + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar3 & 0xff)) * 2)));
    }
    uVar2 = *param_3;
    bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + in_ecx)));
    if (bVar1 != 0) {
      uVar2 = *((ushort *)GEN_TOP((in_ecx + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
    }
    return (uint)(uVar3 == uVar2);
  }
  return (uint)(*in_eax == *param_3);
}

/* ref: FUN_00bb77a0 */
GEN_FRAME uint F_00bb77a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbb77a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  short * param_5 = (short *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort * puVar9;
  
  pcVar5 = (char *)param_5;
  while( true ) {
    while( true ) {
      iVar7 = param_2 + 0x22c;
      iVar6 = *(int *)(param_2 + 0x10) + iVar7;
      iVar8 = *(int *)(param_2 + 4) + iVar7;
      iVar4 = *(int *)(param_2 + 8) + iVar7;
      if (*pcVar5 == '\0') break;
      if (*pcVar5 != '\x01') {
        return 0;
      }
      param_5 = ((short *)GEN_TOP((*(int *)(param_2 + 0xc) + (*(uint *)(pcVar5 + 0xc) & 0xfffffffe) + iVar7)));
      iVar7 = 0;
      if (*param_5 != 0) {
        iVar7 = 0;
        puVar9 = param_3;
        do {
          uVar2 = *puVar9;
          if ((uVar2 != 0x20) &&
             ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar2 >> 5) * 4)))) == 0))
          {
            if ((param_4 <= iVar7) ||
               (uVar3 = F_00bb7710(param_5,param_1,puVar9,*(undefined4 *)(param_2 + 0x28)),
               uVar3 == 0)) {
              *param_6 = 0;
              return 0;
            }
            param_5 = param_5 + 1;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (*param_5 != 0);
      }
      *param_6 = *param_6 + iVar7;
      if (*(ushort *)(pcVar5 + 8) == 0) {
        return 1;
      }
      uVar2 = *((ushort *)GEN_TOP((iVar8 + (uint)*(ushort *)(pcVar5 + 8) * 2)));
      if (uVar2 == 0) {
        return 1;
      }
      pcVar5 = (char *)((uint)uVar2 * 0x10 + iVar6);
      param_4 = param_4 - iVar7;
      param_3 = param_3 + iVar7;
    }
    uVar3 = *(uint *)(pcVar5 + 0xc);
    if (*((short *)GEN_TOP((iVar4 + (uVar3 >> 1) * 2))) == 0) {
      return 1;
    }
    param_5 = (short *)0x0;
    uVar2 = *param_3;
    iVar7 = (int)param_5;
    while ((uVar2 != 0 &&
           ((uVar2 = param_3[iVar7], uVar2 == 0x20 ||
            ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar2 >> 5) * 4)))) != 0)))
           )) {
      iVar7 = iVar7 + 1;
      if (param_4 <= iVar7) goto LAB_00bb7978;
      uVar2 = param_3[iVar7];
    }
    bVar1 = pcVar5[4];
    uVar2 = F_00bb76d0(param_3 + iVar7,param_1,*(undefined4 *)(param_2 + 0x28));
    uVar3 = F_00bb76a0(0,bVar1 - 1,iVar4 + (uVar3 >> 1) * 2,uVar2);
    if ((int)uVar3 < 0) break;
    if ((*(ushort *)(pcVar5 + 8) == 0) ||
       (uVar2 = *((ushort *)GEN_TOP((iVar8 + (*(ushort *)(pcVar5 + 8) + uVar3) * 2))), uVar2 == 0)) {
      *param_6 = *param_6 + iVar7 + 1;
      return 1;
    }
    *param_6 = *param_6 + 1;
    param_4 = param_4 - 1;
    pcVar5 = (char *)((uint)uVar2 * 0x10 + iVar6);
    param_3 = param_3 + iVar7 + 1;
  }
LAB_00bb7978: ;
  *param_6 = 0;
  return 0;
}

/* ref: FUN_00bb79a0 */
GEN_FRAME uint F_00bb79a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  if (*in_edi == 0) {
    uVar3 = 0;
    for (; in_eax < param_4; in_eax = in_eax + 1) {
      uVar1 = *(ushort *)(param_3 + in_eax * 2);
      uVar3 = (uint)uVar1;
      if ((uVar3 != 0x20) &&
         (uVar3 = (uint)(uVar1 >> 5), (1 << ((byte)uVar1 & 0x1f) & in_edi[uVar3 + 3]) == 0)) {
        uVar3 = (uint)*(ushort *)(in_edi + 1);
        *(ushort *)(param_3 + in_eax * 2) = *(ushort *)(in_edi + 1);
      }
    }
  }
  else {
    uVar3 = *in_edi - 1;
    if (uVar3 == 0) {
      local_8 = 0;
      for (iVar5 = in_eax; iVar5 < param_4; iVar5 = iVar5 + 1) {
        uVar1 = *(ushort *)(param_3 + iVar5 * 2);
        if ((uVar1 != 0x20) && ((1 << ((byte)uVar1 & 0x1f) & in_edi[(uVar1 >> 5) + 3]) == 0)) {
          local_8 = local_8 + 1;
        }
      }
      uVar4 = F_00c4f2dd();
      lVar2 = (longlong)(int)local_8;
      uVar3 = (uint)((longlong)(ulonglong)(uVar4 & 0xffff) / lVar2);
      local_8 = 0;
      if (in_eax < param_4) {
        do {
          uVar1 = *(ushort *)(param_3 + in_eax * 2);
          uVar3 = (uint)uVar1;
          if ((uVar3 != 0x20) &&
             (uVar3 = (uint)(uVar1 >> 5), (1 << ((byte)uVar1 & 0x1f) & in_edi[uVar3 + 3]) == 0)) {
            if (local_8 == (uint)((longlong)(ulonglong)(uVar4 & 0xffff) % lVar2)) {
              *(short *)(param_3 + in_eax * 2) = (short)in_edi[1];
            }
            uVar3 = local_8;
            local_8 = local_8 + 1;
          }
          in_eax = in_eax + 1;
        } while (in_eax < param_4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bb7aa0 */
GEN_FRAME uint F_00bb7aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb7aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int * piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *param_5 = 0;
  iVar3 = *(int *)(in_edi + 0x8110 + in_ecx * 4);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)(iVar3 + in_edi);
  if (*(int *)(iVar3 + 0x28 + in_edi) == 0) {
    uVar4 = (uint)*param_3;
  }
  else {
    uVar4 = (uint)*param_3;
    bVar2 = *((byte *)GEN_TOP(((*param_3 >> 8) + 0x800c + in_edi)));
    if (bVar2 != 0) {
      uVar4 = (uint)*((ushort *)GEN_TOP((in_edi + 0x7f24 + ((uint)bVar2 * 0x100 + (uVar4 & 0xff)) * 2)));
    }
  }
  uVar5 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uVar4 >> 8) * 2 + 0x2c)));
  if (uVar5 != 0) {
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + *piVar1 + ((uVar4 & 0xff) + uVar5 * 0x100) * 2 + 0x22c)));
    if (uVar4 != 0) {
      uVar4 = F_00bb77a0(in_edi,piVar1,param_3 + 1,param_4 - 1,
                           (int)piVar1 + uVar4 * 0x10 + piVar1[4] + 0x22c,param_5);
      return uVar4;
    }
  }
  return 0;
}

/* ref: FUN_00bb7b60 */
GEN_FRAME uint F_00bb7b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7b60u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * puVar1;
  ushort uVar2;
  uint local_8;
  
  uVar2 = *in_eax;
  local_8 = 0;
  while (uVar2 != 0) {
    if ((uVar2 != 0x20) &&
       ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_2 + 0xc + (uint)(uVar2 >> 5) * 4)))) == 0)) {
      local_8 = local_8 + uVar2;
    }
    puVar1 = in_eax + 1;
    in_eax = in_eax + 1;
    uVar2 = *puVar1;
  }
  return local_8 & 0x3ff;
}

/* ref: FUN_00bb7bc0 */
GEN_FRAME uint F_00bb7bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  ushort * puVar3;
  undefined * _Memory;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  int local_c;
  
  if (*(int *)(param_1 + 0x811c) == 0) {
    return 0;
  }
  piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x811c) + param_1)));
  iVar5 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar2 = *param_2;
    puVar3 = param_2;
    while (uVar2 != 0) {
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
      uVar2 = *puVar3;
    }
  }
  _Memory = F_00c51787(iVar5 * 2 + 2);
  uVar2 = *param_2;
  iVar5 = 0;
  local_c = 0;
  if (uVar2 != 0) {
    iVar6 = 0;
    do {
      if (piVar7[6] != 0) {
        bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + param_1)));
        if (bVar1 != 0) {
          uVar2 = *((ushort *)GEN_TOP((param_1 + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
        }
      }
      iVar5 = local_c + 1;
      *(ushort *)(iVar6 + (int)_Memory) = uVar2;
      iVar6 = iVar5 * 2;
      uVar2 = param_2[iVar5];
      local_c = iVar5;
    } while (uVar2 != 0);
  }
  *(undefined2 *)((int)_Memory + iVar5 * 2) = 0;
  uVar4 = F_00bb7b60(_Memory,param_1);
  iVar5 = *(int *)(*piVar7 + 0x1c + uVar4 * 4 + (int)piVar7);
  while( true ) {
    if (iVar5 == 0) {
      F_00c4c68f(_Memory);
      return 0;
    }
    iVar5 = piVar7[1] + iVar5 * 8;
    uVar4 = F_00bb7360(piVar7[2] + 0x1c + *(int *)(iVar5 + 0x14 + (int)piVar7) * 2 + (int)piVar7,
                         _Memory,param_1);
    if (uVar4 == 0) break;
    iVar5 = *(int *)((int)piVar7 + iVar5 + 0x18);
  }
  F_00c4c68f(_Memory);
  return 1;
}

/* ref: FUN_00bb7d00 */
GEN_FRAME uint F_00bb7d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb7d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  short sVar2;
  undefined * _Memory;
  uint uVar3;
  short * _Memory_00;
  int iVar4;
  short * psVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x8110 + param_2 * 4) == 0) || (*(short *)(param_1 + 8) == -0xe1)) ||
     (*(short *)(param_1 + 8) == 0)) {
    return 0;
  }
  _Memory = (undefined *)F_00bb72b0(param_3);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = _Memory;
  if (param_2 == 3) {
    uVar3 = F_00bb7bc0(param_1,_Memory);
    F_00c4c68f(_Memory);
    return uVar3;
  }
  iVar6 = param_4 * 2 + 2;
  _Memory_00 = F_00c51787(iVar6);
  F_00c46aa0(_Memory_00,(*(undefined * PTR32 *)(gen_frame + 0x18)),iVar6);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < param_4) {
    do {
      uVar1 = _Memory_00[iVar6];
      if ((uVar1 == 0x20) ||
         ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) != 0))
      goto LAB_00bb7eb3;
      if ((param_2 == 2) ||
         (uVar3 = F_00bb7aa0(4,param_1,_Memory_00 + iVar6,param_4 - iVar6,((int *)(gen_frame + 0x8))),
         (int)uVar3 < 1)) {
        uVar3 = F_00bb7aa0(param_2,param_1,_Memory_00 + iVar6,param_4 - iVar6,&(*(int *)(gen_frame + 0x10)));
        if (uVar3 == 0) {
LAB_00bb7eb3: ;
          iVar6 = iVar6 + 1;
          goto LAB_00bb7eb4;
        }
        iVar4 = (*(int *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x10)) = iVar4;
        switch((unsigned int)(uintptr_t)(param_5)) {
        case 0: ;
          if (param_2 == 2) {
            F_00c4c68f(_Memory_00);
            F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
            return 0;
          }
          F_00bb79a0(iVar6,param_1,_Memory_00,iVar4 + iVar6);
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            sVar2 = *psVar5;
          }
          iVar4 = 0;
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            iVar4 = iVar4 + 1;
            sVar2 = *psVar5;
          }
          if (iVar4 != 0) {
            psVar5 = _Memory_00;
            do {
              sVar2 = *psVar5;
              *((short *)GEN_TOP(((param_3 - (int)_Memory_00) + (int)psVar5))) = sVar2;
              iVar4 = iVar4 - 1;
              psVar5 = psVar5 + 1;
              iVar6 = (*(int *)(gen_frame + 0x14));
              if (sVar2 == 0) break;
            } while (iVar4 != 0);
          }
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            sVar2 = *psVar5;
          }
          iVar6 = iVar6 + (*(int *)(gen_frame + 0x10));
          goto LAB_00bb7eb4;
        case 1: ;
          iVar4 = 0;
          if (iVar6 < 1) goto LAB_00bb7f26;
          goto LAB_00bb7f00;
        case 2: ;
          if (iVar4 + iVar6 <= param_4) {
            if (param_4 == iVar4 + iVar6) {
              F_00c4c68f(_Memory_00);
              F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
              return 1;
            }
            goto LAB_00bb7eb3;
          }
          goto LAB_00bb7ec0;
        case 3: ;
          F_00c4c68f(_Memory_00);
          F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
          return 1;
        }
      }
      else {
        iVar6 = iVar6 + ((int *)(gen_frame + 0x8))[0];
LAB_00bb7eb4: ;
        (*(int *)(gen_frame + 0x14)) = iVar6;
      }
    } while (iVar6 < param_4);
  }
LAB_00bb7ec0: ;
  F_00c4c68f(_Memory_00);
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
  return 0;
  while (iVar4 = iVar4 + 1, iVar4 < iVar6) {
LAB_00bb7f00: ;
    uVar1 = _Memory_00[iVar4];
    if ((uVar1 != 0x20) &&
       ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) == 0))
    break;
  }
LAB_00bb7f26: ;
  F_00c4c68f(_Memory_00);
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
  return (uint)(iVar6 <= iVar4);
}

/* ref: FUN_00bb7fa0 */
GEN_FRAME unsigned int F_00bb7fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7fa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0) && ((*(int *)&gen_a1) != 0)) && (*param_3 != 0)) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *param_3) {
      do {
        uVar1 = *(ushort *)((*(int *)&gen_a1) + iVar2 * 2);
        if (uVar1 == 0) break;
        if ((uVar1 != 0x20) &&
           ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) == 0)) {
          *(ushort *)((*(int *)&gen_a1) + iVar3 * 2) = uVar1;
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_3);
    }
    *(undefined2 *)((*(int *)&gen_a1) + iVar3 * 2) = 0;
    *param_3 = iVar3;
  }
  return;
}

/* ref: FUN_00bb8010 */
GEN_FRAME uint F_00bb8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,3,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_00bb8030 */
GEN_FRAME uint F_00bb8030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,3,_Memory,uVar2,1);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8090 */
GEN_FRAME uint F_00bb8090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,0,param_2,param_3,3);
  return uVar1;
}

/* ref: FUN_00bb80b0 */
GEN_FRAME uint F_00bb80b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb80b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,0,_Memory,uVar2,3);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8110 */
GEN_FRAME uint F_00bb8110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_00bb8130 */
GEN_FRAME uint F_00bb8130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,1,_Memory,uVar2,1);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8190 */
GEN_FRAME uint F_00bb8190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,2,param_2,param_3,2);
  return uVar1;
}

/* ref: FUN_00bb81b0 */
GEN_FRAME uint F_00bb81b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb81b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,2,_Memory,uVar2,2);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8210 */
GEN_FRAME uint F_00bb8210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort * puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined * _Memory;
  short * _Memory_00;
  uint uVar5;
  char * pcVar6;
  short * psVar7;
  int iVar8;
  int iVar9;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    iVar9 = (*(int *)(gen_frame + 0x14));
    if ((((param_1 != 0) && (*(int *)(param_1 + 0x8110 + (*(int *)(gen_frame + 0x14)) * 4) != 0)) &&
        (*(short *)(param_1 + 8) != -0xe1)) && (*(short *)(param_1 + 8) != 0)) {
      _Memory = (undefined *)F_00bb72b0(param_2);
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = _Memory;
      if (iVar9 == 3) {
        F_00bb7bc0(param_1,_Memory);
        F_00c4c68f(_Memory);
      }
      else {
        iVar9 = param_3 * 2 + 2;
        _Memory_00 = F_00c51787(iVar9);
        F_00c46aa0(_Memory_00,(*(undefined * PTR32 *)(gen_frame + 0xc)),iVar9);
        (*(int *)(gen_frame + 0x18)) = 0;
        if (0 < param_3) {
          do {
            puVar1 = (ushort *)(_Memory_00 + (*(int *)(gen_frame + 0x18)));
            uVar3 = *puVar1;
            if ((uVar3 == 0x20) ||
               ((1 << ((byte)uVar3 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar3 >> 5) * 4)))) != 0
               )) {
LAB_00bb83aa: ;
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
            }
            else if (((*(int *)(gen_frame + 0x14)) == 2) ||
                    (uVar5 = F_00bb7aa0(4,param_1,puVar1,param_3 - (*(int *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x8))),
                    (int)uVar5 < 1)) {
              uVar5 = F_00bb7aa0((*(int *)(gen_frame + 0x14)),param_1,puVar1,param_3 - (*(int *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x10)));
              iVar9 = (*(int *)(gen_frame + 0x18));
              if (uVar5 == 0) goto LAB_00bb83aa;
              iVar8 = (*(int *)(gen_frame + 0x10)) + 1;
              (*(int *)(gen_frame + 0x10)) = iVar8;
              if ((*(int *)(gen_frame + 0x14)) == 2) {
                F_00c4c68f(_Memory_00);
                goto LAB_00bb83ca;
              }
              F_00bb79a0((*(int *)(gen_frame + 0x18)),param_1,_Memory_00,iVar8 + (*(int *)(gen_frame + 0x18)));
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                sVar4 = *psVar7;
              }
              iVar8 = 0;
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                iVar8 = iVar8 + 1;
                sVar4 = *psVar7;
              }
              if (iVar8 != 0) {
                psVar7 = _Memory_00;
                do {
                  sVar4 = *psVar7;
                  *((short *)GEN_TOP((((int)param_2 - (int)_Memory_00) + (int)psVar7))) = sVar4;
                  iVar8 = iVar8 - 1;
                  psVar7 = psVar7 + 1;
                  if (sVar4 == 0) break;
                } while (iVar8 != 0);
              }
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                sVar4 = *psVar7;
              }
              (*(int *)(gen_frame + 0x18)) = iVar9 + (*(int *)(gen_frame + 0x10));
            }
            else {
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x8));
            }
          } while ((*(int *)(gen_frame + 0x18)) < param_3);
        }
        F_00c4c68f(_Memory_00);
LAB_00bb83ca: ;
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0xc)));
        iVar9 = (*(int *)(gen_frame + 0x14));
      }
    }
    (*(int *)(gen_frame + 0x14)) = iVar9 + 1;
    if (3 < iVar9 + 1) {
      pcVar6 = param_2;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      return (int)pcVar6 - (int)(param_2 + 1);
    }
  } while( true );
}

/* ref: FUN_00bb8410 */
GEN_FRAME uint F_00bb8410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8410u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  F_00bb8210(param_1,_Memory,uVar2);
  uVar2 = F_00bb75e0(param_2,_Memory);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8470 */
GEN_FRAME uint F_00bb8470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8470u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  F_00bb7fa0((*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
  uVar1 = (*(undefined4 *)&gen_args[2]);
  uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),3);
  if (uVar2 == 0) {
    uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),3,(*(undefined4 *)&gen_args[1]),uVar1,1);
    if (uVar2 == 0) {
      uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),1,(*(undefined4 *)&gen_args[1]),uVar1,1);
      if (uVar2 == 0) {
        uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[1]),uVar1,2);
        return (uint)(uVar2 != 0);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bb84f0 */
GEN_FRAME uint F_00bb84f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb84f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb8470(param_1,_Memory,uVar2);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8540 */
GEN_FRAME unsigned int F_00bb8540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return 0;
}

/* ref: FUN_00bb85a0 */
GEN_FRAME uint F_00bb85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb85a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return (uint)param_1;
}

/* ref: FUN_00bb85e0 */
GEN_FRAME unsigned int F_00bb85e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb85e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00bb7400(param_2 + 1,((undefined2 *)(gen_frame + 0x4)));
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = ((undefined2 *)(gen_frame + 0x4))[0];
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return 0;
}

/* ref: FUN_00bb8640 */
GEN_NOFRAME uint F_00bb8640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8640u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00c11930(in_edi,0,0,0xc0);
  *(uint *)(in_esi + 0x28) = uVar2;
  *(uint *)(in_esi + 0x14) = uVar2;
  *(undefined4 *)(in_esi + 0x30) = 8;
  *(uint *)(in_esi + 0x24) = uVar2 + 0xa8;
  uVar2 = F_00c11930(in_edi,0,0,0x2d0);
  *(uint *)(in_esi + 8) = uVar2;
  *(uint *)(in_esi + 0x20) = uVar2;
  *(uint *)(in_esi + 0x1c) = uVar2 + 0x270;
  *(undefined4 *)(in_esi + 0x2c) = 0x2d;
  *((uint *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) = uVar2;
  *((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + 8))) = 0;
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  **(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 *)(in_esi + 8);
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0xc) = *puVar1;
  puVar1[2] = *(int *)(in_esi + 8) + 0x140;
  return (uint)puVar1;
}

/* ref: FUN_00bb86f0 */
GEN_NOFRAME uint F_00bb86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb86f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  F_00bb8640(param_1,param_1);
  uVar3 = F_00c05020(param_1,0,2);
  *(uint *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 5;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = F_00c05020(param_1,0,2);
  *(uint *)(iVar2 + 0x60) = uVar3;
  *(undefined4 *)(iVar2 + 0x68) = 5;
  F_00c05920(param_1,0x20);
  F_00c02ad0(param_1);
  F_00c11a90(param_1);
  uVar3 = F_00c05a80(param_1,((char *)REFP(0x13419a8)),0x11);
  *(byte *)(uVar3 + 5) = *(byte *)(uVar3 + 5) | 0x20;
  uVar3 = *(int *)(iVar1 + 0x44) * 4;
  *(uint *)(iVar1 + 0x40) = uVar3;
  return uVar3;
}

/* ref: FUN_00bb87c0 */
GEN_NOFRAME uint F_00bb87c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb87c0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_esi + 0x10);
  F_00c05da0(in_esi,*(undefined4 *)(in_esi + 0x20));
  F_00c01460(in_esi);
  F_00c11930(in_esi,**(undefined4 * PTR32 *)(in_esi + 0x10),(*(undefined4 * PTR32 *)(in_esi + 0x10))[2] * 4,0);
  uVar2 = F_00c11930(in_esi,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x3c),0);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  F_00c11930(in_esi,*(undefined4 *)(in_esi + 0x28),*(int *)(in_esi + 0x30) * 0x18,0);
  F_00c11930(in_esi,*(undefined4 *)(in_esi + 0x20),*(int *)(in_esi + 0x2c) << 4,0);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x10),in_esi,0x178,0);
  return uVar2;
}

/* ref: FUN_00bb8850 */
GEN_NOFRAME uint F_00bb8850(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_esi;
  
  in_esi = F_00c11930(param_1,0,0,0x78);
  F_00c01960(param_1,in_esi,8);
  *(undefined4 *)(in_esi + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_esi + 0x20) = 0;
  *(undefined4 *)(in_esi + 0x2c) = 0;
  *(undefined4 *)(in_esi + 0x70) = 0;
  *(undefined4 *)(in_esi + 0x44) = 0;
  *(undefined1 *)(in_esi + 0x38) = 0;
  *(undefined4 *)(in_esi + 0x3c) = 0;
  *(undefined1 *)(in_esi + 0x39) = 1;
  *(undefined4 *)(in_esi + 0x40) = 0;
  *(undefined4 *)(in_esi + 0x68) = 0;
  *(undefined4 *)(in_esi + 0x30) = 0;
  *(undefined2 *)(in_esi + 0x36) = 0;
  *(undefined2 *)(in_esi + 0x34) = 0;
  *(undefined1 *)(in_esi + 6) = 0;
  *(undefined4 *)(in_esi + 0x14) = 0;
  *(undefined4 *)(in_esi + 0x28) = 0;
  *(undefined4 *)(in_esi + 0x18) = 0;
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x50) = 0;
  F_00bb8640(in_esi,param_1);
  *(undefined4 *)(in_esi + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_esi + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_esi + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined1 *)(in_esi + 0x38) = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_esi + 0x3c) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_esi + 0x40) = uVar1;
  *(undefined4 *)(in_esi + 0x44) = uVar2;
  return in_esi;
}

/* ref: FUN_00bb88f0 */
GEN_NOFRAME uint F_00bb88f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb88f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  F_00c05da0(param_2,*(undefined4 *)(param_2 + 0x20));
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x28),*(int *)(param_2 + 0x30) * 0x18,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 0x2c) << 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x78,0);
  return uVar1;
}

/* ref: FUN_00bb8950 */
GEN_NOFRAME uint F_00bb8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8950u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * in_esi;
  uint uVar1;
  
  in_esi = ((undefined4 *)GEN_TOP((*param_1)(param_2,0,0,0x178)));
  if (in_esi == (undefined4 *)0x0) {
    return 0;
  }
  *in_esi = 0;
  *(undefined1 *)(in_esi + 1) = 8;
  *(undefined1 *)(in_esi + 0x23) = 0x21;
  in_esi[4] = in_esi + 0x1e;
  *(undefined1 *)((int)in_esi + 5) = 0x61;
  in_esi[8] = 0;
  in_esi[0xb] = 0;
  in_esi[0x1c] = 0;
  in_esi[0x11] = 0;
  *(undefined1 *)(in_esi + 0xe) = 0;
  in_esi[0xf] = 0;
  *(undefined1 *)((int)in_esi + 0x39) = 1;
  in_esi[0x10] = 0;
  in_esi[0x1a] = 0;
  in_esi[0xc] = 0;
  *(undefined1 *)((int)in_esi + 6) = 0;
  in_esi[5] = 0;
  in_esi[10] = 0;
  in_esi[6] = 0;
  in_esi[0x1d] = 0;
  in_esi[0x14] = 0;
  *(undefined2 *)((int)in_esi + 0x36) = 0;
  *(undefined2 *)(in_esi + 0xd) = 0;
  in_esi[0x40] = in_esi + 0x3c;
  in_esi[0x41] = in_esi + 0x3c;
  in_esi[0x21] = param_1;
  in_esi[0x22] = param_2;
  in_esi[0x3a] = in_esi;
  in_esi[0x2e] = 0;
  in_esi[0x20] = 0;
  in_esi[0x1f] = 0;
  in_esi[0x1e] = 0;
  *(undefined4 *)(in_esi[4] + 0x68) = 0;
  in_esi[0x25] = in_esi;
  in_esi[0x2b] = 0;
  in_esi[0x2d] = 0;
  in_esi[0x34] = 0;
  *(undefined1 *)((int)in_esi + 0x8d) = 0;
  in_esi[0x24] = 0;
  in_esi[0x27] = 0;
  in_esi[0x28] = 0;
  in_esi[0x29] = 0;
  in_esi[0x2a] = 0;
  in_esi[0x2f] = 0x178;
  in_esi[0x31] = 0;
  in_esi[0x26] = in_esi + 0x25;
  in_esi[0x32] = 200;
  in_esi[0x33] = 200;
  in_esi[0x44] = 0;
  in_esi[0x45] = 0;
  in_esi[0x46] = 0;
  in_esi[0x47] = 0;
  in_esi[0x48] = 0;
  in_esi[0x49] = 0;
  in_esi[0x4a] = 0;
  in_esi[0x4b] = 0;
  in_esi[0x4c] = 0;
  uVar1 = F_00bb8b80(in_esi,((code *)REFP(0xbb86f0)),0);
  if (uVar1 != 0) {
    F_00bb87c0(in_esi);
    in_esi = (undefined4 *)0x0;
  }
  return (uint)in_esi;
}

/* ref: FUN_00bb8a90 */
GEN_NOFRAME uint F_00bb8a90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8a90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c01440(param_1);
  return uVar1;
}

/* ref: FUN_00bb8aa0 */
GEN_NOFRAME uint F_00bb8aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8aa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_esi;
  undefined4 uVar1;
  uint uVar2;
  
  in_esi = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70)));
  F_00c05da0(in_esi,*(undefined4 *)(in_esi + 0x20));
  F_00c00a50(in_esi,1);
  *(undefined4 *)(in_esi + 0x74) = 0;
  do {
    *(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 * PTR32 *)(in_esi + 0x28);
    uVar1 = **(undefined4 * PTR32 *)(in_esi + 0x28);
    *(undefined4 *)(in_esi + 8) = uVar1;
    *(undefined4 *)(in_esi + 0xc) = uVar1;
    *(undefined2 *)(in_esi + 0x36) = 0;
    *(undefined2 *)(in_esi + 0x34) = 0;
    uVar2 = F_00bb8b80(in_esi,((code *)REFP(0xbb8a90)),0);
  } while (uVar2 != 0);
  uVar2 = F_00bb87c0(in_esi);
  return uVar2;
}

/* ref: FUN_00bb8b00 */
GEN_NOFRAME uint F_00bb8b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8b00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  
  uVar2 = param_2 - 2;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    iVar1 = *(int *)(param_1 + 8);
    *param_3 = *(uint *)(iVar1 - 0x10);
    param_3[1] = *(uint *)(iVar1 - 0xc);
    uVar2 = *(uint *)(iVar1 - 8);
    param_3[2] = uVar2;
  default: ;
    *(uint * PTR32 *)(param_1 + 8) = param_3 + 4;
    return uVar2;
  case 2: ;
    uVar4 = 0x11;
    pcVar3 = ((char *)REFP(0x13419bc));
    break;
  case 3: ;
    uVar4 = 0x17;
    pcVar3 = ((char *)REFP(0x13419d0));
  }
  uVar2 = F_00c05a80(param_1,pcVar3,uVar4);
  *param_3 = uVar2;
  param_3[2] = 4;
  *(uint * PTR32 *)(param_1 + 8) = param_3 + 4;
  return uVar2;
}

/* ref: FUN_00bb8b80 */
GEN_FRAME uint F_00bb8b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8b80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 * PTR32 *)(param_1 + 0x70) = &(*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  uVar2 = GEN_SETJMP(((undefined1 *)(gen_frame + 0x18)));
  if (uVar2 == 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = param_3;
    (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (undefined1 *)param_1;
    (*param_2)(param_1,param_3);
    *(undefined4 *)(param_1 + 0x70) = (*(undefined4 *)(gen_frame + 0x14));
    return (*(uint *)(gen_frame + 0x58));
  }
  *(undefined4 *)(param_1 + 0x70) = (*(undefined4 *)(gen_frame + 0x14));
  return (*(uint *)(gen_frame + 0x58));
}

/* ref: FUN_00bb8c70 */
GEN_NOFRAME uint F_00bb8c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 + 7U < 0x10000000) {
    uVar5 = F_00c11930(param_1,iVar2,*(int *)(param_1 + 0x2c) << 4,(param_2 + 6) * 0x10);
  }
  else {
    uVar5 = F_00c11910(param_1);
  }
  *(uint *)(param_1 + 0x1c) = param_2 * 0x10 + uVar5;
  *(int *)(param_1 + 0x2c) = param_2 + 6;
  *(uint *)(param_1 + 0x20) = uVar5;
  *(int *)(param_1 + 8) = (*(int *)(param_1 + 8) - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  for (puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x68); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = (puVar1[2] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  }
  piVar3 = *(int * PTR32 *)(param_1 + 0x28);
  if (*(int * PTR32 *)(param_1 + 0x28) <= *(int * PTR32 *)(param_1 + 0x14)) {
    do {
      piVar4 = piVar3 + 6;
      piVar3[2] = (piVar3[2] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      *piVar3 = (*piVar3 - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      piVar3[1] = (piVar3[1] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      piVar3 = piVar4;
    } while (piVar4 <= *(int * PTR32 *)(param_1 + 0x14));
  }
  uVar5 = (*(int *)(param_1 + 0xc) - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc) = uVar5;
  return uVar5;
}

/* ref: FUN_00bb8cd0 */
GEN_NOFRAME uint F_00bb8cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8cd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (param_2 + 1U < 0xaaaaaab) {
    uVar3 = F_00c11930(param_1,iVar2,*(int *)(param_1 + 0x30) * 0x18,param_2 * 0x18);
  }
  else {
    uVar3 = F_00c11910(param_1);
  }
  *(int *)(param_1 + 0x30) = param_2;
  uVar1 = (uVar3 - 0x18) + param_2 * 0x18;
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x14) = uVar3 + ((*(int *)(param_1 + 0x14) - iVar2) / 0x18) * 0x18;
  *(uint *)(param_1 + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb8d50 */
GEN_NOFRAME uint F_00bb8d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_2 <= iVar1) {
    uVar2 = F_00bb8c70(param_1,iVar1 * 2);
    return uVar2;
  }
  uVar2 = F_00bb8c70(param_1,iVar1 + param_2);
  return uVar2;
}

/* ref: FUN_00bb8d80 */
GEN_NOFRAME uint F_00bb8d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code * pcVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(gen_code32 *)(gen_frame + 0x4));
  pcVar5 = *(gen_code32 *)(param_1 + 0x44);
  (*(gen_code32 *)(gen_frame + 0x4)) = pcVar5;
  if ((pcVar5 != (code *)0x0) && (*(char *)(param_1 + 0x39) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(iVar4 + 8);
    ((int *)(gen_frame + 0x8))[0] = param_2;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
    if (param_2 == 4) {
      (*(int *)(gen_frame + 0x68)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x68)) = (iVar4 - *(int *)(param_1 + 0x28)) / 0x18;
    }
    if (*(int *)(param_1 + 0x1c) - iVar2 < 0x141) {
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 < 0x14) {
        iVar4 = iVar4 + 0x14;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00bb8c70(param_1,iVar4);
    }
    *((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(int *)(param_1 + 8) + 0x140;
    *(undefined1 *)(param_1 + 0x39) = 0;
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))(param_1,((int *)(gen_frame + 0x8)));
    pcVar5 = ((code *)GEN_TOP((*(int *)(param_1 + 0x20) + (iVar3 - iVar1))));
    *(undefined1 *)(param_1 + 0x39) = 1;
    *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = pcVar5;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x20) + (iVar2 - iVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(gen_code32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return (uint)pcVar5;
}

/* ref: FUN_00bb8e70 */
GEN_NOFRAME uint F_00bb8e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8e70u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  double * pdVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  
  uVar8 = (uint)*(byte *)(in_ecx + 0x49);
  uVar9 = 0;
  if (param_3 < (int)uVar8) {
    iVar2 = uVar8 - param_3;
    param_3 = param_3 + iVar2;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + 8))) = 0;
      *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  if ((*(byte *)(in_ecx + 0x4a) & 4) != 0) {
    iVar2 = param_3 - uVar8;
    if (*((uint *)GEN_TOP((*(int *)(in_esi + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(in_esi + 0x10) + 0x44)))) {
      F_00c01810(in_esi);
    }
    uVar9 = F_00c05020(in_esi,iVar2,1);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2 * -0x10;
      do {
        iVar3 = iVar3 + 1;
        puVar10 = ((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + iVar7)));
        puVar4 = (undefined4 *)F_00c05310(in_esi,uVar9,iVar3);
        iVar7 = iVar7 + 0x10;
        *puVar4 = *puVar10;
        puVar4[1] = puVar10[1];
        puVar4[2] = puVar10[2];
      } while (iVar3 < iVar2);
    }
    uVar5 = F_00c05a80(in_esi,&REFG(undefined, 0x13419f8),1);
    pdVar6 = (double *)F_00c058d0(in_esi,uVar9,uVar5);
    *pdVar6 = (double)iVar2;
    *(undefined4 *)(pdVar6 + 1) = 3;
  }
  uVar5 = *(uint *)(in_esi + 8);
  if (uVar8 != 0) {
    puVar4 = (undefined4 *)(uVar5 + param_3 * -0x10 + 8);
    do {
      puVar10 = *(undefined4 * PTR32 *)(in_esi + 8);
      *(undefined4 * PTR32 *)(in_esi + 8) = puVar10 + 4;
      *puVar10 = puVar4[-2];
      puVar10[1] = puVar4[-1];
      puVar10[2] = *puVar4;
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar9 != 0) {
    puVar1 = *(uint * PTR32 *)(in_esi + 8);
    *(uint * PTR32 *)(in_esi + 8) = puVar1 + 4;
    *puVar1 = uVar9;
    puVar1[2] = 5;
  }
  return uVar5;
}

/* ref: FUN_00bb8fc0 */
GEN_NOFRAME uint F_00bb8fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  puVar3 = (undefined4 *)F_00c02b60(in_esi,in_edi,0x10);
  iVar1 = *(int *)(in_esi + 0x20);
  if (puVar3[2] != 6) {
    F_00c02970(in_esi,in_edi,&REFG(undefined, 0x13419fc));
  }
  puVar5 = *(undefined4 * PTR32 *)(in_esi + 8);
  puVar2 = puVar5;
  for (; in_edi < puVar5; puVar5 = puVar5 - 4) {
    *puVar5 = puVar2[-4];
    puVar5[1] = puVar2[-3];
    puVar2[2] = puVar2[-2];
    puVar2 = puVar2 - 4;
  }
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x11) {
    iVar4 = *(int *)(in_esi + 0x2c);
    if (iVar4 < 1) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    F_00bb8c70(in_esi,iVar4);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  puVar5 = ((undefined4 *)GEN_TOP(((int)in_edi + (*(int *)(in_esi + 0x20) - iVar1))));
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  puVar5[2] = puVar3[2];
  return (uint)puVar5;
}

/* ref: FUN_00bb9050 */
GEN_NOFRAME uint F_00bb9050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9050u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_esi = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_esi + 0x20);
  F_00bb8d80(in_esi,1,0xffffffff);
  if (*((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) + 6))) == '\0') {
    bVar1 = *(byte *)(in_esi + 0x38);
    while (((bVar1 & 2) != 0 &&
           (iVar3 = *((int *)GEN_TOP((*(int *)(in_esi + 0x14) + 0x14))),
           *((int *)GEN_TOP((*(int *)(in_esi + 0x14) + 0x14))) = iVar3 - 1, iVar3 != 0))) {
      F_00bb8d80(in_esi,4,0xffffffff);
      bVar1 = *(byte *)(in_esi + 0x38);
    }
  }
  return *(int *)(in_esi + 0x20) + (in_eax - iVar2);
}

/* ref: FUN_00bb90b0 */
GEN_NOFRAME uint F_00bb90b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb90b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  puVar2 = param_2;
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    puVar2 = (undefined4 *)F_00bb9050(param_2,param_1);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 * PTR32 *)(param_1 + 0x14) = (undefined4 *)(iVar4 - 0x18);
  iVar1 = *(int *)(iVar4 + 0x10);
  puVar3 = *(undefined4 * PTR32 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 - 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar4 - 0xc);
  iVar4 = iVar1;
  for (; (iVar4 != 0 && (puVar2 < *(undefined4 * PTR32 *)(param_1 + 8))); puVar2 = puVar2 + 4) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    iVar4 = iVar4 - 1;
    puVar3[2] = puVar2[2];
    puVar3 = puVar3 + 4;
  }
  for (; 0 < iVar4; iVar4 = iVar4 - 1) {
    puVar3[2] = 0;
    puVar3 = puVar3 + 4;
  }
  *(undefined4 * PTR32 *)(param_1 + 8) = puVar3;
  return iVar1 + 1;
}

/* ref: FUN_00bb9140 */
GEN_NOFRAME uint F_00bb9140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9140u, gen_a0, gen_a1, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  char cVar1;
  uint * puVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  
  puVar2 = ((uint *)GEN_TOP(**(int * PTR32 *)(in_esi + 0x14)));
  *(uint * PTR32 *)(in_esi + 8) = puVar2;
  pcVar4 = in_edx;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00c05a80(in_esi,in_edx,(int)pcVar4 - (int)(in_edx + 1));
  *puVar2 = uVar5;
  puVar2[2] = 4;
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x11) {
    iVar3 = *(int *)(in_esi + 0x2c);
    if (0 < iVar3) {
      F_00bb8c70(in_esi,iVar3 * 2);
      *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
      return 2;
    }
    F_00bb8c70(in_esi,iVar3 + 1);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  return 2;
}

/* ref: FUN_00bb91c0 */
GEN_NOFRAME uint F_00bb91c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb91c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(ushort *)(param_1 + 0x36) < *(ushort *)(param_1 + 0x34)) {
    F_00c02740(param_1,((char *)REFP(0x1341a54)));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + param_2 * -0x10;
  *(undefined1 *)(param_1 + 6) = 1;
  return 0xffffffff;
}

/* ref: FUN_00bb9200 */
GEN_NOFRAME uint F_00bb9200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  uVar1 = F_00c06020(*param_2);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  pcVar2 = ((code *)REFP(0xc073f0));
  if (uVar1 != (int)REFG(char, 0x1341a88)) {
    pcVar2 = ((code *)REFP(0xc16340));
  }
  uVar1 = (*pcVar2)(param_1,*param_2,param_2 + 1,param_2[4]);
  uVar3 = F_00c05c10(param_1,(uint)*(byte *)(uVar1 + 0x48),*(undefined4 *)(param_1 + 0x48));
  iVar5 = 0;
  *(uint *)(uVar3 + 0x10) = uVar1;
  if (*(char *)(uVar1 + 0x48) != '\0') {
    puVar6 = (uint *)(uVar3 + 0x14);
    do {
      uVar4 = F_00c05c70(param_1);
      *puVar6 = uVar4;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(uVar1 + 0x48));
  }
  puVar6 = *(uint * PTR32 *)(param_1 + 8);
  *puVar6 = uVar3;
  puVar6[2] = 6;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (0 < iVar5) {
      uVar1 = F_00bb8c70(param_1,iVar5 * 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
      return uVar1;
    }
    uVar3 = F_00bb8c70(param_1,iVar5 + 1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3;
}

/* ref: FUN_00bb9320 */
GEN_NOFRAME uint F_00bb9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9320u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 * PTR32 *)(in_esi + 0x28);
  uVar1 = **(undefined4 * PTR32 *)(in_esi + 0x28);
  *(undefined4 *)(in_esi + 0xc) = uVar1;
  F_00c05da0(in_esi,uVar1);
  F_00bb8b00(in_esi,param_2,*(undefined4 *)(in_esi + 0xc));
  *(undefined2 *)(in_esi + 0x34) = *(undefined2 *)(in_esi + 0x36);
  *(undefined1 *)(in_esi + 0x39) = 1;
  if ((20000 < *(int *)(in_esi + 0x30)) &&
     ((*(int *)(in_esi + 0x14) - *(int *)(in_esi + 0x28)) / 0x18 + 1 < 20000)) {
    F_00bb8cd0(in_esi,20000);
  }
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x70) = 0;
  return 0;
}

/* ref: FUN_00bb93a0 */
GEN_NOFRAME unsigned int F_00bb93a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb93a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(param_1 + 0x70) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x70) + 0x44))) = param_2;
                    
    GEN_LONGJMP(((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 4))), 1);
  }
  *(char *)(param_1 + 6) = (char)param_2;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58))) != 0) {
    F_00bb9320(param_1,param_2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58))))(param_1 GEN_EDX_ARG,param_2);
  }
                    
  F_00c47c5b(1);
}

/* ref: FUN_00bb93f0 */
GEN_NOFRAME uint F_00bb93f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb93f0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  if (20000 < *(int *)(in_esi + 0x30)) {
                    
    F_00bb93a0(in_esi,5);
  }
  F_00bb8cd0(in_esi,*(int *)(in_esi + 0x30) * 2);
  if (20000 < *(int *)(in_esi + 0x30)) {
    F_00c02740(in_esi,((char *)REFP(0x13419e8)));
  }
  *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 0x18;
  return *(uint *)(in_esi + 0x14);
}

/* ref: FUN_00bb9430 */
GEN_NOFRAME uint F_00bb9430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = param_2;
  if (param_2[2] != 6) {
    piVar2 = (int *)F_00bb8fc0(param_1,param_2);
  }
  iVar9 = *(int *)(param_1 + 0x20);
  iVar6 = *piVar2;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0xc))) = *(undefined4 *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
  if (*(char *)(iVar6 + 6) == '\0') {
    iVar6 = *(int *)(iVar6 + 0x10);
    uVar3 = (uint)*(byte *)(iVar6 + 0x4b);
    if (iVar8 <= (int)(uVar3 * 0x10)) {
      iVar8 = *(int *)(param_1 + 0x2c);
      if (iVar8 < (int)uVar3) {
        iVar8 = iVar8 + uVar3;
      }
      else {
        iVar8 = iVar8 * 2;
      }
      F_00bb8c70(param_1,iVar8);
    }
    uVar3 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
    if (*(char *)(iVar6 + 0x4a) == '\0') {
      uVar4 = uVar3 + 0x10;
      uVar1 = (uint)*(byte *)(iVar6 + 0x49) * 0x10 + uVar4;
      if (uVar1 < *(uint *)(param_1 + 8)) {
        *(uint *)(param_1 + 8) = uVar1;
      }
    }
    else {
      uVar4 = F_00bb8e70(iVar6,param_1,((int)(*(int *)(param_1 + 8) - uVar3) >> 4) - 1);
      uVar3 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
    }
    if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
      puVar5 = (uint *)F_00bb93f0(param_1);
    }
    else {
      puVar5 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x18)));
      *(uint * PTR32 *)(param_1 + 0x14) = puVar5;
    }
    puVar5[1] = uVar3;
    *puVar5 = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    puVar5[2] = (uint)*(byte *)(iVar6 + 0x4b) * 0x10 + uVar4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
    puVar5[5] = 0;
    puVar5[4] = param_3;
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 < puVar5[2]) {
      do {
        *(undefined4 *)(uVar3 + 8) = 0;
        uVar3 = uVar3 + 0x10;
      } while (uVar3 < puVar5[2]);
    }
    *(uint *)(param_1 + 8) = puVar5[2];
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      F_00bb8d80(param_1,0,0xffffffff);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - 4;
    }
    return 0;
  }
  if (iVar8 < 0x141) {
    iVar6 = *(int *)(param_1 + 0x2c);
    if (iVar6 < 0x14) {
      iVar6 = iVar6 + 0x14;
    }
    else {
      iVar6 = iVar6 * 2;
    }
    F_00bb8c70(param_1,iVar6);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
    piVar7 = (int *)F_00bb93f0(param_1);
  }
  else {
    piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x18)));
    *(int * PTR32 *)(param_1 + 0x14) = piVar7;
  }
  iVar9 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
  piVar7[1] = iVar9;
  iVar9 = iVar9 + 0x10;
  *piVar7 = iVar9;
  *(int *)(param_1 + 0xc) = iVar9;
  piVar7[2] = *(int *)(param_1 + 8) + 0x140;
  piVar7[4] = param_3;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    F_00bb8d80(param_1,0,0xffffffff);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0x10))))(param_1 GEN_EDX_ARG);
  if (-1 < (int)uVar3) {
    F_00bb90b0(param_1,*(int *)(param_1 + 8) + uVar3 * -0x10);
    return 1;
  }
  return 2;
}

/* ref: FUN_00bb9600 */
GEN_NOFRAME uint F_00bb9600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9600u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + 1;
  uVar1 = *(ushort *)(param_1 + 0x34);
  if (199 < uVar1) {
    if (uVar1 == 200) {
      F_00c02740(param_1,((char *)REFP(0x1341a04)));
    }
    else if (0xe0 < uVar1) {
                    
      F_00bb93a0(param_1,5);
    }
  }
  uVar2 = F_00bb9430(param_1,param_2,param_3);
  if (uVar2 == 0) {
    F_00c03850(param_1,1);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) - 1;
  if (*(uint *)(uVar2 + 0x40) <= *(uint *)(uVar2 + 0x44)) {
    uVar2 = F_00c01810(param_1);
  }
  return uVar2;
}

/* ref: FUN_00bb9680 */
GEN_NOFRAME uint F_00bb9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = F_00bb9430(param_1,param_2 - 0x10,0xffffffff);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(param_1 + 0x14))[1])) + 6))) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = **(undefined4 * PTR32 *)(param_1 + 0x14);
    }
    else {
      uVar1 = F_00bb90b0(param_1,param_2);
      if (uVar1 != 0) {
        *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
      }
    }
  }
  uVar1 = F_00c03850(param_1,(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28)) / 0x18);
  return uVar1;
}

/* ref: FUN_00bb9700 */
GEN_NOFRAME uint F_00bb9700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9700u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  short sVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 6) != '\x01') &&
     ((*(char *)(param_1 + 6) != '\0' || (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x28))))) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a18)),param_1);
    return uVar2;
  }
  if (199 < *(ushort *)(param_1 + 0x34)) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a40)),param_1);
    return uVar2;
  }
  sVar1 = *(ushort *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = sVar1;
  *(short *)(param_1 + 0x36) = sVar1;
  uVar2 = F_00bb8b80(param_1,((code *)REFP(0xbb9680)),*(int *)(param_1 + 8) + param_2 * -0x10);
  if (uVar2 != 0) {
    *(char *)(param_1 + 6) = (char)uVar2;
    F_00bb8b00(param_1,uVar2,*(undefined4 *)(param_1 + 8));
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(undefined4 *)(param_1 + 8);
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) - 1;
    return uVar2;
  }
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) - 1;
  return (uint)*(byte *)(param_1 + 6);
}

/* ref: FUN_00bb97b0 */
GEN_NOFRAME uint F_00bb97b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb97b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = *(undefined2 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = param_5;
  uVar7 = F_00bb8b80(param_1,param_2,param_3);
  if (uVar7 == 0) {
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x20) + param_4;
  F_00c05da0(param_1,iVar8);
  F_00bb8b00(param_1,uVar7,iVar8);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x28) + (iVar4 - iVar5))));
  *(undefined2 *)(param_1 + 0x34) = uVar3;
  *(undefined4 * PTR32 *)(param_1 + 0x14) = puVar1;
  *(undefined4 *)(param_1 + 0xc) = *puVar1;
  *(undefined4 *)(param_1 + 0x18) = puVar1[3];
  *(undefined1 *)(param_1 + 0x39) = uVar2;
  if (20000 < *(int *)(param_1 + 0x30)) {
    if (((int)puVar1 - *(int *)(param_1 + 0x28)) / 0x18 + 1 < 20000) {
      F_00bb8cd0(param_1,20000);
      *(undefined4 *)(param_1 + 0x74) = uVar6;
      return uVar7;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    return uVar7;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  return uVar7;
}

/* ref: FUN_00bb98b0 */
GEN_NOFRAME uint F_00bb98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb98b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  ((byte *)(gen_frame + 0xc))[4] = 0;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  uVar2 = F_00bb97b0(param_1,((code *)REFP(0xbb9200)),((byte *)(gen_frame + 0xc)),*(int *)(param_1 + 8) - *(int *)(param_1 + 0x20),
                       uVar1);
  F_00c11930(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)),0);
  return uVar2;
}

/* ref: FUN_00bb9920 */
GEN_NOFRAME unsigned int F_00bb9920(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9920u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * PTR32 * ppuVar1;
  undefined * apuVar2 [1];
  undefined * PTR32 * ppuVar3;
  
  ppuVar3 = &REFG(undefined * PTR32, 0x1104828);
  apuVar2[0] = (*(undefined * PTR32 (*)[1])REFP(0x110482c))[0];
  while (apuVar2[0] != (undefined *)0x0) {
    F_00b9af30(param_1,apuVar2[0],0);
    F_00b9ae60(param_1,*ppuVar3);
    F_00b9b510(param_1,1,0);
    ppuVar1 = ppuVar3 + 3;
    ppuVar3 = ppuVar3 + 2;
    apuVar2[0] = *ppuVar1;
  }
  return 0;
}

/* ref: FUN_00bb9960 */
GEN_FRAME uint GEN_THISCALL F_00bb9960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bb9970 */
GEN_FRAME uint GEN_THISCALL F_00bb9970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 8) = *param_2;
  *(undefined4 *)(in_ecx + 0xc) = param_2[1];
  *(undefined4 *)(in_ecx + 0x10) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb9990 */
GEN_FRAME uint GEN_THISCALL F_00bb9990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 8) = *param_2;
  *(undefined4 *)(in_ecx + 0xc) = param_2[1];
  *(undefined4 *)(in_ecx + 0x10) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb99c0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb99c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb99c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  return in_ecx;
}

/* ref: FUN_00bb99d0 */
GEN_NOFRAME uint GEN_THISCALL F_00bb99d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb99d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,this);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bb9a00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bb9a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return;
}

/* ref: FUN_00bb9a20 */
GEN_FRAME byte GEN_THISCALL F_00bb9a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb9a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 4))))
                      (*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00bb9a40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bb9a40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9a40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104874));
  return;
}

/* ref: FUN_00bb9a50 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb9a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar1 = F_00c1e320(this GEN_EDX_FWD);
    *(uint *)((int)this + 0x18) = uVar1;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = param_2;
  }
  return;
}

/* ref: FUN_00bb9a80 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar4 = param_1;
  if ((((param_1 != 0) && (*(int *)((int)this + 0x18) != 0)) && (*(char *)(param_1 + 0x12) == '\0'))
     && (piVar1 = *(int * PTR32 *)(param_1 + 4), piVar1 != (int *)0x0)) {
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_FWD)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
    if (uVar4 == 0) {
      iVar2 = *(int *)((int)this + 0x18);
      F_0054fa20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,puVar3);
      uVar4 = F_004ee9d0(&(*(undefined4 *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),((undefined1 *)(gen_frame + 0x10)));
      *(undefined4 *)(iVar2 + 8) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)(iVar2 + 0xc) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(iVar2 + 0x10) = (*(undefined4 *)(gen_frame + 0x8));
    }
    else {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        iVar2 = *(int *)((int)this + 0x18);
        *(undefined4 *)(iVar2 + 8) = *puVar3;
        *(undefined4 *)(iVar2 + 0xc) = puVar3[1];
        *(undefined4 *)(iVar2 + 0x10) = puVar3[2];
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00bb9b50 */
GEN_FRAME uint GEN_THISCALL F_00bb9b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bb9b60 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00c1e470(in_ecx GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  in_ecx[5] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00bb9b90 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (*(int *)((int)this + 0xc) != 0) {
    F_00a04370(*(int *)((int)this + 0xc));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar1 = F_00a04370(*(int *)((int)this + 0x10));
  }
  F_00c1e490(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bb9bd0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00bb9bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00bb9be0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbb9be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  if (0.0 < param_2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(short *)(param_1 + 0x18) = (short)(int)param_2;
    *(undefined2 *)(param_1 + 0x1a) = 1;
    return;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf3 */
GEN_FRAME uint GEN_THISCALL F_00bb9c40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbb9c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  piVar2 = *(int * PTR32 *)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    param_1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
  }
  if (piVar2 != (int *)0x0) {
    param_1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return param_1;
}

/* ref: FUN_00bb9c80 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x14), REFG(float, 0x1087f04));
  *(undefined2 *)(in_ecx + 0x18) = 0;
  return 0;
}

/* ref: FUN_00bb9ca0 */
GEN_FRAME uint F_00bb9ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9ca0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = (int *)param_1[3];
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = (int *)piVar1[4];
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = (int *)piVar4[3];
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d00 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bb9ca0(this);
  return uVar1;
}

/* ref: FUN_00bb9d10 */
GEN_FRAME uint F_00bb9d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9d10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = (int *)param_1[4];
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = (int *)piVar1[3];
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = (int *)piVar4[4];
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d70 */
GEN_NOFRAME uint GEN_THISCALL F_00bb9d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbb9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bb9d10(this);
  return uVar1;
}

/* ref: FUN_00bb9d80 */
GEN_FRAME uint GEN_THISCALL F_00bb9d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)(param_2 + 4) = this;
  }
  return uVar1;
}

/* ref: FUN_00bb9da0 */
GEN_FRAME float10 GEN_THISCALL F_00bb9da0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9da0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  float * pfVar1;
  float fVar2;
  short sVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  fVar7 = REFG(float, 0x1087f04);
  fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x14);
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x14);
  if (fVar2 < REFG(float, 0x1087f04)) {
    sVar3 = *(short *)((*(int *)&gen_args[0]) + 0x18);
    fVar6 = (float10)(*(float *)&gen_args[1]);
    (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    *pfVar1 = (float)(fVar6 / (float10)(int)sVar3 + (float10)fVar2);
    pfVar5 = pfVar1;
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*pfVar1)) || (fVar7 < *pfVar1 || fVar7 == *pfVar1)) {
      pfVar5 = &(*(float *)&gen_args[1]);
    }
    (*(float *)&gen_args[1]) = *pfVar5;
    *pfVar1 = (*(float *)&gen_args[1]);
    fVar6 = F_00bc0c10((*(float *)&gen_args[1]));
    return (float10)(float)fVar6;
  }
  *(undefined2 *)((*(int *)&gen_args[0]) + 0x1a) = 0;
  piVar4 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc);
  if (piVar4 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
    fVar7 = REFG(float, 0x1087f04);
  }
  return (float10)fVar7;
}

/* ref: FUN_00bb9e40 */
GEN_FRAME uint GEN_THISCALL F_00bb9e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if (param_1 == *(uint *)((int)this + 0xc)) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 0x1a) = 0;
    iVar1 = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(undefined * PTR32 *)(iVar1 + 4) = this;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return param_1;
  }
  if (param_1 == *(uint *)((int)this + 0x10)) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x1a) = 0;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00bb9e90 */
GEN_FRAME uint GEN_THISCALL F_00bb9e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  piVar8 = *(int * PTR32 *)((int)this + 0x10);
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  uVar7 = 0;
  bVar3 = false;
  bVar4 = false;
  if ((piVar1 != (int *)0x0) && (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD), uVar5 == 2)) {
    bVar3 = true;
  }
  if ((piVar8 != (int *)0x0) && (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8 GEN_EDX_ARG), uVar5 == 2)) {
    bVar4 = true;
  }
  if (bVar3) {
    if ((piVar8 != (int *)0x0) && (!bVar4)) goto LAB_00bb9f1e;
    *(undefined4 *)((int)this + 0xc) = 0;
    if (0 < param_2) {
      *param_1 = (int)piVar1;
      uVar7 = 1;
    }
  }
  if ((bVar4) &&
     (((piVar1 == (int *)0x0 || (bVar3)) &&
      (*(undefined4 *)((int)this + 0x10) = 0, (int)uVar7 < param_2)))) {
    param_1[uVar7] = (int)piVar8;
    uVar7 = uVar7 + 1;
  }
LAB_00bb9f1e: ;
  if ((((*(short *)((int)this + 0x1a) == 0) && (*(int *)((int)this + 0xc) != 0)) &&
      ((*(int *)((int)this + 0x10) != 0 &&
       ((piVar6 = piVar1, bVar3 || (piVar6 = piVar8, piVar8 = piVar1, bVar4)))))) &&
     (piVar6 != (int *)0x0)) {
    if ((int)uVar7 < param_2) {
      param_1[uVar7] = (int)piVar6;
      uVar7 = uVar7 + 1;
    }
    F_00bb9e40(this GEN_EDX_ARG,piVar6);
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      if (*(undefined * PTR32 *)(iVar2 + 0xc) == this) {
        *(int * PTR32 *)(iVar2 + 0xc) = piVar8;
      }
      else {
        *(int * PTR32 *)(iVar2 + 0x10) = piVar8;
      }
      if (piVar8 != (int *)0x0) {
        piVar8[1] = iVar2;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return uVar7;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf1 */
GEN_FRAME uint GEN_THISCALL F_00bb9f90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbb9f90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  float fVar2;
  float10 extraout_ST0;
  float10 fVar3;
  float local_8;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(iVar1 + 4) = param_1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[(int)(*(short *)(param_1 + 0x1a))])) == (code *)0x0) {
    local_8 = REFG(float, 0x1087f04);
    fVar2 = 0.0;
  }
  else {
    extraout_ST0 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[(int)(*(short *)(param_1 + 0x1a))])))
                      ((undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3)); fVar2 = extraout_ST0;
    local_8 = (float)extraout_ST0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fVar2 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 4))))
                                 (*(int * PTR32 *)(param_1 + 0x10) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                                  (undefined4)
                                  gen_fl2bits((float)((float10)local_8 * (float10)param_3))));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      fVar3 = (float10)1;
    }
    else {
      fVar3 = ((float10)1 - (float10)local_8) * (float10)param_3;
    }
    fVar2 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))
                                 (*(int * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                                  (undefined4)gen_fl2bits((float)fVar3)));
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Animation::AnimationTreeNode::vf4 */
GEN_NOFRAME uint F_00bba060(void)
{
  GEN_ENTER(0xbba060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf0 */
GEN_FRAME uint GEN_THISCALL F_00bba070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbba070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (*(int *)(this + 0xc) != 0) {
    F_00a04370(*(int *)(this + 0xc));
  }
  if (*(int *)(this + 0x10) != 0) {
    F_00a04370(*(int *)(this + 0x10));
  }
  F_00c1e490(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bba0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbba0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00bba0e0 */
GEN_NOFRAME uint GEN_THISCALL F_00bba0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    F_009f6650(*(int *)((int)this + 0x10) GEN_EDX_FWD,(float)(float10)0);
    F_009f7cb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&REFG(undefined, 0x14a2434));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bba120 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bba120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)this + 0x36) & 1) == 0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(ushort *)((int)this + 0x36) = *(ushort *)((int)this + 0x36) | 1;
  }
  return;
}

/* ref: FUN_00bba140 */
GEN_FRAME unsigned int GEN_THISCALL F_00bba140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbba140u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)(param_1 + 0x14);
  iVar2 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,param_1,param_2,(undefined4)gen_fl2bits(param_3),param_4);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return;
}

/* ref: FUN_00bba180 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bba180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00bba1b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00bba1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return;
}

/* ref: FUN_00bba1e0 */
GEN_NOFRAME byte GEN_THISCALL F_00bba1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2ed0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return *(byte *)((int)this + 0x2e) >> 2 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba210 */
GEN_NOFRAME byte GEN_THISCALL F_00bba210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2ed0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return *(byte *)((int)this + 0x2e) >> 3 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba240 */
GEN_FRAME unsigned int GEN_THISCALL F_00bba240(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbba240u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0x30) = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    F_009f6740(*(int *)(param_1 + 0x10) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00bba270 */
GEN_FRAME unsigned int GEN_THISCALL F_00bba270(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xbba270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x10) != 0) {
    F_009f66a0(*(int *)(param_1 + 0x10) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00bba290 */
GEN_NOFRAME uint GEN_THISCALL F_00bba290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_009f2ac0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bba2a0 */
GEN_FRAME double GEN_THISCALL F_00bba2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xbba2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    fVar1 = F_009f2c50(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    return (double)fVar1;
  }
  return 0.0;
}

