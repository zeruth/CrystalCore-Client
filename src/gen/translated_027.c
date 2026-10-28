#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0055ad10 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ad10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((in_ecx != 0) && (*(char *)(in_ecx + 0x100) = (char)param_2, (char)param_2 != '\0')) {
    *(byte *)(in_ecx + 0xfe) = *(byte *)(in_ecx + 0xfe) | 0x80;
  }
  return;
}

/* ref: FUN_0055ad30 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ad30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined2 *)(in_ecx + 0x102) = (undefined2)param_2;
  }
  return;
}

/* ref: FUN_0055ad50 */
GEN_FRAME uint GEN_THISCALL F_0055ad50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ad50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (this != (undefined *)0x0) {
    in_EAX = (uint)(ushort)param_1;
    *(uint *)((int)this + 0x104) = in_EAX;
    *(uint *)((int)this + 0x108) = (uint)(ushort)param_2;
  }
  return in_EAX;
}

/* ref: FUN_0055ad70 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ad70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xff) =
         *(byte *)(in_ecx + 0xff) ^ (*(byte *)(in_ecx + 0xff) ^ (byte)param_2) & 1;
  }
  return;
}

/* ref: FUN_0055ad90 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ad90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x115) = (undefined1)param_2;
  }
  return;
}

/* ref: FUN_0055adc0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055adc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55adc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x116) = (undefined1)param_2;
  }
  return;
}

/* ref: FUN_0055ade0 */
GEN_NOFRAME byte GEN_THISCALL F_0055ade0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ade0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(byte *)(in_ecx + 0x116);
  }
  return 0;
}

/* ref: FUN_0055adf0 */
GEN_FRAME uint GEN_THISCALL F_0055adf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55adf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = *(int *)((int)this + 0x90);
  if ((*(byte *)((int)this + 0xa0) & 1) != 0) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8)));
    uVar1 = iVar3 + iVar2 * 0xc;
    *param_1 = *(short *)(iVar3 + 0x20 + iVar2 * 0xc) + *(short *)(iVar3 + 8 + iVar2 * 0xc);
    *param_2 = *(short *)(uVar1 + 0x52) + *(short *)(uVar1 + 10);
    return uVar1;
  }
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + iVar2 * 0xc;
  sVar4 = *(short *)((int)this + 0x9a) + *(short *)((int)this + 0x98);
  *param_1 = sVar4;
  if ((sVar4 == 0) || ((char)param_3 != '\0')) {
    *param_1 = *(short *)(iVar3 + 8);
  }
  sVar4 = *(short *)((int)this + 0x96) + *(short *)((int)this + 0x94);
  *param_2 = sVar4;
  if ((sVar4 == 0) || ((char)param_3 != '\0')) {
    *param_2 = *(short *)(iVar3 + 10);
  }
  return CONCAT22((short)((uint)(iVar2 * 3) >> 0x10),sVar4);
}

/* ref: FUN_0055ae90 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ae90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ae90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float local_8;
  
  *(undefined4 *)((int)this + 0x9c) = 0;
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + *(int *)((int)this + 0x90) * 0xc;
  if (iVar1 != 0) {
    pcVar3 = *(char * PTR32 *)((int)this + 0xf4);
    iVar5 = 0;
    local_8 = 0.0;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      cVar2 = pcVar3[iVar5];
      if (cVar2 == ' ') {
        uVar4 = (uint)*(byte *)((int)this + 0x95);
        fVar6 = (float10)uVar4;
LAB_0055af12: ;
        *(float *)((int)this + 0x9c) = ((float)GEN_TOF((fVar6 + (float10)*(float *)((int)this + 0x9c))));
        local_8 = (float)(int)(*(ushort *)(iVar1 + 8) - uVar4);
      }
      else {
        if ((cVar2 == ',') || (cVar2 == '.')) {
          uVar4 = (uint)*(byte *)((int)this + 0x96);
          fVar6 = (float10)uVar4;
          goto LAB_0055af12;
        }
        if ((byte)(cVar2 - 0x30U) < 10) {
          uVar4 = (uint)*(byte *)((int)this + 0x94);
          fVar6 = (float10)uVar4;
          goto LAB_0055af12;
        }
      }
      iVar5 = iVar5 + 1;
      cVar2 = pcVar3[iVar5];
    }
    *(float *)((int)this + 0x9c) = ((float)GEN_TOF(((float10)local_8 + (float10)*(float *)((int)this + 0x9c))))
    ;
  }
  return 0;
}

/* ref: FUN_0055af50 */
GEN_FRAME byte GEN_THISCALL F_0055af50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55af50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + *(int *)((int)this + 0x90) * 0xc;
  if (((iVar1 != 0) && ('\x1f' < (char)param_1)) && ((char)param_1 < '@')) {
    if ((char)param_1 == ' ') {
      uVar3 = (uint)*(byte *)((int)this + 0x95);
    }
    else if (((char)param_1 == ',') || ((char)param_1 == '.')) {
      uVar3 = (uint)*(byte *)((int)this + 0x96);
    }
    else {
      if (9 < (byte)((char)param_1 - 0x30U)) {
        return 0;
      }
      uVar3 = (uint)*(byte *)((int)this + 0x94);
    }
    *param_4 = uVar3;
    *param_2 = (uint)*(ushort *)(iVar1 + 8) * ((int)(char)param_1 & 0xfU);
    iVar2 = (int)(char)param_1 - 0x20;
    *param_3 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4) * (uint)*(ushort *)(iVar1 + 10);
    *param_5 = (uint)*(ushort *)(iVar1 + 10);
    return 1;
  }
  return 0;
}

/* ref: FUN_0055aff0 */
GEN_FRAME uint GEN_THISCALL F_0055aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_005597f0(param_1 GEN_EDX_FWD);
  *(uint *)((int)((undefined *)(uint)(param_1)) + 0x88) = *(uint *)((int)((undefined *)(uint)(param_1)) + 0x88) & 0xffffff87;
  *(uint *)((int)((undefined *)(uint)(param_1)) + 0x84) = *(uint *)((int)((undefined *)(uint)(param_1)) + 0x84) & 0xa3ffffff | 0x20000000;
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined2 *)((int)((undefined *)(uint)(param_1)) + 0x18) = *(undefined2 *)((int)this + 0x18);
  *(undefined2 *)((int)((undefined *)(uint)(param_1)) + 0x1a) = *(undefined2 *)((int)this + 0x1a);
  F_0055a960(((undefined *)(uint)(param_1)) GEN_EDX_ARG,this);
  uVar1 = *(uint *)((int)this + 0x84);
  *(uint *)(((int)(uint)(((undefined *)(uint)(param_1)))) + 0x84) = uVar1;
  return uVar1;
}

/* ref: FUN_0055b060 */
GEN_NOFRAME uint GEN_THISCALL F_0055b060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b060u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055b080 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055b080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b080u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[8] = 0;
  return;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf3 */
GEN_FRAME uint GEN_THISCALL F_0055b090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int * PTR32 *)(this + 4) == (int *)0x0) || (*(int *)(this + 8) == 0)) {
    return 0xfffffffe;
  }
  if (*(char * PTR32 *)(param_1 + 0xf0) == (char *)0x0) {
    return 0xfffffffd;
  }
  if (**(char * PTR32 *)(param_1 + 0xf0) == '\0') {
    return 0xfffffffc;
  }
  return (-(uint)((uint)(*(byte *)(param_1 + 0xfc) >> 4) * 0x150 + **(int * PTR32 *)(this + 4) != 0) & 5) -
         5;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf3 */
GEN_FRAME uint GEN_THISCALL F_0055b100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b100u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(in_ecx + 4) == 0) || (*(int *)(in_ecx + 8) == 0)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_2 + 0x8c) == 0) {
    return 0xfffffffd;
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + *(int *)(param_2 + 0x90) * 0xc)));
  if (piVar1 == (int *)0x0) {
    return 0xfffffffc;
  }
  return (-(uint)(*piVar1 != 0) & 4) - 4;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf3 */
GEN_FRAME uint GEN_THISCALL F_0055b170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (param_1 != 0) - 1;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf4 */
GEN_FRAME uint GEN_THISCALL F_0055b190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x8c) != 0) {
    *((ushort *)GEN_TOP((*(int *)(param_1 + 0x8c) + 0x30))) =
         *((short *)GEN_TOP((*(int *)(this + 4) + 0x2c))) -
         ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x8c) + 0x1c))))(*(int * PTR32 *)(param_1 + 0x8c) GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0055b220 */
GEN_FRAME uint GEN_THISCALL F_0055b220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_1 < 10) {
    *(uint *)((int)this + param_1 * 4 + 0x40) = param_2;
    return param_1;
  }
  *(uint *)((int)this + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_0055b240 */
GEN_NOFRAME uint GEN_THISCALL F_0055b240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c28));
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined2 *)((int)this + 0x4380) = 0x100;
  *(undefined4 *)((int)this + 0x218) = 0xffffffff;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x220) = 0xffffffff;
  *(undefined4 *)((int)this + 0x228) = 0xffffffff;
  *(undefined4 *)((int)this + 0x22c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x27c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x230) = 0xffffffff;
  *(undefined4 *)((int)this + 0x234) = 0xffffffff;
  *(undefined4 *)((int)this + 0x238) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2b4);
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  F_00c48350((undefined *)((int)this + 0x24c),0,0x30);
  return (uint)this;
}

/* ref: FUN_0055b460 */
GEN_NOFRAME uint GEN_THISCALL F_0055b460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x214);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x210);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x208);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x208) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x20c);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x20c) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x280);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x280) = 0;
  }
  piVar5 = (int *)((int)this + 0xf8);
  iVar4 = 4;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar5 = (int *)((int)this + 0xa4);
  iVar4 = 0x15;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar5 = *(int * PTR32 *)((int)this + 0xa0);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  piVar5 = (int *)((int)this + 0x90);
  iVar4 = 3;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  piVar5 = (int *)((int)this + 0x70);
  iVar4 = 8;
  do {
    piVar1 = (int *)piVar5[-8];
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      piVar5[-8] = 0;
    }
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2a8);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-4] == 0) {
      F_00406b30(puVar2 - 4);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,3);
    }
    *(undefined4 *)((int)this + 0x2a8) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x290) != 0) {
    uVar3 = F_00406810(*(int *)((int)this + 0x290));
    *(undefined4 *)((int)this + 0x290) = 0;
  }
  return uVar3;
}

/* ref: FUN_0055b610 */
GEN_NOFRAME uint GEN_THISCALL F_0055b610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 0x10);
  iVar2 = 8;
  do {
    if (piVar3[8] != 0) {
      F_0050c620(piVar3[8],0,0);
      piVar3[8] = 0;
    }
    uVar1 = 0;
    if (*piVar3 != 0) {
      uVar1 = F_0050c620(*piVar3,0,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0055b660 */
GEN_FRAME uint GEN_THISCALL F_0055b660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb0 + *(int *)(in_ecx + 0x2a8);
}

/* ref: FUN_0055b680 */
GEN_FRAME byte GEN_THISCALL F_0055b680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4381) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0055b690 */
GEN_FRAME uint F_0055b690(void)
{
  GEN_ENTER(0x55b690u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = 0x20;
  uVar1 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x20;
  ((uint *)(gen_frame + 0xc))[0] = 0x18;
  ((uint *)(gen_frame + 0xc))[1] = 0x20;
  ((uint *)(gen_frame + 0xc))[2] = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  do {
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0055b6e0 */
GEN_FRAME uint GEN_THISCALL F_0055b6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[3] = uVar1;
  uVar5 = 0;
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x2a8) + 0xec)));
  do {
    ((int *)(gen_frame + 0xc))[(int)(uVar5)] = 0;
    iVar2 = ((int *)(gen_frame + 0xc))[(int)(uVar5)];
    iVar6 = 4;
    piVar3 = piVar4;
    do {
      iVar2 = iVar2 + piVar3[-0x2c] + *piVar3 + piVar3[0x2c] + piVar3[0x58];
      iVar6 = iVar6 - 1;
      piVar3 = piVar3 + 0xb0;
    } while (iVar6 != 0);
    ((int *)(gen_frame + 0xc))[(int)(uVar5)] = iVar2;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 3);
  uVar5 = ((((int *)(gen_frame + 0xc))[0] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x24c) * 0x4000;
  if (*(uint *)((int)this + 0x288) < uVar5) {
    uVar5 = *(uint *)((int)this + 0x288);
  }
  *(uint *)((int)this + 0x254) = uVar5;
  iVar2 = ((((int *)(gen_frame + 0xc))[1] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x25c) * 0x4000;
  *(undefined4 *)((int)this + 0x250) = 0;
  if (*(uint *)((int)this + 0x288) < iVar2 + uVar5) {
    iVar2 = *(uint *)((int)this + 0x288) - uVar5;
  }
  *(int *)((int)this + 0x264) = iVar2;
  *(uint *)((int)this + 0x260) = uVar5;
  iVar2 = uVar5 + iVar2;
  uVar5 = ((((int *)(gen_frame + 0xc))[2] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x26c) * 0x4000;
  if (*(uint *)((int)this + 0x288) < uVar5 + iVar2) {
    *(uint *)((int)this + 0x274) = *(uint *)((int)this + 0x288) - iVar2;
  }
  else {
    *(uint *)((int)this + 0x274) = uVar5;
  }
  *(int *)((int)this + 0x270) = iVar2;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_FWD);
  return uVar5;
}

/* ref: FUN_0055b820 */
GEN_FRAME uint F_0055b820(unsigned int gen_a0)
{
  GEN_ENTER(0x55b820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)];
}

/* ref: FUN_0055b830 */
GEN_NOFRAME uint GEN_THISCALL F_0055b830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b830u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_0055b840 */
GEN_NOFRAME unsigned int F_0055b840(void)
{
  GEN_ENTER(0x55b840u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_0055b850 */
GEN_FRAME uint GEN_THISCALL F_0055b850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55b850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ecx + 0xd8) = param_2;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0xf4) = uVar1;
  *(undefined4 *)(in_ecx + 0xf8) = uVar1;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  *(undefined4 *)(in_ecx + 0xec) = 0;
  *(undefined4 *)(in_ecx + 0xf0) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = uVar1;
  *(undefined4 *)(in_ecx + 0xa4) = uVar1;
  *(undefined4 *)(in_ecx + 0xa8) = uVar1;
  *(undefined4 *)(in_ecx + 0xac) = uVar1;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  return 0;
}

/* ref: FUN_0055b910 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055b910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined2 * puVar4;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  *(undefined4 *)((int)this + 4) = 0;
  puVar4 = (undefined2 *)((int)this + 0x24);
  puVar3 = (undefined4 *)((int)this + 0x10);
  iVar2 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = uVar1;
    puVar3[2] = uVar1;
    puVar4[-2] = 0;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x1302e24);
  *(undefined2 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_0055b980 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055b980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b980u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  return;
}

/* ref: FUN_0055b990 */
GEN_NOFRAME uint GEN_THISCALL F_0055b990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x10)));
}

/* ref: FUN_0055b9a0 */
GEN_NOFRAME uint GEN_THISCALL F_0055b9a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b9a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x1c)));
}

/* ref: FUN_0055b9b0 */
GEN_NOFRAME uint GEN_THISCALL F_0055b9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x28)));
}

/* ref: FUN_0055b9c0 */
GEN_FRAME uint GEN_THISCALL F_0055b9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x234) = param_1;
  *(undefined4 *)((int)this + 0x238) = param_2;
  return param_1;
}

/* ref: FUN_0055b9e0 */
GEN_NOFRAME uint GEN_THISCALL F_0055b9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55b9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x18);
  if (*(short *)(iVar1 + 0xc68) == 0) {
    return *(uint *)(iVar1 + 0xc58);
  }
  return *((uint *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc)));
}

/* ref: FUN_0055ba00 */
GEN_NOFRAME uint GEN_THISCALL F_0055ba00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ba00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x18);
  *(undefined2 *)(uVar1 + 0xc68) = 0;
  return uVar1;
}

/* ref: FUN_0055ba10 */
GEN_NOFRAME float F_0055ba10(void)
{
  GEN_ENTER(0x55ba10u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x108bf04);
}

/* ref: FUN_0055ba20 */
GEN_FRAME uint GEN_THISCALL F_0055ba20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ba20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x34))))
                    (*(int * PTR32 *)((int)this + 0x14) GEN_EDX_ARG,param_1,param_2,0);
  if ((char)uVar1 == '\0') {
    uVar1 = *(uint *)((int)this + 0x18);
    *param_1 = *(undefined2 *)(uVar1 + 0xc5c);
    *param_2 = *(undefined2 *)(uVar1 + 0xc5e);
  }
  return uVar1;
}

/* ref: FUN_0055ba60 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ba60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ba60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)((int)this + 0x1c), *(int *)(iVar1 + 4) == param_1)) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined1 *)(iVar1 + 0x20) = 0;
  }
  return;
}

/* ref: FUN_0055ba90 */
GEN_FRAME uint GEN_THISCALL F_0055ba90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ba90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = (undefined *)((int)this + 600);
  F_0042aca0(this_00 GEN_EDX_FWD);
  if (param_1 != 0) {
    uVar2 = param_1;
    if (param_2 < param_1) {
      uVar2 = param_2;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x2c))))(*(int * PTR32 *)((int)this + 0x30) GEN_EDX_ARG,0x268);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      F_0042e370(this_00 GEN_EDX_ARG,uVar1);
    }
  }
  uVar2 = F_0042a990(this_00 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0055baf0 */
GEN_FRAME uint F_0055baf0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x55baf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  F_00c475c9((char *)(param_1 + 0x2ac),0x100,param_2,((undefined *)&gen_args[2]));
  return (uint)(char *)(param_1 + 0x2ac);
}

/* ref: FUN_0055bb20 */
GEN_FRAME uint GEN_THISCALL F_0055bb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55bb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0c58));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  F_0042b630((int)this + 0x2c GEN_EDX_FWD);
  F_0042b630((int)this + 0x80 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xd6) = 0;
  *(undefined4 *)((int)this + 0xda) = 0;
  F_00aadc00((int)this + 0xe0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x138 GEN_EDX_ARG);
  F_0042b630((int)this + 0x18c GEN_EDX_ARG);
  iVar1 = (int)this + 0x1e0;
  param_1 = 2;
  do {
    F_0042b630(iVar1 GEN_EDX_ARG);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  F_0042b630((int)this + 0x2dc GEN_EDX_ARG);
  F_0042b630((int)this + 0x330 GEN_EDX_ARG);
  F_0042b630((int)this + 900 GEN_EDX_ARG);
  F_0042b630((int)this + 0x3d8 GEN_EDX_ARG);
  iVar1 = (int)this + 0x42c;
  param_1 = 4;
  do {
    F_0042b630(iVar1 GEN_EDX_ARG);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  iVar1 = (int)this + 0x5d0;
  param_1 = 4;
  do {
    F_0042b630(iVar1 GEN_EDX_ARG);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  F_0042b630((int)this + 0x774 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7d4) = 0;
  *(undefined2 *)((int)this + 0x7d8) = 0;
  F_0042b630((int)this + 0x7dc GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(undefined4 *)((int)this + 0x838) = 0xffffffff;
  *(undefined4 *)((int)this + 0x83c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x840) = 0xff010c00;
  *(undefined2 *)((int)this + 0x846) = 0xffff;
  *(undefined2 *)((int)this + 0x848) = 0;
  *(undefined1 *)((int)this + 0x842) = 0;
  *(undefined1 *)((int)this + 0x844) = 0;
  return (uint)this;
}

/* ref: FUN_0055bcb0 */
GEN_NOFRAME uint GEN_THISCALL F_0055bcb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55bcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0c58));
  F_0042c880((undefined *)((int)this + 0x7dc) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x774) GEN_EDX_ARG);
  pvVar2 = (undefined *)((int)this + 0x774);
  iVar1 = 4;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x5d0);
  iVar1 = 4;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 0x3d8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 900) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x330) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x2dc) GEN_EDX_ARG);
  pvVar2 = (undefined *)((int)this + 0x2dc);
  iVar1 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x54);
    F_0042c880(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 0x18c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x138) GEN_EDX_ARG);
  F_00aadc20((undefined *)((int)this + 0xe0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x80) GEN_EDX_ARG);
  uVar3 = F_0042c880((undefined *)((int)this + 0x2c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  return (uint)uVar3;
}

/* ref: FUN_0055bd90 */
GEN_FRAME uint GEN_THISCALL F_0055bd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55bd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_FWD);
  F_0042d000(((undefined1 *)(gen_frame + 0x54)),"<color(0xff%02X%02X%02X)>",param_1 & 0xff,param_1 >> 8 & 0xff,
               param_1 >> 0x10 & 0xff);
  iVar1 = **(int * PTR32 *)((int)this + 0x14);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x0)),uVar2);
  F_0042ccf0((undefined *)((int)this + 0x1e0) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_0042d000(((undefined1 *)(gen_frame + 0x54)),"<color(0xff%02X%02X%02X)>",param_2 & 0xff,param_2 >> 8 & 0xff,
               param_2 >> 0x10 & 0xff);
  iVar1 = **(int * PTR32 *)((int)this + 0x14);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x0)),uVar2);
  F_0042ccf0((undefined *)((int)this + 0x234) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_0055bea0 */
GEN_FRAME uint GEN_THISCALL F_0055bea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55bea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = F_00a26fb0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_FWD,(int)this + 0x42c);
  uVar4 = F_00a26fb0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(int)this + 0x4d4);
  iVar8 = (param_2 - uVar3) + (1 - uVar4);
  bVar2 = true;
  pcVar5 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  this_00 = (undefined *)((int)this + 0x330);
  F_0042aca0(this_00 GEN_EDX_ARG);
  cVar1 = *pcVar5;
  pcVar7 = pcVar5;
  while (cVar1 != '\0') {
    uVar4 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,pcVar7);
    uVar3 = param_3;
    if (bVar2) {
      uVar3 = F_00a27060(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)this + 0x42c);
      F_0042ccf0((undefined *)((int)this + 900) GEN_EDX_ARG,uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar3 = F_0042a970((int)this + 900 GEN_EDX_ARG);
      uVar3 = param_3 - uVar3;
      bVar2 = false;
    }
    if ((pcVar7[uVar4] == '\0') || (iVar8 == 0)) {
      uVar6 = F_00a27030(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)this + 0x4d4);
      F_0042ccf0((undefined *)((int)this + 900) GEN_EDX_ARG,uVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar6 = F_0042a970((int)this + 900 GEN_EDX_ARG);
      uVar3 = uVar3 - uVar6;
    }
    if ((int)uVar3 < 1) break;
    uVar6 = F_0042d2c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)pcVar7 - (int)pcVar5,uVar4);
    F_0042ccf0((undefined *)((int)this + 900) GEN_EDX_ARG,uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(int)this + 900,uVar3);
    F_0042e360(this_00 GEN_EDX_ARG,(int)this + 900);
    iVar8 = iVar8 - 1;
    if (iVar8 < 0) break;
    pcVar7 = pcVar7 + uVar4;
    if (*pcVar7 == '\r') {
      F_0042d160(this_00 GEN_EDX_ARG,0xd);
      pcVar7 = pcVar7 + 1;
    }
    cVar1 = *pcVar7;
  }
  uVar3 = F_0042ccf0(param_1 GEN_EDX_ARG,this_00);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0055c040 */
