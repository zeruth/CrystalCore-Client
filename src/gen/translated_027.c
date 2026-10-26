#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0055d9c0 */
uint F_0055d9c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055da10(unsigned int gen_a0)
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
uint F_0055da50(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055daa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dac0 */
uint F_0055dac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dae0 */
uint F_0055dae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 4)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db00 */
uint F_0055db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 5)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db20 */
uint F_0055db20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db40 */
uint F_0055db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 7)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db60 */
uint F_0055db60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db80 */
uint F_0055db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 != 0) && (999 < *(ushort *)(uVar1 + 0x18))) {
    return *(uint *)(uVar1 + 0x8c);
  }
  return 0;
}

/* ref: FUN_0055dbb0 */
unsigned int F_0055dbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0x18) != '\x02') {
    *(undefined4 *)(in_ecx + 0x34) = param_2;
  }
  return 0;
}

/* ref: FUN_0055dbd0 */
unsigned int F_0055dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x55dbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(char *)((int)this + 0x18) == '\x02') {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_0055dc00 */
unsigned int F_0055dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      return 0;
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(this,iVar1,param_2);
    }
    F_0055dc00(this,*(undefined4 *)(iVar1 + 0x14),param_2,param_3);
    if ((*(uint *)(iVar1 + 0x84) & 0x10000000) != 0) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 0;
}

/* ref: FUN_0055dc50 */
uint F_0055dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55dc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + 1;
  return (uint)param_3;
}

/* ref: Component::GUI2::AtkUnitBase::vf36 */
uint F_0055dc60(unsigned int gen_a0)
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
uint F_0055dcb0(void)
{
  GEN_ENTER(0x55dcb0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379860);
}

/* ref: FUN_0055dcc0 */
byte F_0055dcc0(unsigned int gen_a0)
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
byte F_0055dce0(unsigned int gen_a0)
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
byte F_0055dd20(unsigned int gen_a0)
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
uint F_0055dd80(unsigned int gen_a0)
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
uint F_0055dda0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
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
uint F_0055dde0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
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
byte F_0055de10(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055de40(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_0055de90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_0055df40(unsigned int gen_a0, unsigned int gen_a1)
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
float10 F_0055df60(unsigned int gen_a0)
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
float10 F_0055dfa0(unsigned int gen_a0, unsigned int gen_a1)
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
float10 F_0055dfd0(unsigned int gen_a0)
{
  GEN_ENTER(0x55dfd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x11c);
}

/* ref: FUN_0055dfe0 */
byte F_0055dfe0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x55dfe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x11c) = param_2;
  return 1;
}

/* ref: FUN_0055e000 */
float10 F_0055e000(unsigned int gen_a0)
{
  GEN_ENTER(0x55e000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x48)));
  }
  return (float10)0.0;
}

/* ref: FUN_0055e030 */
float10 F_0055e030(unsigned int gen_a0)
{
  GEN_ENTER(0x55e030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x90) != 0) {
    return (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x90) + 0x48)));
  }
  return (float10)0.0;
}

/* ref: Component::GUI2::AtkUnitBase::vf18 */
uint F_0055e060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      return ((undefined2)0x27f) | 0xc00;
    }
  }
  return uVar4;
}

/* ref: Component::GUI2::AtkUnitBase::vf20 */
ushort F_0055e120(unsigned int gen_a0, unsigned int gen_a1)
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
ushort F_0055e170(unsigned int gen_a0, unsigned int gen_a1)
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
ushort F_0055e1c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
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
ushort F_0055e220(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
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
uint F_0055e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 4,0x20,param_1);
  return uVar1;
}

/* ref: FUN_0055e2a0 */
uint F_0055e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_0055e2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55e2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24),param_1);
  return uVar1;
}

/* ref: FUN_0055e300 */
uint F_0055e300(unsigned int gen_a0)
{
  GEN_ENTER(0x55e300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x2c) != 0) {
    return (uint)*(ushort *)((int)this + 0x3a) + *((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 4)));
  }
  return 0;
}

/* ref: FUN_0055e320 */
uint F_0055e320(unsigned int gen_a0)
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
uint F_0055e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55e340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24),param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055e360 */
uint F_0055e360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55e360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 0x24),param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055e380 */
uint F_0055e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055d920((undefined *)((int)this + 0x24),param_1);
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
unsigned int F_0055e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
unsigned int F_0055e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55e430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 == 0) {
    F_0055e3d0(this,param_1,param_2,0);
    return 0;
  }
  F_0055e3d0(this,param_1,param_2,*(undefined4 *)(param_3 + 0x70));
  return 0;
}

/* ref: FUN_0055e470 */
byte F_0055e470(unsigned int gen_a0)
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
unsigned int F_0055e4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x55e4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this);
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf26 */
byte F_0055e4c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055e4f0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055e530(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
byte F_0055e670(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055e6d0(unsigned int gen_a0)
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
unsigned int F_0055e700(unsigned int gen_a0)
{
  GEN_ENTER(0x55e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xcc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1);
    return 0;
  }
  return 0;
}

/* ref: FUN_0055e720 */
float F_0055e720(unsigned int gen_a0)
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
uint F_0055e750(float gen_a0)
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
uint F_0055e7b0(unsigned int gen_a0, unsigned int gen_a1)
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
      uVar3 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14),iVar1);
    }
    uVar3 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18),iVar1,uVar3,0);
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
    uVar3 = F_00558e30(this_00);
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkUnitManager::vf2 */
unsigned int F_0055e830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
        return 0;
      }
    }
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
  }
  return 0;
}

/* ref: FUN_0055e870 */
float10 F_0055e870(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
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
float10 F_0055ea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ea70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = F_005baa90(param_4,*(float *)(in_ecx + 0xc),*(float *)(in_eax + 0xc));
  *(float *)(param_3 + 0xc) = (float)fVar1;
  return extraout_ST1;
}

/* ref: FUN_0055eaa0 */
float10 F_0055eaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = F_005baa90(in_esi,*(float *)(param_4 + 0xc),*(float *)(in_edi + 0xc));
  *(float *)(param_3 + 0xc) = (float)fVar1;
  fVar1 = F_005baa90(in_esi,*(float *)(param_4 + 0x10),*(float *)(in_edi + 0x10));
  *(float *)(param_3 + 0x10) = (float)fVar1;
  return extraout_ST1;
}

/* ref: FUN_0055eaf0 */
uint F_0055eaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  undefined1 local_c;
  
  fVar1 = F_005baa90(param_4,(float)*(byte *)(in_edx + 0xc),(float)*(byte *)(in_eax + 0xc));
  local_c = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xc) = local_c;
  return ((undefined2)0x27f) | 0xc00;
}

/* ref: FUN_0055eb50 */
uint F_0055eb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55eb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  undefined1 local_8;
  
  fVar1 = F_005baa90(in_esi,(float)*(byte *)(param_4 + 0xc),(float)*(byte *)(in_edi + 0xc));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xc) = local_8;
  fVar1 = F_005baa90(in_esi,(float)*(byte *)(param_4 + 0xd),(float)*(byte *)(in_edi + 0xd));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xd) = local_8;
  fVar1 = F_005baa90(in_esi,(float)*(byte *)(param_4 + 0xe),(float)*(byte *)(in_edi + 0xe));
  local_8 = (undefined1)(int)TRUNC(fVar1);
  *(undefined1 *)(param_3 + 0xe) = local_8;
  return ((undefined2)0x27f) | 0xc00;
}

/* ref: FUN_0055ec50 */
uint F_0055ec50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ec50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float10 fVar1;
  undefined2 local_c;
  
  fVar1 = F_005baa90(param_4,(float)*(ushort *)(in_edx + 0xc),(float)*(ushort *)(in_eax + 0xc));
  local_c = (undefined2)(int)TRUNC(fVar1);
  *(undefined2 *)(param_3 + 0xc) = local_c;
  return ((undefined2)0x27f) | 0xc00;
}

/* ref: FUN_0055ecb0 */
uint F_0055ecb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55ecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float10 fVar1;
  
  fVar1 = F_005baa90(in_esi,(float)(int)*(char *)(param_4 + 0x12),
                       (float)(int)*(char *)(in_edi + 0x12));
  *(char *)(param_3 + 0x12) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi,(float)(int)*(char *)(param_4 + 0x13),
                       (float)(int)*(char *)(in_edi + 0x13));
  *(char *)(param_3 + 0x13) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi,(float)(int)*(char *)(param_4 + 0x14),
                       (float)(int)*(char *)(in_edi + 0x14));
  *(char *)(param_3 + 0x14) = (char)(int)fVar1;
  fVar1 = F_005baa90(in_esi,(float)(int)*(short *)(param_4 + 0xc),
                       (float)(int)*(short *)(in_edi + 0xc));
  *(short *)(param_3 + 0xc) = (short)(int)fVar1;
  fVar1 = F_005baa90(in_esi,(float)(int)*(short *)(param_4 + 0xe),
                       (float)(int)*(short *)(in_edi + 0xe));
  *(short *)(param_3 + 0xe) = (short)(int)fVar1;
  fVar1 = F_005baa90(in_esi,(float)(int)*(short *)(param_4 + 0x10),
                       (float)(int)*(short *)(in_edi + 0x10));
  *(short *)(param_3 + 0x10) = (short)(int)fVar1;
  return (int)fVar1;
}

/* ref: FUN_0055ee30 */
uint F_0055ee30(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055eeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
        iVar2 = iVar1 + -1;
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
uint F_0055ef10(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055ef60(unsigned int gen_a0)
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
uint F_0055efc0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055f000(unsigned int gen_a0, unsigned int gen_a1)
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
    puVar3 = (ushort *)F_0055ef10(this,param_1);
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
uint F_0055f070(unsigned int gen_a0, unsigned int gen_a1)
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
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar2 = piVar2 + 0x10;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return uVar1;
}

/* ref: FUN_0055f0d0 */
unsigned int F_0055f0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    puVar4 = ((undefined2 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,uVar6 * iVar3,0x10)));
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
uint F_0055f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55f330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x8c) = param_2;
  return param_2;
}

/* ref: FUN_0055f340 */
unsigned int F_0055f340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return 0;
}

/* ref: FUN_0055f370 */
byte F_0055f370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_0042e360(param_1,param_2);
  return 1;
}

/* ref: FUN_0055f390 */
uint F_0055f390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55f390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a24d30(this,param_1,(int)this + 0x350,param_2,1);
  return uVar1;
}

/* ref: FUN_0055f3b0 */
uint F_0055f3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
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
  
  uVar3 = F_0042a990((*(undefined4 *)&gen_args[0]));
  pcVar4 = (char *)F_0042a990(&(*(undefined4 *)&gen_args[1]));
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
          F_0042c880(&(*(undefined4 *)&gen_args[1]));
          return local_8;
        }
      }
      cVar6 = pcVar8[1];
      local_8 = local_8 + 1;
      pcVar8 = pcVar8 + 1;
      iVar5 = iVar5 + 1;
    } while (cVar6 != '\0');
  }
  F_0042c880(&(*(undefined4 *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_0055f7d0 */
uint F_0055f7d0(unsigned int gen_a0, unsigned int gen_a1)
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
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
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
uint F_0055f810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55f810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00579cb0(this), (int)uVar1 < 0)) {
    return uVar1;
  }
  *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + *(int *)((int)this + 0x98);
  *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0xb8);
  this_00 = (undefined *)((int)this + 0xcc);
  *(undefined4 *)((int)this + 0xc4) = 0;
  if (param_1 == 0) {
    F_0042e360(this_00,(int)this + 0x2fc);
  }
  else {
    F_0042e370(this_00,param_1);
  }
  if ((char)param_2 != '\0') {
    F_0042e360(*(undefined * PTR32 *)((int)this + 200),this_00);
    if (*(int *)((int)this + 0xb8) == 0) {
      F_0042aca0(this_00);
    }
    else {
      F_0042e430(this_00,REFG(undefined * PTR32, 0x131dbac));
      *(undefined4 *)((int)this + 0xc4) = 1;
    }
  }
  if (*(int *)((int)this + 0x9c) < *(int *)((int)this + 0xa0)) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,0,0,(int)this + 0x350,this_00);
  return uVar1;
}

/* ref: FUN_0055f8e0 */
uint F_0055f8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
byte F_0055f960(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055f9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_0055fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar4 = param_2 + -1;
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
      if (*(uint *)(param_1 + -4 + iVar4 * 4) == uVar2) {
        iVar4 = iVar4 + -1;
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
    if (*(uint *)(param_1 + -4 + iVar4 * 4) == uVar2) {
      iVar4 = iVar4 + -2;
      break;
    }
  }
LAB_0055faea: ;
  uVar2 = F_0055f9a0(param_1,iVar4,&REFG(undefined, 0x109fffc),param_3);
  return uVar2;
}