GEN_FRAME unsigned int GEN_THISCALL F_0055c040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return;
}

/* ref: FUN_0055c070 */
GEN_FRAME uint GEN_THISCALL F_0055c070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55c070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x2c) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0055c090 */
GEN_FRAME uint GEN_THISCALL F_0055c090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55c090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_0055c0a0 */
GEN_FRAME uint GEN_THISCALL F_0055c0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined1 *)((int)this + 0x840) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x841) = (undefined1)param_2;
  *(uint *)((int)this + 0x838) = param_3;
  return param_3;
}

/* ref: FUN_0055c0d0 */
GEN_FRAME uint GEN_THISCALL F_0055c0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x55c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined2 *)((int)this + 0x7d8) = (undefined2)param_1;
  F_0042ccf0((undefined *)((int)this + 0x7dc) GEN_EDX_FWD,param_2);
  *(undefined4 *)((int)this + 0x830) = param_3;
  *(uint *)((int)this + 0x834) = param_4;
  *(undefined2 *)((int)this + 0x83c) = (undefined2)param_5;
  *(undefined1 *)((int)this + 0x843) = (undefined1)param_6;
  return param_4;
}

/* ref: FUN_0055c120 */
GEN_FRAME uint GEN_STDCALL F_0055c120(unsigned int gen_a0)
{
  GEN_ENTER(0x55c120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar3 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  cVar1 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar4 == '\x02') {
      uVar5 = (uint)pcVar3[2];
      uVar6 = uVar6 + 3;
      uVar2 = uVar5 + 3;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      uVar6 = uVar6 + 1;
      uVar2 = uVar5;
    }
    pcVar3 = pcVar3 + uVar2;
    cVar1 = *pcVar3;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  }
  return uVar6;
}

/* ref: FUN_0055c170 */
GEN_FRAME uint GEN_STDCALL F_0055c170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c170u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar7 = 0;
  pcVar3 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  cVar1 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
  pcVar2 = param_1;
  while ((cVar1 != '\0' && (uVar7 <= (*(uint *)&gen_a1)))) {
    if ((char)uVar4 == '\x02') {
      uVar5 = (uint)pcVar3[2];
      uVar7 = uVar7 + 3;
      uVar6 = uVar5 + 3;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      uVar7 = uVar7 + 1;
      uVar6 = uVar5;
    }
    cVar1 = pcVar3[uVar6];
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
    pcVar2 = pcVar3;
    pcVar3 = pcVar3 + uVar6;
  }
  if (((*(uint *)&gen_a1) != 0xffffffff) && ((*(uint *)&gen_a1) < uVar7)) {
    uVar6 = F_0042a990(param_1 GEN_EDX_ARG);
    uVar6 = F_0042d2c0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,(int)pcVar2 - uVar6);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_0055c270 */
GEN_FRAME byte GEN_THISCALL F_0055c270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c270u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(short *)(in_ecx + 0x7c8) == 0) && (*(char *)(in_ecx + 0x7ca) == '\0')) {
    if ((param_2 == 0xd) || (param_2 == 0x1b)) {
      return 0;
    }
  }
  else {
    *(undefined1 *)(in_ecx + 0x7ca) = 0;
  }
  return 1;
}

/* ref: FUN_0055c2b0 */
GEN_NOFRAME uint GEN_THISCALL F_0055c2b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  
  pcVar2 = *(char * PTR32 *)((int)this + 0x80);
  if (*pcVar2 != '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(int)this + 0x80);
    pcVar2 = (char *)F_0042aca0((int)this + 0x80 GEN_EDX_ARG);
  }
  *(undefined1 *)((int)this + 0x848) = 0;
  return (uint)pcVar2;
}

/* ref: FUN_0055c2f0 */
GEN_FRAME uint GEN_STDCALL F_0055c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  pbVar2 = (byte *)F_0042a990(param_1 GEN_EDX_ARG);
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    bVar1 = *pbVar3;
    if (bVar1 == 2) {
      pbVar2 = (byte *)(uint)pbVar3[2];
      pbVar3 = pbVar3 + 3 + (int)pbVar2;
      pbVar4 = pbVar3;
    }
    else {
      if (bVar1 < 0x21) {
        pbVar4 = pbVar3 + 1;
      }
      else if (((*pbVar3 == 0xe3) && (pbVar3[1] == 0x80)) && (pbVar3[2] < 0xa0)) {
        pbVar4 = pbVar3 + 3;
      }
      pbVar2 = (byte *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1));
      pbVar3 = pbVar3 + (int)pbVar2;
    }
    bVar1 = *pbVar3;
  }
  return (uint)pbVar4;
}

/* ref: FUN_0055c350 */
GEN_FRAME byte GEN_THISCALL F_0055c350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55c350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 0x7d8)) != 0;
}

/* ref: FUN_0055c370 */
GEN_FRAME byte GEN_THISCALL F_0055c370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55c370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  bool bVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (param_1 - 0x30 < 10) {
    if ((*(byte *)((int)this + 0x7d8) >> 2 & 1) != 0) goto LAB_0055c3a0;
  }
  else if (param_1 - 0x41 < 0x1a) {
    if ((*(byte *)((int)this + 0x7d8) & 1) != 0) {
      F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_FWD);
      return 1;
    }
  }
  else if (param_1 - 0x61 < 0x1a) {
    if ((*(byte *)((int)this + 0x7d8) >> 1 & 1) != 0) {
      F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    }
  }
  else if ((*(byte *)((int)this + 0x7d8) >> 3 & 1) != 0) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return 1;
  }
  if (((*(byte *)((int)this + 0x7d8) >> 4 & 1) != 0) && ((param_1 & 0xffffff00) == 0)) {
    F_0042cca0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
    uVar1 = F_0042c8a0((undefined *)((int)this + 0x7dc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0);
    bVar2 = uVar1 != REFG(undefined4, 0x108cc50);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (bVar2) {
LAB_0055c3a0: ;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0055c490 */
GEN_FRAME uint GEN_STDCALL F_0055c490(unsigned int gen_a0)
{
  GEN_ENTER(0x55c490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_0055c4b0 */
GEN_NOFRAME uint GEN_THISCALL F_0055c4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055c4d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055c4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  return;
}

/* ref: FUN_0055c4e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055c4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return;
}

/* ref: FUN_0055c500 */
GEN_NOFRAME uint GEN_THISCALL F_0055c500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) == 1) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_0055c510 */
GEN_FRAME uint F_0055c510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (((0 < (*(int *)&gen_a1)) && (-1 < (int)(*(uint *)&gen_a2))) && ((*(uint *)&gen_a2) < 7)) {
    uVar1 = (*(uint *)&gen_a2);
    iVar2 = (*(int *)&gen_a1);
    if ((999999 < (*(int *)&gen_a1)) && ((*(int *)&gen_a1) < 2000000)) {
      uVar1 = 1;
      iVar2 = (*(int *)&gen_a1) - 1000000;
    }
    uVar1 = F_00c472af(param_1,0x100,"%s/%06d/%s%06d.tex",REFG(undefined * PTR32, 0x131db70),
                       (iVar2 / 1000) * 1000,(&REFG(undefined * PTR32, 0x131db74))[(int)(uVar1)],iVar2);
    return uVar1;
  }
  uVar1 = F_00c472af(param_1,0x100,"%s/000000/000000.tex",REFG(undefined * PTR32, 0x131db70));
  return uVar1;
}

/* ref: FUN_0055c5a0 */
GEN_NOFRAME uint GEN_THISCALL F_0055c5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055c5b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055c5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  return;
}

/* ref: FUN_0055c5d0 */
GEN_NOFRAME uint GEN_THISCALL F_0055c5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_0055c5f0 */
GEN_NOFRAME uint GEN_THISCALL F_0055c5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55c5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0055c600 */
GEN_FRAME uint GEN_STDCALL F_0055c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  undefined1 * puVar2;
  byte bVar3;
  uint uVar4;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
  case 0x13: ;
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x14))) = *(undefined4 *)(param_4 + 100);
    break;
  case 2: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(param_4 + 0x6c);
    *(undefined1 *)(iVar1 + 0x35) = *(undefined1 *)(param_4 + 0x6d);
    *(undefined1 *)(iVar1 + 0x36) = *(undefined1 *)(param_4 + 0x6e);
    *(undefined1 *)(iVar1 + 0x37) = *(undefined1 *)(param_4 + 0x6f);
    break;
  case 3: ;
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x18))) = *(undefined4 *)(param_4 + 100);
    break;
  case 4: ;
  case 0xb: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_4 + 0x68);
    break;
  case 5: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_4 + 0x70);
    break;
  case 6: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_4 + 0x6c);
    break;
  case 7: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_4 + 0x70);
    *(undefined2 *)(iVar1 + 0x68) = *(undefined2 *)(param_4 + 0x76);
    *(byte *)(iVar1 + 0x6a) =
         *(byte *)(iVar1 + 0x6a) ^ (*(byte *)(iVar1 + 0x6a) ^ *(byte *)(param_4 + 0x74)) & 1;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ *(byte *)(iVar1 + 0x6a)) & 2 ^ *(byte *)(iVar1 + 0x6a);
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 4 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 8 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x10 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x20 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x40 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    *(byte *)(iVar1 + 0x6a) = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x7f ^ *(byte *)(param_4 + 0x74)
    ;
    *(byte *)(iVar1 + 0x6b) =
         *(byte *)(iVar1 + 0x6b) ^ (*(byte *)(iVar1 + 0x6b) ^ *(byte *)(param_4 + 0x75)) & 1;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ *(byte *)(iVar1 + 0x6b)) & 2 ^ *(byte *)(iVar1 + 0x6b);
    *(byte *)(iVar1 + 0x6b) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ bVar3) & 4 ^ bVar3;
    *(byte *)(iVar1 + 0x6b) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ bVar3) & 8 ^ bVar3;
    *(byte *)(iVar1 + 0x6b) = bVar3;
    *(byte *)(iVar1 + 0x6b) = (*(byte *)(param_4 + 0x75) ^ bVar3) & 0x10 ^ bVar3;
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_4 + 0x78);
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_4 + 0x80);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_4 + 0x84);
    break;
  case 8: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x70);
    *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(param_4 + 0x78);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_4 + 0x74);
    break;
  case 9: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined2 *)(iVar1 + 0x1a) = *(undefined2 *)(param_4 + 100);
    *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(param_4 + 0x66);
    break;
  case 0xe: ;
    *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x1c))) = *(undefined1 *)(param_4 + 100);
  }
  puVar2 = *(undefined1 * PTR32 *)(param_2 + 0x10);
  *puVar2 = *(undefined1 *)(param_4 + 0x58);
  puVar2[1] = *(undefined1 *)(param_4 + 0x59);
  puVar2[2] = *(undefined1 *)(param_4 + 0x5a);
  puVar2[3] = *(undefined1 *)(param_4 + 0x5b);
  puVar2[4] = *(undefined1 *)(param_4 + 0x5c);
  puVar2[5] = *(undefined1 *)(param_4 + 0x5d);
  puVar2[6] = *(undefined1 *)(param_4 + 0x60);
  puVar2[7] = *(undefined1 *)(param_4 + 0x62);
  puVar2[8] = *(undefined1 *)(param_4 + 0x5f);
  *(uint *)(param_1 + 0x88) =
       *(uint *)(param_1 + 0x88) ^
       ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ *(uint *)(param_1 + 0x88)) & 8;
  uVar4 = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ *(uint *)(param_1 + 0x88)) & 0x10 ^
          *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar4;
  uVar4 = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ uVar4) & 0x20 ^ uVar4;
  *(uint *)(param_1 + 0x88) = uVar4;
  *(uint *)(param_1 + 0x88) = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ uVar4) & 0x40 ^ uVar4;
  return 0;
}

/* ref: FUN_0055c8f0 */
GEN_FRAME uint GEN_STDCALL F_0055c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c8f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = 9;
  switch((unsigned int)(uintptr_t)((undefined1)param_2)) {
  case 1: ;
  case 0x13: ;
    uVar1 = 0x18;
    break;
  case 2: ;
    uVar1 = 0x38;
    break;
  case 3: ;
    uVar1 = 0x1c;
    break;
  case 4: ;
  case 0xb: ;
    uVar1 = 0x24;
    break;
  case 5: ;
  case 8: ;
    uVar1 = 0x3c;
    break;
  case 6: ;
    uVar1 = 0x34;
    break;
  case 7: ;
    uVar1 = 0x7c;
    break;
  case 9: ;
  case 0xe: ;
    uVar1 = 0x20;
  }
  F_00c46aa0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x10),uVar1);
  return 0;
}

/* ref: FUN_0055c9b0 */
GEN_FRAME uint F_0055c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_0055c9c0 */
GEN_FRAME ushort F_0055c9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = *(ushort *)((int)param_2 + 10);
  *(ushort *)((int)param_1 + 10) = uVar1;
  return uVar1;
}

/* ref: FUN_0055c9f0 */
GEN_FRAME uint F_0055c9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float fVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  F_005597f0(param_1 GEN_EDX_ARG);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xffffff87;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) & 0xa3ffffff | 0x20000000;
  *(undefined4 *)(((int)(uint)(param_1)) + 4) = *param_2;
  *(undefined4 *)(((int)(uint)(param_1)) + 8) = param_2[1];
  *(undefined4 *)(((int)(uint)(param_1)) + 0xc) = param_2[2];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x10) = param_2[3];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x14) = param_2[4];
  *(undefined2 *)(((int)(uint)(param_1)) + 0x18) = *(undefined2 *)(param_2 + 5);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x1a) = 0;
  *(float *)(((int)(uint)(param_1)) + 0x38) = (float)(int)*(short *)(param_2 + 0xb);
  *(float *)(((int)(uint)(param_1)) + 0x3c) = (float)(int)*(short *)((int)param_2 + 0x2e);
  fVar1 = REFG(float, 0x1087f04);
  *(float *)(((int)(uint)(param_1)) + 0x48) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_2[0xd]))) / (float10)*(double *)&REFG(undefined, 0x1080220)) * (float10)*(double *)&REFG(undefined, 0x1080228))));
  *(undefined4 *)(((int)(uint)(param_1)) + 0x40) = param_2[0xe];
  bVar5 = GEN_ISNAN(*(float *)(((int)(uint)(param_1)) + 0x40)) || GEN_ISNAN(fVar1);
  *(undefined4 *)(((int)(uint)(param_1)) + 0x44) = param_2[0xf];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x4c) = 0;
  if (((bVar5 == (bVar5 || *(float *)(((int)(uint)(param_1)) + 0x40) == fVar1)) || (bVar5 = GEN_ISNAN(*(float *)(((int)(uint)(param_1)) + 0x44)) || GEN_ISNAN(fVar1), bVar5 == (bVar5 || *(float *)(((int)(uint)(param_1)) + 0x44) == fVar1))) || (fVar1 = *(float *)(((int)(uint)(param_1)) + 0x48), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))) {
    uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x88) | 4;
  }
  else {
    uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xfffffffb;
  }
  *(uint *)(((int)(uint)(param_1)) + 0x88) = uVar4;
  *(undefined2 *)(((int)(uint)(param_1)) + 0x7c) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x7e) = *(undefined2 *)((int)param_2 + 0x32);
  *(float *)(((int)(uint)(param_1)) + 0x74) = (float)(int)*(short *)(param_2 + 0x10);
  sVar2 = *(short *)((int)param_2 + 0x42);
  *(undefined4 *)(((int)(uint)(param_1)) + 0x50) = 0xffffffff;
  *(float *)(((int)(uint)(param_1)) + 0x78) = (float)(int)sVar2;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x53) = *(undefined1 *)(param_2 + 0x15);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x5a) = 0x6464;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x5c) = 100;
  *(undefined2 *)(((int)(uint)(param_1)) + 0x54) = *(undefined2 *)((int)param_2 + 0x4e);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x56) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x58) = *(undefined2 *)((int)param_2 + 0x52);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x84) = *(undefined2 *)(param_2 + 0x11);
  *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) ^ ((uint)*(byte *)((int)param_2 + 0x46) << 0xc ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x10000;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0xd ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x40000 ^ *(uint *)(((int)(uint)(param_1)) + 0x84);
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0xb ^ uVar4) & 0x20000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = (*(byte *)((int)param_2 + 0x46) & 0xffffff80) << 0xc | uVar4 & 0xfff7ffff;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x200000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x400000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x800000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  bVar3 = *(byte *)((int)param_2 + 0x47);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xffffff7f;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = (bVar3 & 1) << 0x18 | uVar4 & 0xbeffffff;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x89) = *(undefined1 *)((int)param_2 + 0x55);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xfff9ffff;
  bVar3 = *(byte *)((int)param_2 + 0x46) & 1;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) ^ ((uint)bVar3 << 0x14 ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x100000;
  *(uint *)(((int)(uint)(param_1)) + 0x88) = ((uint)(bVar3 == 0) << 7 ^ *(uint *)(((int)(uint)(param_1)) + 0x88)) & 0x80 ^ *(uint *)(((int)(uint)(param_1)) + 0x88);
  if ((*(ushort *)(((int)(uint)(param_1)) + 0x18) < 1000) && (*(ushort *)(((int)(uint)(param_1)) + 0x18) == 8)) {
    *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) | 0x1000000;
  }
  uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x84);
  *(uint *)(((int)(uint)(param_1)) + 0x84) = (uVar4 * 2 ^ uVar4) & 0x2000000 ^ uVar4;
  return uVar4;
}

/* ref: FUN_0055cc90 */
GEN_FRAME unsigned int F_0055cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cc90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0) && ((*(int *)&gen_a1) != 0)) {
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)((*(int *)&gen_a1) + 4);
    *(byte *)(param_1 + 0x93) =
         *(byte *)(param_1 + 0x93) ^ (*(byte *)((*(int *)&gen_a1) + 8) ^ *(byte *)(param_1 + 0x93)) & 1;
    *(byte *)(param_1 + 0x93) =
         (*(byte *)((*(int *)&gen_a1) + 9) & 1) * '\x02' | *(byte *)(param_1 + 0x93) & 0xf1;
    *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)((*(int *)&gen_a1) + 10);
    *(byte *)(param_1 + 0x93) =
         *(byte *)(param_1 + 0x93) ^
         (*(char *)((*(int *)&gen_a1) + 0xb) << 4 ^ *(byte *)(param_1 + 0x93)) & 0x70;
  }
  return 0;
}

/* ref: FUN_0055cd00 */
GEN_FRAME unsigned int F_0055cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cd00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x8c) = *param_2;
    *(undefined4 *)(param_1 + 0x90) = param_2[1];
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(byte *)(param_1 + 0xfc) =
         *(byte *)(param_1 + 0xfc) ^ (*(byte *)(param_2 + 2) ^ *(byte *)(param_1 + 0xfc)) & 0xf;
    *(byte *)(param_1 + 0xfc) = *(char *)((int)param_2 + 10) << 4 | *(byte *)(param_1 + 0xfc) & 0xf;
    *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)((int)param_2 + 0xb);
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^
         (*(char *)(param_2 + 4) * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 2;
    bVar3 = (*(char *)(param_2 + 4) * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 4 ^
            *(byte *)(param_1 + 0xfe);
    *(byte *)(param_1 + 0xfe) = bVar3;
    *(byte *)(param_1 + 0xfe) = (*(char *)(param_2 + 4) * '\x02' ^ bVar3) & 8 ^ bVar3;
    *(undefined4 *)(param_1 + 0x94) = param_2[3];
    cVar1 = *(char *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^ (cVar1 * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 0x10;
    uVar5 = F_0042a990(param_1 + 0x9c GEN_EDX_ARG);
    *(uint *)(param_1 + 0xf0) = uVar5;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfe;
    *(byte *)(param_1 + 0xff) = *(byte *)(param_1 + 0xff) & 0xfe;
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xbf;
    *(undefined4 *)(param_1 + 0x110) = 0;
    bVar4 = (*(char *)(param_2 + 4) << 3 ^ *(byte *)(param_1 + 0xfe)) & 0x7f ^
            *(char *)(param_2 + 4) * '\b';
    *(byte *)(param_1 + 0xfe) = bVar4;
    bVar3 = *(byte *)(param_2 + 4);
    bVar2 = *(byte *)(param_1 + 0xff);
    *(byte *)(param_1 + 0xff) = bVar2 & 0xfd;
    *(byte *)(param_1 + 0xfe) = (bVar3 ^ bVar4) & 0x40 ^ bVar4;
    *(byte *)(param_1 + 0xff) = *(byte *)(param_2 + 4) >> 3 & 4 | bVar2 & 0xf1;
    bVar3 = *(byte *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^ (bVar3 >> 2 ^ *(byte *)(param_1 + 0xfe)) & 0x20;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined2 *)(param_1 + 0x102) = 0;
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)((int)param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)((int)param_2 + 0x12);
    *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)((int)param_2 + 0x13);
    if (((*(byte *)(param_2 + 4) & 0x10) != 0) && (*(char *)((int)param_2 + 0x13) == '\0')) {
      *(char *)(param_1 + 0x116) = *(char *)(param_1 + 0xfd) + '\x01';
    }
  }
  return;
}

/* ref: FUN_0055ced0 */
GEN_FRAME unsigned int F_0055ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ced0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0) && ((*(int *)&gen_a1) != 0)) {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((*(int *)&gen_a1) + 4);
    *(byte *)(param_1 + 0xa0) =
         *(byte *)(param_1 + 0xa0) ^ (*(byte *)((*(int *)&gen_a1) + 8) ^ *(byte *)(param_1 + 0xa0)) & 1;
    *(byte *)(param_1 + 0xa0) =
         (*(char *)((*(int *)&gen_a1) + 9) * '\x02' ^ *(byte *)(param_1 + 0xa0)) & 2 ^
         *(byte *)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)((*(int *)&gen_a1) + 10);
    *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)((*(int *)&gen_a1) + 0xc);
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((*(int *)&gen_a1) + 0xe);
    *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)((*(int *)&gen_a1) + 0x10);
    *(uint *)(param_1 + 0x9c) = (uint)*(byte *)((*(int *)&gen_a1) + 0x12);
  }
  return 0;
}

/* ref: FUN_0055cf50 */
GEN_FRAME unsigned int F_0055cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cf50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0) && ((*(int *)&gen_a1) != 0)) {
    *(uint *)(param_1 + 0x90) = (uint)*(byte *)((*(int *)&gen_a1) + 4);
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)((*(int *)&gen_a1) + 5);
    *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)((*(int *)&gen_a1) + 7);
    *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)((*(int *)&gen_a1) + 6);
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)((*(int *)&gen_a1) + 8);
  }
  return;
}

/* ref: FUN_0055cfa0 */
GEN_FRAME unsigned int F_0055cfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cfa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  
  if ((param_1 != 0) && ((*(int *)&gen_a1) != 0)) {
    F_0055cd00(param_1,(*(int *)&gen_a1));
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)((*(int *)&gen_a1) + 0x14);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)((*(int *)&gen_a1) + 0x18);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)((*(int *)&gen_a1) + 0x1c);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)((*(int *)&gen_a1) + 0x20);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)((*(int *)&gen_a1) + 0x24);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)((*(int *)&gen_a1) + 0x28);
    *(byte *)(param_1 + 0x134) =
         *(byte *)(param_1 + 0x134) ^ (*(byte *)(param_1 + 0x134) ^ *(byte *)((*(int *)&gen_a1) + 0x2c)) & 1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ *(byte *)(param_1 + 0x134)) & 2 ^
            *(byte *)(param_1 + 0x134);
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 4 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 8 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 0x10 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 0x20 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 0x40 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    *(byte *)(param_1 + 0x134) =
         (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ bVar1) & 0x7f ^ *(byte *)((*(int *)&gen_a1) + 0x2c);
    *(byte *)(param_1 + 0x135) =
         *(byte *)(param_1 + 0x135) ^ (*(byte *)(param_1 + 0x135) ^ *(byte *)((*(int *)&gen_a1) + 0x2d)) & 1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2d) ^ *(byte *)(param_1 + 0x135)) & 2 ^
            *(byte *)(param_1 + 0x135);
    *(byte *)(param_1 + 0x135) = bVar1;
    bVar1 = (*(byte *)((*(int *)&gen_a1) + 0x2d) ^ bVar1) & 4 ^ bVar1;
    *(byte *)(param_1 + 0x135) = bVar1;
    *(byte *)(param_1 + 0x135) = (*(byte *)((*(int *)&gen_a1) + 0x2d) ^ bVar1) & 8 ^ bVar1;
    *(undefined2 *)(param_1 + 0x136) = *(undefined2 *)((*(int *)&gen_a1) + 0x30);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)((*(int *)&gen_a1) + 0x32);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)((*(int *)&gen_a1) + 0x36);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)((*(int *)&gen_a1) + 0x3a);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)((*(int *)&gen_a1) + 0x3e);
  }
  return;
}

/* ref: FUN_0055d100 */
GEN_FRAME unsigned int F_0055d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0) && ((*(int *)&gen_a1) != 0)) {
    F_0055cd00(param_1,(*(int *)&gen_a1));
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)((*(int *)&gen_a1) + 0x14);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)((*(int *)&gen_a1) + 0x18);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)((*(int *)&gen_a1) + 0x1c);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)((*(int *)&gen_a1) + 0x20);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)((*(int *)&gen_a1) + 0x24);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)((*(int *)&gen_a1) + 0x28);
    *(byte *)(param_1 + 0x134) =
         *(byte *)(param_1 + 0x134) ^ (*(byte *)(param_1 + 0x134) ^ *(byte *)((*(int *)&gen_a1) + 0x2c)) & 1;
    *(byte *)(param_1 + 0x134) =
         (*(byte *)((*(int *)&gen_a1) + 0x2c) ^ *(byte *)(param_1 + 0x134)) & 2 ^ *(byte *)(param_1 + 0x134);
  }
  return;
}

/* ref: FUN_0055d180 */
GEN_FRAME uint F_0055d180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d180u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    *(undefined2 *)(param_1 + 0x8c) = *param_2;
    *(undefined2 *)(param_1 + 0x8e) = param_2[1];
    *(undefined2 *)(param_1 + 0x90) = param_2[2];
    *(undefined2 *)(param_1 + 0x92) = param_2[4];
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return param_1;
}

/* ref: FUN_0055d1e0 */
GEN_FRAME unsigned int F_0055d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d1e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    *(undefined1 *)(param_1 + 0x8c) = *param_2;
    *(undefined1 *)(param_1 + 0x8d) = param_2[1];
    *(undefined1 *)(param_1 + 0x8e) = param_2[2];
    *(undefined1 *)(param_1 + 0x8f) = param_2[3];
    *(undefined1 *)(param_1 + 0x90) = param_2[4];
    *(undefined1 *)(param_1 + 0x91) = param_2[5];
    *(uint *)(param_1 + 0x88) =
         *(uint *)(param_1 + 0x88) ^ ((uint)(byte)param_2[6] * 8 ^ *(uint *)(param_1 + 0x88)) & 8;
    uVar1 = ((uint)(byte)param_2[6] * 8 ^ *(uint *)(param_1 + 0x88)) & 0x10 ^
            *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = uVar1;
    uVar1 = ((uint)(byte)param_2[6] * 8 ^ uVar1) & 0x20 ^ uVar1;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(uint *)(param_1 + 0x88) = ((uint)(byte)param_2[6] * 8 ^ uVar1) & 0x40 ^ uVar1;
    *(undefined1 *)(param_1 + 0x92) = param_2[8];
    *(undefined1 *)(param_1 + 0x93) = param_2[10];
    *(undefined1 *)(param_1 + 0x94) = param_2[7];
  }
  return 0;
}

/* ref: FUN_0055d2c0 */
GEN_FRAME uint F_0055d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) + param_1;
  if (*(int *)(iVar1 + 8) == 0) {
    return 0;
  }
  uVar2 = iVar1 + 0x10;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      uVar2 = uVar2 + *(int *)(uVar2 + 8);
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_0055d2f0 */
GEN_FRAME unsigned int F_0055d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = 0xffff;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + uVar2 * 4);
      if (iVar1 == param_4) {
        return;
      }
      if ((iVar1 == 0) && ((short)uVar4 < 0)) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar2 < param_3);
    if (uVar4 != 0xffff) {
      *(int *)(param_1 + (short)uVar4 * 4) = param_4;
      *param_2 = *param_2 + 1;
    }
  }
  return;
}

/* ref: FUN_0055d350 */
GEN_FRAME uint GEN_THISCALL F_0055d350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x55d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  short * param_5 = (short *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined * _Dst;
  undefined * pvVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int * piVar8;
  int * piVar9;
  uint local_14;
  uint local_10;
  
  F_00c48350(param_4,0,*(int *)(param_2 + 8) * 4);
  pvVar4 = (undefined *)0x0;
  if (*(int *)(param_3 + 8) != 0) {
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,*(int *)(param_3 + 8) * 0xc,0x10)));
    *(undefined * PTR32 *)((int)this + 4) = _Dst;
    pvVar4 = (undefined *)0x0;
    if (_Dst != (undefined *)0x0) {
      pvVar4 = F_00c48350(_Dst,0,*(int *)(param_3 + 8) * 0xc);
      *(undefined2 *)((int)this + 0x12) = *(undefined2 *)(param_3 + 8);
      piVar9 = *(int * PTR32 *)((int)this + 4);
      piVar8 = (int *)(param_3 + 0x10);
      local_14 = 0;
      if (*(int *)(param_3 + 8) != 0) {
        do {
          *piVar9 = *piVar8;
          piVar9[1] = piVar8[1];
          uVar5 = F_00406c00(-(uint)((int)((ulonglong)(uint)piVar8[1] * 0xc >> 0x20) != 0) |
                               (uint)((ulonglong)(uint)piVar8[1] * 0xc),0,param_1,0);
          piVar9[2] = uVar5;
          if (uVar5 == 0) {
            return 0;
          }
          local_10 = 0;
          if (piVar8[1] != 0) {
            uVar5 = 0;
            piVar3 = piVar8;
            do {
              piVar1 = (int *)(piVar9[2] + uVar5 * 0xc);
              *piVar1 = piVar3[3];
              *(short *)(piVar1 + 1) = (short)piVar3[4];
              *(undefined2 *)((int)piVar1 + 6) = *(undefined2 *)((int)piVar3 + 0x12);
              *(short *)(piVar1 + 2) = (short)piVar3[5];
              *(undefined2 *)((int)piVar1 + 10) = *(undefined2 *)((int)piVar3 + 0x16);
              uVar6 = 0xffff;
              uVar7 = 0;
              if (*(uint *)(param_2 + 8) != 0) {
                uVar5 = 0;
                do {
                  iVar2 = *(int *)((int)param_4 + uVar5 * 4);
                  if (iVar2 == *piVar1) goto LAB_0055d4a9;
                  if ((iVar2 == 0) && ((short)uVar6 < 0)) {
                    uVar6 = uVar7;
                  }
                  uVar7 = uVar7 + 1;
                  uVar5 = (uint)uVar7;
                } while (uVar5 < *(uint *)(param_2 + 8));
                if (uVar6 != 0xffff) {
                  *(int *)((int)param_4 + (short)uVar6 * 4) = *piVar1;
                  *param_5 = *param_5 + 1;
                }
              }
LAB_0055d4a9: ;
              local_10 = local_10 + 1;
              uVar5 = local_10 & 0xffff;
              piVar3 = piVar3 + 3;
            } while (uVar5 < (uint)piVar8[1]);
          }
          piVar8 = (int *)((int)piVar8 + piVar8[2]);
          local_14 = local_14 + 1;
          pvVar4 = (undefined *)(local_14 & 0xffff);
          piVar9 = piVar9 + 3;
        } while (pvVar4 < *(undefined * PTR32 *)(param_3 + 8));
      }
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_0055d500 */
GEN_FRAME uint GEN_STDCALL F_0055d500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55d500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406bd0(0xc,0,param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 1;
  uVar2 = F_00406c00(0xc,0,param_1,0);
  puVar1[2] = uVar2;
  if (uVar2 != 0) {
    *(undefined2 *)(uVar2 + 4) = 0;
    *(undefined2 *)(puVar1[2] + 6) = 0;
    *(undefined2 *)(puVar1[2] + 8) = (undefined2)param_2;
    *(undefined2 *)(puVar1[2] + 10) = (undefined2)param_3;
    uVar2 = F_00406bd0(0x10,0,param_1,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined * PTR32 * PTR32 *)(uVar2 + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
      *(undefined4 *)(uVar2 + 8) = 0;
      *(undefined4 *)(uVar2 + 0xc) = 0;
    }
    *(uint *)puVar1[2] = uVar2;
    if (*(int *)puVar1[2] != 0) {
      **(undefined4 * PTR32 *)puVar1[2] = 0;
      *(undefined4 *)(*(int *)puVar1[2] + 0xc) = 0;
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_0055d5d0 */
GEN_FRAME uint GEN_STDCALL F_0055d5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55d5d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      if ((*(int *)(param_1 + 0x10) == param_2) && (*(int *)(param_1 + 0x14) == param_3)) {
        return (uint)(int *)(param_1 + 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}

/* ref: FUN_0055d610 */
GEN_FRAME uint GEN_STDCALL F_0055d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
  if (uVar1 == 0) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*piVar2 == param_2) {
        return (uint)piVar2;
      }
      uVar3 = uVar3 + 1;
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + (uint)*(ushort *)(piVar2 + 3))));
    } while ((uVar3 & 0xffff) < uVar1);
  }
  return 0;
}

/* ref: FUN_0055d660 */
GEN_FRAME uint GEN_STDCALL F_0055d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x50);
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) =
         (undefined1)
         (int)TRUNC(((double)GEN_TOD(((uint)*(byte *)((*(int *)&gen_args[1]) + 0x67) * (uint)*(byte *)((*(int *)&gen_args[0]) + 0x53)))) /
                    *(double *)&REFG(undefined, 0x1088100));
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x67) = (undefined1)(*(int *)&gen_args[1]);
    *(short *)((*(int *)&gen_args[0]) + 0x68) = *(short *)(iVar2 + 0x68) + *(short *)((*(int *)&gen_args[0]) + 0x54);
    iVar3 = (int)*(char *)(iVar2 + 0x6e) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5a);
    *(char *)((*(int *)&gen_args[0]) + 0x6e) =
         ((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x51eb851f >> 0x3f);
    *(short *)((*(int *)&gen_args[0]) + 0x6a) = *(short *)(iVar2 + 0x6a) + *(short *)((*(int *)&gen_args[0]) + 0x56);
    iVar3 = (int)*(char *)(iVar2 + 0x6f) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5b);
    *(char *)((*(int *)&gen_args[0]) + 0x6f) =
         ((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x51eb851f >> 0x3f);
    *(short *)((*(int *)&gen_args[0]) + 0x6c) = *(short *)(iVar2 + 0x6c) + *(short *)((*(int *)&gen_args[0]) + 0x58);
    uVar1 = ((int)*(char *)(iVar2 + 0x70) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5c)) / 100;
    *(char *)((*(int *)&gen_args[0]) + 0x70) = (char)uVar1;
    *(float *)((*(int *)&gen_args[0]) + 0x60) =
         ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x60) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x4c))));
    return uVar1;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x60) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x4c);
  *(undefined4 *)((*(int *)&gen_args[0]) + 100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x50);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x68) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x54);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x6c) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x58);
  *(uint *)((*(int *)&gen_args[0]) + 0x70) = *(uint *)((*(int *)&gen_args[0]) + 0x5c);
  return *(uint *)((*(int *)&gen_args[0]) + 0x5c);
}

/* ref: FUN_0055d770 */
GEN_FRAME uint GEN_THISCALL F_0055d770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) & 0xfd | 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  return 0;
}

/* ref: FUN_0055d7c0 */
GEN_FRAME uint GEN_THISCALL F_0055d7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_0055d7d0 */
GEN_FRAME uint GEN_THISCALL F_0055d7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_0055d7f0 */
GEN_FRAME uint GEN_THISCALL F_0055d7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x55d7f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  float fVar4;
  
  for (iVar2 = param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    if ((999 < *(ushort *)(iVar2 + 0x18)) &&
       (piVar1 = *(int * PTR32 *)(iVar2 + 0x8c), piVar1 != (int *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_3));
      fVar4 = param_3;
      uVar3 = F_00578ee0(piVar1 + 1 GEN_EDX_ARG,0);
      F_0055d7f0(piVar1 + 1 GEN_EDX_ARG,uVar3,fVar4);
    }
    in_EAX = F_0055d7f0(param_1 GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x14),param_3);
  }
  return in_EAX;
}

/* ref: FUN_0055d870 */
GEN_FRAME uint GEN_THISCALL F_0055d870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  
  if (param_1 != (int *)0x0) {
    uVar5 = 0;
    iVar1 = *param_1;
    piVar4 = param_1;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 2;
      uVar5 = uVar5 + 1;
      iVar1 = *piVar4;
    }
    uVar2 = F_00404270();
    uVar6 = (uint)uVar5;
    piVar3 = (int *)F_00406c00((uVar6 + 1) * 8,0,uVar2,0);
    *(int * PTR32 *)((int)this + 0x24) = piVar3;
    piVar4 = param_1;
    if (uVar5 != 0) {
      do {
        *piVar3 = *piVar4;
        piVar3[1] = piVar4[1];
        piVar3 = piVar3 + 2;
        piVar4 = piVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_0055d900 */
GEN_FRAME byte GEN_THISCALL F_0055d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x5c)) & 2;
  *(byte *)(in_ecx + 0x5c) = *(byte *)(in_ecx + 0x5c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0055d920 */
GEN_FRAME uint GEN_THISCALL F_0055d920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && ((*(int *)&gen_a1) != 0)) {
    iVar1 = *(int *)((int)this + 8);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4);
      if ((uVar2 != 0) && (uVar4 = 0, uVar2 != 0)) {
        piVar5 = *(int * PTR32 *)(iVar1 + 8);
        while (*(int *)(*piVar5 + 4) != (*(int *)&gen_a1)) {
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
          if (uVar2 <= uVar4) {
            return 0;
          }
        }
        uVar3 = (*(int * PTR32 *)(iVar1 + 8))[uVar4];
      }
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_0055d980 */
GEN_FRAME uint GEN_THISCALL F_0055d980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != 0) {
    if (*(char *)((int)this + 0x18) == '\x01') {
      return param_1 * 0x10 + iVar1;
    }
    if (*(char *)((int)this + 0x18) == '\x02') {
      return iVar1 + param_1 * 0x18;
    }
  }
  return 0;
}

/* ref: FUN_0055d9c0 */
GEN_FRAME uint GEN_THISCALL F_0055d9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55d9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  if ((piVar2 == (int *)0x0) || (*piVar2 != param_1)) {
    uVar1 = 0;
    if (*(short *)((int)this + 0x10) != 0) {
      piVar2 = *(int * PTR32 *)this;
      do {
        if (*piVar2 == param_1) {
          piVar2 = *(int * PTR32 *)this + uVar1 * 4;
          *(int * PTR32 *)((int)this + 0x30) = piVar2;
          return (uint)piVar2;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 4;
      } while (uVar1 < *(ushort *)((int)this + 0x10));
    }
    piVar2 = (int *)0x0;
  }
  return (uint)piVar2;
}

/* ref: FUN_0055da10 */
GEN_FRAME uint GEN_STDCALL F_0055da10(unsigned int gen_a0)
{
  GEN_ENTER(0x55da10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                       (uint)*(ushort *)(param_1 + 0x90) * 0xc))), puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

/* ref: FUN_0055da50 */
GEN_FRAME uint GEN_THISCALL F_0055da50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55da50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)((int)this + 0x12);
  piVar2 = (int *)0x0;
  if (uVar1 == 0) {
    return (uint)piVar2;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 4);
    while (*piVar3 != param_1) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
      if (uVar1 <= uVar4) {
        return (uint)piVar2;
      }
    }
    piVar2 = *(int * PTR32 *)((int)this + 4) + uVar4 * 3;
  }
  return (uint)piVar2;
}

/* ref: FUN_0055daa0 */
GEN_FRAME uint GEN_THISCALL F_0055daa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dac0 */
GEN_FRAME uint GEN_THISCALL F_0055dac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55dac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dae0 */
GEN_FRAME uint GEN_THISCALL F_0055dae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55dae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 4)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db00 */
GEN_FRAME uint GEN_THISCALL F_0055db00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 5)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db20 */
GEN_FRAME uint GEN_THISCALL F_0055db20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55db20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db40 */
GEN_FRAME uint GEN_THISCALL F_0055db40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 7)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db60 */
GEN_FRAME uint GEN_THISCALL F_0055db60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db80 */
GEN_FRAME uint GEN_THISCALL F_0055db80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this GEN_EDX_FWD,param_1);
  if ((uVar1 != 0) && (999 < *(ushort *)(uVar1 + 0x18))) {
    return *(uint *)(uVar1 + 0x8c);
  }
  return 0;
}

/* ref: FUN_0055dbb0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055dbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55dbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0x18) != '\x02') {
    *(undefined4 *)(in_ecx + 0x34) = param_2;
  }
  return;
}

/* ref: FUN_0055dbd0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055dbd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(char *)((int)this + 0x18) == '\x02') {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  return;
}

/* ref: FUN_0055dc00 */
GEN_FRAME unsigned int GEN_THISCALL F_0055dc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * param_3 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(this,iVar1,param_2);
    }
    F_0055dc00(this GEN_EDX_FWD,*(undefined4 *)(iVar1 + 0x14),param_2,param_3);
    if ((*(uint *)(iVar1 + 0x84) & 0x10000000) != 0) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return;
}

/* ref: FUN_0055dc50 */
GEN_FRAME uint F_0055dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55dc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + 1;
  return (uint)param_3;
}

/* ref: Component::GUI2::AtkUnitBase::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_0055dc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x36) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x3c] = (undefined1)0x2;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x80] = (undefined1)((byte)this[0x80] & 0xfd | 1);
  *(undefined4 *)(this + 0x7c) = 0;
  return 0;
}

/* ref: FUN_0055dcb0 */
GEN_NOFRAME uint F_0055dcb0(void)
{
  GEN_ENTER(0x55dcb0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379860);
}

/* ref: FUN_0055dcc0 */
GEN_NOFRAME byte GEN_THISCALL F_0055dcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = 1;
  if (((*(byte *)(in_ecx + 0x80) & 1) == 0) || (*(int *)(in_ecx + 0x44) != 3)) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_0055dce0 */
GEN_NOFRAME byte GEN_THISCALL F_0055dce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0xcc)));
  if ((pvVar1 != this) &&
     (((((*(byte *)((int)this + 0xfb) & 1) == 0 || (pvVar1 == (undefined *)0x0)) ||
       (*(char *)((int)pvVar1 + 0x13c) == '\0')) ||
      (((*(byte *)((int)pvVar1 + 0xfb) & 2) != 0 ||
       (*(char *)((int)this + 0x13a) != *(char *)((int)pvVar1 + 0x13c))))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0055dd20 */
GEN_NOFRAME byte GEN_THISCALL F_0055dd20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  if (((*(char *)((int)this + 0x13c) == '\0') || ((*(byte *)((int)this + 0xfb) & 2) != 0)) &&
     ((pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0xcc))), pvVar1 == this ||
      (((((*(byte *)((int)this + 0xfb) & 1) != 0 && (pvVar1 != (undefined *)0x0)) &&
        (*(char *)((int)pvVar1 + 0x13c) != '\0')) &&
       (((*(byte *)((int)pvVar1 + 0xfb) & 2) == 0 &&
        (*(char *)((int)this + 0x13a) == *(char *)((int)pvVar1 + 0x13c))))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0055dd80 */
GEN_NOFRAME uint GEN_THISCALL F_0055dd80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dd80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0x80) & 1) != 0) && ((*(byte *)(in_ecx + 0x80) & 4) != 0)) &&
     (*(char *)(in_ecx + 0x3c) == '\x02')) {
    return *(int *)(in_ecx + 0x2c) + 0xc;
  }
  return 0;
}

/* ref: FUN_0055dda0 */
GEN_FRAME uint GEN_THISCALL F_0055dda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x55dda0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  int iVar2;
  undefined4 in_EAX = 0;
  undefined4 * puVar3;
  
  bVar1 = *(byte *)(in_ecx + 0x80);
  puVar3 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),bVar1)));
  if ((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && (*(char *)(in_ecx + 0x3c) == '\x02')) {
    iVar2 = *(int *)(in_ecx + 0x2c);
    puVar3 = (undefined4 *)(iVar2 + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      *(float *)(iVar2 + 0x10) = param_3;
      *puVar3 = param_2;
      *(float *)(iVar2 + 0x14) = param_4;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_0055dde0 */
GEN_FRAME uint GEN_THISCALL F_0055dde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x55dde0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x88) = param_3;
  *(uint *)(in_ecx + 0x84) = param_2;
  *(float *)(in_ecx + 0x8c) = param_4;
  return param_2;
}

/* ref: FUN_0055de10 */
GEN_FRAME byte GEN_THISCALL F_0055de10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55de10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = param_2;
    iVar1 = *(int *)(in_ecx + 0x90);
    while (iVar1 != 0) {
      if (iVar2 == *(int *)(in_ecx + 0x90)) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_0055de40 */
GEN_FRAME uint GEN_THISCALL F_0055de40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55de40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = param_1, *(int *)((int)this + 0x90) != 0)) {
    while (iVar1 != *(int *)((int)this + 0x90)) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar1 = param_1;
    if (param_1 == 0) goto LAB_0055de7e;
    do {
      if ((999 < *(ushort *)(iVar1 + 0x18)) && (*(uint *)(iVar1 + 0x8c) != 0)) {
        return *(uint *)(iVar1 + 0x8c);
      }
LAB_0055de7e: ;
      iVar1 = *(int *)(iVar1 + 8);
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf11 */
GEN_FRAME byte GEN_THISCALL F_0055de90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55de90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  
  *(ushort *)(param_1 + 0x12a) = (ushort)param_2;
  *(short *)(param_1 + 300) = (short)param_3;
  iVar1 = *(int *)(param_1 + 0x90);
  uVar2 = (uint)(short)(ushort)param_2;
  fVar5 = (float)(int)uVar2;
  if (iVar1 == 0) goto LAB_0055df0d;
  if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
    fVar4 = (float10)(int)uVar2;
    bVar3 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x38)) || GEN_ISNAN(fVar4);
    uVar2 = (uint)((ushort)param_2 & 0xff);
    if (bVar3 != (bVar3 || (float10)*(float *)(iVar1 + 0x38) == fVar4)) {
      fVar4 = (float10)(int)(short)param_3;
      bVar3 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x3c)) || GEN_ISNAN(fVar4);
      uVar2 = (uint)((ushort)param_2 & 0xff);
      if (bVar3 != (bVar3 || (float10)*(float *)(iVar1 + 0x3c) == fVar4)) goto LAB_0055df03;
    }
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
  }