/* ref: FUN_0055fb10 */
uint F_0055fb10(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf14 */
uint F_0055fcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf15 */
uint F_0055fcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf16 */
uint F_0055fcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fcf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf17 */
uint F_0055fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fd10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf4 */
uint F_0055fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = F_00579cb0(this);
  if (-1 < (int)uVar1) {
    *(int *)(this + 0x94) = *(int *)(this + 0x94) + *(int *)(this + 0x98);
    *(int *)(this + 0x9c) = *(int *)(this + 0x9c) + 1;
    this_00 = this + 0xcc;
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(this + 0xb8);
    *(undefined4 *)(this + 0xc4) = 0;
    F_0042e360(this_00,this + 0x2fc);
    F_0042e360(*(undefined * PTR32 *)(this + 200),this_00);
    if (*(int *)(this + 0xb8) == 0) {
      F_0042aca0(this_00);
    }
    else {
      F_0042e430(this_00,REFG(undefined * PTR32, 0x131dbac));
      *(undefined4 *)(this + 0xc4) = 1;
    }
    if (*(int *)(this + 0xa0) <= *(int *)(this + 0x9c)) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,0,0,this + 0x350,this_00);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf5 */
uint F_0055fde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  uVar2 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[3]),&(*(int *)&gen_args[3]),1);
  if (uVar2 == 0) {
    return 0;
  }
  if ((*(int *)&gen_args[3]) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1,(*(undefined4 *)&gen_args[4]));
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
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1,(*(undefined * PTR32 *)&gen_args[0]) + 0xcc);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf12 */
uint F_0055fe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if (*(int *)(in_ecx + 0xa8) != 0xff) {
    iVar1 = *(int *)(in_ecx + 0xa8) + -1;
    *(int *)(in_ecx + 0xa8) = iVar1;
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    F_0042aca0(*(undefined4 *)(in_ecx + 200));
    F_0042aca0(param_5);
    *(undefined4 *)(in_ecx + 0x9c) = 0;
    *(undefined4 *)(in_ecx + 0x94) = 0;
    *(undefined4 *)(in_ecx + 0x90) = 0;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf6 */
uint F_0055fef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55fef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf7 */
uint F_0055ff10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf8 */
uint F_0055ff30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf9 */
uint F_0055ff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf10 */
uint F_0055ff70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x55ff70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00a24d30((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]),1);
  return uVar1;
}

/* ref: Component::GUI2::AtkFontCodeModule::vf18 */
uint F_0055ff90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
uint F_0055ffa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
unsigned int F_0055ffc0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_0055fff0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560020(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0056005f */
uint F_0056005f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x56005fu, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_eax + 4) = in_ecx;
  return in_eax;
}

/* ref: FUN_00560070 */
unsigned int F_00560070(unsigned int gen_a0)
{
  GEN_ENTER(0x560070u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return 0;
}

/* ref: FUN_00560080 */
uint F_00560080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return param_1;
}

/* ref: FUN_005600a0 */
uint F_005600a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5600a0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_005600b0 */
uint F_005600b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005600d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5600d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)this) >> 0x20);
}

/* ref: FUN_005600e0 */
byte F_005600e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5600e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00560100 */
uint F_00560100(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00560190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  return param_2;
}

/* ref: FUN_005601b0 */
uint F_005601b0(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00560210(unsigned int gen_a0)
{
  GEN_ENTER(0x560210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00560240 */
unsigned int F_00560240(unsigned int gen_a0, unsigned int gen_a1)
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
    uVar1 = F_004d6dd0(this_00,0,((byte *)(gen_frame + 0xc)),2);
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
      F_004d6e60(*(undefined * PTR32 *)((int)this + 0x18),0);
    }
  }
  return 0;
}

/* ref: FUN_005602f0 */
ushort F_005602f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00560310(void)
{
  GEN_ENTER(0x560310u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x131dbc0);
}

/* ref: FUN_00560320 */
uint F_00560320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560320u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00560340 */
uint F_00560340(unsigned int gen_a0)
{
  GEN_ENTER(0x560340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_00560350 */
uint F_00560350(unsigned int gen_a0)
{
  GEN_ENTER(0x560350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 0x10),"");
  *(undefined4 *)((int)this + 100) = 0;
  return uVar1;
}

/* ref: FUN_00560390 */
uint F_00560390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_005603a0 */
unsigned int F_005603a0(unsigned int gen_a0, unsigned int gen_a1)
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
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x14) + 0x34))))
                        (*(int * PTR32 *)(iVar1 + 0x14),&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)),0);
      if ((char)uVar2 == '\0') {
        iVar1 = *(int *)(iVar1 + 0x18);
        (*(uint *)(gen_frame + 0x4)) = (uint)*(ushort *)(iVar1 + 0xc5c);
        (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)(iVar1 + 0xc5e);
      }
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    }
  }
  return 0;
}

/* ref: FUN_00560430 */
byte F_00560430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(char *)((int)this + 0x80) != '\0') && (param_1 == *(int *)((int)this + 0x70))) {
    if (*(int *)((int)this + 0x78) == 0) {
      return 1;
    }
    return *((short *)GEN_TOP((*(int *)((int)this + 0x78) + 0x9c))) ==
           *((short *)GEN_TOP((*(int *)((int)this + 0x74) + 0x18)));
  }
  return 0;
}

/* ref: FUN_00560470 */
byte F_00560470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
byte F_005604a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5604a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 0x14))))(*(int * PTR32 *)((int)this + 0x70));
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
uint F_005604e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00560590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560590u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005605c0 */
unsigned int F_005605c0(unsigned int gen_a0, unsigned int gen_a1)
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
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0,param_1,0);
  }
  return 0;
}

/* ref: FUN_00560600 */
unsigned int F_00560600(unsigned int gen_a0, unsigned int gen_a1)
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
    *psVar1 = *psVar1 + -1;
    if (*psVar1 < 0) {
      *(undefined2 *)((int)this + 6) = 0;
    }
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,1,param_1,0);
  }
  return 0;
}

/* ref: FUN_00560650 */
uint F_00560650(unsigned int gen_a0)
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
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0,0,0);
  }
  return uVar3;
}

/* ref: FUN_00560680 */
uint F_00560680(unsigned int gen_a0)
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
    *psVar1 = *psVar1 + -1;
    if (*psVar1 < 0) {
      *(undefined2 *)((int)this + 4) = 0;
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,1,0,0);
  }
  return uVar4;
}

/* ref: FUN_005606c0 */
byte F_005606c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560760(unsigned int gen_a0)
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
uint F_00560790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
byte F_005607c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_005607e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
uint F_00560850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)((int)in_ecx + 0xe) = 0;
  return param_2;
}

/* ref: FUN_00560880 */
uint F_00560880(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005608a0(float gen_a0, float gen_a1)
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
uint F_005608e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5608e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00c472af(param_2,param_3,&REFG(undefined, 0x10a00bc),param_1);
  return param_2;
}

/* ref: FUN_00560910 */
uint F_00560910(unsigned int gen_a0)
{
  GEN_ENTER(0x560910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
  return 0x1379720;
}

/* ref: FUN_00560940 */
uint F_00560940(unsigned int gen_a0)
{
  GEN_ENTER(0x560940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = 10;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
  uVar1 = F_00a4cf70(uVar1,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00560990 */
uint F_00560990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_005609b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5609b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  return 0;
}

/* ref: FUN_005609c0 */
uint F_005609c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5609c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_005609d0 */
byte F_005609d0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
uint F_00560a60(unsigned int gen_a0, unsigned int gen_a1)
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
    F_00594f30(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00560aa0 */
uint F_00560aa0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00560d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
byte F_00560dd0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x560df0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00560e00 */
uint F_00560e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))
                      (piVar1,(uint)(ushort)((short)(int)((float10)(int)*(short *)((int)this + 0x28)
                                                         * ((float10)GEN_TOD(gen_bits2f(piVar1[0x46])))) +
                                            (short)param_1),
                       (uint)(ushort)((short)(int)((float10)(int)*(short *)((int)this + 0x2a) *
                                                  ((float10)GEN_TOD(gen_bits2f(piVar1[0x46])))) +
                                     (short)param_2));
  }
  return uVar2;
}

/* ref: FUN_00560e80 */
byte F_00560e80(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00560ec0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc),CONCAT31((int3)((uint)in_EDX >> 8),bVar2));
    }
  }
  return 0;
}

/* ref: FUN_00560f40 */
uint F_00560f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560f40u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xb8))))(*(int * PTR32 *)(param_1 + 4),param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00560f70 */
uint F_00560f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x560f70u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xbc))))(*(int * PTR32 *)(param_1 + 4),param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00560fa0 */
byte F_00560fa0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00560fd0(unsigned int gen_a0, unsigned int gen_a1)
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
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc),1);
    }
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf4))) >> 0x14 & 0xf;
  if ((uVar2 == 3) || (uVar2 == 2)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x14))))(*(int * PTR32 *)(param_1 + 4),1);
  }
  return uVar2;
}

/* ref: FUN_00561040 */
uint F_00561040(unsigned int gen_a0, unsigned int gen_a1)
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
      F_0055a300(*(undefined * PTR32 *)(param_1 + 0xc),0);
    }
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0xf4))) >> 0x14 & 0xf;
  if ((uVar2 == 3) || (uVar2 == 2)) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x14))))(*(int * PTR32 *)(param_1 + 4),1);
  }
  return uVar2;
}

/* ref: FUN_005610b0 */
byte F_005610b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5610b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) == 1;
}

/* ref: FUN_005610c0 */
byte F_005610c0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_005610f0(unsigned int gen_a0)
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
float10 F_00561130(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005612d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5612d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005612e0 */
byte F_005612e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561310(unsigned int gen_a0)
{
  GEN_ENTER(0x561310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_004353c0(param_1);
  return uVar1;
}

/* ref: FUN_00561320 */
uint F_00561320(unsigned int gen_a0)
{
  GEN_ENTER(0x561320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_004353d0(param_1);
  return uVar1;
}

/* ref: FUN_00561330 */
uint F_00561330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004353e0(param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentBase::vf3 */
uint F_00561340(unsigned int gen_a0)
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
uint F_00561390(void)
{
  GEN_ENTER(0x561390u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x1379860);
}

/* ref: FUN_005613a0 */
uint F_005613a0(unsigned int gen_a0)
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
byte F_005613c0(unsigned int gen_a0)
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
byte F_00561440(unsigned int gen_a0)
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
uint F_00561490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_005614a0 */
uint F_005614a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_005614e0(unsigned int gen_a0, unsigned int gen_a1)
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
  return 0;
}

/* ref: FUN_00561530 */
uint F_00561530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00561550 */
uint F_00561550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00561570 */
uint F_00561570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0055d920((undefined *)((int)this + 4),param_1);
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
byte F_005615c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005615f0(unsigned int gen_a0)
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
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
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
byte F_00561650(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561680(unsigned int gen_a0)
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
         (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3), uVar4 == uVar1)) goto LAB_005616e4;
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
         ((((piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3))), piVar5 != (int *)0x0 &&
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
uint F_00561740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_005617a0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_005617e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00561830(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561860(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_005618b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005618f0(unsigned int gen_a0)
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
uint F_00561950(unsigned int gen_a0)
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
unsigned int F_00561990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0xa8) == 0) && (param_1 != 0)) {
    *(int *)((int)this + 0x68) = param_1;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x4000000;
    ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,1);
    if (*(short *)(param_1 + 0x18) == 8) {
      *(undefined * PTR32 *)(param_1 + 0x98) = this;
    }
  }
  return 0;
}

/* ref: FUN_005619d0 */
uint F_005619d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5619d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = param_2;
  in_ecx[3] = 0;
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[2] = 0;
  in_ecx[1] = 0;
  in_ecx[4] = uVar1;
  return 0;
}

/* ref: FUN_00561a00 */
uint F_00561a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
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
uint F_00561a50(unsigned int gen_a0)
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
uint F_00561aa0(unsigned int gen_a0, unsigned int gen_a1)
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
    *(short *)(iVar1 + 0x58) = (short)uVar4 + -0xff;
  }
  iVar1 = *(int *)((int)this + 0x8c);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0x54) = uVar2 - 0xa0;
    *(ushort *)(iVar1 + 0x56) = uVar3 - 0xa0;
    *(short *)(iVar1 + 0x58) = (short)uVar4 + -0xa0;
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
unsigned int F_00561b40(unsigned int gen_a0, unsigned int gen_a1)
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
  return 0;
}

/* ref: FUN_00561b90 */
uint F_00561b90(unsigned int gen_a0, unsigned int gen_a1)
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
ushort F_00561bd0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561c50(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561c70(unsigned int gen_a0, unsigned int gen_a1)
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
ushort F_00561c90(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561d20(unsigned int gen_a0)
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
unsigned int F_00561d70(unsigned int gen_a0, unsigned int gen_a1)
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
  return 0;
}

/* ref: FUN_00561db0 */
uint F_00561db0(unsigned int gen_a0)
{
  GEN_ENTER(0x561db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x104) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x104) + 0xf0)));
}

/* ref: FUN_00561dd0 */
uint F_00561dd0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561e00(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561e40(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561e70(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00561ec0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00561ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00561f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x561f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)((int)this + 0x8a) = (char)param_1;
  if ((char)param_1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf3 */
unsigned int F_00561f40(unsigned int gen_a0)
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
uint F_00561f90(unsigned int gen_a0)
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
unsigned int F_00561fe0(unsigned int gen_a0, unsigned int gen_a1)
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
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x28))))(*(int * PTR32 *)(this + 0x88),iVar1);
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
  return 0;
}

/* ref: FUN_005620a0 */
unsigned int F_005620a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
uint F_00562110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0x119) = (char)param_1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1);
  return uVar1;
}