LAB_0055df03: ;
  *(float *)(iVar1 + 0x38) = fVar5;
  *(float *)(iVar1 + 0x3c) = (float)(int)(short)param_3;
LAB_0055df0d: ;
  return (byte)uVar2;
}

/* ref: FUN_0055df40 */
GEN_FRAME uint GEN_THISCALL F_0055df40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55df40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x90);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x53) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_0055df60 */
GEN_FRAME float10 GEN_THISCALL F_0055df60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55df60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float local_c;
  
  local_c = REFG(float, 0x1087f04);
  if (*(int *)(in_ecx + 0x90) != 0) {
    local_c = *((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x40)));
  }
  return (float10)((float)GEN_TOF(((float10)local_c / (float10)*(float *)(in_ecx + 0x118))));
}

/* ref: FUN_0055dfa0 */
GEN_FRAME float10 GEN_THISCALL F_0055dfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55dfa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 0x118);
  if ((char)param_2 == '\0') {
    local_8 = ((float)GEN_TOF((((float10)1 / (float10)*(float *)(in_ecx + 0x11c)) * (float10)local_8)));
  }
  return (float10)local_8;
}

/* ref: FUN_0055dfd0 */
GEN_NOFRAME float10 GEN_THISCALL F_0055dfd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55dfd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x11c);
}

/* ref: FUN_0055dfe0 */
GEN_FRAME byte GEN_THISCALL F_0055dfe0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x55dfe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x11c) = param_2;
  return 1;
}

/* ref: FUN_0055e000 */
GEN_FRAME float10 GEN_THISCALL F_0055e000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x48)));
  }
  return (float10)0.0;
}

/* ref: FUN_0055e030 */
GEN_FRAME float10 GEN_THISCALL F_0055e030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x48)));
  }
  return (float10)0.0;
}

/* ref: Component::GUI2::AtkUnitBase::vf18 */
GEN_FRAME uint GEN_THISCALL F_0055e060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55e060u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  ushort * puVar3;
  uint uVar4;
  puVar3 = (*(ushort * PTR32 *)&gen_args[1]);
  *(*(ushort * PTR32 *)&gen_args[1]) = 0;
  *(*(ushort * PTR32 *)&gen_args[2]) = 0;
  iVar2 = REFG(int, 0x1379860);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
  if (iVar1 == 0) {
    *(*(ushort * PTR32 *)&gen_args[1]) = *(ushort *)(REFG(int, 0x1379860) + 0x234);
    uVar4 = CONCAT22((short)((uint)iVar2 >> 0x10),*(ushort *)(REFG(int, 0x1379860) + 0x238));
    *(*(ushort * PTR32 *)&gen_args[2]) = *(ushort *)(REFG(int, 0x1379860) + 0x238);
  }
  else {
    *(*(ushort * PTR32 *)&gen_args[1]) = *(ushort *)(iVar1 + 0x7c);
    uVar4 = CONCAT22((short)((uint)iVar1 >> 0x10),*(ushort *)(iVar1 + 0x7e));
    *(*(ushort * PTR32 *)&gen_args[2]) = *(ushort *)(iVar1 + 0x7e);
    if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
      (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[1]))) * (float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x118))));
      *puVar3 = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
      (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 0)))) = (ushort)(int)TRUNC(((float10)GEN_TOD(*(*(ushort * PTR32 *)&gen_args[2]))) * (float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x118))));
      *(*(ushort * PTR32 *)&gen_args[2]) = (ushort)(*(ushort * PTR32 *)&gen_args[1]);
      return gen_x87_cw | 0xc00;
    }
  }
  return uVar4;
}

/* ref: Component::GUI2::AtkUnitBase::vf20 */
GEN_FRAME ushort GEN_THISCALL F_0055e120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  ushort local_8;
  
  if (*(int *)(in_ecx + 0x90) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x7c)));
  }
  if ((char)param_2 != '\0') {
    local_8 = (ushort)(int)TRUNC((float10)uVar1 * (float10)*(float *)(in_ecx + 0x118));
    uVar1 = local_8;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitBase::vf21 */
GEN_FRAME ushort GEN_THISCALL F_0055e170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  ushort local_8;
  
  if (*(int *)(in_ecx + 0x90) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x7e)));
  }
  if ((char)param_2 != '\0') {
    local_8 = (ushort)(int)TRUNC((float10)uVar1 * (float10)*(float *)(in_ecx + 0x118));
    uVar1 = local_8;
  }
  return uVar1;
}

/* ref: FUN_0055e1c0 */
GEN_FRAME ushort GEN_THISCALL F_0055e1c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55e1c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double dVar1;
  undefined4 local_c;
  
  dVar1 = (double)param_2 * *(double *)&REFG(undefined, 0x10912a8);
  *(undefined2 *)(param_1 + 0x12e) = (undefined2)param_3;
  *(float *)(param_1 + 0x110) = param_5;
  local_c = (undefined4)(longlong)TRUNC(dVar1);
  *(undefined4 *)(param_1 + 0x100) = local_c;
  *(ushort *)(param_1 + 0x130) = (ushort)param_4;
  return (ushort)param_4;
}

/* ref: FUN_0055e220 */
GEN_FRAME ushort GEN_THISCALL F_0055e220(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55e220u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double dVar1;
  undefined4 local_c;
  
  dVar1 = (double)param_2 * *(double *)&REFG(undefined, 0x10912a8);
  *(undefined2 *)(param_1 + 0x132) = (undefined2)param_3;
  *(float *)(param_1 + 0x114) = param_5;
  local_c = (undefined4)(longlong)TRUNC(dVar1);
  *(undefined4 *)(param_1 + 0x104) = local_c;
  *(ushort *)(param_1 + 0x134) = (ushort)param_4;
  return (ushort)param_4;
}

/* ref: FUN_0055e280 */
GEN_FRAME uint GEN_THISCALL F_0055e280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 4,0x20,param_1);
  return uVar1;
}

/* ref: FUN_0055e2a0 */
GEN_FRAME uint GEN_THISCALL F_0055e2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x108) | param_1;
    return param_1;
  }
  *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x108) & ~param_1;
  return in_EAX;
}

/* ref: FUN_0055e2f0 */
GEN_FRAME uint GEN_THISCALL F_0055e2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_0055e300 */
GEN_NOFRAME uint GEN_THISCALL F_0055e300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x2c) != 0) {
    return (uint)*(ushort *)((int)this + 0x3a) + *((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 4)));
  }
  return 0;
}

/* ref: FUN_0055e320 */
GEN_NOFRAME uint GEN_THISCALL F_0055e320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xac);
  if ((iVar1 != 0) && (999 < *(ushort *)(iVar1 + 0x18))) {
    return *(uint *)(iVar1 + 0x8c);
  }
  return 0;
}

/* ref: FUN_0055e340 */
GEN_FRAME uint GEN_THISCALL F_0055e340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055e360 */
GEN_FRAME uint GEN_THISCALL F_0055e360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055e380 */
GEN_FRAME uint GEN_THISCALL F_0055e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055d920((undefined *)((int)this + 0x24) GEN_EDX_FWD,param_1);
  if ((uVar2 == 0) || (*(short *)(uVar2 + 0x18) != 2)) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    if ((*(int *)(uVar2 + 0x8c) != 0) &&
       (puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar2 + 0x8c) + 8))) +
                         (uint)*(ushort *)(uVar2 + 0x90) * 0xc))), puVar1 != (uint *)0x0)) {
      uVar3 = *puVar1;
    }
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_0055e3d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055e3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55e3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  short * psVar2;
  short * psVar3;
  
  *param_2 = 0;
  *param_1 = 0;
  psVar2 = param_2;
  psVar3 = param_2;
  for (iVar1 = param_3; (iVar1 != 0 && (iVar1 != *(int *)((int)this + 0x90)));
      iVar1 = *(int *)(iVar1 + 8)) {
    if (iVar1 != 0) {
      psVar3 = ((short *)GEN_TOP(((int)*(float *)(iVar1 + 0x38) & 0xffff)));
      psVar2 = ((short *)GEN_TOP(((int)*(float *)(iVar1 + 0x3c) & 0xffff)));
    }
    *param_1 = *param_1 + (short)psVar3;
    *param_2 = *param_2 + (short)psVar2;
  }
  return 0;
}

/* ref: FUN_0055e430 */
GEN_FRAME unsigned int GEN_THISCALL F_0055e430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55e430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 == 0) {
    F_0055e3d0(this GEN_EDX_FWD,param_1,param_2,0);
    return;
  }
  F_0055e3d0(this GEN_EDX_ARG,param_1,param_2,*(undefined4 *)(param_3 + 0x70));
  return;
}

/* ref: FUN_0055e470 */
GEN_NOFRAME byte GEN_THISCALL F_0055e470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x13b) == '\0') {
    if (*(char *)(in_ecx + 0x13c) != '\0') goto LAB_0055e497;
    if ((*(byte *)(in_ecx + 0xfb) & 8) == 0) {
      return 1;
    }
  }
  if (*(char *)(in_ecx + 0x13c) == '\0') {
    return 0;
  }
LAB_0055e497: ;
  if (((*(byte *)(in_ecx + 0xfb) & 2) == 0) && ((*(byte *)(in_ecx + 0xf8) & 1) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055e4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_FWD));
}

/* ref: Component::GUI2::AtkUnitBase::vf26 */
GEN_FRAME byte GEN_THISCALL F_0055e4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (((*(byte *)(in_ecx + 0xfb) & 0x40) != 0) &&
     (((*(int *)(in_ecx + 0x94) == 0 || (param_2 == 0)) || (*(int *)(in_ecx + 0x94) == param_2)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_0055e4f0 */
GEN_FRAME uint GEN_THISCALL F_0055e4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte * pbVar2;
  
  iVar1 = 0;
  pbVar2 = (byte *)((int)this + 0x144);
  do {
    if (*pbVar2 == param_1) {
      return (uint)((undefined *)GEN_TOP(((int)this + (iVar1 * 3 + 0x51) * 4)));
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 0xc;
  } while (iVar1 < 5);
  return 0;
}

/* ref: FUN_0055e530 */
GEN_FRAME uint GEN_THISCALL F_0055e530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte * pbVar2;
  
  iVar1 = 0;
  pbVar2 = (byte *)((int)this + 0x144);
  do {
    if (*pbVar2 == param_1) {
      return (uint)((undefined *)GEN_TOP(((int)this + (iVar1 * 3 + 0x51) * 4)));
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar2 + 0xc;
  } while (iVar1 < 5);
  return 0;
}

/* ref: FUN_0055e5c0 */
GEN_FRAME uint GEN_STDCALL F_0055e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 7: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x20) == 0)) {
      return (uint)*(byte *)(param_1 + 0x7b);
    }
    break;
  case 8: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x40) == 0))
    goto switchD_0055e5dc_default;
    break;
  case 9: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 8) == 0)) {
      return (uint)*(byte *)(param_1 + 0x79);
    }
    break;
  case 10: ;
    if ((((char)param_3 == '\0') || (iVar1 == 0)) || ((*(byte *)(iVar1 + 0x88) & 0x10) == 0)) {
      return (uint)*(byte *)(param_1 + 0x7a);
    }
    break;
  default: ;
switchD_0055e5dc_default: ;
    return (uint)*(byte *)(param_1 + 0x7c);
  }
  return 0xffffffff;
}

/* ref: FUN_0055e670 */
GEN_FRAME byte GEN_THISCALL F_0055e670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)param_1 & 1;
  *(byte *)((int)this + 0x1b0) =
       (bVar1 | bVar1 * '\x02') << 4 | *(byte *)((int)this + 0x1b0) & 0x87 |
       (bVar1 | bVar1 * '\b') * '\b';
  return bVar1 * '\b';
}

/* ref: FUN_0055e6d0 */
GEN_NOFRAME uint GEN_THISCALL F_0055e6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(REFG(int, 0x1379860) + 0x18);
  sVar1 = *(short *)(iVar2 + 0xc68);
  if (sVar1 == 0) {
    *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(iVar2 + 0xc58);
    return 0;
  }
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(iVar2 + 0x50 + sVar1 * 0xc);
  return sVar1 * 3;
}

/* ref: FUN_0055e700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0055e700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xcc);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1 GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_0055e720 */
GEN_FRAME float F_0055e720(unsigned int gen_a0)
{
  GEN_ENTER(0x55e720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return REFG(float, 0x109fec0);
  }
  if (param_1 == 2) {
    return *(float *)&REFG(undefined, 0x109fec8);
  }
  return (float)(float10)1;
}

/* ref: FUN_0055e750 */
GEN_FRAME uint F_0055e750(float gen_a0)
{
  GEN_ENTER(0x55e750u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1090b18))))) <=
      (float10)REFG(float, 0x10905c4)) {
    return 0;
  }
  uVar1 = 2;
  if (!((float10)((float)GEN_TOF(ABS((float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10a0c88)))))
       <= (float10)REFG(float, 0x10905c4))) {
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_0055e7b0 */
GEN_FRAME uint GEN_THISCALL F_0055e7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x1379860);
  if ((char)param_1 != '\0') {
    iVar1 = (int)this + 0x100;
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,iVar1);
    }
    uVar3 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18) GEN_EDX_ARG,iVar1,uVar3,0);
    return uVar3;
  }
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18);
  if (*(short *)((int)this_00 + 0xc68) == 0) {
    uVar3 = *(uint *)((int)this_00 + 0xc58);
  }
  else {
    uVar3 = *((uint *)GEN_TOP(((int)this_00 + *(short *)((int)this_00 + 0xc68) * 0xc + 0x50)));
  }
  if (uVar3 == (int)this + 0x100U) {
    uVar3 = F_00558e30(this_00 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkUnitManager::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_0055e830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  
  if ((short)param_1 == 0xc) {
    uVar1 = 1;
    while ((uVar1 == 3 || (uVar1 != *param_4))) {
      uVar1 = uVar1 + 1;
      if (0x10 < uVar1) {
        return;
      }
    }
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
  }
  return;
}

/* ref: FUN_0055e870 */
GEN_FRAME float10 F_0055e870(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x55e870u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar2 = (float10)param_5;
  fVar3 = (float10)param_6;
  if (!(fVar2 <= fVar3)) {
    fVar4 = (float10)param_3;
    fVar5 = (float10)(float)(fVar2 - fVar3);
    fVar6 = (float10)REFG(double, 0x1088108);
    fVar7 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - (float10)param_1) /
                            (fVar4 - ((fVar5 + fVar4) * ((float10)1 - fVar5 / fVar4)) * fVar6))));
    fVar1 = ((float)GEN_TOF(((fVar7 * fVar5) / fVar4)));
    fVar5 = (float10)param_4;
    if (fVar5 < fVar3) {
      return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((fVar7 + (float10)((float)GEN_TOF((fVar7 + (((float10)fVar1 -
                                                                                   fVar7) * fVar5) /
                                                                                  fVar3)))) * fVar5) *
                                              fVar6))) + (float10)param_1)));
    }
    if (fVar5 <= fVar2) {
      return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar3 * ((float10)fVar1 + fVar7)) * fVar6 +
                                              (float10)fVar1 * (fVar5 - fVar3)))) + (float10)param_1)));
    }
    fVar8 = (float10)fVar1;
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)((float)GEN_TOF((fVar8 + ((fVar7 - fVar8) *
                                                                        (float10)(double)(fVar5 - 
                                                  fVar2)) / (fVar4 - fVar2)))) + fVar8) *
                                             (float10)(double)(fVar5 - fVar2)) * fVar6 +
                                            (float10)((float)GEN_TOF((fVar6 * ((fVar8 + fVar7) * fVar3) +
                                                            (float10)(float)(fVar2 - fVar3) * fVar8)))
                                            ))) + (float10)param_1)));
  }
  fVar4 = (float10)(float)((float10)param_2 - (float10)param_1);
  fVar5 = (float10)param_3;
  fVar1 = ((float)GEN_TOF(((fVar4 + fVar4) / ((fVar5 + fVar3) - fVar2))));
  fVar4 = (float10)param_4;
  if (fVar4 < fVar2) {
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((((float10)fVar1 * fVar4) * fVar4) / fVar2) *
                                            (float10)REFG(double, 0x1088108)))) + (float10)param_1)));
  }
  if (fVar4 <= fVar3) {
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)fVar1 * fVar2) * (float10)REFG(double, 0x1088108) +
                                            (float10)fVar1 * (fVar4 - fVar2)))) + (float10)param_1)));
  }
  fVar6 = (float10)fVar1;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((fVar6 + (fVar6 * (fVar5 - fVar4)) / (fVar5 - fVar3)) *
                                           (fVar4 - fVar3)) * (float10)REFG(double, 0x1088108) +
                                          (float10)((float)GEN_TOF(((fVar6 * fVar2) * (float10)REFG(double, 0x1088108) +
                                                          fVar6 * (fVar3 - fVar2))))))) +
                         (float10)param_1)));
}

/* ref: FUN_0055ea70 */
GEN_FRAME unsigned int F_0055ea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ea70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  
  fVar1 = F_005baa90(param_4 GEN_EDX_ARG,*(float *)(in_ecx + 0xc),*(float *)(in_eax + 0xc));
  *(float *)(param_3 + 0xc) = (float)fVar1;
  return 0;
}

/* ref: FUN_0055eaa0 */
GEN_FRAME unsigned int F_0055eaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,*(float *)(param_4 + 0xc),*(float *)(in_edi + 0xc));
  *(float *)(param_3 + 0xc) = (float)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,*(float *)(param_4 + 0x10),*(float *)(in_edi + 0x10));
  *(float *)(param_3 + 0x10) = (float)fVar1;
  return 0;
}

/* ref: FUN_0055eaf0 */
GEN_FRAME uint F_0055eaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  undefined1 local_c;
  
  fVar1 = F_005baa90(param_4 GEN_EDX_ARG,(float)*(byte *)(in_edx + 0xc),(float)*(byte *)(in_eax + 0xc));
  local_c = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xc) = local_c;
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_0055eb50 */
GEN_FRAME uint F_0055eb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  undefined1 local_8;
  
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)*(byte *)(param_4 + 0xc),(float)*(byte *)(in_edi + 0xc));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xc) = local_8;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)*(byte *)(param_4 + 0xd),(float)*(byte *)(in_edi + 0xd));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xd) = local_8;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)*(byte *)(param_4 + 0xe),(float)*(byte *)(in_edi + 0xe));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xe) = local_8;
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_0055ec50 */
GEN_FRAME uint F_0055ec50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ec50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  undefined2 local_c;
  
  fVar1 = F_005baa90(param_4 GEN_EDX_ARG,(float)*(ushort *)(in_edx + 0xc),(float)*(ushort *)(in_eax + 0xc));
  local_c = (undefined2)(int)TRUNC(fVar1);
  *(undefined2 *)(param_3 + 0xc) = local_c;
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_0055ecb0 */
GEN_FRAME uint F_0055ecb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(char *)(param_4 + 0x12),
                       (float)(int)*(char *)(in_edi + 0x12));
  *(char *)(param_3 + 0x12) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(char *)(param_4 + 0x13),
                       (float)(int)*(char *)(in_edi + 0x13));
  *(char *)(param_3 + 0x13) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(char *)(param_4 + 0x14),
                       (float)(int)*(char *)(in_edi + 0x14));
  *(char *)(param_3 + 0x14) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(short *)(param_4 + 0xc),
                       (float)(int)*(short *)(in_edi + 0xc));
  *(short *)(param_3 + 0xc) = (short)(int)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(short *)(param_4 + 0xe),
                       (float)(int)*(short *)(in_edi + 0xe));
  *(short *)(param_3 + 0xe) = (short)(int)fVar1;
  fVar1 = F_005baa90(in_esi GEN_EDX_ARG,(float)(int)*(short *)(param_4 + 0x10),
                       (float)(int)*(short *)(in_edi + 0x10));
  *(short *)(param_3 + 0x10) = (short)(int)fVar1;
  return (int)fVar1;
}

/* ref: FUN_0055ee30 */
GEN_FRAME uint GEN_THISCALL F_0055ee30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ee30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  ushort uVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined2 *)((int)this + 0x12) = 1;
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x7f0000;
  puVar3 = *(ushort * PTR32 *)(param_1 + 0xc);
  if (puVar3 != (ushort *)0x0) {
    *(undefined2 *)((int)this + 0x22) = 0x807f;
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    *(ushort *)((int)this + 0x12) = uVar1;
    uVar4 = (uint)uVar1 - (uint)uVar2;
    *(short *)((int)this + 0x10) = (short)uVar4;
  }
  return uVar4;
}

/* ref: FUN_0055eeb0 */
GEN_FRAME uint GEN_STDCALL F_0055eeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55eeb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (ushort)param_3 - 1;
  if (-1 < iVar2) {
    do {
      iVar1 = (iVar2 + iVar3) / 2;
      if (param_1 < *(ushort *)(iVar1 * 0x40 + param_2)) {
        iVar2 = iVar1 - 1;
      }
      else {
        if (param_1 <= *(ushort *)(iVar1 * 0x40 + 2 + param_2)) {
          return iVar1 * 0x40 + param_2;
        }
        iVar3 = iVar1 + 1;
      }
    } while (iVar3 <= iVar2);
  }
  return 0;
}

/* ref: FUN_0055ef10 */
GEN_FRAME uint GEN_THISCALL F_0055ef10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(short *)(*(int *)this + 6) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)this + 0xc);
  uVar4 = (uint)*(ushort *)(iVar1 + 8);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar4 != 0) {
    do {
      if (*(short *)(uVar2 + 0xc) == (short)param_1) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + 0x10;
    } while (iVar3 < (int)uVar4);
  }
  return 0;
}

/* ref: FUN_0055ef60 */
GEN_NOFRAME uint GEN_THISCALL F_0055ef60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x55ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  int iVar5;
  
  uVar1 = *(ushort *)(*(int *)this + 6);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  uVar3 = F_0055eeb0(uVar2,*(undefined4 *)(*(int *)this + 0xc),(uint)uVar1);
  if (uVar3 != 0) {
    puVar4 = *(ushort * PTR32 *)(uVar3 + 0xc);
    iVar5 = 0;
    if (*(ushort *)(uVar3 + 8) != 0) {
      do {
        if ((*puVar4 == uVar2) && (puVar4[6] != 0)) {
          return CONCAT22((short)((uint)((int)(uintptr_t)puVar4) >> 0x10),puVar4[6]);
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 8;
      } while (iVar5 < (int)(uint)*(ushort *)(uVar3 + 8));
    }
  }
  return 0;
}

/* ref: FUN_0055efc0 */
GEN_FRAME uint GEN_THISCALL F_0055efc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55efc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined2 * puVar3;
  
  if (*(short *)(*(int *)this + 6) != 0) {
    iVar1 = *(int *)(*(int *)this + 0xc);
    uVar2 = (uint)*(ushort *)(iVar1 + 8);
    puVar3 = *(undefined2 * PTR32 *)(iVar1 + 0xc);
    iVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (puVar3[6] == (short)param_1) {
          return CONCAT22((short)((uint)iVar1 >> 0x10),*puVar3);
        }
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 8;
      } while (iVar1 < (int)uVar2);
    }
  }
  return 0;
}

/* ref: FUN_0055f000 */
GEN_FRAME uint GEN_THISCALL F_0055f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55f000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  ushort * puVar3;
  
  iVar2 = *(int *)this;
  uVar1 = *(ushort *)(iVar2 + 6);
  if (uVar1 != 0) {
    puVar3 = (ushort *)F_0055ef10(this GEN_EDX_FWD,param_1);
    if (puVar3 != (ushort *)0x0) {
      puVar3 = (ushort *)F_0055eeb0((uint)*puVar3,*(undefined4 *)(iVar2 + 0xc),(uint)uVar1);
      if (puVar3 != (ushort *)0x0) {
        return (uint)puVar3[1] - (uint)*puVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_0055f070 */
GEN_FRAME uint GEN_STDCALL F_0055f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55f070u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_2);
  if ((ushort)param_2 != 0) {
    param_2 = (uint)(ushort)param_2;
    piVar2 = (int *)(param_1 + 0xc);
    do {
      iVar4 = 7;
      piVar3 = piVar2;
      do {
        uVar1 = 0;
        if (piVar3 != (int *)&REFG(undefined, 0x4)) {
          uVar1 = 0;
          if (*piVar3 != 0) {
            uVar1 = F_00406810(*piVar3);
            *piVar3 = 0;
          }
        }
        piVar3 = piVar3 + 2;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
      piVar2 = piVar2 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar1;
}

/* ref: FUN_0055f0d0 */
GEN_FRAME unsigned int GEN_STDCALL F_0055f0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f0d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = *(ushort *)(param_2 + 6);
  uVar6 = (uint)uVar2;
  *param_3 = uVar2;
  param_3[1] = uVar1;
  if (uVar2 != 0) {
    iVar3 = *(int *)(&REFG(undefined, 0x109fef0) + (uint)uVar1 * 4);
    puVar5 = (undefined2 *)(param_2 + 8);
    puVar4 = ((undefined2 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,uVar6 * iVar3,0x10)));
    *(undefined2 * PTR32 *)(param_3 + 2) = puVar4;
    if (uVar2 != 0) {
      do {
        *puVar4 = *puVar5;
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar5 + 3);
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 4);
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar5 + 6);
        switch((unsigned int)(uintptr_t)((uint)uVar1)) {
        case 0: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          break;
        case 1: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar5 + 10);
          break;
        case 2: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar5 + 10);
          *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(puVar5 + 0xc);
          break;
        case 3: ;
        case 6: ;
        case 0x15: ;
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 8);
          break;
        case 4: ;
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 8);
          *(undefined1 *)((int)puVar4 + 0xd) = *(undefined1 *)(puVar5 + 9);
          break;
        case 5: ;
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 8);
          *(undefined1 *)((int)puVar4 + 0xd) = *(undefined1 *)(puVar5 + 9);
          *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(puVar5 + 10);
          break;
        case 7: ;
        case 0x16: ;
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 8);
          *(undefined1 *)((int)puVar4 + 0xd) = *(undefined1 *)((int)puVar5 + 0x11);
          break;
        case 8: ;
        case 0x17: ;
          *(undefined1 *)(puVar4 + 6) = *(undefined1 *)(puVar5 + 8);
          *(undefined1 *)((int)puVar4 + 0xd) = *(undefined1 *)((int)puVar5 + 0x11);
          *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(puVar5 + 9);
          break;
        case 9: ;
        case 0xc: ;
          puVar4[6] = puVar5[8];
          break;
        case 10: ;
        case 0xd: ;
          puVar4[6] = puVar5[8];
          puVar4[7] = puVar5[9];
          break;
        case 0xb: ;
        case 0xe: ;
          puVar4[6] = puVar5[8];
          puVar4[7] = puVar5[9];
          puVar4[8] = puVar5[10];
          break;
        case 0xf: ;
        case 0x12: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          break;
        case 0x10: ;
        case 0x13: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar5 + 10);
          break;
        case 0x11: ;
        case 0x14: ;
          *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(puVar5 + 8);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar5 + 10);
          *(undefined4 *)(puVar4 + 10) = *(undefined4 *)(puVar5 + 0xc);
          break;
        case 0x18: ;
          *(undefined1 *)(puVar4 + 9) = *(undefined1 *)(puVar5 + 8);
          *(undefined1 *)((int)puVar4 + 0x13) = *(undefined1 *)(puVar5 + 9);
          *(undefined1 *)(puVar4 + 10) = *(undefined1 *)(puVar5 + 10);
          puVar4[6] = puVar5[0xb];
          puVar4[7] = puVar5[0xc];
          puVar4[8] = puVar5[0xd];
          break;
        case 0x19: ;
          puVar4[6] = puVar5[8];
          *(undefined1 *)(puVar4 + 7) = *(undefined1 *)(puVar5 + 9);
          *(undefined1 *)((int)puVar4 + 0xf) = *(undefined1 *)((int)puVar5 + 0x13);
        }
        puVar4 = (undefined2 *)((int)puVar4 + iVar3);
        puVar5 = (undefined2 *)((int)puVar5 + (uint)(ushort)puVar5[2]);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return 0;
}

/* ref: FUN_0055f330 */
GEN_FRAME uint GEN_THISCALL F_0055f330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55f330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x8c) = param_2;
  return param_2;
}

/* ref: FUN_0055f340 */
GEN_FRAME unsigned int GEN_THISCALL F_0055f340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f340u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if ((*(int * PTR32 *)(in_ecx + 0x34) != (int *)0x0) &&
     (iVar1 = param_3 * 0x150 + **(int * PTR32 *)(in_ecx + 0x34), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x14c) = param_2;
  }
  return;
}

/* ref: FUN_0055f370 */
GEN_FRAME byte GEN_STDCALL F_0055f370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0042e360(param_1 GEN_EDX_ARG,param_2);
  return 1;
}

/* ref: FUN_0055f390 */
GEN_FRAME uint GEN_THISCALL F_0055f390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a24d30(this GEN_EDX_FWD,param_1,(int)this + 0x350,param_2,1);
  return uVar1;
}

/* ref: FUN_0055f3b0 */
GEN_FRAME uint GEN_STDCALL F_0055f3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
{
  GEN_ENTER(0x55f3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[23];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char * pcVar8;
  uint local_8;
  
  uVar3 = F_0042a990((*(undefined4 *)&gen_args[0]) GEN_EDX_ARG);
  pcVar4 = (char *)F_0042a990(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  uVar2 = REFG(undefined4, 0x108cc50);
  pcVar8 = (char *)(uVar3 + (*(uint *)&gen_args[22]));
  local_8 = (*(uint *)&gen_args[22]);
  cVar6 = *pcVar8;
  if (cVar6 != '\0') {
    iVar5 = (int)pcVar8 - (int)pcVar4;
    do {
      if (cVar6 == *pcVar4) {
        iVar7 = 1;
        cVar6 = pcVar4[1];
        pcVar1 = pcVar4;
        while ((cVar6 != '\0' && ((pcVar1 + 1)[iVar5] == cVar6))) {
          iVar7 = iVar7 + 1;
          cVar6 = pcVar1[2];
          pcVar1 = pcVar1 + 1;
        }
        if (pcVar4[iVar7] == '\0') {
          F_0042c880(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
          return local_8;
        }
      }
      cVar6 = pcVar8[1];
      local_8 = local_8 + 1;
      pcVar8 = pcVar8 + 1;
      iVar5 = iVar5 + 1;
    } while (cVar6 != '\0');
  }
  F_0042c880(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0055f7d0 */
GEN_FRAME uint GEN_THISCALL F_0055f7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar1 = *(uint *)((int)this + 0x38);
  if (uVar1 != 0) {
    if ((char)param_1 == '\0') {
      puVar3 = (undefined4 *)(uVar1 + 0xa8);
      puVar4 = (undefined4 *)(uVar1 + 100);
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return uVar1;
}

/* ref: FUN_0055f810 */
GEN_FRAME uint GEN_THISCALL F_0055f810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55f810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00579cb0(this GEN_EDX_FWD), (int)uVar1 < 0)) {
    return uVar1;
  }
  *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + *(int *)((int)this + 0x98);
  *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0xb8);
  this_00 = (undefined *)((int)this + 0xcc);
  *(undefined4 *)((int)this + 0xc4) = 0;
  if (param_1 == 0) {
    F_0042e360(this_00 GEN_EDX_ARG,(int)this + 0x2fc);
  }
  else {
    F_0042e370(this_00 GEN_EDX_ARG,param_1);
  }
  if ((char)param_2 != '\0') {
    F_0042e360(*(undefined * PTR32 *)((int)this + 200) GEN_EDX_ARG,this_00);
    if (*(int *)((int)this + 0xb8) == 0) {
      F_0042aca0(this_00 GEN_EDX_ARG);
    }
    else {
      F_0042e430(this_00 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
      *(undefined4 *)((int)this + 0xc4) = 1;
    }
  }
  if (*(int *)((int)this + 0x9c) < *(int *)((int)this + 0xa0)) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,(int)this + 0x350,this_00);
  return uVar1;
}

/* ref: FUN_0055f8e0 */
GEN_FRAME uint GEN_STDCALL F_0055f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55f8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char * pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  
  uVar4 = (*(uint *)&gen_args[1]);
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 - 1;
    if ((int)uVar4 < 0) {
      return -(uint)((char)(*(undefined4 *)&gen_args[3]) != '\0') & (*(uint *)&gen_args[1]);
    }
    uVar3 = *(uint *)((*(int *)&gen_args[0]) + uVar4 * 4);
    if (uVar3 != 2) {
      cVar2 = *(*(char * PTR32 *)&gen_args[2]);
      pcVar6 = (*(char * PTR32 *)&gen_args[2]);
      while (cVar2 != '\0') {
        if (uVar3 == (int)cVar2) {
          return uVar5;
        }
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar1;
      }
    }
  } while ((uVar3 < 0x2100) && (uVar3 != 3));
  if (*(int *)((*(int *)&gen_args[0]) + 4 + uVar4 * 4) == 2) {
    if (*(int *)((*(int *)&gen_args[0]) + uVar5 * 4) != 2) {
      return uVar5;
    }
    do {
      uVar5 = uVar5 + 1;
    } while (*(int *)((*(int *)&gen_args[0]) + uVar5 * 4) == 2);
    return uVar5;
  }
  return uVar5;
}

/* ref: FUN_0055f960 */
GEN_FRAME byte GEN_STDCALL F_0055f960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55f960u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = 0;
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (param_2 == uVar1) break;
    uVar1 = param_1[iVar2 + 1];
    iVar2 = iVar2 + 1;
  }
  return 1;
}

/* ref: FUN_0055f9a0 */
GEN_FRAME uint GEN_STDCALL F_0055f9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55f9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  char * pcVar1;
  ushort * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  int iVar9;
  
  uVar5 = (*(uint *)&gen_args[1]);
  do {
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 - 1;
      if ((int)uVar5 < 0) {
        return -(uint)((char)(*(undefined4 *)&gen_args[3]) != '\0') & (*(uint *)&gen_args[1]);
      }
      uVar4 = *(uint *)((*(int *)&gen_args[0]) + uVar5 * 4);
      if (uVar4 != 2) {
        cVar3 = *(*(char * PTR32 *)&gen_args[2]);
        pcVar8 = (*(char * PTR32 *)&gen_args[2]);
        while (cVar3 != '\0') {
          if (uVar4 == (int)cVar3) {
            return uVar6;
          }
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar3 = *pcVar1;
        }
      }
    } while ((uVar4 < 0x2100) && (uVar4 != 3));
    iVar9 = 0;
    uVar7 = 0xff08;
    while (uVar4 != uVar7) {
      puVar2 = &REFG(undefined2, 0x109ffda) + iVar9;
      uVar7 = (uint)*puVar2;
      iVar9 = iVar9 + 1;
      if (*puVar2 == 0) {
        if (*(int *)((*(int *)&gen_args[0]) + 4 + uVar5 * 4) != 2) {
          return uVar6;
        }
        if (*(int *)((*(int *)&gen_args[0]) + uVar6 * 4) != 2) {
          return uVar6;
        }
        do {
          uVar6 = uVar6 + 1;
        } while (*(int *)((*(int *)&gen_args[0]) + uVar6 * 4) == 2);
        return uVar6;
      }
    }
  } while( true );
}

/* ref: FUN_0055fa40 */
GEN_FRAME uint GEN_STDCALL F_0055fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55fa40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = 0x3001;
  do {
    if (*(uint *)(param_1 + param_2 * 4) == uVar2) {
      iVar4 = param_2 - 1;
      break;
    }
    puVar1 = &REFG(undefined2, 0x109ff8a) + iVar3;
    uVar2 = (uint)*puVar1;
    iVar3 = iVar3 + 1;
    iVar4 = param_2;
  } while (*puVar1 != 0);
  if (0 < iVar4) {
    iVar3 = 0;
    uVar2 = 0xff08;
    do {
      if (*(uint *)(param_1 - 4 + iVar4 * 4) == uVar2) {
        iVar4 = iVar4 - 1;
        break;
      }
      puVar1 = &REFG(undefined2, 0x109ffda) + iVar3;
      uVar2 = (uint)*puVar1;
      iVar3 = iVar3 + 1;
    } while (*puVar1 != 0);
  }
  if (3 < iVar4) {
    iVar3 = 0;
    uVar2 = 0x49;
    do {
      if (*(uint *)(param_1 + iVar4 * 4) == uVar2) {
        iVar3 = 0;
        uVar2 = 0x49;
        goto LAB_0055fad0;
      }
      puVar1 = &REFG(undefined2, 0x109fff6) + iVar3;
      uVar2 = (uint)*puVar1;
      iVar3 = iVar3 + 1;
    } while (*puVar1 != 0);
  }
  goto LAB_0055faea;
  while( true ) {
    puVar1 = &REFG(undefined2, 0x109fff6) + iVar3;
    uVar2 = (uint)*puVar1;
    iVar3 = iVar3 + 1;
    if (*puVar1 == 0) break;
LAB_0055fad0: ;
    if (*(uint *)(param_1 - 4 + iVar4 * 4) == uVar2) {
      iVar4 = iVar4 - 2;
      break;
    }
  }
LAB_0055faea: ;
  uVar2 = F_0055f9a0(param_1,iVar4,&REFG(undefined, 0x109fffc),param_3);
  return uVar2;
}

/* ref: FUN_0055fb10 */
GEN_FRAME uint GEN_STDCALL F_0055fb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55fb10u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    *param_2 = uVar2;
    return 1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    *param_2 = param_1[1] & 0x3f | (uVar2 & 0x1f) << 6;
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    *param_2 = (param_1[1] & 0x3f | (uVar2 & 0xf) << 6) << 6 | param_1[2] & 0x3f;
    return 3;
  }
  if ((bVar1 & 0xf8) == 0xf0) {
    *param_2 = ((param_1[1] & 0x3f | (uVar2 & 7) << 6) << 6 | param_1[2] & 0x3f) << 6 |
               param_1[3] & 0x3f;
    return 4;
  }
  if ((bVar1 & 0xfc) == 0xf8) {
    *param_2 = (((param_1[1] & 0x3f | (uVar2 & 3) << 6) << 6 | param_1[2] & 0x3f) << 6 |
               param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f;
    return 5;
  }
  if ((bVar1 & 0xfe) == 0xfc) {
    *param_2 = ((((param_1[1] & 0x3f | (uVar2 & 1) << 6) << 6 | param_1[2] & 0x3f) << 6 |
                param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f) << 6 | param_1[5] & 0x3f;
    return 6;
  }
  *param_2 = 0;
  return 1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf13 */
GEN_FRAME uint GEN_THISCALL F_0055fc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf14 */
GEN_FRAME uint GEN_THISCALL F_0055fcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf15 */
GEN_FRAME uint GEN_THISCALL F_0055fcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf16 */
GEN_FRAME uint GEN_THISCALL F_0055fcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf17 */
GEN_FRAME uint GEN_THISCALL F_0055fd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_0055fd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = F_00579cb0(this GEN_EDX_FWD);
  if (-1 < (int)uVar1) {
    *(int *)(this + 0x94) = *(int *)(this + 0x94) + *(int *)(this + 0x98);
    *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
    this_00 = this + 0xcc;
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0xb8);
    *(undefined4 *)(this + 0xc4) = 0;
    F_0042e360(this_00 GEN_EDX_ARG,this + 0x2fc);
    F_0042e360(*(undefined * PTR32 *)(this + 200) GEN_EDX_ARG,this_00);
    if (*(int *)(this + 0xb8) == 0) {
      F_0042aca0(this_00 GEN_EDX_ARG);
    }
    else {
      F_0042e430(this_00 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbac));
      *(undefined4 *)(this + 0xc4) = 1;
    }
    if (*(int *)(this + 0xa0) <= *(int *)(this + 0x9c)) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,0,0,this + 0x350,this_00);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf5 */
GEN_FRAME uint GEN_THISCALL F_0055fde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (*(int *)&gen_args[3]);
  uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[3]),&(*(int *)&gen_args[3]),1);
  if (uVar2 == 0) {
    return 0;
  }
  if ((*(int *)&gen_args[3]) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1,(*(undefined4 *)&gen_args[4]));
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  else {
    if (0xfffe < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4)))) {
      return uVar2;
    }
    if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) == *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0)))) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) == 0)) &&
       (iVar4 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) - (*(int *)&gen_args[3]), *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = iVar4, iVar4 < 0)) {
      return 0xfffffffe;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1,(*(undefined * PTR32 *)&gen_args[0]) + 0xcc);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf12 */
GEN_FRAME uint GEN_THISCALL F_0055fe90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if (*(int *)(in_ecx + 0xa8) != 0xff) {
    iVar1 = *(int *)(in_ecx + 0xa8) - 1;
    *(int *)(in_ecx + 0xa8) = iVar1;
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    F_0042aca0(*(undefined4 *)(in_ecx + 200) GEN_EDX_FWD);
    F_0042aca0(param_5 GEN_EDX_ARG);
    *(undefined4 *)(in_ecx + 0x9c) = 0;
    *(undefined4 *)(in_ecx + 0x94) = 0;
    *(undefined4 *)(in_ecx + 0x90) = 0;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf6 */
GEN_FRAME uint GEN_THISCALL F_0055fef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf7 */
GEN_FRAME uint GEN_THISCALL F_0055ff10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf8 */
GEN_FRAME uint GEN_THISCALL F_0055ff30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf9 */
GEN_FRAME uint GEN_THISCALL F_0055ff50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf10 */
GEN_FRAME uint GEN_THISCALL F_0055ff70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_0055ff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf19 */
GEN_NOFRAME uint GEN_THISCALL F_0055ffa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ffa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_0055ffc0 */
GEN_FRAME unsigned int GEN_THISCALL F_0055ffc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55ffc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x24);
  do {
    if (*piVar2 == -1) {
      *(undefined4 *)((int)this + uVar1 * 4 + 0x24) = param_1;
      return 0;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 8);
  return 0;
}

/* ref: FUN_0055fff0 */
GEN_FRAME uint GEN_THISCALL F_0055fff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x55fff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00560020 */
GEN_FRAME uint GEN_THISCALL F_00560020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00560050 */
GEN_FRAME uint GEN_THISCALL F_00560050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00560070 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00560070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560070u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return;
}

/* ref: FUN_00560080 */
GEN_FRAME uint GEN_THISCALL F_00560080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return param_1;
}

/* ref: FUN_005600a0 */
GEN_NOFRAME uint GEN_THISCALL F_005600a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5600a0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_005600b0 */
GEN_FRAME uint GEN_THISCALL F_005600b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5600b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = param_1;
  return uVar1;
}

/* ref: FUN_005600d0 */
GEN_NOFRAME uint GEN_THISCALL F_005600d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5600d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)this) >> 0x20);
}

/* ref: FUN_005600e0 */
GEN_FRAME byte GEN_THISCALL F_005600e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5600e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00560100 */
GEN_FRAME uint GEN_THISCALL F_00560100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *(int *)(*param_1 + 0x10)) &&
     (*(int *)((int)this + 4) == *(int *)(*param_1 + 0x14))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00560170 */
GEN_FRAME uint GEN_THISCALL F_00560170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00560190 */
GEN_FRAME uint GEN_THISCALL F_00560190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  return param_2;
}

/* ref: FUN_005601b0 */
GEN_FRAME uint GEN_THISCALL F_005601b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5601b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc);
  if (uVar1 == param_2) {
    uVar1 = 0;
    *(undefined4 *)(in_ecx + 0xc) = 0;
    *(undefined4 *)(in_ecx + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00560210 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00560210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return;
}

/* ref: FUN_00560240 */
GEN_FRAME unsigned int GEN_THISCALL F_00560240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (*(int *)((int)this + 0x18) != 0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x18);
    uVar1 = F_004d6dd0(this_00 GEN_EDX_FWD,0,((byte *)(gen_frame + 0xc)),2);
    if (uVar1 != 0) {
      uVar1 = 0;
      if (*(int *)((int)this_00 + 0x1c) != 0) {
        uVar3 = *(uint *)((int)this_00 + 0x18);
        do {
          uVar2 = 0;
          if (uVar3 != 0) {
            do {
              *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) * uVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + uVar2 * 4))) = param_1;
              uVar3 = *(uint *)((int)this_00 + 0x18);
              uVar2 = uVar2 + 1;
            } while (uVar2 < uVar3);
          }
          uVar1 = uVar1 + 1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x18));
        } while (uVar1 < *(uint *)((int)this_00 + 0x1c));
      }
      F_004d6e60(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,0);
    }
  }
  return;
}

/* ref: FUN_005602f0 */
GEN_FRAME ushort GEN_THISCALL F_005602f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5602f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_1;
  *(undefined2 *)((int)this + 8) = (undefined2)param_2;
  *(ushort *)((int)this + 10) = (ushort)param_3;
  return (ushort)param_3;
}

/* ref: FUN_00560310 */
GEN_NOFRAME uint F_00560310(void)
{
  GEN_ENTER(0x560310u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x131dbc0);
}

/* ref: FUN_00560320 */
GEN_FRAME uint GEN_THISCALL F_00560320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560320u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00560340 */
GEN_NOFRAME uint GEN_THISCALL F_00560340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  return (uint)uVar1;
}

/* ref: FUN_00560350 */
GEN_NOFRAME uint GEN_THISCALL F_00560350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x10) GEN_EDX_FWD,"");
  *(undefined4 *)((int)this + 100) = 0;
  return uVar1;
}

/* ref: FUN_00560390 */
GEN_FRAME uint GEN_THISCALL F_00560390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_005603a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005603a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5603a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0x80) != '\0') {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x78) + 0x84)));
    if (*(int *)((int)this + 0x78) == 0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x70);
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if ((iVar1 != 0) && (piVar3 != (int *)0x0)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x14) + 0x34))))
                        (*(int * PTR32 *)(iVar1 + 0x14) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)),0);
      if ((char)uVar2 == '\0') {
        iVar1 = *(int *)(iVar1 + 0x18);
        (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar1 + 0xc5c);
        (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(iVar1 + 0xc5e);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))
                (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(int)(short)(*(uint *)(gen_frame + 0x4))),
                 (undefined4)gen_fl2bits((float)(int)(short)(*(uint *)(gen_frame + 0x8))));
    }
  }
  return;
}