/* ref: FUN_00562160 */
uint F_00562160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0xb8) != param_1) {
    *(uint *)((int)this + 0xb8) = param_1;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf20 */
uint F_00562190(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005621c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5621c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this)));
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
byte F_00562200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if (uVar1 <= param_1) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(this + 0x98) + 5 + param_1 * 8)));
}

/* ref: FUN_00562230 */
uint F_00562230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x4c))(param_2);
    if ((char)uVar1 != '\0') {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,(uint)*(byte *)(param_2 + 0x22));
      return uVar1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,1);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf23 */
unsigned int F_00562280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
    if (param_1 < uVar2) {
      pcVar1 = ((char *)GEN_TOP((*(int *)(this + 0x98) + 4 + param_1 * 8)));
      if (*pcVar1 != (char)param_2) {
        *pcVar1 = (char)param_2;
        this[0x11d] = (undefined1)0x1;
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf24 */
byte F_005622c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5622c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if (uVar1 <= param_1) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(this + 0x98) + 4 + param_1 * 8)));
}

/* ref: FUN_005622f0 */
byte F_005622f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5622f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xc9)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf26 */
byte F_00562310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((param_1 < *(int *)(this + 0xac)) &&
      ((int)((uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0)) <= param_1)) &&
     (param_1 <=
      (int)(((int)*(short *)(this + 0xf8) + (uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0))
           - (uint)((char)param_2 != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf28 */
unsigned int F_00562360(unsigned int gen_a0)
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
      ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,iVar2 * (uint)uVar1 + iVar4,1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 0;
}

/* ref: FUN_005623b0 */
uint F_005623b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5623b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if (param_1 < (int)uVar2) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,param_1)));
    if ((piVar3 == (int *)0x0) ||
       (uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3), (char)uVar2 == '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = (uint)*(byte *)(piVar3 + 0x22);
    }
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,uVar2);
    if (*(int *)((int)this + 0xc0) != param_1) {
      if ((*(int *)((int)this + 0xd8) < 0) &&
         ((*(char *)((int)this + 0x11f) != '\0' || (uVar2 = F_005615f0(this), (char)uVar2 != '\0')
          ))) {
        *(int *)((int)this + 0xd8) = param_1;
      }
      iVar1 = *(int *)((int)this + 0xc0);
      *(int *)((int)this + 0xc0) = param_1;
      if (-1 < iVar1) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0x4c))))(*(int * PTR32 *)((int)this + 0x84));
        if ((char)uVar2 == '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,iVar1,0);
        }
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,iVar1,0);
        if ((char)uVar2 != '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,iVar1,0,1);
        }
      }
      uVar2 = *(uint *)((int)this + 0xc0);
      if (-1 < (int)uVar2) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,uVar2,0,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005624a0 */
uint F_005624a0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_005624c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
unsigned int F_005624f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5624f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xa4) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xa4) + 0x28))))(*(int * PTR32 *)((int)this + 0xa4))));
    *puVar1 = param_3;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xa4) + 0x28))))(*(int * PTR32 *)((int)this + 0xa4));
    *(undefined4 *)(uVar2 + 4) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x14))) = *(undefined4 *)((int)this + 0xe4);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf35 */
uint F_00562540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf15 */
uint F_00562580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf15 */
uint F_005625c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1dc) + 0x38))))
                    (*(int * PTR32 *)(this + 0x1dc),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: FUN_005625e0 */
uint F_005625e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00562610(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00562660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00562690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_005626c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
          if ((((iVar2 == 0) || (uVar1 = F_0055d920((undefined *)((int)this + 4),iVar2), uVar1 == 0))
              || (*(ushort *)(uVar1 + 0x18) < 1000)) || (*(int *)(uVar1 + 0x8c) == 0)) {
            uVar1 = F_0055d920((undefined *)((int)this + 4),piVar3[-1]);
            *_Dst = uVar1;
          }
          else {
            uVar1 = F_0055d920((undefined *)((int)this + 4),iVar2);
            if ((uVar1 == 0) || (*(ushort *)(uVar1 + 0x18) < 1000)) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(uVar1 + 0x8c);
            }
            uVar1 = F_0055d920((undefined *)(iVar2 + 4),piVar3[-1]);
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
  return 0;
}

/* ref: FUN_005627b0 */
uint F_005627b0(unsigned int gen_a0)
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
uint F_005627f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
unsigned int F_00562830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00562840 */
byte F_00562840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00562850 */
uint F_00562850(unsigned int gen_a0)
{
  GEN_ENTER(0x562850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0xf0) = *(byte *)(in_ecx + 0xf0) | 1;
  return REFG(int, 0x1379860) + 0x40;
}

/* ref: FUN_00562860 */
unsigned int F_00562860(unsigned int gen_a0)
{
  GEN_ENTER(0x562860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0xf0) = *(byte *)(in_ecx + 0xf0) & 0xfe;
  return 0;
}

/* ref: FUN_00562870 */
uint F_00562870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf3 */
uint F_00562880(unsigned int gen_a0)
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
uint F_005628d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x140) + 0x20))) + 0x38))))
                      (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x140) + 0x20))),param_1,param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf15 */
uint F_005628f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,*(undefined4 *)(this + 0xcc))));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf26 */
byte F_00562920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(int *)(this + 0xb0) <= param_1) &&
     (param_1 <= (int)(*(int *)(this + 0x164) - (uint)((char)param_2 != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00562950 */
uint F_00562950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00562980(unsigned int gen_a0, unsigned int gen_a1)
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
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_1);
  }
  uVar3 = *(uint *)(this + 0x8c);
  if (((uVar3 != 0) && (999 < *(ushort *)(uVar3 + 0x18))) && (*(int *)(uVar3 + 0x8c) != 0)) {
    if ((uVar3 == 0) || (*(ushort *)(uVar3 + 0x18) < 1000)) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = *(int * PTR32 *)(uVar3 + 0x8c);
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_1);
  }
  if (*(int *)(this + 0x94) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x28))))(*(int * PTR32 *)(this + 0x94),param_1);
  }
  if (*(int *)(this + 0x98) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x94) + 0x28))))(*(int * PTR32 *)(this + 0x94),param_1);
  }
  return uVar3;
}

/* ref: FUN_00562a80 */
uint F_00562a80(unsigned int gen_a0)
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
      uVar3 = F_00559f40(iVar1,(uint)(ushort)(*(short *)((int)this + 0xc4) - uVar2));
      return uVar3;
    }
    in_EAX = F_00559eb0(iVar1,(uint)(ushort)(*(short *)((int)this + 0xc4) - uVar2));
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf3 */
uint F_00562b90(unsigned int gen_a0)
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
uint F_00562be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x28))))(*(int * PTR32 *)(this + 0x84),param_1);
  if (((char)param_1 == '\0') && (this[0x90] != (undefined1)0x0)) {
    *(undefined2 *)(this + 0x90) = 0x100;
  }
  return uVar1;
}

/* ref: FUN_00562c40 */
unsigned int F_00562c40(unsigned int gen_a0)
{
  GEN_ENTER(0x562c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x88) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x78))))(*(int * PTR32 *)((int)this + 0x88));
    return 0;
  }
  return 0;
}

/* ref: FUN_00562c60 */
uint F_00562c60(unsigned int gen_a0)
{
  GEN_ENTER(0x562c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xc0)));
  }
  return 0xffffffff;
}

/* ref: FUN_00562c80 */
uint F_00562c80(unsigned int gen_a0)
{
  GEN_ENTER(0x562c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x88) != 0) {
    return (int)*((short *)GEN_TOP((*(int *)(in_ecx + 0x88) + 0xf6)));
  }
  return 0;
}

/* ref: FUN_00562ca0 */
uint F_00562ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x88));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    *(undefined4 *)(uVar1 + 0x90) = param_1;
  }
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x8c));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    *(undefined4 *)(uVar1 + 0x90) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00562d00 */
uint F_00562d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x562d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + param_1 * 4 + 0x88));
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
unsigned int F_00562d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x562d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x17) {
    if ((*(int *)(this + 0x84) != 0) && (param_2 == 2)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 100))))(*(int * PTR32 *)(this + 0x84));
    }
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
  }
  return 0;
}

/* ref: FUN_00562da0 */
ushort F_00562da0(unsigned int gen_a0)
{
  GEN_ENTER(0x562da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x88));
  if ((uVar1 != 0) && (*(short *)(uVar1 + 0x18) == 3)) {
    return (ushort)*(byte *)(uVar1 + 0xfd);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentWindow::vf21 */
uint F_00562e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x562e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x84) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentIconText::vf3 */
uint F_00562e10(unsigned int gen_a0)
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
uint F_00562e60(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00562e80(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00562ea0(unsigned int gen_a0)
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
unsigned int F_00562ee0(unsigned int gen_a0, unsigned int gen_a1)
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
  return 0;
}

/* ref: FUN_00562f50 */
unsigned int F_00562f50(unsigned int gen_a0)
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
  return 0;
}

/* ref: FUN_00562fa0 */
uint F_00562fa0(unsigned int gen_a0)
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
uint F_00562fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x562fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x26) = *(byte *)(in_ecx + 0x26) | 8;
  return REFG(int, 0x1379860) + 0x40;
}

/* ref: FUN_00562ff0 */
uint F_00562ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x562ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xa4) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa4) + 0x84)));
  }
  return 0xffffffff;
}

/* ref: FUN_00563030 */
uint F_00563030(unsigned int gen_a0)
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
uint F_00563050(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_005630c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5630c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if ((this != (undefined *)0x84) && (iVar1 = *(int *)((int)this + -0x14), iVar1 != 0)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x30);
    *param_2 = *(undefined4 *)(iVar1 + 0x34);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf10 */
uint F_005630f0(unsigned int gen_a0, unsigned int gen_a1)
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
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x84) + 0x14))))(this + 0x84);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(uVar2 + 0x84)) & 0x200000;
  }
  return uVar2;
}

/* ref: FUN_00563170 */
unsigned int F_00563170(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00563250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x563250u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = REFG(float, 0x1087f04);
  *(undefined4 *)param_3 = REFG(float, 0x1087f04);
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
  return 0;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf3 */
uint F_005632c0(unsigned int gen_a0)
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
unsigned int F_00563310(void)
{
  GEN_ENTER(0x563310u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00563320 */
uint F_00563320(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563340(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563390(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_005633c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5633c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf16 */
uint F_005633d0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563420(unsigned int gen_a0)
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
byte F_00563470(unsigned int gen_a0)
{
  GEN_ENTER(0x563470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return **(char * PTR32 *)(in_ecx + 0x9c) != '\0';
}

/* ref: FUN_00563480 */
uint F_00563480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_005635a0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005635e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563620(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563660(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005636a0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_005636e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563720(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00563760(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_005637a0(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00563870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_0055d920((undefined *)((int)this + 4),*(undefined4 *)((int)this + 0x1c0));
    if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
      uVar1 = 0;
    }
    *(uint *)((int)this + 0x2f8) = uVar1;
    return 0;
  }
  *(undefined4 *)((int)this + 0x2f8) = 0;
  return 0;
}

/* ref: FUN_005638c0 */
byte F_005638c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5638c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = -((*(byte *)(in_ecx + 0x1df) & 8) != 0) & (byte)param_2;
  *(byte *)(in_ecx + 0x1fb) = bVar1;
  return bVar1;
}

/* ref: FUN_005638e0 */
byte F_005638e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5638e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = 1;
  if ((*(char *)(in_ecx + 0x80) != '\x01') || (param_2 == 0x11)) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00563900 */
byte F_00563900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(char *)(in_ecx + 0x80) == '\x7f') && ((param_2 == 0xf || (param_2 == 0x10)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00563940 */
unsigned int F_00563940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00563950 */
uint F_00563950(unsigned int gen_a0)
{
  GEN_ENTER(0x563950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(byte *)(in_ecx + 0x6e) & 0x10) != 0) {
    return 3;
  }
  if ((*(byte *)(in_ecx + 0x6f) & 1) != 0) {
    if ((*(byte *)(in_ecx + 0x6e) & 0xc0) == 0) {
      return 0;
    }
    return 2;
  }
  return 1;
}

/* ref: FUN_00563980 */
uint F_00563980(unsigned int gen_a0)
{
  GEN_ENTER(0x563980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: FUN_00563990 */
uint F_00563990(unsigned int gen_a0)
{
  GEN_ENTER(0x563990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(in_ecx + 0x6f) & 8) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf3 */
uint F_005639a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5639a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Component::GUI2::AtkComponentNumericInput::vf10 */
uint F_005639f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5639f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if ((this != (undefined *)0x0) && (iVar1 = *(int *)(this + 0x70), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000;
  }
  iVar1 = *(int *)(this + 0x98);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x170) + 0x28))))(*(int * PTR32 *)(this + 0x170),param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x174) + 0x28))))(*(int * PTR32 *)(this + 0x174),param_1);
  return uVar2;
}

/* ref: FUN_00563a70 */
uint F_00563a70(unsigned int gen_a0)
{
  GEN_ENTER(0x563a70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x268);
  }
  return 0;
}

/* ref: FUN_00563a80 */
uint F_00563a80(unsigned int gen_a0)
{
  GEN_ENTER(0x563a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x26c);
  }
  return 0;
}

/* ref: FUN_00563aa0 */
unsigned int F_00563aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x270) = param_2;
  }
  return 0;
}