/* ref: FUN_00560430 */
GEN_FRAME byte GEN_THISCALL F_00560430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 0x80) != '\0') && ((*(int *)&gen_a1) == *(int *)((int)this + 0x70))) {
    if (*(int *)((int)this + 0x78) == 0) {
      return 1;
    }
    return *((short *)GEN_TOP((*(int *)((int)this + 0x78) + 0x9c))) ==
           *((short *)GEN_TOP((*(int *)((int)this + 0x74) + 0x18)));
  }
  return 0;
}

/* ref: FUN_00560470 */
GEN_FRAME byte GEN_THISCALL F_00560470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560470u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != '\0') && (iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x14) & (*(uint *)&gen_args[2])) != 0)) {
    *(*(int * PTR32 *)&gen_args[1]) = iVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_005604a0 */
GEN_FRAME byte GEN_THISCALL F_005604a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5604a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 0x14))))(*(int * PTR32 *)((int)this + 0x70) GEN_EDX_FWD);
  if (param_1 != uVar1) {
    return 1;
  }
  if (*(int *)((int)this + 0x78) == 0) {
    return 0;
  }
  return *((short *)GEN_TOP((*(int *)((int)this + 0x78) + 0x9c))) !=
         *((short *)GEN_TOP((*(int *)((int)this + 0x74) + 0x18)));
}

/* ref: FUN_005604e0 */
GEN_FRAME uint GEN_THISCALL F_005604e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5604e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  uint in_EAX = 0;
  int iVar1;
  
  if ((*(char *)((int)this + 0x80) != '\0') && (*(int *)((int)this + 0x70) != 0)) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
    in_EAX = param_1;
    if (*(char *)((int)this + 0x82) == '\0') {
      iVar1 = (int)param_2[1] - (int)*(short *)((int)this + 0x7e);
      in_EAX = ((int)*param_2 - (int)*(short *)((int)this + 0x7c)) + 3;
      if (((6 < in_EAX) || (3 < iVar1)) || (iVar1 < -3)) {
        *(undefined1 *)((int)this + 0x82) = 1;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00560590 */
GEN_FRAME uint GEN_THISCALL F_00560590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560590u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005605c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005605c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5605c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if ((((param_1 != 0) && (*(int *)this != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xdc))), iVar1 != 0)) &&
     (piVar2 = (int *)(iVar1 + 0x180), piVar2 != (int *)0x0)) {
    *(short *)((int)this + 6) = *(short *)((int)this + 6) + 1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD,0,param_1,0);
  }
  return;
}

/* ref: FUN_00560600 */
GEN_FRAME unsigned int GEN_THISCALL F_00560600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short * psVar1;
  int iVar2;
  int * piVar3;
  
  if ((((param_1 != 0) && (*(int *)this != 0)) &&
      (iVar2 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xdc))), iVar2 != 0)) &&
     (piVar3 = (int *)(iVar2 + 0x180), piVar3 != (int *)0x0)) {
    psVar1 = (short *)((int)this + 6);
    *psVar1 = *psVar1 - 1;
    if (*psVar1 < 0) {
      *(undefined2 *)((int)this + 6) = 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD,1,param_1,0);
  }
  return;
}

/* ref: FUN_00560650 */
GEN_NOFRAME uint GEN_THISCALL F_00560650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((*(int *)this != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xe0))), uVar3 = 0, iVar1 != 0)) &&
     (piVar2 = (int *)(iVar1 + 0x180), uVar3 = 0, piVar2 != (int *)0x0)) {
    *(short *)((int)this + 4) = *(short *)((int)this + 4) + 1;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_FWD,0,0,0);
  }
  return uVar3;
}

/* ref: FUN_00560680 */
GEN_NOFRAME uint GEN_THISCALL F_00560680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (((*(int *)this != 0) &&
      (iVar2 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xe0))), uVar4 = 0, iVar2 != 0)) &&
     (piVar3 = (int *)(iVar2 + 0x180), uVar4 = 0, piVar3 != (int *)0x0)) {
    psVar1 = (short *)((int)this + 4);
    *psVar1 = *psVar1 - 1;
    if (*psVar1 < 0) {
      *(undefined2 *)((int)this + 4) = 0;
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD,1,0,0);
  }
  return uVar4;
}

/* ref: FUN_005606c0 */
GEN_FRAME byte GEN_THISCALL F_005606c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5606c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  if ((*(short *)((int)this + 4) == 0) && (*(short *)((int)this + 6) == 0)) {
    return 1;
  }
  if (param_1 != 0) {
    iVar2 = 0;
    if (*(short *)((int)this + 6) != 0) {
      iVar2 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xdc)));
    }
    if ((*(short *)((int)this + 4) == 0) ||
       (iVar1 = *((int *)GEN_TOP((*(int *)(*(int *)this + 0x14) + 0xe0))), iVar1 == 0)) {
      if (iVar2 == 0) {
        return 1;
      }
    }
    else if ((iVar2 == 0) || (*(ushort *)(iVar1 + 0x128) < *(ushort *)(iVar2 + 0x128))) {
      iVar2 = iVar1;
    }
    if (iVar2 == 0) {
      return 1;
    }
    if (*(ushort *)(param_1 + 0x128) < *(ushort *)(iVar2 + 0x128)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00560760 */
GEN_NOFRAME uint GEN_THISCALL F_00560760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x560760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0xffff;
  *(undefined2 *)((int)this + 10) = 0;
  return (uint)this;
}

/* ref: FUN_00560790 */
GEN_FRAME uint GEN_THISCALL F_00560790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0xd8) = *(uint *)((int)this + 0xd8) | (uint)(byte)param_1;
    return (uint)(byte)param_1;
  }
  *(uint *)((int)this + 0xd8) = *(uint *)((int)this + 0xd8) & ~(uint)(byte)param_1;
  return in_EAX;
}

/* ref: FUN_005607c0 */
GEN_FRAME byte GEN_THISCALL F_005607c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5607c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined1 *)((int)this + 0x44) = (undefined1)param_2;
  *(byte *)((int)this + 0x45) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_005607e0 */
GEN_FRAME uint GEN_THISCALL F_005607e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5607e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined4 *)((int)this + 0x38) = param_2;
  *(uint *)((int)this + 0x3c) = param_3;
  *(undefined4 *)((int)this + 0x40) = param_4;
  return param_3;
}

/* ref: FUN_00560850 */
GEN_FRAME uint GEN_THISCALL F_00560850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)((int)in_ecx + 0xe) = 0;
  return param_2;
}

/* ref: FUN_00560880 */
GEN_FRAME uint GEN_THISCALL F_00560880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((*(uint *)(in_ecx + 4) == param_2) || (*(uint *)(in_ecx + 8) == param_2)) {
    *(undefined1 *)(in_ecx + 0xd) = 1;
  }
  return param_2;
}

/* ref: FUN_005608a0 */
GEN_FRAME uint GEN_STDCALL F_005608a0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x5608a0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)param_1 - (float10)param_2)))) <=
      (float10)REFG(float, 0x10905c4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005608e0 */
GEN_FRAME uint F_005608e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5608e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00c472af(param_2,param_3,&REFG(undefined, 0x10a00bc),param_1);
  return param_2;
}

/* ref: FUN_00560910 */
GEN_FRAME uint F_00560910(unsigned int gen_a0)
{
  GEN_ENTER(0x560910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
  return 0x1379720;
}

/* ref: FUN_00560940 */
GEN_FRAME uint F_00560940(unsigned int gen_a0)
{
  GEN_ENTER(0x560940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = 10;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00a4cf70(uVar1,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00560990 */
GEN_FRAME uint GEN_THISCALL F_00560990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(ulonglong *)((int)this + 0x10) = (ulonglong)param_1 * 1000;
  *(uint *)((int)this + 8) = param_2;
  return param_2;
}

/* ref: FUN_005609b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005609b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5609b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  return;
}

/* ref: FUN_005609c0 */
GEN_NOFRAME uint GEN_THISCALL F_005609c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5609c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_005609d0 */
GEN_FRAME byte GEN_THISCALL F_005609d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5609d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
    for (iVar1 = **(int * PTR32 *)((int)this + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00560a00 */
GEN_FRAME uint GEN_THISCALL F_00560a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x560a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x14);
  uVar2 = param_3;
  uVar3 = param_4;
  if ((param_4 <= uVar1) &&
     ((uVar1 != param_4 ||
      (uVar2 = param_3, uVar3 = param_4, param_3 <= *(uint *)((int)this + 0x10))))) {
    uVar2 = *(uint *)((int)this + 0x10);
    uVar3 = uVar1;
  }
  if (uVar2 == 0 && uVar3 == 0) {
    return 0;
  }
  uVar1 = uVar2 - *(uint *)((int)this + 0x18);
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(((uVar3 - *(int *)((int)this + 0x1c)) -
                       (uint)(uVar2 < *(uint *)((int)this + 0x18))) + param_2 +
                       (uint)CARRY4(uVar1,param_1),uVar1 + param_1);
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 0)) = (int)((*(ulonglong *)(gen_frame + 0x4)) / CONCAT44(uVar3,uVar2));
  return (int)(*(ulonglong *)(gen_frame + 0x4)) * uVar2;
}

/* ref: FUN_00560a60 */
GEN_FRAME uint GEN_THISCALL F_00560a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(uint *)this = *param_1;
  if ((*param_1 & 0xf) == 9) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    *(uint *)this = *param_1 & 0xf;
    *(uint *)((int)this + 4) = param_1[1];
  }
  if ((*param_1 >> 5 & 1) != 0) {
    F_00594f30(this GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00560aa0 */
GEN_FRAME uint GEN_THISCALL F_00560aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560aa0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort * puVar5;
  byte * pbVar6;
  ushort * puVar7;
  byte * pbVar8;
  bool bVar9;
  float fVar10;
  
  uVar3 = *(uint *)param_2 & 0xf;
  if ((*param_1 & 0xf) != uVar3) {
switchD_00560ac8_caseD_9: ;
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*param_1 & 0xf)) {
  case 0: ;
  case 1: ;
    return 1;
  case 2: ;
    if (uVar3 == 0) {
      return (uint)((char)param_1[1] == '\0');
    }
    return (uint)((char)param_1[1] == *(char *)(param_2 + 4));
  case 3: ;
  case 4: ;
    if (uVar3 == 0) {
      return (uint)(param_1[1] == 0);
    }
    return (uint)(param_1[1] == *(uint *)(param_2 + 4));
  case 5: ;
    if (uVar3 == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(param_2 + 4);
    }
    bVar9 = GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[1])))) || GEN_ISNAN((float10)fVar10);
    if (bVar9 != (bVar9 || ((float10)GEN_TOD(gen_bits2f(param_1[1]))) == (float10)fVar10)) {
      return 1;
    }
    return 0;
  case 6: ;
    if (uVar3 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = *(byte * PTR32 *)(param_2 + 4);
    }
    pbVar6 = (byte *)param_1[1];
    while( true ) {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) break;
      if (bVar1 == 0) {
        return 1;
      }
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) break;
      pbVar6 = pbVar6 + 2;
      pbVar8 = pbVar8 + 2;
      if (bVar1 == 0) {
        return 1;
      }
    }
    break;
  case 7: ;
    if (uVar3 == 0) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = *(ushort * PTR32 *)(param_2 + 4);
    }
    puVar5 = (ushort *)param_1[1];
    while( true ) {
      uVar2 = *puVar5;
      bVar9 = uVar2 < *puVar7;
      if (uVar2 != *puVar7) break;
      if (uVar2 == 0) {
        return 1;
      }
      uVar2 = puVar5[1];
      bVar9 = uVar2 < puVar7[1];
      if (uVar2 != puVar7[1]) break;
      puVar5 = puVar5 + 2;
      puVar7 = puVar7 + 2;
      if (uVar2 == 0) {
        return 1;
      }
    }
    iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0);
  case 8: ;
    if (uVar3 == 0) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = *(byte * PTR32 *)(param_2 + 4);
    }
    pbVar6 = (byte *)param_1[1];
    while( true ) {
      bVar1 = *pbVar6;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) break;
      if (bVar1 == 0) {
        return 1;
      }
      bVar1 = pbVar6[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) break;
      pbVar6 = pbVar6 + 2;
      pbVar8 = pbVar8 + 2;
      if (bVar1 == 0) {
        return 1;
      }
    }
    break;
  case 9: ;
    goto switchD_00560ac8_caseD_9;
  default: ;
    return (uint)(param_1[1] == *(uint *)(param_2 + 4));
  }
  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0);
}

/* ref: FUN_00560c80 */
GEN_FRAME uint F_00560c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560c80u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar9 = (float10)*(float *)(param_3 + 4);
  fVar10 = (float10)*(float *)(param_3 + 0xc);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_2 + 8);
  fVar11 = (float10)*(float *)param_3;
  fVar12 = (float10)*(float *)(param_3 + 8);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_3 + 0x10);
  fVar8 = *(float *)(param_3 + 0x14);
  param_1[1] = (float)(fVar10 * (float10)fVar1 + fVar9 * (float10)fVar2);
  param_1[2] = (float)(fVar12 * (float10)fVar3 + fVar11 * (float10)fVar4);
  param_1[3] = (float)((float10)fVar3 * fVar10 + (float10)fVar4 * fVar9);
  param_1[4] = ((float)GEN_TOF((((float10)fVar5 * fVar12 + (float10)fVar6 * fVar11) + (float10)fVar7)));
  *param_1 = (float)(fVar12 * (float10)fVar1 + fVar11 * (float10)fVar2);
  param_1[5] = ((float)GEN_TOF(((float10)fVar8 + ((float10)fVar6 * fVar9 + (float10)fVar5 * fVar10))));
  return (uint)param_1;
}

/* ref: FUN_00560d80 */
GEN_FRAME uint F_00560d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560d80u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[2];
  fVar4 = *param_3;
  fVar5 = param_3[4];
  param_1[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)param_3[3] + (float10)param_3[1] * (float10)fVar2)
                      + (float10)param_3[5])));
  *param_1 = ((float)GEN_TOF(((float10)fVar5 +
                    ((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_00560dd0 */
GEN_FRAME byte GEN_THISCALL F_00560dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2c)) & 8;
  *(byte *)(in_ecx + 0x2c) = *(byte *)(in_ecx + 0x2c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00560df0 */
GEN_FRAME uint GEN_THISCALL F_00560df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560df0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00560e00 */
GEN_FRAME uint GEN_THISCALL F_00560e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))
                      (piVar1 GEN_EDX_ARG,(uint)(ushort)((short)(int)((float10)(int)*(short *)((int)this + 0x28)
                                                         * ((float10)GEN_TOD(gen_bits2f(piVar1[0x46])))) +
                                            (short)param_1),
                       (uint)(ushort)((short)(int)((float10)(int)*(short *)((int)this + 0x2a) *
                                                  ((float10)GEN_TOD(gen_bits2f(piVar1[0x46])))) +
                                     (short)param_2));
  }
  return uVar2;
}

/* ref: FUN_00560e80 */
GEN_FRAME byte GEN_THISCALL F_00560e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  bool bVar2;
  
  *(int *)((int)this + 0x18) = param_1;
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) | 8;
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x18) + 0xfb)));
    *pbVar1 = *pbVar1 | 1;
    *(undefined4 *)((int)this + 0x20) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa0)));
  }
  bVar2 = *(int *)((int)this + 0x18) != 0;
  *(bool *)((int)this + 0x34) = bVar2;
  return bVar2;
}

/* ref: FUN_00560ec0 */
GEN_FRAME unsigned int GEN_STDCALL F_00560ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560ec0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined4 in_EDX = 0;
  bool bVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) {
    *(byte *)(param_1 + 0x2c) =
         *(byte *)(param_1 + 0x2c) ^ ((char)param_2 * '\b' ^ *(byte *)(param_1 + 0x2c)) & 8;
    bVar2 = (char)param_2 == '\0';
    *(byte *)(iVar1 + 0xf8) = *(byte *)(iVar1 + 0xf8) & 0xfb | bVar2 * '\x04';
    *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xfb))) =
         *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xfb))) & 0xfd | bVar2 * '\x02';
    if (*(undefined * PTR32 *)(param_1 + 0xc) != (undefined *)0x0) {
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc) GEN_EDX_ARG,CONCAT31((int3)((uint)in_EDX >> 8),bVar2));
    }
  }
  return;
}

/* ref: FUN_00560f40 */
GEN_FRAME uint GEN_STDCALL F_00560f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560f40u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xb8))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00560f70 */
GEN_FRAME uint GEN_STDCALL F_00560f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560f70u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xbc))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00560fa0 */
GEN_FRAME byte GEN_THISCALL F_00560fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return 1;
}

/* ref: FUN_00560fd0 */
GEN_FRAME uint GEN_THISCALL F_00560fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x560fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xf7;
    pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xf8)));
    *pbVar1 = *pbVar1 | 4;
    pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xfb)));
    *pbVar1 = *pbVar1 | 2;
    if (*(undefined * PTR32 *)(param_1 + 0xc) != (undefined *)0x0) {
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc) GEN_EDX_FWD,1);
    }
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf4))) >> 0x14 & 0xf;
  if ((uVar2 == 3) || (uVar2 == 2)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x14))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_00561040 */
GEN_FRAME uint GEN_THISCALL F_00561040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * pbVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 8;
    pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xf8)));
    *pbVar1 = *pbVar1 & 0xfb;
    pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xfb)));
    *pbVar1 = *pbVar1 & 0xfd;
    if (*(undefined * PTR32 *)(param_1 + 0xc) != (undefined *)0x0) {
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc) GEN_EDX_FWD,0);
    }
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf4))) >> 0x14 & 0xf;
  if ((uVar2 == 3) || (uVar2 == 2)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x14))))(*(int * PTR32 *)(param_1 + 4) GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_005610b0 */
GEN_NOFRAME byte GEN_THISCALL F_005610b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5610b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) == 1;
}

/* ref: FUN_005610c0 */
GEN_FRAME byte GEN_THISCALL F_005610c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5610c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(int * PTR32 *)((int)this + 0x28) != (int *)0x0) {
    for (iVar1 = **(int * PTR32 *)((int)this + 0x28); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005610f0 */
GEN_NOFRAME byte GEN_THISCALL F_005610f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5610f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x24) != -1) {
    in_EAX = 0;
    piVar1 = ((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24)));
    while (*piVar1 != -1) {
      in_EAX = in_EAX + 1;
      piVar1 = piVar1 + 1;
      if (7 < in_EAX) {
        *(undefined4 *)((int)this + 0x24) = 0xffffffff;
        return (byte)in_EAX;
      }
    }
    *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24 + in_EAX * 4))) = *(int *)((int)this + 0x24);
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  return (byte)in_EAX;
}

/* ref: FUN_00561130 */
GEN_FRAME float10 GEN_THISCALL F_00561130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561130u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  float local_8;
  
  local_8 = 0.0;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    if (*(int *)(param_1 + 8) != 0) {
      return (float10)(int)(short)(int)*((float *)GEN_TOP((*(int *)(param_1 + 8) + 0x38)));
    }
    return (float10)0.0;
  case 1: ;
    if (*(int *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)(short)(int)*((float *)GEN_TOP((*(int *)(param_1 + 8) + 0x3c)));
    }
    break;
  case 2: ;
    if (*(int *)(param_1 + 8) != 0) {
      return (float10)*((float *)GEN_TOP((*(int *)(param_1 + 8) + 0x40)));
    }
    goto LAB_005611c7;
  case 3: ;
    if (*(int *)(param_1 + 8) != 0) {
      return (float10)*((float *)GEN_TOP((*(int *)(param_1 + 8) + 0x44)));
    }
LAB_005611c7: ;
    return ((float10)GEN_TOD(gen_bits2f(param_2)));
  default: ;
    goto switchD_00561148_caseD_4;
  case 5: ;
    if (*(int *)(param_1 + 8) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(param_1 + 8) + 0x53)));
    }
    return (float10)(float)((float10)bVar2 / (float10)*(double *)&REFG(undefined, 0x1088100));
  case 6: ;
    if (*(int *)(param_1 + 8) != 0) {
      return (float10)*((ushort *)GEN_TOP((*(int *)(param_1 + 8) + 0x7c)));
    }
    return (float10)0.0;
  case 7: ;
    if (*(int *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 8) + 0x7e)));
    }
    break;
  case 8: ;
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 == 0) || (*(short *)(iVar1 + 0x18) != 3)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 0xf0);
    }
    uVar3 = F_00560940(uVar4);
  }
  local_8 = (float)(int)uVar3;
switchD_00561148_caseD_4: ;
  return (float10)local_8;
}

/* ref: FUN_005612d0 */
GEN_FRAME uint F_005612d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5612d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005612e0 */
GEN_FRAME byte F_005612e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5612e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 == iVar1) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}

/* ref: FUN_00561310 */
GEN_FRAME uint F_00561310(unsigned int gen_a0)
{
  GEN_ENTER(0x561310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_004353c0(param_1);
  return uVar1;
}

/* ref: FUN_00561320 */
GEN_FRAME uint F_00561320(unsigned int gen_a0)
{
  GEN_ENTER(0x561320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_004353d0(param_1);
  return uVar1;
}

/* ref: FUN_00561330 */
GEN_FRAME uint F_00561330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004353e0(param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentBase::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00561340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00561390 */
GEN_NOFRAME uint F_00561390(void)
{
  GEN_ENTER(0x561390u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379860);
}

/* ref: FUN_005613a0 */
GEN_NOFRAME uint GEN_THISCALL F_005613a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5613a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0x60) & 1) != 0) && ((*(byte *)(in_ecx + 0x60) & 4) != 0)) &&
     (*(char *)(in_ecx + 0x1c) == '\x01')) {
    return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0xf)));
  }
  return 0;
}

/* ref: FUN_005613c0 */
GEN_NOFRAME byte GEN_THISCALL F_005613c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5613c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined1 uVar1;
  
  if ((*(uint *)(in_ecx + 100) & 0x20000) == 0) {
    if ((*(int *)(in_ecx + 0x70) != 0) &&
       ((*((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0x84))) >> 0x15 & 1) != 0)) {
      if (((*(byte *)(in_ecx + 0x60) & 1) == 0) ||
         (((*(byte *)(in_ecx + 0x60) & 4) == 0 || (*(char *)(in_ecx + 0x1c) != '\x01')))) {
        uVar1 = 0;
      }
      else {
        uVar1 = *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0xf)));
      }
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 1: ;
      case 3: ;
      case 4: ;
      case 0xb: ;
      case 0x11: ;
        goto switchD_0056140a_caseD_1;
      }
    }
    return 0;
  }
switchD_0056140a_caseD_1: ;
  return 1;
}

/* ref: FUN_00561440 */
GEN_NOFRAME byte GEN_THISCALL F_00561440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char cVar1;
  
  if ((*(uint *)(in_ecx + 100) & 0x40000) != 0) {
    return 1;
  }
  if ((*(int *)(in_ecx + 0x70) != 0) &&
     ((*((uint *)GEN_TOP((*(int *)(in_ecx + 0x70) + 0x84))) >> 0x15 & 1) != 0)) {
    if (((*(byte *)(in_ecx + 0x60) & 1) == 0) ||
       (((*(byte *)(in_ecx + 0x60) & 4) == 0 || (*(char *)(in_ecx + 0x1c) != '\x01')))) {
      cVar1 = '\0';
    }
    else {
      cVar1 = *((char *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0xf)));
    }
    if (cVar1 == '\a') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00561490 */
GEN_FRAME uint GEN_THISCALL F_00561490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005614a0 */
GEN_FRAME uint GEN_THISCALL F_005614a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5614a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  fVar3 = 0.0;
  if ((this != (undefined *)0x0) && (iVar1 = *(int *)((int)this + 0x70), iVar1 != 0)) {
    fVar2 = *(float *)(iVar1 + 0x38);
    fVar3 = *(float *)(iVar1 + 0x3c);
  }
  *param_1 = (short)(int)fVar2;
  *param_2 = (short)(int)fVar3;
  return (uint)param_2;
}

/* ref: Component::GUI2::AtkComponentBase::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_005614e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5614e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(byte)param_1 << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000;
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(byte)param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
    }
  }
  return;
}

/* ref: FUN_00561530 */
GEN_FRAME uint GEN_THISCALL F_00561530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00561550 */
GEN_FRAME uint GEN_THISCALL F_00561550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00561570 */
GEN_FRAME uint GEN_THISCALL F_00561570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  if ((uVar2 == 0) || (*(short *)(uVar2 + 0x18) != 2)) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    if ((*(int *)(uVar2 + 0x8c) != 0) &&
       (puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar2 + 0x8c) + 8))) +
                         (uint)*(ushort *)(uVar2 + 0x90) * 0xc))), puVar1 != (uint *)0x0)) {
      uVar3 = *puVar1;
    }
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_005615c0 */
GEN_FRAME byte GEN_THISCALL F_005615c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5615c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = param_2;
    do {
      if (*(int *)(in_ecx + 0x6c) == iVar1) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 8);
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_005615f0 */
GEN_NOFRAME uint GEN_THISCALL F_005615f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5615f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(REFG(int, 0x1379860) + 0x18);
  if (*(short *)(uVar1 + 0xc68) == 0) {
    uVar2 = *(uint *)(uVar1 + 0xc58);
  }
  else {
    uVar2 = *((uint *)GEN_TOP((uVar1 + 0x50 + *(short *)(uVar1 + 0xc68) * 0xc)));
  }
  if (uVar2 != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_FWD);
    if (uVar2 != uVar1) {
      while (*(uint *)((int)this + 0x70) != uVar2) {
        uVar2 = *(uint *)(uVar2 + 8);
        if (uVar2 == 0) {
          return 0;
        }
      }
    }
    return 1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: Component::GUI2::AtkComponentBase::vf16 */
GEN_FRAME byte GEN_THISCALL F_00561650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = param_1;
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    pcVar1 = (char *)(uint)(byte)*(undefined *)(param_1 + 8);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  return (byte)pcVar1;
}

/* ref: FUN_00561680 */
GEN_FRAME uint F_00561680(unsigned int gen_a0)
{
  GEN_ENTER(0x561680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  char cVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar3 = (int *)0x0;
  uVar1 = param_1;
  do {
    if (uVar1 == 0) {
      return (uint)piVar3;
    }
    if (*(ushort *)(uVar1 + 0x18) < 1000) {
      piVar3 = (int *)0x0;
LAB_005616c2: ;
      if ((((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 8)) &&
          (piVar3 = *(int * PTR32 *)(uVar1 + 0x98), piVar3 != (int *)0x0)) &&
         (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3 GEN_EDX_ARG), uVar4 == uVar1)) goto LAB_005616e4;
    }
    else {
      piVar3 = *(int * PTR32 *)(uVar1 + 0x8c);
      if (piVar3 == (int *)0x0) goto LAB_005616c2;
      if ((((*(byte *)(piVar3 + 0x18) & 1) == 0) || ((*(byte *)(piVar3 + 0x18) & 4) == 0)) ||
         ((char)piVar3[7] != '\x01')) {
        cVar2 = '\0';
      }
      else {
        cVar2 = *(char *)(piVar3[3] + 0xf);
      }
      if ((((cVar2 == '\x01') || (cVar2 == '\x03')) || (cVar2 == '\x04')) &&
         ((((piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG))), piVar5 != (int *)0x0 &&
            ((*(byte *)(piVar5 + 0x18) & 1) != 0)) && ((*(byte *)(piVar5 + 0x18) & 4) != 0)) &&
          (((char)piVar5[7] == '\x01' && (*(char *)(piVar5[3] + 0xf) == '\n')))))) {
        piVar3 = piVar5;
      }
LAB_005616e4: ;
      if ((char)piVar3[0x1e] != '\0') {
        return (uint)piVar3;
      }
    }
    uVar1 = *(uint *)(uVar1 + 8);
  } while( true );
}

/* ref: FUN_00561740 */
GEN_FRAME uint GEN_THISCALL F_00561740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x561740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  
  *(undefined4 *)((int)this + 0x78) = *param_1;
  *(undefined4 *)((int)this + 0x7c) = param_1[1];
  *(undefined1 *)((int)this + 0x80) = *(undefined1 *)(param_1 + 2);
  if (param_2 != 0) {
    iVar1 = *(int *)((int)this + 0x70);
    if ((param_2 & 1) != 0) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x20;
    }
    if ((param_2 & 2) != 0) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x40;
    }
    if ((param_2 & 4) != 0) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 8;
    }
    if ((param_2 & 8) != 0) {
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x10;
    }
  }
  return param_2;
}

/* ref: FUN_005617a0 */
GEN_FRAME uint GEN_THISCALL F_005617a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5617a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  
  if (param_2 == 4) {
    cVar1 = *(char *)(in_ecx + 0x7f);
  }
  else {
    if (param_2 - 5U != 0) {
      return param_2 - 5U & 0xffffff00;
    }
    cVar1 = *(char *)(in_ecx + 0x7e);
  }
  if ((cVar1 != 0) && (cVar1 != 0xff)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005617e0 */
GEN_FRAME byte GEN_THISCALL F_005617e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5617e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    *(byte *)((int)this + 0x7b) = (byte)param_2;
    return (byte)param_2;
  case 1: ;
    *(byte *)((int)this + 0x7c) = (byte)param_2;
    return (byte)param_1;
  case 2: ;
    *(byte *)((int)this + 0x79) = (byte)param_2;
    return (byte)param_2;
  case 3: ;
    *(byte *)((int)this + 0x7a) = (byte)param_2;
  }
  return (byte)param_1;
}

/* ref: FUN_00561830 */
GEN_FRAME uint GEN_THISCALL F_00561830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x6c);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x53) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00561860 */
GEN_FRAME uint GEN_THISCALL F_00561860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xb4);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^
         ((uint)(byte)param_1 << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_005618b0 */
GEN_FRAME byte GEN_THISCALL F_005618b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5618b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  
  bVar2 = (byte)param_2;
  if (*(byte *)(in_ecx + 0x97) != (byte)param_2) {
    *(byte *)(in_ecx + 0x97) = (byte)param_2;
    iVar1 = *(int *)(in_ecx + 0xac);
    bVar2 = (-((byte)param_2 != 0) & 0xceU) + 100;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x5a) = bVar2;
      *(byte *)(iVar1 + 0x5b) = bVar2;
      *(byte *)(iVar1 + 0x5c) = bVar2;
    }
  }
  return bVar2;
}

/* ref: FUN_005618f0 */
GEN_NOFRAME uint GEN_THISCALL F_005618f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5618f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x84) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0x88) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  *(undefined4 *)(in_ecx + 0x90) = 0;
  *(undefined4 *)(in_ecx + 0x94) = 0;
  *(undefined4 *)(in_ecx + 0x98) = 0;
  *(undefined4 *)(in_ecx + 0x9c) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = 0;
  *(undefined4 *)(in_ecx + 0xa4) = 0;
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  return 0;
}

/* ref: FUN_00561950 */
GEN_NOFRAME uint GEN_THISCALL F_00561950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
  }
  uVar2 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x8c) != (code *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)((int)this + 0x8c))(this,*(undefined4 *)((int)this + 0x90));
  }
  return uVar2;
}

/* ref: FUN_00561990 */
GEN_FRAME unsigned int GEN_THISCALL F_00561990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0xa8) == 0) && ((*(int *)&gen_a1) != 0)) {
    *(int *)((int)this + 0x68) = (*(int *)&gen_a1);
    *(uint *)((*(int *)&gen_a1) + 0x84) = *(uint *)((*(int *)&gen_a1) + 0x84) | 0x4000000;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_FWD,1);
    if (*(short *)((*(int *)&gen_a1) + 0x18) == 8) {
      *(undefined * PTR32 *)((*(int *)&gen_a1) + 0x98) = this;
    }
  }
  return;
}

/* ref: FUN_005619d0 */
GEN_FRAME uint GEN_THISCALL F_005619d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5619d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = param_2;
  in_ecx[3] = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[2] = 0;
  in_ecx[1] = 0;
  in_ecx[4] = uVar1;
  return 0;
}

/* ref: FUN_00561a00 */
GEN_FRAME uint GEN_THISCALL F_00561a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x561a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  *param_1 = param_4;
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_3;
}

/* ref: FUN_00561a50 */
GEN_NOFRAME uint GEN_THISCALL F_00561a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561a50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*(float *)(in_ecx + 0xb0)) || GEN_ISNAN(REFG(float, 0x1087f04));
  if (((bVar1 != (bVar1 || *(float *)(in_ecx + 0xb0) == REFG(float, 0x1087f04))) &&
      (bVar1 = GEN_ISNAN(*(float *)(in_ecx + 0xc4)) || GEN_ISNAN(REFG(float, 0x1087f04)),
      bVar1 != (bVar1 || *(float *)(in_ecx + 0xc4) == REFG(float, 0x1087f04)))) &&
     (bVar1 = GEN_ISNAN(*(float *)(in_ecx + 0xd8)) || GEN_ISNAN(REFG(float, 0x1087f04)),
     bVar1 != (bVar1 || *(float *)(in_ecx + 0xd8) == REFG(float, 0x1087f04)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00561aa0 */
GEN_FRAME uint GEN_THISCALL F_00561aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0x84);
  uVar4 = param_1 >> 0x10 & 0xff;
  uVar3 = (ushort)(param_1 >> 8) & 0xff;
  uVar2 = (ushort)param_1 & 0xff;
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x54) = uVar2 - 0xff;
    *(ushort *)(iVar1 + 0x56) = uVar3 - 0xff;
    *(short *)(iVar1 + 0x58) = (short)uVar4 - 0xff;
  }
  iVar1 = *(int *)((int)this + 0x8c);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x54) = uVar2 - 0xa0;
    *(ushort *)(iVar1 + 0x56) = uVar3 - 0xa0;
    *(short *)(iVar1 + 0x58) = (short)uVar4 - 0xa0;
  }
  iVar1 = *(int *)((int)this + 0x90);
  if (iVar1 != 0) {
    uVar4 = uVar4 - 0xa0;
    *(ushort *)(iVar1 + 0x54) = uVar2 - 0xa0;
    *(ushort *)(iVar1 + 0x56) = uVar3 - 0xa0;
    *(short *)(iVar1 + 0x58) = (short)uVar4;
  }
  return uVar4;
}

/* ref: FUN_00561b40 */
GEN_FRAME unsigned int GEN_THISCALL F_00561b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x88);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x54) = ((ushort)param_1 & 0xff) - 0xff;
    *(ushort *)(iVar1 + 0x56) = ((ushort)((uint)param_1 >> 8) & 0xff) - 0xff;
    *(ushort *)(iVar1 + 0x58) = ((ushort)((uint)param_1 >> 0x10) & 0xff) - 0xff;
  }
  return;
}

/* ref: FUN_00561b90 */
GEN_FRAME uint GEN_STDCALL F_00561b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561b90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x54) = (ushort)param_1 & 0xff;
    in_EAX = param_1 >> 0x10 & 0xff;
    *(ushort *)(param_2 + 0x56) = (ushort)(param_1 >> 8) & 0xff;
    *(short *)(param_2 + 0x58) = (short)in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00561bd0 */
GEN_FRAME ushort GEN_THISCALL F_00561bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561bd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  ushort local_8;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 == *(int *)(param_1 + 0xdc) || iVar1 - *(int *)(param_1 + 0xdc) < 0) {
    fVar2 = (float10)0;
  }
  else {
    fVar2 = (float10)(int)(param_2 - *(int *)(param_1 + 0xdc)) /
            ((float10)GEN_TOD((iVar1 - *(int *)(param_1 + 0xdc))));
  }
  local_8 = (ushort)(int)TRUNC((float10)(int)*(short *)(param_1 + 0xee) * (float10)(float)fVar2 +
                               ((float10)GEN_TOD((*(short *)(param_1 + 0xec) * 2))));
  return local_8;
}

/* ref: FUN_00561c50 */
GEN_FRAME uint GEN_THISCALL F_00561c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561c50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((int)param_2 <= *(int *)(in_ecx + 0x9c)) {
    *(uint *)(in_ecx + 0x98) = param_2;
  }
  return param_2;
}

/* ref: FUN_00561c70 */
GEN_FRAME uint GEN_THISCALL F_00561c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(in_ecx + 0x98) <= (int)param_2) {
    *(uint *)(in_ecx + 0x9c) = param_2;
  }
  return param_2;
}

/* ref: FUN_00561c90 */
GEN_FRAME ushort GEN_THISCALL F_00561c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  ushort local_8;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if (iVar1 == *(int *)(param_1 + 0x98) || iVar1 - *(int *)(param_1 + 0x98) < 0) {
    fVar2 = (float10)0;
  }
  else {
    fVar2 = (float10)(int)(param_2 - *(int *)(param_1 + 0x98)) /
            ((float10)GEN_TOD((iVar1 - *(int *)(param_1 + 0x98))));
  }
  local_8 = (ushort)(int)TRUNC(((float10)GEN_TOD((((int)*(short *)(param_1 + 0xac) -
                                         (int)*(short *)(param_1 + 0xaa)) -
                                        (int)*(short *)(param_1 + 0xa8)))) * (float10)(float)fVar2 +
                               (float10)(int)*(short *)(param_1 + 0xa8));
  return local_8;
}

/* ref: Component::GUI2::AtkComponentButton::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00561d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentButton::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00561d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561d70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  if ((*(undefined * PTR32 *)&gen_args[0])[0x86] != (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0))) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
    (*(undefined * PTR32 *)&gen_args[0])[0x86] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(byte)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) << 0x1a ^ *(uint *)(iVar1 + 0x84)) & 0x4000000;
    }
  }
  return;
}

/* ref: FUN_00561db0 */
GEN_NOFRAME uint GEN_THISCALL F_00561db0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x104) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x104) + 0xf0)));
}

/* ref: FUN_00561dd0 */
GEN_FRAME uint GEN_THISCALL F_00561dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x104);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 0xfc) =
         *(byte *)(uVar1 + 0xfc) ^ (*(byte *)(uVar1 + 0xfc) ^ (byte)param_2) & 0xf;
  }
  return uVar1;
}

/* ref: FUN_00561e00 */
GEN_FRAME uint GEN_THISCALL F_00561e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x104);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x90) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00561e40 */
GEN_FRAME uint GEN_THISCALL F_00561e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x108);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x50) =
         (*(uint *)(uVar1 + 0x50) ^ param_1) & 0xffffff ^ *(uint *)(uVar1 + 0x50);
  }
  return uVar1;
}

/* ref: FUN_00561e70 */
GEN_FRAME uint GEN_THISCALL F_00561e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x104);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^
         ((uint)(byte)param_1 << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_00561ec0 */
GEN_FRAME byte GEN_THISCALL F_00561ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (2 < param_2) {
    return 0;
  }
  return *(byte *)(param_2 + 0x8d + in_ecx);
}

/* ref: FUN_00561ee0 */
GEN_FRAME uint GEN_THISCALL F_00561ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x561ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 3) {
    *(undefined1 *)(param_1 + 0x8d + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00561f00 */
GEN_FRAME uint GEN_THISCALL F_00561f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)((int)this + 0x8a) = (char)param_1;
  if ((char)param_1 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00561f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  this[0x84] = (undefined1)0x1;
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00561f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x561f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00561fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x561fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int in_EAX = 0;
  uint3 uVar3;
  int iVar1;
  int iVar2;
  
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000
      ;
    }
    in_EAX = *(int *)(this + 0x70);
    if (in_EAX != 0) {
      *(uint *)(in_EAX + 0x84) =
           *(uint *)(in_EAX + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(in_EAX + 0x84)) & 0x2000000;
    }
  }
  if (*(int *)(this + 0x88) != 0) {
    uVar3 = (uint3)((uint)in_EAX >> 8);
    if ((this[0x114] == (undefined1)0x0) || ((char)param_1 == '\0')) {
      iVar1 = (uint)uVar3 << 8;
    }
    else {
      iVar1 = CONCAT31(uVar3,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x28))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_FWD,iVar1);
  }
  iVar1 = *(int *)(this + 0x90);
  if (iVar1 != 0) {
    if (((*(byte *)(iVar1 + 0x87) & 1) == 0) || ((char)param_1 == '\0')) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ (iVar2 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
  }
  return;
}

/* ref: FUN_005620a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005620a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5620a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  byte bVar1;
  
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 4))) = *(undefined1 *)((*(int *)&gen_args[2]) + 6);
  bVar1 = *(byte *)((*(int *)&gen_args[2]) + 7);
  *((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x11))) = bVar1;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11f))) != '\0') && (((*(int *)&gen_args[4]) == 0x1f || ((*(int *)&gen_args[4]) == 0x20)))) {
    *((byte *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x11))) = bVar1 | 8;
  }
  (*(undefined4 * PTR32 *)&gen_args[1])[2] = ((int)(*(uint *)&gen_args[3]) < 0) - 1 & (*(uint *)&gen_args[3]);
  *((undefined2 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 3))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc)));
  *((undefined2 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0xe))) = *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84)));
  return 0;
}

/* ref: FUN_00562110 */
GEN_FRAME uint GEN_THISCALL F_00562110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0x119) = (char)param_1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00562160 */
GEN_FRAME uint GEN_THISCALL F_00562160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0xb8) != param_1) {
    *(uint *)((int)this + 0xb8) = param_1;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf20 */
GEN_FRAME uint GEN_THISCALL F_00562190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(int *)(in_ecx + 0x98) != 0) && (-1 < param_2)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x98) + param_2 * 8)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf21 */
GEN_FRAME uint GEN_THISCALL F_005621c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5621c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD)));
  if (param_1 < pcVar1) {
    pcVar1 = ((char *)GEN_TOP((*(int *)(this + 0x98) + 5 + (int)((int)(uintptr_t)param_1) * 8)));
    if (*pcVar1 != (char)param_2) {
      *pcVar1 = (char)param_2;
      this[0x11d] = (undefined1)0x1;
    }
  }
  return (uint)pcVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf22 */
GEN_FRAME byte GEN_THISCALL F_00562200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
  if (uVar1 <= param_1) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(this + 0x98) + 5 + param_1 * 8)));
}

/* ref: FUN_00562230 */
GEN_FRAME uint GEN_THISCALL F_00562230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x4c))(param_2 GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,(uint)*(byte *)(param_2 + 0x22));
      return uVar1;
    }
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,1);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf23 */
GEN_FRAME unsigned int GEN_THISCALL F_00562280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
    if (param_1 < uVar2) {
      pcVar1 = ((char *)GEN_TOP((*(int *)(this + 0x98) + 4 + param_1 * 8)));
      if (*pcVar1 != (char)param_2) {
        *pcVar1 = (char)param_2;
        this[0x11d] = (undefined1)0x1;
      }
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentList::vf24 */
GEN_FRAME byte GEN_THISCALL F_005622c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5622c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
  if (uVar1 <= param_1) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(this + 0x98) + 4 + param_1 * 8)));
}

/* ref: FUN_005622f0 */
GEN_NOFRAME byte GEN_THISCALL F_005622f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5622f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xc9)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf26 */
GEN_FRAME byte GEN_THISCALL F_00562310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((((*(int *)&gen_a1) < *(int *)(this + 0xac)) &&
      ((int)((uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0)) <= (*(int *)&gen_a1))) &&
     ((*(int *)&gen_a1) <=
      (int)(((int)*(short *)(this + 0xf8) + (uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0))
           - (uint)((char)param_2 != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf28 */
GEN_FRAME unsigned int GEN_THISCALL F_00562360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(ushort *)(this + 0xee);
  iVar2 = *(int *)(this + 0xb0);
  iVar3 = (int)*(short *)(this + 0xf8) + (uint)uVar1;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD,iVar2 * (uint)uVar1 + iVar4,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 0;
}

/* ref: FUN_005623b0 */
GEN_FRAME uint GEN_THISCALL F_005623b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5623b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
  if (param_1 < (int)uVar2) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,param_1)));
    if ((piVar3 == (int *)0x0) ||
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3 GEN_EDX_ARG), (char)uVar2 == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)*(byte *)(piVar3 + 0x22);
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,uVar2);
    if (*(int *)((int)this + 0xc0) != param_1) {
      if ((*(int *)((int)this + 0xd8) < 0) &&
         ((*(char *)((int)this + 0x11f) != '\0' || (uVar2 = F_005615f0(this GEN_EDX_ARG), (char)uVar2 != '\0')
          ))) {
        *(int *)((int)this + 0xd8) = param_1;
      }
      iVar1 = *(int *)((int)this + 0xc0);
      *(int *)((int)this + 0xc0) = param_1;
      if (-1 < iVar1) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0x4c))))(*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG);
        if ((char)uVar2 == '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,iVar1,0);
        }
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,iVar1,0);
        if ((char)uVar2 != '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG,iVar1,0,1);
        }
      }
      uVar2 = *(uint *)((int)this + 0xc0);
      if (-1 < (int)uVar2) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG,uVar2,0,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005624a0 */
GEN_FRAME uint GEN_THISCALL F_005624a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5624a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 200) != param_2) {
    *(uint *)(in_ecx + 200) = param_2;
  }
  return param_2;
}

/* ref: FUN_005624c0 */
GEN_FRAME byte GEN_THISCALL F_005624c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5624c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 0x126) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x127) = (undefined1)param_2;
  *(byte *)((int)this + 0x128) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_005624f0 */
GEN_FRAME unsigned int GEN_THISCALL F_005624f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5624f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xa4) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xa4) + 0x28))))(*(int * PTR32 *)((int)this + 0xa4) GEN_EDX_FWD)));
    *puVar1 = param_3;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xa4) + 0x28))))(*(int * PTR32 *)((int)this + 0xa4) GEN_EDX_ARG);
    *(undefined4 *)(uVar2 + 4) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x14))) = *(undefined4 *)((int)this + 0xe4);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentList::vf35 */
GEN_NOFRAME uint GEN_THISCALL F_00562540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x562540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  if ((*(int *)(this + 0x98) != 0) && (-1 < *(int *)(this + 0xc0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x98) + *(int *)(this + 0xc0) * 8))) + 0x38))))
                      (*((undefined4 *)GEN_TOP((*(int *)(this + 0x98) + *(int *)(this + 0xc0) * 8))),param_1,
                       param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_00562580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x562580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x98) != 0) && (iVar1 = *(int *)(this + 0xcc), -1 < iVar1)) &&
     (iVar1 < *(int *)(this + 0xac))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x98) + iVar1 * 8))) + 0x3c))))
                      (*((undefined4 *)GEN_TOP((*(int *)(this + 0x98) + iVar1 * 8))),param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_005625c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5625c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  if (*(int *)(this + 0x1dc) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x38))))
                    (*(int * PTR32 *)(this + 0x1dc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: FUN_005625e0 */
GEN_FRAME uint GEN_THISCALL F_005625e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5625e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(ushort *)(in_ecx + 0x20c) <= (ushort)param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x1e8) + (uint)(ushort)param_2 * 4)));
}