/* ref: FUN_00563ad0 */
unsigned int F_00563ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x184) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00563b00 */
unsigned int F_00563b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x185) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00563b40 */
uint F_00563b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((int)param_1 < (int)*(uint *)((int)this + 0x268)) {
    uVar1 = *(uint *)((int)this + 0x268);
  }
  if ((int)*(uint *)((int)this + 0x26c) < (int)uVar1) {
    uVar1 = *(uint *)((int)this + 0x26c);
  }
  return uVar1;
}

/* ref: FUN_00563b70 */
uint F_00563b70(unsigned int gen_a0)
{
  GEN_ENTER(0x563b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 / 10;
      uVar2 = uVar2 + 1;
    } while (0 < iVar1);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  return 1;
}

/* ref: FUN_00563bb0 */
uint F_00563bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x563bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x178) + param_2;
  if (*(char *)(in_ecx + 0x184) != '\0') {
    if ((char)param_3 != '\0') {
      if ((int)uVar1 <= *(int *)(in_ecx + 0x26c)) {
        return uVar1;
      }
      return *(uint *)(in_ecx + 0x268);
    }
    if ((char)param_4 == '\0') {
      return uVar1;
    }
  }
  if ((int)*(uint *)(in_ecx + 0x26c) < (int)uVar1) {
    uVar1 = *(uint *)(in_ecx + 0x26c);
  }
  return uVar1;
}

/* ref: FUN_00563c00 */
uint F_00563c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x563c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x178) - param_2;
  if (*(char *)(in_ecx + 0x184) != '\0') {
    if ((char)param_3 != '\0') {
      if (*(int *)(in_ecx + 0x268) <= (int)uVar1) {
        return uVar1;
      }
      return *(uint *)(in_ecx + 0x26c);
    }
    if ((char)param_4 == '\0') {
      return uVar1;
    }
  }
  if ((int)uVar1 < (int)*(uint *)(in_ecx + 0x268)) {
    uVar1 = *(uint *)(in_ecx + 0x268);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentGuildLeveCard::vf16 */
unsigned int F_00563c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    this_00 = this + 4;
    uVar3 = F_0055d920(this_00,*(undefined4 *)(param_1 + 0x10));
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x84) = uVar3;
    param_1 = (char *)F_0055d920(this_00,*(undefined4 *)(param_1 + 0x14));
    if ((param_1 == (char *)0x0) || (*(short *)((int)param_1 + 0x18) != 2)) {
      param_1 = (char *)0x0;
    }
    *(char * PTR32 *)(this + 0x88) = param_1;
    uVar4 = F_0055d920(this_00,*(undefined4 *)(pcVar2 + 0x18));
    if ((uVar4 == 0) || (*(short *)(uVar4 + 0x18) != 2)) {
      uVar4 = 0;
    }
    uVar6 = 0;
    *(uint *)(this + 0x8c) = uVar4;
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else if ((*(int *)(uVar3 + 0x8c) != 0) &&
            (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) + (uint)*(ushort *)(uVar3 + 0x90) * 0xc)))
            , puVar1 != (undefined4 *)0x0)) {
      uVar6 = *puVar1;
    }
    *(undefined4 *)(this + 0x90) = uVar6;
    uVar6 = 0;
    if (((param_1 != (char *)0x0) && (uVar6 = 0, *(int *)((int)param_1 + 0x8c) != 0)) &&
       (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x8c) + 8))) +
                 (uint)*(ushort *)((int)param_1 + 0x90) * 0xc))), puVar1 != (undefined4 *)0x0)) {
      uVar6 = *puVar1;
    }
    uVar5 = 0;
    *(undefined4 *)(this + 0x94) = uVar6;
    if (uVar4 == 0) {
      *(undefined4 *)(this + 0x98) = 0;
      return 0;
    }
    if ((*(int *)(uVar4 + 0x8c) != 0) &&
       (puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar4 + 0x8c) + 8))) + (uint)*(ushort *)(uVar4 + 0x90) * 0xc))),
       puVar1 != (undefined4 *)0x0)) {
      uVar5 = *puVar1;
    }
    *(undefined4 *)(this + 0x98) = uVar5;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentGuildLeveCard::vf8 */
unsigned int F_00563da0(void)
{
  GEN_ENTER(0x563da0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00563db0 */
byte F_00563db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x563db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  
  *(uint *)(param_1 + 0x90) =
       *(uint *)(param_1 + 0x90) ^ (param_2 & 0xff ^ *(uint *)(param_1 + 0x90)) & 1;
  if ((byte)param_2 != 0) {
    fVar1 = *(float *)(param_1 + 0x8c);
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 != 0) {
      if (((*(uint *)(iVar2 + 0x88) & 1) == 0) &&
         (fVar4 = (float10)fVar1, bVar3 = GEN_ISNAN((float10)*(float *)(iVar2 + 0x38)) || GEN_ISNAN(fVar4),
         bVar3 == (bVar3 || (float10)*(float *)(iVar2 + 0x38) == fVar4))) {
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 1;
      }
      *(float *)(iVar2 + 0x38) = fVar1;
    }
  }
  return (byte)param_2;
}

/* ref: FUN_00563e10 */
unsigned int F_00563e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x563e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 local_10;
  
  if ((*(ushort *)((int)this + 0x28) < 10) && (param_1 != 0)) {
    local_10 = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x78) >> 8),
                        ((char)param_2 + '\x05') * '\n' + *(char *)((int)this + 0x28));
    *(undefined4 *)(param_1 + 0x78) = local_10;
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x28) * 4))) = param_1;
    *(short *)((int)this + 0x28) = *(short *)((int)this + 0x28) + 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf8 */
unsigned int F_00563e90(unsigned int gen_a0)
{
  GEN_ENTER(0x563e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x74) = 1;
  return 0;
}

/* ref: FUN_00563ea0 */
uint F_00563ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x563ea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) & 0xffefffff;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) | 0x80;
  }
  return uVar1;
}

/* ref: FUN_00563f60 */
ushort F_00563f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x563f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  short sVar1;
  short sVar2;
  bool bVar3;
  float10 fVar4;
  
  if ((int)(uint)*(ushort *)(param_1 + 0x22a) < (int)*(short *)param_2 + (int)(short)param_5) {
    *(undefined2 *)param_2 = *(undefined2 *)(param_1 + 0x228);
    *param_3 = *(short *)(param_1 + 0x22e);
    *(char *)(param_1 + 0x221) = *(char *)(param_1 + 0x221) + '\x01';
  }
  if (param_4 != 0) {
    sVar1 = *(short *)param_2;
    sVar2 = *param_3;
    if (((*(uint *)(param_4 + 0x88) & 1) == 0) &&
       ((fVar4 = (float10)(int)sVar1, bVar3 = GEN_ISNAN((float10)*(float *)(param_4 + 0x38)) || GEN_ISNAN(fVar4)
        , bVar3 == (bVar3 || (float10)*(float *)(param_4 + 0x38) == fVar4) ||
        (fVar4 = (float10)(int)sVar2, bVar3 = GEN_ISNAN((float10)*(float *)(param_4 + 0x3c)) || GEN_ISNAN(fVar4)
        , bVar3 == (bVar3 || (float10)*(float *)(param_4 + 0x3c) == fVar4))))) {
      *(uint *)(param_4 + 0x88) = *(uint *)(param_4 + 0x88) | 1;
    }
    *(float *)(param_4 + 0x38) = (float)(int)sVar1;
    *(float *)(param_4 + 0x3c) = (float)(int)sVar2;
  }
  *(short *)param_2 = *(short *)param_2 + *(short *)(param_1 + 0x226);
  return 0;
}

/* ref: FUN_00564010 */
unsigned int F_00564010(unsigned int gen_a0)
{
  GEN_ENTER(0x564010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int * piVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  (*(uint *)(gen_frame + 0x18)) = *(byte *)((int)this + 0x221) + 1;
  if (1 < (*(uint *)(gen_frame + 0x18))) {
    (*(uint *)(gen_frame + 0x18)) = 2;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if ((*(uint *)(gen_frame + 0x18)) != 0) {
    do {
      iVar8 = (int)*(short *)((*(int *)(gen_frame + 0xc)) * 0x2c + 0x1ec + (int)this);
      piVar2 = (int *)((*(int *)(gen_frame + 0xc)) * 0x2c + 0x1c4 + (int)this);
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar4 = piVar2[iVar9];
          if (iVar4 != 0) {
            (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (char)*(undefined4 *)(iVar4 + 0x78);
            cVar5 = (char)(*(undefined4 *)(gen_frame + 0x0));
            cVar3 = (char)(*(undefined4 *)(gen_frame + 0x0)) + -1;
            cVar6 = (char)(*(undefined4 *)(gen_frame + 0x0)) + '\x01';
            bVar10 = iVar9 == 0;
            if ((bool)bVar10) {
              cVar3 = *((char *)GEN_TOP((piVar2[iVar8 + -1] + 0x78)));
            }
            if (iVar9 == iVar8 + -1) {
              cVar6 = *(char *)(*piVar2 + 0x78);
              bVar10 = bVar10 | 2;
            }
            (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31((int3)((uint)*(undefined4 *)(iVar4 + 0x7c) >> 8),cVar6);
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = (undefined2)*(undefined4 *)(iVar4 + 0x78);
            gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(1,(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
            (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar3,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
            if ((*(int *)(gen_frame + 0xc)) == 0) {
              if ((1 < (*(uint *)(gen_frame + 0x18))) &&
                 ((iVar7 = *(int *)((int)this + iVar9 * 4 + 0x1f0), iVar7 != 0 ||
                  ((0 < *(short *)((int)this + 0x218) &&
                   (iVar7 = *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x218) * 4 + 0x1ec))),
                   iVar7 != 0)))))) {
                gen_piece_set(&(*(undefined4 *)(gen_frame + 0x0)), 0, 3, (unsigned long long)(CONCAT12(*(undefined1 *)(iVar7 + 0x78),(undefined2)(*(undefined4 *)(gen_frame + 0x0)))));
                (*(undefined4 *)(gen_frame + 0x0)) = CONCAT13(cVar3,(undefined3)(*(undefined4 *)(gen_frame + 0x0)));
              }
            }
            else if (((*(int *)(gen_frame + 0xc)) == (*(uint *)(gen_frame + 0x18)) - 1) &&
                    ((iVar7 = *(int *)((int)this + iVar9 * 4 + 0x1c4), iVar7 != 0 ||
                     ((0 < *(short *)((int)this + 0x1ec) &&
                      (iVar7 = *((int *)GEN_TOP(((int)this + *(short *)((int)this + 0x1ec) * 4 + 0x1c0))),
                      iVar7 != 0)))))) {
              (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = CONCAT11(*(undefined1 *)(iVar7 + 0x78),cVar5);
            }
            *(undefined4 *)(iVar4 + 0x78) = (*(undefined4 *)(gen_frame + 0x0));
            *(undefined4 *)(iVar4 + 0x7c) = (*(undefined4 *)(gen_frame + 0x4));
            *(undefined1 *)(iVar4 + 0x80) = *(undefined1 *)(iVar4 + 0x80);
            if (bVar10 != 0) {
              iVar4 = *(int *)(iVar4 + 0x70);
              if ((bVar10 & 1) != 0) {
                puVar1 = (uint *)(iVar4 + 0x88);
                *puVar1 = *puVar1 | 0x20;
              }
              if ((bVar10 & 2) != 0) {
                puVar1 = (uint *)(iVar4 + 0x88);
                *puVar1 = *puVar1 | 0x40;
              }
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar8);
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    } while ((*(int *)(gen_frame + 0xc)) < (int)(*(uint *)(gen_frame + 0x18)));
  }
  return 0;
}

/* ref: FUN_005641b0 */
byte F_005641b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5641b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x104);
  *(uint *)(param_1 + 0x9c) = param_2;
  uVar2 = param_2;
  if (iVar1 != 0) {
    uVar3 = (*(short *)(param_1 + 0x232) + *(short *)(param_1 + 0x224)) * (short)param_2;
    uVar2 = (uint)(short)uVar3;
    fVar6 = (float)(int)uVar2;
    if ((*(uint *)(iVar1 + 0x88) & 1) == 0) {
      fVar5 = (float10)(int)uVar2;
      bVar4 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x38)) || GEN_ISNAN(fVar5);
      uVar2 = (uint)(uVar3 & 0xff);
      if (bVar4 == (bVar4 || (float10)*(float *)(iVar1 + 0x38) == fVar5)) {
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 1;
      }
    }
    *(float *)(iVar1 + 0x38) = fVar6;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
  }
  return (byte)uVar2;
}

/* ref: FUN_00564250 */
uint F_00564250(unsigned int gen_a0)
{
  GEN_ENTER(0x564250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x9c);
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  return *(uint *)(in_ecx + 0x1a0 + iVar1 * 4);
}

/* ref: FUN_005642d0 */
byte F_005642d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5642d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == *(int *)(in_ecx + 0xe8)) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 1;
}

/* ref: FUN_00564300 */
ushort F_00564300(unsigned int gen_a0)
{
  GEN_ENTER(0x564300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xd0);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x18) == 3)) {
    if (*(byte *)(iVar1 + 0x116) != 0) {
      return (ushort)*(byte *)(iVar1 + 0x116);
    }
    return (ushort)*(byte *)(iVar1 + 0xfd);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentMultipurpose::vf16 */
uint F_00564330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    *(undefined4 *)(this + 0x84) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(uint *)(this + 0x98) = uVar1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentMultipurpose::vf8 */
unsigned int F_00564390(void)
{
  GEN_ENTER(0x564390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_005643a0 */
uint F_005643a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5643a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x90 + param_2 * 4);
}

/* ref: FUN_005643c0 */
unsigned int F_005643c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5643c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  uVar2 = REFG(float, 0x10a0ca0);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x274) = uVar1;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  *(undefined4 *)((int)this + 0x27c) = uVar1;
  *(undefined4 *)((int)this + 0x288) = uVar2;
  *(undefined4 *)((int)this + 0x28c) = uVar2;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined2 *)((int)this + 0x290) = 0;
  *(undefined2 *)((int)this + 0x292) = 0;
  *(undefined2 *)((int)this + 0x294) = 0;
  *(undefined2 *)((int)this + 0x296) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 700) = 0;
  return 0;
}

/* ref: FUN_005644f0 */
uint F_005644f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5644f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  
  if ((param_2 < *(uint *)((int)this + param_1 * 4 + 0x2a0)) &&
     (iVar1 = *(int *)((int)this + param_1 * 4 + 0x2b0), iVar1 != 0)) {
    return iVar1 + param_2 * 0x24;
  }
  return 0;
}

/* ref: FUN_00564520 */
uint F_00564520(unsigned int gen_a0)
{
  GEN_ENTER(0x564520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
}

/* ref: FUN_00564540 */
uint F_00564540(unsigned int gen_a0)
{
  GEN_ENTER(0x564540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined2 uVar2;
  undefined2 local_c;
  
  local_c = (undefined2)
            (int)TRUNC((float10)*(float *)((int)this + 0x278) * (float10)*(double *)&REFG(undefined, 0x1090718));
  uVar2 = local_c;
  uVar1 = (uint)TRUNC(((float10)*(double *)&REFG(undefined, 0x10a0ca8) / (float10)*(float *)((int)this + 0x278)) /
                      (float10)*(double *)&REFG(undefined, 0x1090718));
  local_c = (undefined2)uVar1;
  *(undefined2 *)((int)this + 0x2e0) = local_c;
  *(undefined2 *)((int)this + 0x2e2) = local_c;
  *(undefined2 *)((int)this + 0x2e4) = uVar2;
  *(undefined2 *)((int)this + 0x2e6) = uVar2;
  return uVar1 & 0xffff;
}

/* ref: FUN_005645c0 */
byte F_005645c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5645c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  *(byte *)(in_ecx + 0xb9) = (byte)param_2;
  iVar1 = *(int *)(in_ecx + 0x88);
  if (iVar1 != 0) {
    if ((byte)param_2 != 0) {
      *(byte *)(iVar1 + 0x93) = *(byte *)(iVar1 + 0x93) | 8;
      return (byte)param_2;
    }
    *(byte *)(iVar1 + 0x93) = *(byte *)(iVar1 + 0x93) & 0xf7;
  }
  return (byte)param_2;
}

/* ref: FUN_005645f0 */
uint F_005645f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5645f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260)));
  if ((uVar1 != (*(uint *)&gen_args[1])) || ((char)(*(undefined4 *)&gen_args[3]) != '\0')) {
    if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))) = REFG(float, 0x1087f04);
      uVar1 = ~uVar1 & (*(uint *)&gen_args[1]);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xba))) = 1;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) = uVar1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))) = REFG(float, 0x10a0898);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[1]);
  }
  return uVar1;
}

/* ref: FUN_00564660 */
float10 F_00564660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x564660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1 << ((char)param_2 + (char)param_1 * '\x03' & 0x1fU);
  if ((*(uint *)((int)this + 0x264) & uVar1) != 0) {
    return (float10)*(float *)((int)this + 0x268);
  }
  if ((*(uint *)((int)this + 0x260) & uVar1) != 0) {
    return (float10)0;
  }
  return (float10)1;
}

/* ref: FUN_005646a0 */
uint F_005646a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5646a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *(uint *)(in_ecx + 0x98);
  case 1: ;
    return *(uint *)(in_ecx + 0x9c);
  case 2: ;
    return *(uint *)(in_ecx + 0xa0);
  case 3: ;
    return *(uint *)(in_ecx + 0xa4);
  default: ;
    return 0;
  }
}

/* ref: FUN_005646f0 */
uint F_005646f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5646f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (uint)*(byte *)(in_ecx + 0x20);
  }
  return 0;
}

/* ref: FUN_00564700 */
uint F_00564700(unsigned int gen_a0)
{
  GEN_ENTER(0x564700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x1c);
  }
  return 0;
}

/* ref: FUN_00564760 */
uint F_00564760(unsigned int gen_a0)
{
  GEN_ENTER(0x564760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x20))) {
    case 0: ;
      return *(uint *)(in_ecx + 0x10);
    case 1: ;
    case 2: ;
      return *(uint *)(in_ecx + 0x14);
    case 3: ;
      return *(uint *)(in_ecx + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_005647a0 */
uint F_005647a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5647a0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (in_ecx != (int *)0x0) {
    switch((unsigned int)(uintptr_t)((char)in_ecx[8])) {
    case '\0': ;
    case '\x01': ;
      return in_ecx[1];
    case '\x02': ;
      if (*in_ecx != 0) {
        return *(uint *)(*in_ecx + 0x84);
      }
    case '\x03': ;
      return in_ecx[2];
    }
  }
  return 0;
}

/* ref: FUN_005647e0 */
uint F_005647e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5647e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x20))) {
    case 0: ;
    case 1: ;
      return *(uint *)(in_ecx + 8);
    case 2: ;
      return *(uint *)(in_ecx + 4);
    case 3: ;
      return *(uint *)(in_ecx + 0xc);
    }
  }
  return 0;
}

/* ref: FUN_00564820 */
uint F_00564820(unsigned int gen_a0)
{
  GEN_ENTER(0x564820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char cVar1;
  
  if (in_ecx != 0) {
    cVar1 = *(char *)(in_ecx + 0x20);
    if (cVar1 == '\x01') {
      return *(uint *)(in_ecx + 0xc);
    }
    if (cVar1 == '\x02') {
      return *(uint *)(in_ecx + 8);
    }
    if (cVar1 == '\x03') {
      return *(uint *)(in_ecx + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00564840 */
uint F_00564840(unsigned int gen_a0)
{
  GEN_ENTER(0x564840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    if (*(char *)(in_ecx + 0x20) == '\x01') {
      return *(uint *)(in_ecx + 0x10);
    }
    if (*(char *)(in_ecx + 0x20) == '\x02') {
      return *(uint *)(in_ecx + 0xc);
    }
  }
  return 0;
}

/* ref: FUN_00564880 */
uint F_00564880(unsigned int gen_a0)
{
  GEN_ENTER(0x564880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(char *)(in_ecx + 0x20) == '\x03')) {
    return *(uint *)(in_ecx + 0x14);
  }
  return 0;
}

/* ref: FUN_00564c60 */
uint F_00564c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x564c60u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_00564cd0 */
uint F_00564cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x564cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406b30(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_00406b30(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    uVar4 = F_00406b30(*(int *)((int)this + 0x28));
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return uVar3;
}

/* ref: FUN_00564e90 */
uint F_00564e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) == -1) {
      uVar1 = F_005571e0(this,param_1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))));
      *((ushort *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) = uVar1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) != -1) {
        F_00556b20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564f00 */
uint F_00564f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) == -1) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
      F_00556c70(this_00);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) = this_00;
      *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) = (short)param_1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) != -1) {
        F_00556c70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564f70 */
uint F_00564f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) != 0) {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) == -1) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
      F_00556e70(this_00);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = this_00;
      *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) = (short)param_1;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) != -1) {
        F_00556e70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))));
      }
    }
    if (-1 < *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2)))) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_00564fe0 */