/* ref: FUN_00562610 */
GEN_FRAME uint GEN_THISCALL F_00562610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(int *)((int)this + 0x104) != 0) && (*(int *)((int)this + 0x1cc) != 0)) {
    ((code *)*(gen_code32 *)((int)this + 0x1d0))(*(int *)((int)this + 0x1cc),param_1,(int)this + 0x14c,this);
    if (*(int *)((int)this + 0x104) != 0) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x104) + 0xf0)));
    }
  }
  return 0;
}

/* ref: FUN_00562660 */
GEN_FRAME uint GEN_THISCALL F_00562660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0x200);
  uVar1 = *(ushort *)((int)this + 0x202);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00562690 */
GEN_FRAME uint GEN_THISCALL F_00562690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 0x204);
  uVar1 = *(ushort *)((int)this + 0x206);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005626c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005626c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5626c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint * _Dst;
  
  if ((byte)param_2 < 0x21) {
    _Dst = (uint *)((int)this + 0x14c);
    F_00c48350(_Dst,0,0x80);
    if ((byte)param_2 != 0) {
      param_2 = (uint)(byte)param_2;
      piVar3 = (int *)(param_1 + 4);
      do {
        if (piVar3[1] == 0) {
          iVar2 = *piVar3;
          if ((((iVar2 == 0) || (uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_ARG,iVar2), uVar1 == 0))
              || (*(ushort *)(uVar1 + 0x18) < 1000)) || (*(int *)(uVar1 + 0x8c) == 0)) {
            uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_ARG,piVar3[-1]);
            *_Dst = uVar1;
          }
          else {
            uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_ARG,iVar2);
            if ((uVar1 == 0) || (*(ushort *)(uVar1 + 0x18) < 1000)) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(uVar1 + 0x8c);
            }
            uVar1 = F_0055d920((undefined *)(iVar2 + 4) GEN_EDX_ARG,piVar3[-1]);
            *_Dst = uVar1;
          }
        }
        else {
          *_Dst = piVar3[1];
        }
        _Dst = _Dst + 1;
        piVar3 = piVar3 + 3;
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
  }
  return;
}

/* ref: FUN_005627b0 */
GEN_NOFRAME uint GEN_THISCALL F_005627b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5627b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)((int)this + 0x220) & 4) == 0) {
    iVar2 = *(int *)((int)this + 0x1e0);
    uVar3 = 0;
    if (iVar2 != 0) {
      if ((*(int *)(iVar2 + 0x8c) != 0) &&
         (puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 0x8c) + 8))) +
                           (uint)*(ushort *)(iVar2 + 0x90) * 0xc))), puVar1 != (uint *)0x0)) {
        uVar3 = *puVar1;
      }
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_005627f0 */
GEN_FRAME uint GEN_THISCALL F_005627f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5627f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  short sVar1;
  
  *param_1 = (float)(int)*(short *)((int)this + 0xec);
  sVar1 = *(short *)((int)this + 0xee);
  *param_2 = (float)(int)sVar1;
  return (int)sVar1;
}

/* ref: FUN_00562830 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00562830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: FUN_00562840 */
GEN_NOFRAME byte GEN_THISCALL F_00562840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00562850 */
GEN_NOFRAME uint GEN_THISCALL F_00562850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0xf0) = *(byte *)(in_ecx + 0xf0) | 1;
  return REFG(int, 0x1379860) + 0x40;
}

/* ref: FUN_00562860 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00562860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0xf0) = *(byte *)(in_ecx + 0xf0) & 0xfe;
  return;
}

/* ref: FUN_00562870 */
GEN_FRAME uint GEN_THISCALL F_00562870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00562880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf35 */
GEN_NOFRAME uint GEN_THISCALL F_005628d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5628d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  if (*(int *)(this + 0x140) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x140) + 0x20))) + 0x38))))
                      (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x140) + 0x20))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_005628f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5628f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD,*(undefined4 *)(this + 0xcc))));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf26 */
GEN_FRAME byte GEN_THISCALL F_00562920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(int *)(this + 0xb0) <= (*(int *)&gen_a1)) &&
     ((*(int *)&gen_a1) <= (int)(*(int *)(this + 0x164) - (uint)((char)param_2 != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00562950 */
GEN_FRAME uint F_00562950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x38);
    fVar2 = *(float *)(param_1 + 0x3c);
  }
  *param_2 = (short)(int)fVar1;
  *param_3 = (short)(int)fVar2;
  return (uint)param_3;
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf10 */
GEN_FRAME uint GEN_THISCALL F_00562980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000
      ;
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
    }
  }
  iVar1 = *(int *)(this + 0x84);
  if (((iVar1 != 0) && (999 < *(ushort *)(iVar1 + 0x18))) && (*(int *)(iVar1 + 0x8c) != 0)) {
    if ((iVar1 == 0) || (*(ushort *)(iVar1 + 0x18) < 1000)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int * PTR32 *)(iVar1 + 0x8c);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_FWD,param_1);
  }
  uVar3 = *(uint *)(this + 0x8c);
  if (((uVar3 != 0) && (999 < *(ushort *)(uVar3 + 0x18))) && (*(int *)(uVar3 + 0x8c) != 0)) {
    if ((uVar3 == 0) || (*(ushort *)(uVar3 + 0x18) < 1000)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int * PTR32 *)(uVar3 + 0x8c);
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,param_1);
  }
  if (*(int *)(this + 0x94) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x28))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG,param_1);
  }
  if (*(int *)(this + 0x98) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x28))))(*(int * PTR32 *)(this + 0x94) GEN_EDX_ARG,param_1);
  }
  return uVar3;
}

/* ref: FUN_00562a80 */
GEN_FRAME uint GEN_THISCALL F_00562a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort uVar2;
  uint in_EAX = 0;
  uint uVar3;
  ushort local_c;
  
  iVar1 = *(int *)((int)this + 0x9c);
  if (iVar1 != 0) {
    uVar2 = *(ushort *)((int)this + 0xb0);
    if (*(int *)((int)this + 0xb4) < (int)(uint)*(ushort *)((int)this + 0xc6)) {
      local_c = (ushort)(int)TRUNC((float10)((float)GEN_TOF(((float10)*(int *)((int)this + 0xb0) /
                                                   (float10)*(int *)((int)this + 0xa8)))) *
                                   (float10)*(ushort *)((int)this + 0xc6));
      uVar2 = local_c;
    }
    if (*(short *)(iVar1 + 0x18) == 3) {
      uVar3 = (uint)TRUNC((float10)uVar2 * (float10)*(float *)((int)this + 0xa4));
      local_c = (ushort)uVar3;
      if (*(char *)((int)this + 200) != '\0') {
        uVar3 = -(uVar3 & 0xffff);
        *(undefined2 *)(iVar1 + 0x10c) = 0;
        *(short *)(iVar1 + 0x10e) = (short)uVar3;
        return uVar3;
      }
      *(ushort *)(iVar1 + 0x10c) = -local_c;
      *(undefined2 *)(iVar1 + 0x10e) = 0;
      return 0;
    }
    if (*(char *)((int)this + 200) != '\0') {
      uVar3 = F_00559f40(iVar1 GEN_EDX_FWD,(uint)(ushort)(*(short *)((int)this + 0xc4) - uVar2));
      return uVar3;
    }
    in_EAX = F_00559eb0(iVar1 GEN_EDX_ARG,(uint)(ushort)(*(short *)((int)this + 0xc4) - uVar2));
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00562b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf10 */
GEN_FRAME uint GEN_THISCALL F_00562be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x28))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_FWD,param_1);
  if (((char)param_1 == '\0') && (this[0x90] != (undefined1)0x0)) {
    *(undefined2 *)(this + 0x90) = 0x100;
  }
  return uVar1;
}

/* ref: FUN_00562c40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00562c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x88) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00562c60 */
GEN_NOFRAME uint GEN_THISCALL F_00562c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xc0)));
  }
  return 0xffffffff;
}

/* ref: FUN_00562c80 */
GEN_NOFRAME uint GEN_THISCALL F_00562c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return (int)*((short *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xf6)));
  }
  return 0;
}

/* ref: FUN_00562ca0 */
GEN_FRAME uint GEN_THISCALL F_00562ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x88));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    *(undefined4 *)(uVar1 + 0x90) = param_1;
  }
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x8c));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    *(undefined4 *)(uVar1 + 0x90) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00562d00 */
GEN_FRAME uint GEN_THISCALL F_00562d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + param_1 * 4 + 0x88));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^ ((param_2 & 0xff) << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((char)param_2 == '\0') << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentWindow::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00562d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x562d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    if ((*(int *)(this + 0x84) != 0) && ((*(int *)&gen_a2) == 2)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 100))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_FWD);
    }
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
  }
  return;
}

/* ref: FUN_00562da0 */
GEN_NOFRAME ushort GEN_THISCALL F_00562da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x88));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    return (ushort)*(byte *)(uVar1 + 0xfd);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentWindow::vf21 */
GEN_FRAME uint GEN_THISCALL F_00562e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x84) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentIconText::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00562e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00562e60 */
GEN_FRAME uint GEN_THISCALL F_00562e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x8c);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x90) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00562e80 */
GEN_FRAME uint GEN_THISCALL F_00562e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x8c);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x94) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00562ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00562ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
  }
  uVar2 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x90) != (code *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)((int)this + 0x90))(this,*(undefined4 *)((int)this + 0x94));
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentIconText::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00562ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x562ee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  if ((*(undefined * PTR32 *)&gen_args[0])[0xa1] != (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0))) {
    iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
    (*(undefined * PTR32 *)&gen_args[0])[0xa1] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(byte)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) << 0x1a ^ *(uint *)(iVar1 + 0x84)) & 0x4000000;
    }
  }
  return;
}

/* ref: FUN_00562f50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00562f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x88) & 1) == 0) &&
       ((fVar1 = *(float *)(iVar2 + 0x38), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0) ||
        (fVar1 = *(float *)(iVar2 + 0x3c), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))))) {
      *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 1;
    }
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  return;
}

/* ref: FUN_00562fa0 */
GEN_NOFRAME uint GEN_THISCALL F_00562fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562fa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x6c) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x6c) + 0x1c))), iVar1 != 0)) {
    return (uint)*(ushort *)(iVar1 + 0x20);
  }
  return 0;
}

/* ref: FUN_00562fe0 */
GEN_NOFRAME uint GEN_THISCALL F_00562fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x26) = *(byte *)(in_ecx + 0x26) | 8;
  return REFG(int, 0x1379860) + 0x40;
}

/* ref: FUN_00562ff0 */
GEN_NOFRAME uint GEN_THISCALL F_00562ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x562ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xa4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0x84)));
  }
  return 0xffffffff;
}

/* ref: FUN_00563030 */
GEN_NOFRAME uint GEN_THISCALL F_00563030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x563030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0xa4) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0xbc))), iVar1 != 0)) {
    return *(uint *)(iVar1 + 0xf0);
  }
  return 0;
}

/* ref: FUN_00563050 */
GEN_FRAME uint GEN_THISCALL F_00563050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ecx + 0xa4);
  if ((char)param_2 == '\0') {
    if (*(char *)(uVar2 + 0x97) != '\x01') {
      *(undefined1 *)(uVar2 + 0x97) = 1;
      uVar2 = *(uint *)(uVar2 + 0xac);
      if (uVar2 != 0) {
        *(undefined2 *)(uVar2 + 0x5a) = 0x3232;
        *(undefined1 *)(uVar2 + 0x5c) = 0x32;
      }
    }
  }
  else if (*(char *)(uVar2 + 0x97) != '\0') {
    *(undefined1 *)(uVar2 + 0x97) = 0;
    uVar1 = *(uint *)(uVar2 + 0xac);
    uVar2 = 0;
    if (uVar1 != 0) {
      *(undefined2 *)(uVar1 + 0x5a) = 0x6464;
      *(undefined1 *)(uVar1 + 0x5c) = 100;
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_005630c0 */
GEN_FRAME unsigned int GEN_THISCALL F_005630c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5630c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if ((this != (undefined *)0x84) && (iVar1 = *(int *)((int)this - 0x14), iVar1 != 0)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x30);
    *param_2 = *(undefined4 *)(iVar1 + 0x34);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf10 */
GEN_FRAME uint GEN_THISCALL F_005630f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5630f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000
      ;
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x84) + 0x14))))(this + 0x84 GEN_EDX_FWD);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(uVar2 + 0x84)) & 0x200000;
  }
  return uVar2;
}

/* ref: FUN_00563170 */
GEN_FRAME unsigned int GEN_THISCALL F_00563170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint local_10;
  uint local_8;
  
  if (*(int *)((int)this + 0xc) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (uint)*(ushort *)((int)this + 0x1a) + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  }
  local_10 = 0;
  if (local_8 != 0) {
    do {
      if (((*(byte *)((int)this + 0x60) & 1) != 0) && (local_10 != 0)) {
        iVar1 = *(int *)((int)this + 0xc);
        iVar3 = 0;
        if ((iVar1 != 0) && ((uVar2 = *(uint *)(iVar1 + 4), uVar2 != 0 && (uVar4 = 0, uVar2 != 0))))
        {
          piVar5 = *(int * PTR32 *)(iVar1 + 8);
          do {
            if (*(uint *)(*piVar5 + 4) == local_10) {
              iVar3 = (*(int * PTR32 *)(iVar1 + 8))[uVar4];
              break;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (uVar4 < uVar2);
        }
        if ((iVar3 != 0) && (*(short *)(iVar3 + 0x18) == 2)) {
          *(uint *)(iVar3 + 0x84) =
               *(uint *)(iVar3 + 0x84) ^
               ((uint)(byte)param_1 << 0x14 ^ *(uint *)(iVar3 + 0x84)) & 0x100000;
          *(uint *)(iVar3 + 0x88) =
               *(uint *)(iVar3 + 0x88) ^
               ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)(iVar3 + 0x88)) & 0x80;
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_8);
  }
  return 0;
}

/* ref: FUN_00563250 */
GEN_FRAME unsigned int GEN_STDCALL F_00563250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x563250u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)param_3 = GEN_FLT_TO(*(undefined4 *)param_3, REFG(float, 0x1087f04));
  *(undefined4 *)param_2 = uVar4;
  iVar2 = param_1;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (((iVar2 == 0) || (*(ushort *)(iVar2 + 0x18) < 1000)) || (*(int *)(iVar2 + 0x8c) == 0)) {
      fVar1 = *(float *)(iVar3 + 0x44);
      *(float *)param_2 = ((float)GEN_TOF(((float10)*(float *)param_2 * (float10)*(float *)(iVar3 + 0x40))));
      *(float *)param_3 = (float)((float10)*(float *)param_3 * (float10)fVar1);
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_005632c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5632c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf8 */
GEN_NOFRAME unsigned int F_00563310(void)
{
  GEN_ENTER(0x563310u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00563320 */
GEN_FRAME uint GEN_THISCALL F_00563320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x8c);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x90) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00563340 */
GEN_FRAME uint GEN_THISCALL F_00563340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x8c);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) =
         *(uint *)(uVar1 + 0x84) ^
         ((uint)(byte)param_1 << 0x14 ^ *(uint *)(uVar1 + 0x84)) & 0x100000;
    *(uint *)(uVar1 + 0x88) =
         *(uint *)(uVar1 + 0x88) ^
         ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)(uVar1 + 0x88)) & 0x80;
  }
  return uVar1;
}

/* ref: FUN_00563390 */
GEN_FRAME uint GEN_THISCALL F_00563390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x94);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x50) =
         (*(uint *)(uVar1 + 0x50) ^ param_1) & 0xffffff ^ *(uint *)(uVar1 + 0x50);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005633c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5633c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf16 */
GEN_FRAME uint GEN_THISCALL F_005633d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5633d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
    this[0x80] = *(undefined *)(param_1 + 8);
  }
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(this + 0x168) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00563420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x563420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x1c] = (undefined1)0x1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x60] = (undefined1)((byte)this[0x60] & 0xfd | 1);
  *(undefined4 *)(this + 0x5c) = 0;
  return 0;
}

/* ref: FUN_00563470 */
GEN_NOFRAME byte GEN_THISCALL F_00563470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x563470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return **(char * PTR32 *)(in_ecx + 0x9c) != '\0';
}

/* ref: FUN_00563480 */
GEN_FRAME uint GEN_THISCALL F_00563480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x563480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  short sVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = (byte)param_1;
  *(byte *)((int)this + 0x1df) =
       (bVar3 >> 3 & 1) * '\x02' | bVar3 >> 2 & 1 | *(byte *)((int)this + 0x1df) & 0xfc;
  *(short *)((int)this + 0x1f0) = (short)param_1;
  uVar2 = param_1 & 0xffff | 0x100;
  bVar3 = ((char)(param_1 >> 1) * '\x02' | bVar3 & 1) << 6 | *(byte *)((int)this + 0x1de) & 0x2a |
          ((bVar3 >> 5 & 1) * '\x04' | bVar3 >> 6 & 1) * '\x04' | bVar3 >> 7;
  sVar1 = (short)uVar2;
  *(short *)((int)this + 0x1f0) = sVar1;
  *(byte *)((int)this + 0x1de) = bVar3;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(sVar1 != 0) << 5 ^ bVar3) & 0xffffff20;
  *(byte *)((int)this + 0x1de) = *(byte *)((int)this + 0x1de) ^ (byte)uVar2;
  if (param_2 == 0) {
    *(undefined1 *)((int)this + 0x1e0) = 0;
  }
  else {
    uVar2 = 0;
    while ((((*(undefined1 *)((int)this + uVar2 + 0x1e0) = *(undefined1 *)(uVar2 + param_2),
             *(char *)(uVar2 + param_2) != '\0' &&
             (*(undefined1 *)(uVar2 + 0x1e1 + (int)this) = *(undefined1 *)(uVar2 + 1 + param_2),
             *(char *)(uVar2 + 1 + param_2) != '\0')) &&
            (*(undefined1 *)(uVar2 + 0x1e2 + (int)this) = *(undefined1 *)(uVar2 + 2 + param_2),
            *(char *)(uVar2 + 2 + param_2) != '\0')) &&
           (*(undefined1 *)(uVar2 + 0x1e3 + (int)this) = *(undefined1 *)(uVar2 + 3 + param_2),
           *(char *)(uVar2 + 3 + param_2) != '\0'))) {
      uVar2 = uVar2 + 4;
      if (0xf < (int)uVar2) {
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005635a0 */
GEN_FRAME uint GEN_THISCALL F_005635a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5635a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 << 6 ^ *(byte *)((int)this + 0x1de)) & 0x40;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 1;
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xfffe;
  return 0xfffe;
}

/* ref: FUN_005635e0 */
GEN_FRAME uint GEN_THISCALL F_005635e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5635e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) = *(byte *)((int)this + 0x1de) & 0x7f | (char)param_1 << 7;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 2;
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xfffd;
  return 0xfffd;
}

/* ref: FUN_00563620 */
GEN_FRAME uint GEN_THISCALL F_00563620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1df) =
       *(byte *)((int)this + 0x1df) ^ (*(byte *)((int)this + 0x1df) ^ (byte)param_1) & 1;
  if ((byte)param_1 != 0) {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 4;
    return CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xfffb;
  return 0xfffb;
}

/* ref: FUN_00563660 */
GEN_FRAME uint GEN_THISCALL F_00563660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1df) =
       *(byte *)((int)this + 0x1df) ^ ((char)param_1 * '\x02' ^ *(byte *)((int)this + 0x1df)) & 2;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 8;
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xfff7;
  return 0xfff7;
}

/* ref: FUN_005636a0 */
GEN_FRAME uint GEN_THISCALL F_005636a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5636a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 << 4 ^ *(byte *)((int)this + 0x1de)) & 0x10;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 0x20;
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xffdf;
  return 0xffdf;
}

/* ref: FUN_005636e0 */
GEN_FRAME uint GEN_THISCALL F_005636e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5636e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x1de)) & 4;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 0x40;
    return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xffbf;
  return 0xffbf;
}

/* ref: FUN_00563720 */
GEN_FRAME uint GEN_THISCALL F_00563720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ (*(byte *)((int)this + 0x1de) ^ (byte)param_1) & 1;
  if ((byte)param_1 != 0) {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 0x80;
    return 0x80;
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xff7f;
  return CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
}

/* ref: FUN_00563760 */
GEN_FRAME uint GEN_THISCALL F_00563760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 << 5 ^ *(byte *)((int)this + 0x1de)) & 0x20;
  if ((char)param_1 != '\0') {
    *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) | 0x100;
    return 0x100;
  }
  *(ushort *)((int)this + 0x1f0) = *(ushort *)((int)this + 0x1f0) & 0xfeff;
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
}

/* ref: FUN_005637a0 */
GEN_FRAME byte GEN_THISCALL F_005637a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5637a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x1d0) == 0) {
    iVar1 = *(int *)((int)this + 0x8c);
    bVar2 = ((char)param_1 * '\b' ^ *(byte *)((int)this + 0x1df)) & 8;
    uVar3 = (uint)bVar2;
    *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) ^ bVar2;
    if (iVar1 != 0) {
      bVar2 = *(byte *)(iVar1 + 0xfe) & 0x7f | (char)param_1 << 7;
      uVar3 = (uint)bVar2;
      *(byte *)(iVar1 + 0xfe) = bVar2;
      if (((byte)((char)param_1 << 7) != 0) && (*(char *)(iVar1 + 0x116) == '\0')) {
        *(char *)(iVar1 + 0x116) = *(char *)(iVar1 + 0xfd) + '\x01';
      }
    }
  }
  else {
    iVar1 = *(int *)((int)this + 0x8c);
    *(byte *)((int)this + 0x1df) = *(byte *)((int)this + 0x1df) | 8;
    if (((iVar1 != 0) &&
        (*(byte *)(iVar1 + 0xfe) = *(byte *)(iVar1 + 0xfe) | 0x80,
        (*(byte *)(iVar1 + 0xfe) & 0x80) != 0)) && (*(char *)(iVar1 + 0x116) == '\0')) {
      *(char *)(iVar1 + 0x116) = *(char *)(iVar1 + 0xfd) + '\x01';
    }
    uVar3 = *(uint *)((int)this + 0x8c);
    if (*(char *)(uVar3 + 0x116) == '\0') {
      *(char *)(uVar3 + 0x116) = *(char *)(uVar3 + 0xfd) + '\x01';
    }
  }
  if ((*(byte *)((int)this + 0x1df) & 8) != 0) {
    *(byte *)((int)this + 0x1de) = *(byte *)((int)this + 0x1de) & 0xf7;
  }
  return (byte)uVar3;
}

/* ref: FUN_00563870 */
GEN_FRAME unsigned int GEN_THISCALL F_00563870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x563870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x1c0));
    if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
      uVar1 = 0;
    }
    *(uint *)((int)this + 0x2f8) = uVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x2f8) = 0;
  return;
}