uint F_00564fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x564fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00565040 */
uint F_00565040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x14) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_005650a0 */
uint F_005650a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5650a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2)));
  if (-1 < sVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + sVar1 * 4))) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + sVar1 * 4))) = 0;
    }
    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 2))) = 0xffff;
  }
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) != 0) {
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = (int *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + param_1 * 4))) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00565100 */
unsigned int F_00565100(unsigned int gen_a0)
{
  GEN_ENTER(0x565100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a094c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(uint *)((int)this + 0x88) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(uint *)((int)this + 0x8c) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(uint *)((int)this + 0x90) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return 0;
}

/* ref: FUN_005651c0 */
unsigned int F_005651c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5651c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  int local_8;
  
  iVar2 = param_4;
  if (param_3 < param_4) {
    if (param_4 - param_3 < 7) {
      *(undefined4 *)(param_1 + param_3 * 8) = *(undefined4 *)((int)param_2 + param_3 * 8);
      *(undefined4 *)(param_1 + 4 + param_3 * 8) = *(undefined4 *)((int)param_2 + 4 + param_3 * 8);
      iVar2 = param_3 + 1;
      if (iVar2 <= param_4) {
        puVar1 = (uint *)((int)param_2 + iVar2 * 8);
        puVar3 = (uint *)(param_1 + -8 + iVar2 * 8);
        param_2 = puVar3;
        iVar4 = iVar2;
        do {
          for (; (param_3 < iVar2 && (*puVar1 < *puVar3)); puVar3 = puVar3 + -2) {
            puVar3[2] = *puVar3;
            puVar3[3] = puVar3[1];
            iVar2 = iVar2 + -1;
          }
          puVar3 = param_2 + 2;
          *(uint *)(param_1 + iVar2 * 8) = *puVar1;
          *(uint *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
          iVar2 = iVar4 + 1;
          puVar1 = puVar1 + 2;
          param_2 = puVar3;
          iVar4 = iVar2;
        } while (iVar2 <= param_4);
        return 0;
      }
    }
    else {
      iVar6 = param_3 + param_4 >> 1;
      F_005651c0(this,(int)param_2,(uint *)param_1,param_3,iVar6);
      iVar4 = iVar6 + 1;
      F_005651c0(this,(int)param_2,(uint *)param_1,iVar4,param_4);
      puVar1 = (uint *)(param_1 + param_3 * 8);
      local_8 = param_3;
      puVar3 = (uint *)((int)param_2 + iVar4 * 8);
      puVar7 = (uint *)((int)param_2 + param_3 * 8);
      param_4 = iVar4;
      while ((iVar4 = param_4, param_3 <= iVar6 && (iVar4 = param_3, param_4 <= iVar2))) {
        if (*puVar3 < *puVar7) {
          param_4 = param_4 + 1;
          *puVar1 = *puVar3;
          uVar5 = puVar3[1];
          puVar3 = puVar3 + 2;
        }
        else {
          param_3 = param_3 + 1;
          *puVar1 = *puVar7;
          uVar5 = puVar7[1];
          puVar7 = puVar7 + 2;
        }
        puVar1[1] = uVar5;
        local_8 = local_8 + 1;
        puVar1 = puVar1 + 2;
        if (iVar2 < local_8) {
          return 0;
        }
      }
      F_00c46aa0(param_1 + local_8 * 8,(int)param_2 + iVar4 * 8,(iVar2 - local_8) * 8 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00565340 */
uint F_00565340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x565340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406bd0(0x18,0,uVar2,0);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3[4] = 0;
  puVar3[5] = 0;
  iVar4 = *(int *)this;
  if (*(int *)this == 0) {
    *(undefined4 * PTR32 *)this = puVar3;
  }
  else {
    do {
      iVar1 = *(int *)(iVar4 + 0x10);
      if (iVar1 == 0) {
        *(undefined4 * PTR32 *)(iVar4 + 0x10) = puVar3;
        break;
      }
      iVar4 = iVar1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(puVar3 + 5) = (undefined1)param_1;
  puVar3[1] = param_4;
  puVar3[3] = param_2;
  puVar3[2] = param_5;
  puVar3[5] = puVar3[5] ^ ((param_6 & 0xff) << 0x14 ^ puVar3[5]) & 0x100000;
  *puVar3 = param_3;
  return (uint)puVar3;
}

/* ref: FUN_005653d0 */
uint F_005653d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5653d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00565400 */
uint F_00565400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)this;
  do {
    iVar3 = iVar2;
    if (iVar3 == 0) {
      iVar3 = 0;
      break;
    }
    iVar2 = *(int *)(iVar3 + 0x10);
  } while (*(int *)(iVar3 + 0x10) != param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 0x10) = uVar1;
  }
  if (param_1 == *(int *)this) {
    *(uint *)this = uVar1;
  }
  F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00565dd0 */
uint F_00565dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x565dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  if (*(short *)((int)this + 8) != 0) {
    if (*(short *)((int)this + 8) != 0) goto LAB_00565dfd;
    iVar5 = 0;
    while( true ) {
      uVar4 = 0;
      if ((*(byte *)(iVar5 + 0x6e) & 1) != 0) {
        if (*(short *)(iVar5 + 0x6c) != 0) {
          do {
            uVar6 = (uint)uVar4;
            iVar1 = *(int *)(iVar5 + uVar6 * 4);
            if (iVar1 != 0) {
              F_0050c620(iVar1,0,0);
              *(undefined4 *)(iVar5 + uVar6 * 4) = 0;
              *(undefined4 *)(iVar5 + 0x24 + uVar6 * 4) = 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(iVar5 + 0x6c));
        }
        if (*(int *)(iVar5 + 0x60) != 0) {
          F_00406810(*(int *)(iVar5 + 0x60));
          *(undefined4 *)(iVar5 + 0x60) = 0;
        }
        if (*(int *)(iVar5 + 100) != 0) {
          F_00406810(*(int *)(iVar5 + 100));
          *(undefined4 *)(iVar5 + 100) = 0;
        }
        *(byte *)(iVar5 + 0x6e) = *(byte *)(iVar5 + 0x6e) & 0xfc;
        *(undefined4 *)(iVar5 + 0x68) = 0;
      }
      uVar3 = uVar3 + 1;
      if (*(ushort *)((int)this + 8) <= uVar3) break;
LAB_00565dfd: ;
      iVar5 = (uint)uVar3 * 0x74 + *(int *)((int)this + 4);
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      **(undefined4 * PTR32 *)((int)this + 0xc) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = 0;
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) != 0) {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10)));
      if (iVar5 != 0) {
        F_00406810(iVar5);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00565ee0 */
uint F_00565ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x565ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  uint * puVar11;
  uint uVar12;
  
  if ((*(ushort *)((int)this + 8) <= (ushort)param_1) ||
     (iVar9 = (uint)(ushort)param_1 * 0x74 + *(int *)((int)this + 4), iVar9 == 0)) {
    return 0xffffffff;
  }
  if ((*(byte *)(iVar9 + 0x6e) & 2) != 0) {
    return 0xfffffffe;
  }
  uVar2 = 0;
  if (*(short *)(iVar9 + 0x6c) != 0) {
    do {
      uVar5 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar9 + 0x24 + uVar5 * 4) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar9 + uVar5 * 4) + 0xfc)));
    } while (uVar2 < *(ushort *)(iVar9 + 0x6c));
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar9 + 0x20) + 0x5c))))(*(int * PTR32 *)(iVar9 + 0x20));
  piVar3 = (int *)F_00404270();
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)(uVar5 + 8) + uVar5)));
  puVar8 = (undefined4 *)(iVar9 + 0x44);
  puVar10 = puVar6;
  for (iVar7 = 7; puVar10 = puVar10 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar10;
    puVar8 = puVar8 + 1;
  }
  if (*(int *)(iVar9 + 0x44) != 0) {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(int *)(iVar9 + 0x44) << 4,0x10)));
    *(undefined * PTR32 *)(iVar9 + 0x60) = pvVar4;
    F_00c48350(pvVar4,0,*(int *)(iVar9 + 0x44) << 4);
    puVar10 = *(undefined4 * PTR32 *)(iVar9 + 0x60);
    uVar12 = 0;
    puVar6 = puVar6 + 8;
    if (*(int *)(iVar9 + 0x44) != 0) {
      do {
        *puVar10 = *puVar6;
        *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined1 *)((int)puVar10 + 6) = *(undefined1 *)((int)puVar6 + 6);
        *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar6 + 2);
        *(undefined2 *)((int)puVar10 + 10) = *(undefined2 *)((int)puVar6 + 10);
        *(undefined1 *)(puVar10 + 3) = *(undefined1 *)(puVar6 + 3);
        *(undefined1 *)((int)puVar10 + 0xd) = *(undefined1 *)((int)puVar6 + 0xd);
        *(undefined1 *)((int)puVar10 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
        uVar12 = uVar12 + 1;
        *(undefined1 *)((int)puVar10 + 0xf) = *(undefined1 *)((int)puVar6 + 0xf);
        puVar6 = puVar6 + 4;
        puVar10 = puVar10 + 4;
      } while ((uVar12 & 0xffff) < *(uint *)(iVar9 + 0x44));
    }
  }
  puVar10 = ((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0xc) + uVar5)));
  iVar7 = puVar10[1];
  uVar5 = 0;
  *(int *)(iVar9 + 0x48) = iVar7;
  if (iVar7 != 0) {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,iVar7 << 4,0x10)));
    *(undefined * PTR32 *)(iVar9 + 100) = pvVar4;
    F_00c48350(pvVar4,0,*(int *)(iVar9 + 0x48) << 4);
    puVar8 = *(undefined4 * PTR32 *)(iVar9 + 100);
    uVar12 = 0;
    if (*(int *)(iVar9 + 0x48) != 0) {
      do {
        *puVar8 = puVar10[4];
        puVar8[1] = puVar10[5];
        *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar10 + 6);
        *(undefined2 *)((int)puVar8 + 10) = *(undefined2 *)((int)puVar10 + 0x1a);
        puVar8[3] = puVar10[7];
        uVar12 = uVar12 + 1;
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
      } while ((uVar12 & 0xffff) < *(uint *)(iVar9 + 0x48));
    }
  }
  if (*(int *)(iVar9 + 0x20) != 0) {
    F_0050c620(*(int *)(iVar9 + 0x20),0,0);
    *(undefined4 *)(iVar9 + 0x20) = 0;
  }
  puVar11 = *(uint * PTR32 *)(iVar9 + 0x60);
  bVar1 = *(byte *)(iVar9 + 0x6e) & 0xfb;
  *(byte *)(iVar9 + 0x6e) = bVar1 | 1;
  *(undefined1 *)(iVar9 + 0x6f) = 0;
  uVar12 = *puVar11;
  if ((*(uint *)(iVar9 + 0x44) != 0) && (uVar12 < 0x100)) {
    do {
      if (0xff < *puVar11) break;
      if (*puVar11 != uVar12 + uVar5) goto LAB_005660d4;
      uVar5 = uVar5 + 1;
      puVar11 = puVar11 + 4;
    } while (uVar5 < *(uint *)(iVar9 + 0x44));
    *(byte *)(iVar9 + 0x6e) = bVar1 | 5;
    *(char *)(iVar9 + 0x6f) = (char)uVar12;
  }
LAB_005660d4: ;
  *(byte *)(iVar9 + 0x6e) = *(byte *)(iVar9 + 0x6e) | 2;
  return 0;
}

/* ref: FUN_005660f0 */
uint F_005660f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5660f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  (*(int * PTR32 *)((int)this + 0xc))[2] = *((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xfc)));
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) = *(undefined4 *)(uVar3 + 8);
  piVar4 = (int *)F_00404270();
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5,0x10);
  *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))) = uVar3;
  F_00c48350(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))),0,
          *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5);
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4);
  F_00c46aa0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x10))),uVar3 + 0x10,
             *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) << 5);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = 0;
  }
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18)));
  *pbVar1 = *pbVar1 | 1;
  return 0;
}

/* ref: FUN_005661b0 */
uint F_005661b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5661b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  if (cVar1 == '\r') {
    return ((*(char * PTR32 *)&gen_args[1])[1] == '\n') + 1;
  }
  if (cVar1 == '\n') {
    return 1;
  }
  if ((cVar1 == '\x02') && ((*(char * PTR32 *)&gen_args[1])[1] == '\x10')) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x18)));
    uVar2 = F_00a24d30(this_00,(*(char * PTR32 *)&gen_args[1]) + 2,(int)this_00 + 0x350,&(*(char * PTR32 *)&gen_args[1]),1);
    return (uint)((*(char * PTR32 *)&gen_args[1]) + uVar2 + 3);
  }
  return 0;
}

/* ref: FUN_00566220 */
uint F_00566220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x566220u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x18)));
  uVar1 = F_00a24d30(this_00,(*(int *)&gen_args[3]) + 2,(int)this_00 + 0x350,&(*(int *)&gen_args[3]),1);
  (*(undefined4 * PTR32 *)&gen_args[2])[1] = uVar1;
  uVar1 = uVar1 + 3 + (*(int *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[2]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[2])[3] = uVar1;
  (*(undefined4 * PTR32 *)&gen_args[2])[2] = 0;
  return uVar1;
}

/* ref: FUN_00566270 */
uint F_00566270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x566270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  if ((*(int *)((int)this + 0xec) != 0) && (*(undefined * PTR32 *)((int)this + 0x13c) != (undefined *)0x0)) {
    F_00558cd0(*(undefined * PTR32 *)((int)this + 0x13c),param_1,param_2 & 0xffff,param_3 & 0xffff);
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_005662b0 */
uint F_005662b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5662b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  code * pcVar7;
  int iVar8;
  char * pcVar9;
  
  pcVar9 = (*(char * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x30)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 100)));
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  if (cVar1 == '\0') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
    return uVar4;
  }
  do {
    uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0]));
    if ((char)uVar4 != '\0') break;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined * PTR32 *)&gen_args[0]),pcVar9)
    ;
    cVar1 = *pcVar9;
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if (cVar1 == '\r') {
      iVar8 = (pcVar9[1] == '\n') + 1;
LAB_00566360: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pcVar9);
      }
      pcVar9 = pcVar9 + iVar8;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
      (*(uint *)(gen_frame + 0x34)) = 0;
    }
    else {
      if (cVar1 == '\n') {
        iVar8 = 1;
        goto LAB_00566360;
      }
      if ((cVar1 == '\x02') && (pcVar9[1] == '\x10')) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar9 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x20)),1);
        iVar8 = (*(int *)(gen_frame + 0x20)) + 3 + uVar4;
        if (iVar8 != 0) goto LAB_00566360;
      }
      if ((*pcVar9 == '\x02') && (bVar2 = pcVar9[1], (*(uint *)(gen_frame + 0x24)) = (uint)bVar2, bVar2 != 0)) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar9 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar8 = uVar4 + 3 + (*(int *)(gen_frame + 0x1c));
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x18)) = iVar8;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        if (iVar8 < 1) goto LAB_005663f6;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]),pcVar9,(*(uint *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0xc)));
        (*(uint *)(gen_frame + 0x34)) = 0;
        pcVar9 = pcVar9 + iVar8;
      }
      else {
LAB_005663f6: ;
        (*(uint *)(gen_frame + 0x24)) = 1;
        uVar5 = F_005583a0(&(*(uint *)(gen_frame + 0x24)),pcVar9);
        if (uVar5 == 0) {
LAB_00566459: ;
          puVar6 = (uint *)F_00557be0((*(undefined * PTR32 *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x30)));
          (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
          uVar4 = 0;
          if (puVar6 != (uint *)0x0) {
            uVar5 = *puVar6;
            if (((*(uint *)(gen_frame + 0x34)) == 0) || ((*(uint *)(gen_frame + 0x28)) == 0)) {
              uVar4 = 0;
            }
            else {
              uVar4 = F_00557ac0((*(uint *)(gen_frame + 0x34)),uVar5,(*(int *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)));
            }
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
            goto LAB_0056649b;
          }
        }
        else {
          puVar6 = (uint *)F_005579c0(uVar5,(*(int *)(gen_frame + 0x30)));
          (*(uint * PTR32 *)(gen_frame + 0x2c)) = puVar6;
          if (puVar6 == (uint *)0x0) goto LAB_00566459;
          if (((*(uint *)(gen_frame + 0x34)) == 0) || ((*(uint *)(gen_frame + 0x28)) == 0)) {
            uVar4 = 0;
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
          }
          else {
            uVar4 = F_00557ac0((*(uint *)(gen_frame + 0x34)),uVar5,(*(int *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)));
            pcVar7 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
          }
LAB_0056649b: ;
          uVar4 = (*pcVar7)((*(undefined * PTR32 *)&gen_args[0]),(*(uint * PTR32 *)(gen_frame + 0x2c)),uVar4);
          (*(uint *)(gen_frame + 0x34)) = uVar5;
        }
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
        pcVar9 = pcVar9 + (*(uint *)(gen_frame + 0x24));
      }
    }
  } while (*pcVar9 != '\0');
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) & 0xefffffff;
  return uVar4;
}

/* ref: FUN_005664e0 */
byte F_005664e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5664e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  cVar1 = *(*(char * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x24)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  do {
    if ((cVar1 == '\0') || (uVar4 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0])), (char)uVar4 != '\0')) {
      return 1;
    }
    cVar1 = *pcVar5;
    if (cVar1 == '\r') {
      iVar6 = (pcVar5[1] == '\n') + 1;
LAB_00566576: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(char * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pcVar5);
      }
      pcVar5 = pcVar5 + iVar6;
    }
    else {
      if (cVar1 == '\n') {
        iVar6 = 1;
        goto LAB_00566576;
      }
      if ((cVar1 == '\x02') && (pcVar5[1] == '\x10')) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar5 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar6 = (*(int *)(gen_frame + 0x1c)) + 3 + uVar4;
        if (iVar6 != 0) goto LAB_00566576;
      }
      if ((*pcVar5 == '\x02') && (bVar2 = pcVar5[1], (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28)), bVar2 != 0)) {
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 0xf0) + 0x18)));
        uVar4 = F_00a24d30(pvVar3,pcVar5 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x18)),1);
        iVar6 = uVar4 + 3 + (*(int *)(gen_frame + 0x18));
        (*(uint *)(gen_frame + 0xc)) = uVar4;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0x14)) = iVar6;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28));
        if (iVar6 < 1) goto LAB_005665ef;
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x28)),pcVar5,(uint)bVar2,&(*(undefined4 *)(gen_frame + 0x8)));
        pcVar5 = pcVar5 + iVar6;
        (*(undefined * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)(gen_frame + 0x28));
      }
      else {
LAB_005665ef: ;
        (*(int *)(gen_frame + 0x20)) = 1;
        uVar4 = F_005583a0(&(*(int *)(gen_frame + 0x20)),pcVar5);
        if ((1 < (*(int *)(gen_frame + 0x20))) || (((9 < uVar4 - 0x30 && (uVar4 != 0x25)) && (7 < uVar4 - 0x28)))) {
          return 0;
        }
        pcVar5 = pcVar5 + (*(int *)(gen_frame + 0x20));
      }
    }
    cVar1 = *pcVar5;
  } while( true );
}

/* ref: FUN_00566640 */
uint F_00566640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566640u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  
  pbVar7 = (*(byte * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 100)));
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 3)))) = (byte)((uint)*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) >> 0x19) & 1;
  do {
    if ((bVar1 == 0) || (uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]))))((*(undefined * PTR32 *)&gen_args[0])), (char)uVar3 != '\0')) {
      return uVar3;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(undefined * PTR32 *)&gen_args[0]),pbVar7)
    ;
    bVar1 = *pbVar7;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar3 = (uint)(pbVar7[1] == 10);
      iVar6 = uVar3 + 1;
LAB_005666f6: ;
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 3)))) != 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(uint *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),pbVar7);
      }
      (*(uint *)(gen_frame + 0x38)) = 0;
      pbVar7 = pbVar7 + iVar6;
    }
    else {
      if (bVar1 == 10) {
        iVar6 = 1;
        goto LAB_005666f6;
      }
      if (bVar1 == 2) {
        if (pbVar7[1] == 0x10) {
          pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xf0) + 0x18)));
          uVar3 = F_00a24d30(pvVar2,pbVar7 + 2,(int)pvVar2 + 0x350,&(*(int *)(gen_frame + 0x20)),1);
          iVar6 = (*(int *)(gen_frame + 0x20)) + 3 + uVar3;
          if (iVar6 != 0) goto LAB_005666f6;
        }
        if ((*pbVar7 != 2) || ((*(uint *)(gen_frame + 0x28)) = (uint)pbVar7[1], pbVar7[1] == 0)) goto LAB_00566785;
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xf0) + 0x18)));
        uVar3 = F_00a24d30(pvVar2,pbVar7 + 2,(int)pvVar2 + 0x350,&(*(int *)(gen_frame + 0x1c)),1);
        iVar6 = uVar3 + 3 + (*(int *)(gen_frame + 0x1c));
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(int *)(gen_frame + 0x10)) = iVar6;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        if (iVar6 < 1) goto LAB_00566785;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(uint *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]),pbVar7,(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x4)));
        (*(uint *)(gen_frame + 0x38)) = 0;
        pbVar7 = pbVar7 + iVar6;
      }
      else {
LAB_00566785: ;
        uVar3 = (*(uint *)(gen_frame + 0x38));
        bVar1 = *pbVar7;
        (*(uint *)(gen_frame + 0x30)) = 0;
        if ((((bVar1 < 0x20) || (bVar1 == 0x7f)) || ((0x1f < bVar1 && (bVar1 < 0x7f)))) ||
           ((0xa0 < bVar1 && (bVar1 < 0xe0)))) {
          (*(uint *)(gen_frame + 0x28)) = 1;
        }
        else if (((bVar1 < 0x81) || (0x9f < bVar1)) && (0xf < (byte)(bVar1 + 0x20))) {
          (*(uint *)(gen_frame + 0x28)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x28)) = 2;
        }
        if ((*(uint *)(gen_frame + 0x28)) == 1) {
          uVar5 = (uint)bVar1;
LAB_005667e3: ;
          (*(uint *)(gen_frame + 0x30)) = uVar5;
        }
        else if ((*(uint *)(gen_frame + 0x28)) == 2) {
          uVar5 = (uint)CONCAT11(bVar1,pbVar7[1]);
          goto LAB_005667e3;
        }
        puVar4 = *(uint * PTR32 *)((*(int *)(gen_frame + 0x34)) + 0x60);
        uVar5 = 0;
        if (*(uint *)((*(int *)(gen_frame + 0x34)) + 0x44) != 0) {
          do {
            if ((short)puVar4[1] == (short)(*(uint *)(gen_frame + 0x30))) {
              (*(uint *)(gen_frame + 0x38)) = *(uint *)(*(undefined * PTR32 *)&gen_args[0]);
              uVar5 = F_00557b50(uVar3,(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x24)));
              uVar3 = (*(uint *)(gen_frame + 0x38));
              (*(undefined * PTR32 *)&gen_args[0]) = (*(uint * PTR32 *)(gen_frame + 0x18));
              goto LAB_00566838;
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 4;
          } while (uVar5 < *(uint *)((*(int *)(gen_frame + 0x34)) + 0x44));
        }
        puVar4 = (uint *)F_00557be0((*(undefined * PTR32 *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x34)));
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar4;
        uVar3 = 0;
        if (puVar4 != (uint *)0x0) {
          (*(uint *)(gen_frame + 0x30)) = *puVar4;
          uVar5 = F_00557b50((*(uint *)(gen_frame + 0x38)),*puVar4,(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x24)));
          uVar3 = *(uint *)(*(undefined * PTR32 *)&gen_args[0]);
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x14));
LAB_00566838: ;
          ((code *)*(gen_code32 *)(uVar3 + 0x18))((*(undefined * PTR32 *)&gen_args[0]),puVar4,uVar5);
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x30));
          uVar3 = (*(uint *)(gen_frame + 0x30));
        }
        pbVar7 = pbVar7 + (*(uint *)(gen_frame + 0x28));
      }
    }
    bVar1 = *pbVar7;
  } while( true );
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf5 */
uint F_00566880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
    *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
    if ((*(uint *)(this + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
  }
  uVar1 = *(uint *)(this + 0xbc) + 1;
  *(uint *)(this + 0xbc) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf6 */
uint F_005668c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5668c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
    *(int *)(this + 0xa4) = *(int *)(this + 0xa4) + 1;
    uVar2 = (uint)(*(byte *)(param_1 + 6) >> 2);
    *(int *)(this + uVar2 * 4 + 0xc0) = *(int *)(this + uVar2 * 4 + 0xc0) + 1;
    if ((*(uint *)(this + 0x50) >> 0x11 & 1) != 0) {
      *(int *)(this + uVar2 * 4 + 0x100) = *(int *)(this + uVar2 * 4 + 0x100) + 9;
    }
    uVar1 = *(uint *)(this + 0x50);
    if (((uVar1 & 0x8000000) == 0) && (((uVar1 >> 1 | uVar1) >> 0x10 & 1) != 0)) {
      *(int *)(this + uVar2 * 4 + 0xe0) = *(int *)(this + uVar2 * 4 + 0xe0) + 1;
    }
    uVar1 = *(uint *)(this + 0x50);
    if (((uVar1 & 0x80000) != 0) &&
       (((uVar1 & 0x8000000) != 0 || (((uVar1 >> 1 | uVar1) >> 0x10 & 1) == 0)))) {
      *(int *)(this + uVar2 * 4 + 0x120) = *(int *)(this + uVar2 * 4 + 0x120) + 1;
    }
    if ((*(uint *)(this + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + 1;
    }
    *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
    return *(uint *)(this + 0x50) >> 0x14;
  }
  *(int *)(this + 0xbc) = *(int *)(this + 0xbc) + 1;
  return *(uint *)(this + 0xb4);
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf1 */
uint F_00566980(unsigned int gen_a0)
{
  GEN_ENTER(0x566980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  fVar3 = F_005580e0(*(undefined4 *)(this + 8),*(float *)(this + 0x28),1);
  *(float *)(this + 0x148) = (float)fVar3;
  *(undefined4 *)(this + 0x14c) = uVar4;
  *(undefined4 *)(this + 0x150) = uVar4;
  *(undefined4 *)(this + 0x154) = uVar4;
  *(undefined4 *)(this + 0x158) = uVar4;
  *(undefined4 *)(this + 0x15c) = uVar4;
  fVar1 = *((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54)));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0x160) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) / (float10)fVar1)));
  pvVar2 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf5 */
uint F_00566a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x566a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    fVar2 = ((float10)GEN_TOD(((int)*(char *)(param_1 + 0x58) + (int)*(char *)(param_2 + 10)))) +
            (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_2 + 6) *
                            (float10)*(float *)(param_1 + 0x30))));
  }
  else {
    if (*(uint *)(param_1 + 0xbc) < *(uint *)(param_1 + 0xb4)) goto LAB_00566a72;
    fVar2 = (float10)*(float *)(param_1 + 0x24);
  }
  *(float *)(param_1 + 0x14c) = (float)fVar2;
LAB_00566a72: ;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(float *)(param_1 + 0x158) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x14c) + (float10)*(float *)(param_1 + 0x158))));
  if (*(uint *)(param_1 + 0xb4) <= *(uint *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    if ((*(uint *)(param_1 + 0x50) >> 0x14 & 1) != 0) {
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0xbc) + 1;
  *(uint *)(param_1 + 0xbc) = uVar1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf6 */
uint F_00566ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x566ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = param_3;
  if (*(int *)(param_1 + 0x18) == 1) {
    param_3 = 0;
    fVar3 = (float10)*(float *)(param_1 + 0x160);
    if (uVar2 != 0) {
      param_3 = *(uint *)(uVar2 + 0xc);
    }
    fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(int)(char)param_1[0x58] +
                                     ((float10)(int)*(char *)(param_2 + 0xe) + (float10)(int)param_3
                                     )) * fVar3))) +
                   (float10)((float)GEN_TOF((fVar3 * (float10)*(byte *)(param_2 + 0xc)))))));
    *(float *)(param_1 + 0x14c) = fVar1;
    if ((*(uint *)(param_1 + 0x50) & 0x10000000) != 0) {
      *(float *)(param_1 + 0x14c) =
           ((float)GEN_TOF(((float10)fVar1 + (float10)(int)*((char *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x70))) * fVar3)))
      ;
    }
  }
  else if (*(uint *)(param_1 + 0xb4) <= *(uint *)(param_1 + 0xbc)) {
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x24);
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(float *)(param_1 + 0x158) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x14c) + (float10)*(float *)(param_1 + 0x158))));
  uVar2 = F_005668c0(param_1,param_2,uVar2);
  return uVar2;
}

/* ref: FUN_00566bb0 */
unsigned int F_00566bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x566bb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[1] = param_4;
  *param_2 = (float)((float10)param_7 + (float10)param_3);
  param_2[2] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[6] = param_3;
  param_2[7] = param_6;
  param_2[8] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0xc] = param_5;
  param_2[0xd] = param_6;
  param_2[0xe] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x12] = (float)((float10)param_7 + (float10)param_5);
  param_2[0x13] = param_4;
  param_2[0x14] = fVar1;
  return 0;
}

/* ref: FUN_00566c40 */
unsigned int F_00566c40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x566c40u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_3;
  param_2[2] = *(float *)(in_ecx + 0x290);
  *param_2 = ((float)GEN_TOF(((float10)param_8 + ((float10)param_4 - fVar2))));
  param_2[1] = (float)((float10)param_5 - fVar2);
  param_2[10] = *(float *)(in_ecx + 0x290);
  param_2[8] = (float)((float10)param_4 - fVar2);
  param_2[9] = (float)(fVar2 + (float10)param_7);
  param_2[0x12] = *(float *)(in_ecx + 0x290);
  param_2[0x10] = (float)((float10)param_6 + fVar2);
  param_2[0x11] = (float)(fVar2 + (float10)param_7);
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x19] = (float)((float10)param_5 - fVar2);
  param_2[0x1a] = fVar1;
  param_2[0x18] = ((float)GEN_TOF((((float10)param_6 + fVar2) + (float10)param_8)));
  return 0;
}

/* ref: FUN_00566cd0 */
unsigned int F_00566cd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x566cd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_2[2] = *(float *)(in_ecx + 0x290);
  *param_2 = (float)((float10)param_8 + (float10)param_4);
  fVar2 = (float)((float10)param_3 + (float10)param_5);
  param_2[1] = fVar2;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[6] = param_4;
  param_2[8] = fVar1;
  fVar3 = (float)((float10)param_3 + (float10)param_7);
  param_2[7] = fVar3;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0xd] = fVar3;
  param_2[0xc] = param_6;
  param_2[0xe] = fVar1;
  fVar1 = *(float *)(in_ecx + 0x290);
  param_2[0x13] = fVar2;
  param_2[0x12] = (float)((float10)param_8 + (float10)param_6);
  param_2[0x14] = fVar1;
  return 0;
}

/* ref: FUN_00566d60 */
unsigned int F_00566d60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x566d60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  
  param_2[2] = *(float *)(param_1 + 0x290);
  *param_2 = param_3;
  param_2[1] = param_4;
  fVar1 = *(float *)(param_1 + 0x290);
  param_2[8] = param_3;
  param_2[10] = fVar1;
  param_2[9] = param_6;
  fVar1 = *(float *)(param_1 + 0x290);
  param_2[0x11] = param_6;
  param_2[0x12] = fVar1;
  param_2[0x10] = param_5;
  fVar1 = *(float *)(param_1 + 0x290);
  param_2[0x18] = param_5;
  param_2[0x19] = param_4;
  param_2[0x1a] = fVar1;
  param_2[3] = *(float *)(param_1 + 0x3c);
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined2 *)((int)param_2 + 0x12) = 0;
  param_2[6] = REFG(undefined4, 0x13799b0);
  param_2[7] = REFG(undefined4, 0x13799b4);
  param_2[5] = REFG(undefined4, 0x131de48);
  param_2[0xb] = *(float *)(param_1 + 0x3c);
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined2 *)((int)param_2 + 0x32) = 0;
  param_2[0xe] = REFG(undefined4, 0x13799b0);
  param_2[0xf] = REFG(undefined4, 0x13799b4);
  param_2[0xd] = REFG(undefined4, 0x131de48);
  param_2[0x13] = *(float *)(param_1 + 0x3c);
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined2 *)((int)param_2 + 0x52) = 0;
  param_2[0x16] = REFG(undefined4, 0x13799b0);
  param_2[0x17] = REFG(undefined4, 0x13799b4);
  param_2[0x15] = REFG(undefined4, 0x131de48);
  param_2[0x1b] = *(float *)(param_1 + 0x3c);
  param_2[0x1c] = 0.0;
  param_2[0x1e] = REFG(undefined4, 0x13799b0);
  param_2[0x1f] = REFG(undefined4, 0x13799b4);
  param_2[0x1d] = REFG(undefined4, 0x131de48);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf0 */
uint F_00566e80(unsigned int gen_a0)
{
  GEN_ENTER(0x566e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_EAX = 0;
  uint3 uVar1;
  
  if (this[0x17d] == (undefined1)0x0) {
    uVar1 = (uint3)((uint)in_EAX >> 8);
    if ((this[0x17c] == (undefined1)0x0) ||
       (!((float10)*(float *)(this + 0x170) <
         (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x168) + (float10)*(float *)(this + 0x158)))))))
    {
      in_EAX = (uint)uVar1 << 8;
    }
    else {
      in_EAX = CONCAT31(uVar1,1);
    }
    this[0x17d] = SUB41(in_EAX,0);
    if (SUB41(in_EAX,0) != (undefined1)0x0) {
      in_EAX = *(int *)(this + 0xbc) + -1;
      *(int *)(this + 0x178) = in_EAX;
    }
    if (this[0x17d] == (undefined1)0x0) {
      return (uint)(*(uint *)(this + 0xb8) <= *(uint *)(this + 0xbc));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf1 */
uint F_00566f00(unsigned int gen_a0)
{
  GEN_ENTER(0x566f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = F_00566980((undefined *)this);
  fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x16c) + (float10)*(float *)(this + 0x15c))));
  fVar3 = (float10)*(float *)(this + 0x174);
  if ((fVar2 <= fVar3) && (fVar3 < (float10)*(float *)(this + 0x148) + fVar2)) {
    this[0x17c] = (undefined1)0x1;
    if ((float10)*(float *)(this + 0x170) < (float10)*(float *)(this + 0x168)) {
      this[0x17d] = (undefined1)0x1;
      return uVar1;
    }
  }
  else if (fVar3 < (float10)*(float *)(this + 0x16c)) {
    this[0x17d] = (undefined1)0x1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf2 */
unsigned int F_00566f90(unsigned int gen_a0)
{
  GEN_ENTER(0x566f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x17d] == (undefined1)0x0) {
    if ((this[0x17c] != (undefined1)0x0) &&
       ((float10)*(float *)(this + 0x170) <
        (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x168) + (float10)*(float *)(this + 0x158)))))) {
      *(int *)(this + 0x178) = *(int *)(this + 0xbc) + -1;
      this[0x17d] = (undefined1)0x1;
      return 0;
    }
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(this + 0xbc);
    this[0x17d] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf1 */
uint F_00567000(unsigned int gen_a0)
{
  GEN_ENTER(0x567000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined2 *)(this + 0x16c) = 0;
  this[0x16e] = (undefined1)0x0;
  *(undefined4 *)(this + 0x174) = 0;
  uVar1 = F_00566980((undefined *)this);
  return uVar1;
}

/* ref: FUN_00567030 */
uint F_00567030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 8);
  uVar5 = *(uint *)(iVar2 + 0x9c) >> 0x19 & 0xffffff01;
  bVar1 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  cVar4 = (char)uVar5;
  pbVar6 = param_1;
  do {
    if ((bVar1 == 0) || (uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this), (char)uVar5 != '\0')) {
      return uVar5;
    }
    bVar1 = *pbVar6;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar7 = (pbVar6[1] == 10) + 1;
LAB_005670c7: ;
      this = (*(int * PTR32 *)(gen_frame + 0x8));
      if (cVar4 != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)),pbVar6,uVar7);
        this = (*(int * PTR32 *)(gen_frame + 0x8));
      }
    }
    else {
      if (bVar1 == 10) {
        uVar7 = 1;
        goto LAB_005670c7;
      }
      if (bVar1 == 2) {
        if (pbVar6[1] == 0x10) {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
          uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x4)),1);
          uVar7 = (*(int *)(gen_frame + 0x4)) + 3 + uVar5;
          this = (*(int * PTR32 *)(gen_frame + 0x8));
          if (uVar7 != 0) goto LAB_005670c7;
        }
        if ((*pbVar6 != 2) || (pbVar6[1] == 0)) goto LAB_00567118;
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
        uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x0)),1);
        uVar5 = (*(int *)(gen_frame + 0x0)) + 3 + uVar5;
        uVar7 = uVar5;
        if ((int)uVar5 < 1) goto LAB_00567118;
      }
      else {
LAB_00567118: ;
        bVar1 = *pbVar6;
        if ((byte)(bVar1 + 0x80) < 0x40) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0x80) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0xe0) {
          uVar5 = 2;
          uVar7 = uVar5;
        }
        else if (bVar1 < 0xf0) {
          uVar5 = 3;
          uVar7 = uVar5;
        }
        else {
          uVar5 = (-(uint)(bVar1 < 0xf8) & 3) + 1;
          uVar7 = uVar5;
        }
      }
    }
    pbVar6 = pbVar6 + uVar7;
    bVar1 = *pbVar6;
  } while( true );
}

/* ref: FUN_00567170 */
uint F_00567170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  undefined * pvVar3;
  char cVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 8);
  uVar5 = *(uint *)(iVar2 + 0x9c) >> 0x19 & 0xffffff01;
  bVar1 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  cVar4 = (char)uVar5;
  pbVar6 = param_1;
  do {
    if ((bVar1 == 0) || (uVar5 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this), (char)uVar5 != '\0')) {
      return uVar5;
    }
    bVar1 = *pbVar6;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if (bVar1 == 0xd) {
      uVar7 = (pbVar6[1] == 10) + 1;
LAB_00567207: ;
      this = (*(int * PTR32 *)(gen_frame + 0x8));
      if (cVar4 != '\0') {
        uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)),pbVar6,uVar7);
        this = (*(int * PTR32 *)(gen_frame + 0x8));
      }
    }
    else {
      if (bVar1 == 10) {
        uVar7 = 1;
        goto LAB_00567207;
      }
      if (bVar1 == 2) {
        if (pbVar6[1] == 0x10) {
          pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
          uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x4)),1);
          uVar7 = (*(int *)(gen_frame + 0x4)) + 3 + uVar5;
          this = (*(int * PTR32 *)(gen_frame + 0x8));
          if (uVar7 != 0) goto LAB_00567207;
        }
        if ((*pbVar6 != 2) || (pbVar6[1] == 0)) goto LAB_00567258;
        pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0xf0) + 0x18)));
        uVar5 = F_00a24d30(pvVar3,pbVar6 + 2,(int)pvVar3 + 0x350,&(*(int *)(gen_frame + 0x0)),1);
        uVar5 = (*(int *)(gen_frame + 0x0)) + 3 + uVar5;
        uVar7 = uVar5;
        if ((int)uVar5 < 1) goto LAB_00567258;
      }
      else {
LAB_00567258: ;
        bVar1 = *pbVar6;
        if ((((bVar1 < 0x20) || (bVar1 == 0x7f)) || ((0x1f < bVar1 && (bVar1 < 0x7f)))) ||
           ((0xa0 < bVar1 && (bVar1 < 0xe0)))) {
          uVar5 = 1;
          uVar7 = uVar5;
        }
        else if (((bVar1 < 0x81) || (0x9f < bVar1)) && (0xf < (byte)(bVar1 + 0x20))) {
          uVar5 = 0;
          uVar7 = uVar5;
        }
        else {
          uVar5 = 2;
          uVar7 = uVar5;
        }
      }
    }
    pbVar6 = pbVar6 + uVar7;
    bVar1 = *pbVar6;
  } while( true );
}

/* ref: FUN_005672b0 */
uint F_005672b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5672b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint extraout_ECX = 0;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x3e) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined2 *)((int)this + 0x56) = 0;
  *(undefined1 *)((int)this + 0xc6d) = 1;
  *(undefined2 *)((int)this + 0xc6f) = 0;
  F_00558dc0(this);
  return extraout_ECX;
}

/* ref: FUN_00567340 */
unsigned int F_00567340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if ((((char)param_2 != '\0') && (*(int *)((int)this + 0xc58) != 0)) &&
       (bVar1 = F_0055de10(param_1,*(int *)((int)this + 0xc58)), bVar1 != 0)) {
      *(undefined4 *)((int)this + 0xc58) = 0;
    }
    iVar3 = 0;
    if (0 < *(short *)((int)this + 0xc68)) {
      piVar2 = (int *)((int)this + 0x58);
      do {
        if (*piVar2 == param_1) {
          *piVar2 = 0;
          piVar2[1] = 0;
          piVar2[2] = 0;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 3;
      } while (iVar3 < *(short *)((int)this + 0xc68));
    }
  }
  return 0;
}

/* ref: FUN_005673b0 */
uint F_005673b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5673b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    return 0;
  }
  do {
    if (999 < *(ushort *)(uVar3 + 0x18)) {
      piVar2 = *(int * PTR32 *)(uVar3 + 0x8c);
      bVar1 = *(byte *)(piVar2 + 0x18);
      if (((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && ((char)piVar2[7] == '\x01')) &&
         (*(char *)(piVar2[3] + 0xf) == '\t')) {
        if ((((999 < *(ushort *)(uVar3 + 0x18)) && (piVar2 != (int *)0x0)) &&
            (((*(byte *)(piVar2 + 0x18) & 1) != 0 &&
             (((*(byte *)(piVar2 + 0x18) & 4) != 0 && ((char)piVar2[7] == '\x01')))))) &&
           (*(char *)(piVar2[3] + 0xf) == '\t')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
          return uVar3;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x3c))(0);
        return uVar3;
      }
      if (((((bVar1 & 1) != 0) && ((bVar1 & 4) != 0)) && ((char)piVar2[7] == '\x01')) &&
         (*(char *)(piVar2[3] + 0xf) == '\f')) {
        if ((((999 < *(ushort *)(uVar3 + 0x18)) &&
             (piVar2 = *(int * PTR32 *)(uVar3 + 0x8c), piVar2 != (int *)0x0)) &&
            (((*(byte *)(piVar2 + 0x18) & 1) != 0 &&
             (((*(byte *)(piVar2 + 0x18) & 4) != 0 && ((char)piVar2[7] == '\x01')))))) &&
           (*(char *)(piVar2[3] + 0xf) == '\f')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2);
          return uVar3;
        }
        uVar3 = ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 0x3c))(0);
        return uVar3;
      }
    }
    uVar3 = *(uint *)(uVar3 + 8);
    if (uVar3 == 0) {
      return param_1;
    }
  } while( true );
}

/* ref: FUN_005674c0 */
uint F_005674c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5674c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0x44) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 1) = 1;
  }
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    *(undefined1 *)param_1 = 1;
  }
  if ((*(byte *)(param_2 + 0x4c) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 2) = 1;
  }
  if ((*(byte *)(param_2 + 0x204) & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((*(byte *)(param_2 + 0x54) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 3) = 1;
  }
  if ((*(byte *)(param_2 + 0x208) & 1) != 0) {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00567510 */
uint F_00567510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int in_ecx;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  F_0042aca0((int)this + 0x22b40);
  in_ecx = (int)this + 0x22aec;
  F_0042aca0(in_ecx);
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  iVar2 = *piVar1;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,in_ecx);
  ((code *)*(gen_code32 *)(iVar2 + 0xc))(*(undefined4 *)((int)this + 0x14),param_1,uVar3);
  F_0042e360((undefined *)((int)this + 0x22b40),in_ecx);
  return (int)this + 0x22b40;
}

/* ref: FUN_00567570 */
unsigned int F_00567570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x567570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 0x22248) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22248);
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_1;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_005675b0 */
unsigned int F_005675b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5675b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 0x22248) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x22248);
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_005675f0 */
byte F_005675f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5675f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(char *)((int)this + 0x22d28) != '\0') && (REFG(void * PTR32, 0x137104c) != (undefined *)0x0)) {
    bVar1 = F_00976910(REFG(void * PTR32, 0x137104c));
    return bVar1 == 0;
  }
  return 1;
}

/* ref: Component::GUI2::AtkModule::vf9 */
uint F_00567620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x567620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00564e90(this + 0x20de0,param_1);
  return uVar1;
}

