#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf28 */
unsigned int F_005d7300(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf36 */
unsigned int F_005d7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)(this + 0x34) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)(this + 0x34),param_1);
    return 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf53 */
unsigned int F_005d7350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x30) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x30) + 0x68))))((undefined4)gen_fl2bits(param_2));
  }
  return 0;
}

/* ref: FUN_005d7370 */
uint F_005d7370(void)
{
  GEN_ENTER(0x5d7370u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x1379d40) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379d40) = *(uint *)&REFG(undefined, 0x1379d40) | 1;
    REFG(float, 0x1379d30) = 0;
    REFG(float, 0x1379d34) = 0;
    REFG(float, 0x1379d38) = 0;
    REFG(float, 0x1379d3c) = 0;
  }
  return 0x1379d30;
}

/* ref: FUN_005d73b0 */
uint F_005d73b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d73b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2c3c));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf28 */
uint F_005d7420(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068fad0(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + 8))),*(int *)(this + 0x30));
    uVar1 = F_00a1b5f0(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d7450 */
uint F_005d7450(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2d54));
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf28 */
uint F_005d74c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d74c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x30) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_0068b500(*((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + 8))),*(int *)(this + 0x30));
    uVar1 = F_00a1b620(this + 0x30);
  }
  return uVar1;
}

/* ref: FUN_005d74f0 */
uint F_005d74f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2e6c));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x3c) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e5c);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e60);
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf7 */
uint F_005d7580(void)
{
  GEN_ENTER(0x5d7580u, 0u, 0u, 0u, 0u);
  return 0x10a2696;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf28 */
unsigned int F_005d7590(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*(int *)(this + 0x1c) == -1) {
      puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf48 */
uint F_005d75c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d75c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf8 */
uint F_005d7650(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x30) != 0) {
    uVar1 = F_00690020(*(int *)(in_ecx + 0x30));
    return uVar1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf19 */
unsigned int F_005d7660(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    if ((char)uVar1 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 200))))(*(int * PTR32 *)(this + 0x30));
      this[0x8c] = (undefined1)((byte)this[0x8c] | 8);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf20 */
unsigned int F_005d7690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d7690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if ((piVar1 != (int *)0x0) && (((byte)this[0x8c] & 8) != 0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1);
    this[0x8c] = (undefined1)((byte)this[0x8c] & 0xf7);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf27 */
uint F_005d76c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d76c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  if ((*(char *)(uVar2 + 0x55) == '\0') && (((byte)this[0x20] & 2) != 0)) {
    uVar2 = F_00a1e4c0(*param_2,"Client.LayoutEngine.Layer.VfxLayoutInstance");
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x100);
    *(uint *)(this + 0x30) = uVar2;
    uVar2 = (*pcVar1)(this,param_1);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf28 */
unsigned int F_005d7710(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005d7740 */
uint F_005d7740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7740u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)param_2;
  uVar1 = param_2;
  if (*(int *)(param_1 + 0x30) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = (uint)*(byte *)param_2;
    F_0068b780(*(int *)(param_1 + 0x30),(float)((float10)uVar1 / fVar2),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 1) / fVar2))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 2) / fVar2))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_2 + 3) / fVar2))));
  }
  return uVar1;
}

/* ref: FUN_005d77c0 */
uint F_005d77c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d77c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 in_EAX = 0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(undefined1)param_2);
  *(undefined1 *)(param_1 + 0x8a) = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x88) = (undefined1)param_2;
  *(byte *)(param_1 + 0x89) = (byte)param_3;
  *(byte *)(param_1 + 0x8b) = (byte)param_5;
  if (*(int *)(param_1 + 0x30) != 0) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
    uVar1 = param_2 & 0xff;
    F_0068b780(*(int *)(param_1 + 0x30),(float)((float10)uVar1 / fVar2),
                 (float)((float10)(byte)param_3 / fVar2),((float)GEN_TOF(((float10)(param_4 & 0xff) / fVar2))),
                 (float)((float10)(byte)param_5 / fVar2));
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf44 */
uint F_005d7860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7860u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  float10 fVar5;
  
  piVar1 = (int *)(param_1 + 0x30);
  if (*piVar1 != 0) {
    pbVar2 = (byte *)(param_1 + 0x8b);
    pbVar3 = (byte *)(param_1 + 0x8a);
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
    pbVar4 = (byte *)(param_1 + 0x89);
    param_1 = (uint)*(byte *)(param_1 + 0x88);
    F_0068b780(*piVar1,((float)GEN_TOF((((float10)param_1 / fVar5) * (float10)*(float *)param_2))),
                 ((float)GEN_TOF((((float10)*pbVar4 / fVar5) * (float10)*(float *)(param_2 + 4)))),
                 ((float)GEN_TOF((((float10)*pbVar3 / fVar5) * (float10)*(float *)(param_2 + 8)))),
                 ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * ((float10)*pbVar2 / fVar5)))));
  }
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf48 */
uint F_005d7900(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x2b] & 8) != 0) && (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0)) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf50 */
uint F_005d7920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x8c] = (undefined1)((byte)this[0x8c] ^ ((byte)this[0x8c] ^ (byte)param_1) & 1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_1);
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    uVar1 = F_0068b710(*(undefined * PTR32 *)(this + 0x30));
    if ((byte)param_1 == 0) {
      if ((char)uVar1 != '\0') {
        uVar1 = F_0068b730(*(undefined4 *)(this + 0x30),(float)(float10)0);
      }
    }
    else if ((char)uVar1 == '\0') {
      uVar1 = F_00699cb0(*(undefined4 *)(this + 0x30),(float)(float10)0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf54 */
uint F_005d7990(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int in_ecx;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_8;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 != *(float *)&REFG(undefined, 0x1088114);
  bVar3 = param_2 < *(float *)&REFG(undefined, 0x1088114);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),(!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2));
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 200))(param_1,local_8);
  in_ecx = param_1[0xc];
  if (in_ecx != 0) {
    if ((!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2)) {
      F_0068b7c0(in_ecx,param_2);
      return uVar4;
    }
    F_0068b7c0(in_ecx,(float)(float10)1);
  }
  return uVar4;
}

/* ref: FUN_005d79f0 */
uint F_005d79f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d79f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0xe0);
  *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
  uVar2 = (*pcVar1)(param_1,1);
  if (param_1[0xc] != 0) {
    F_0068b7c0(param_1[0xc],(float)(float10)1);
    if ((char)param_3 != '\0') {
      uVar2 = F_00699b70((undefined *)param_1[0xc]);
      return uVar2;
    }
    uVar2 = F_00699cb0(param_1[0xc],param_2);
  }
  return uVar2;
}

/* ref: FUN_005d7a50 */
unsigned int F_005d7a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if ((*(int *)(param_1 + 0x30) != 0) && ((*(byte *)(param_1 + 0x8c) & 1) != 0)) {
    F_0068b730(*(int *)(param_1 + 0x30),param_2);
  }
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  return 0;
}

/* ref: FUN_005d7a80 */
uint F_005d7a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (param_1 == 1) {
    *(byte *)((int)this + 0x8c) = *(byte *)((int)this + 0x8c) & 0xfe;
  }
  uVar1 = param_1;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_0068b6f0(*(undefined * PTR32 *)((int)this + 0x30),0,param_1);
    uVar1 = 0xffffffff;
  }
  *(short *)((int)this + 0x8e) = (short)uVar1;
  return uVar1;
}

/* ref: FUN_005d7ac0 */
uint F_005d7ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a309c));
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf7 */
uint F_005d7b30(void)
{
  GEN_ENTER(0x5d7b30u, 0u, 0u, 0u, 0u);
  return 0x10a26f9;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf28 */
unsigned int F_005d7b40(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x30) = 0;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf48 */
uint F_005d7b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d7b70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf53 */
unsigned int F_005d7b80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x30) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x30) + 0x68))))((undefined4)gen_fl2bits(param_2));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf7 */
uint F_005d7bb0(void)
{
  GEN_ENTER(0x5d7bb0u, 0u, 0u, 0u, 0u);
  return 0x10a26fa;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf68 */
uint F_005d7bc0(void)
{
  GEN_ENTER(0x5d7bc0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf35 */
byte F_005d7bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d7bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x30) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x54)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf54 */
uint F_005d7be0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d7be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  uint uVar2;
  
  fVar1 = (*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),1));
  if (!(*(float *)&REFG(undefined, 0x1088114) < fVar1)) {
    (*(float *)&gen_args[1]) = gen_bits2f((uint)GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3) << 8);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xe0))))((*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x90))))((*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf56 */
byte F_005d7c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2b)) & 8;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf58 */
unsigned int F_005d7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf60 */
uint F_005d7ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x30) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x8));
    ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,&(*(undefined4 *)(gen_frame + 0x14)));
  }
  *(undefined4 *)(this + 0x50) = *param_1;
  *(undefined4 *)(this + 0x54) = param_1[1];
  *(undefined4 *)(this + 0x58) = param_1[2];
  uVar2 = param_1[3];
  *(uint *)(this + 0x5c) = uVar2;
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf62 */
uint F_005d7d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((((*(int *)(this + 0x74) << 0x1c) >> 0x1c) + -1)));
  switch((unsigned int)(uintptr_t)(puVar2)) {
  case (undefined4 *)0x0: ;
  case (undefined4 *)0x4: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    puVar2 = param_1;
    break;
  case (undefined4 *)0x1: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
    break;
  case (undefined4 *)0x2: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
    break;
  case (undefined4 *)0x3: ;
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    puVar2 = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10947f8);
  }
  if (*(int *)(this + 0x30) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x30);
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x8));
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,&(*(undefined4 *)(gen_frame + 0x14)))));
  }
  *(undefined4 *)(this + 0x60) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)(this + 100) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)(this + 0x68) = (*(undefined4 *)(gen_frame + 0x8));
  return (uint)puVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf64 */
uint F_005d7e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,param_1 + 0x20);
  return uVar1;
}

/* ref: FUN_005d7ea0 */
uint F_005d7ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d7ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  uVar1 = *(uint *)((int)this + 0x74) & 0xfffffff1 | 1;
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(uint *)((int)this + 0x74) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf68 */
uint F_005d7ed0(void)
{
  GEN_ENTER(0x5d7ed0u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_005d7ef0 */
uint F_005d7ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf68 */
uint F_005d7f20(void)
{
  GEN_ENTER(0x5d7f20u, 0u, 0u, 0u, 0u);
  return 0x22;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf2 */
uint F_005d7fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d7fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf68 */
uint F_005d7fc0(void)
{
  GEN_ENTER(0x5d7fc0u, 0u, 0u, 0u, 0u);
  return 10;
}

/* ref: FUN_005d7fe0 */
uint F_005d7fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d7fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf68 */
uint F_005d8010(void)
{
  GEN_ENTER(0x5d8010u, 0u, 0u, 0u, 0u);
  return 0x12;
}

/* ref: FUN_005d8030 */
uint F_005d8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf7 */
uint F_005d8060(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (((byte)*(undefined4 *)(this + 0x74) & 0xf) == 5) {
    if (*(int *)(this + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    uVar2 = F_00507260((undefined *)(iVar1 + 0x14c),this + 0x88);
    return uVar2;
  }
  return 0x10a26fb;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf68 */
uint F_005d80a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d80a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (-(uint)(*(char *)(in_ecx + 0x8c) != '\0') & 0x42) + 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf7 */
uint F_005d80c0(void)
{
  GEN_ENTER(0x5d80c0u, 0u, 0u, 0u, 0u);
  return 0x10a275e;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf27 */
unsigned int F_005d80d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d80d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf28 */
unsigned int F_005d80e0(void)
{
  GEN_ENTER(0x5d80e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf62 */
unsigned int F_005d80f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d80f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = local_18;
  uVar2 = local_1c;
  uVar3 = local_20;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x60))) {
  case 1: ;
    uVar3 = *param_2;
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    break;
  case 2: ;
    uVar1 = *param_2;
    uVar2 = uVar1;
    uVar3 = uVar1;
    break;
  case 3: ;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = uVar1;
    break;
  case 4: ;
    uVar1 = REFG(float, 0x10947f8);
    uVar2 = param_2[1];
    uVar3 = *param_2;
  }
  *(undefined4 *)(in_ecx + 0x50) = uVar3;
  *(undefined4 *)(in_ecx + 0x54) = uVar2;
  *(undefined4 *)(in_ecx + 0x58) = uVar1;
  return 0;
}

/* ref: FUN_005d81a0 */
uint F_005d81a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d81a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_2;
  uVar1 = param_2[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 3;
  *(undefined4 *)((int)this + 0x70) = param_1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf7 */
uint F_005d81d0(void)
{
  GEN_ENTER(0x5d81d0u, 0u, 0u, 0u, 0u);
  return 0x10a275f;
}

/* ref: FUN_005d81f0 */
uint F_005d81f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d81f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 1;
  return uVar1;
}

/* ref: FUN_005d8210 */
unsigned int F_005d8210(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
  F_009945a0((undefined *)((int)this + 0x74));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf7 */
uint F_005d82b0(void)
{
  GEN_ENTER(0x5d82b0u, 0u, 0u, 0u, 0u);
  return 0x10a27bf;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf28 */
uint F_005d82c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00984a00(this + 0x74);
  return uVar1;
}

/* ref: FUN_005d82e0 */
uint F_005d82e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d82e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 1;
  return uVar1;
}

/* ref: FUN_005d8310 */
uint F_005d8310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 1;
  return uVar1;
}

/* ref: FUN_005d8340 */
uint F_005d8340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 1;
  return uVar1;
}

/* ref: FUN_005d8370 */
uint F_005d8370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf7 */
uint F_005d8390(void)
{
  GEN_ENTER(0x5d8390u, 0u, 0u, 0u, 0u);
  return 0x10a27c0;
}

/* ref: FUN_005d83a0 */
unsigned int F_005d83a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d83a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a32cc));
  *(undefined4 *)((int)this + 0x30) = (undefined4)REFG(float, 0x1375ad0);
  *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  *(undefined4 *)((int)this + 0x38) = (undefined4)REFG(float, 0x1375ad8);
  *(undefined4 *)((int)this + 0x3c) = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf27 */
unsigned int F_005d8430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d8430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf28 */
unsigned int F_005d8440(void)
{
  GEN_ENTER(0x5d8440u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf65 */
uint F_005d8450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x110))();
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = (undefined4)gen_fl2bits((float)extraout_ST0);
  return (uint)param_1;
}

/* ref: FUN_005d84a0 */
uint F_005d84a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d84a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005d83a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_005d84d0 */
uint F_005d84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d84d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_2;
  uVar1 = param_2[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 1;
  *(undefined4 *)((int)this + 0x50) = param_1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf7 */
uint F_005d8500(void)
{
  GEN_ENTER(0x5d8500u, 0u, 0u, 0u, 0u);
  return 0x10a27c1;
}

/* ref: FUN_005d8590 */
uint F_005d8590(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005d83a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_005d85c0 */
uint F_005d85c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d85c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 2;
  *(undefined4 *)((int)this + 0x50) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf7 */
uint F_005d85f0(void)
{
  GEN_ENTER(0x5d85f0u, 0u, 0u, 0u, 0u);
  return 0x10a27c2;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf68 */
uint F_005d8600(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf61 */
uint F_005d8610(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x110))(this);
  *(float *)&REFG(undefined, 0x1379d28) = (float)extraout_ST0;
  *(float *)&REFG(undefined, 0x1379d20) = *(float *)&REFG(undefined, 0x1379d28);
  *(undefined4 *)&REFG(undefined, 0x1379d24) = REFG(float, 0x10a27e4);
  return 0x1379d20;
}

/* ref: FUN_005d8650 */
uint F_005d8650(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005d83a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3614));
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)this;
}

/* ref: FUN_005d8680 */
uint F_005d8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 4;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf7 */
uint F_005d86a0(void)
{
  GEN_ENTER(0x5d86a0u, 0u, 0u, 0u, 0u);
  return 0x10a27c3;
}

/* ref: FUN_005d86b0 */
uint F_005d86b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d86b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005d83a0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a372c));
  *(undefined1 *)((int)this + 0x50) = 1;
  return (uint)this;
}

/* ref: FUN_005d86e0 */
uint F_005d86e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d86e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 3;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf7 */
uint F_005d8700(void)
{
  GEN_ENTER(0x5d8700u, 0u, 0u, 0u, 0u);
  return 0x10a27e8;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf26 */
unsigned int F_005d8710(void)
{
  GEN_ENTER(0x5d8710u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf28 */
unsigned int F_005d8720(void)
{
  GEN_ENTER(0x5d8720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf60 */
float F_005d8730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a1e160(this + 0x3c,param_1);
  return fVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf40 */
byte F_005d8750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x94)) & 4;
  *(byte *)(in_ecx + 0x94) = *(byte *)(in_ecx + 0x94) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf47 */
byte F_005d8770(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x34) != 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf48 */
byte F_005d8780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5d8780u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x34) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x7c))))
                      (*(int * PTR32 *)(this + 0x34),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf54 */
uint F_005d87a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5d87a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 local_8;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 != *(float *)&REFG(undefined, 0x1088114);
  bVar3 = param_2 < *(float *)&REFG(undefined, 0x1088114);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),(!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2));
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 200))(param_1,local_8);
  if (param_1[0xd] != 0) {
    if ((!GEN_ISNAN(param_2) && !bVar1) && (!bVar3 && bVar2)) {
      uVar4 = ((code *)*(gen_code32 *)(*(int *)param_1[0xd] + 0x24))((undefined4)gen_fl2bits(param_2),0);
      return uVar4;
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)param_1[0xd] + 0x24))((undefined4)gen_fl2bits((float)(float10)1),0)
    ;
  }
  return uVar4;
}

/* ref: FUN_005d8820 */
byte F_005d8820(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x90))) {
  case 8: ;
  case 9: ;
  case 0xb: ;
  case 0xc: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_005d88c0 */
uint F_005d88c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  *(uint *)((int)this + 0x88) = uVar1;
  return uVar1;
}

/* ref: FUN_005d88f0 */
uint F_005d88f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x88));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  return uVar1;
}

/* ref: FUN_005d8930 */
unsigned int F_005d8930(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return 0;
}

/* ref: FUN_005d8960 */
uint F_005d8960(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d8960u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    fVar2 = (float10)param_3;
    if ((char)param_4 != '\0') {
      fVar2 = (float10)1 - fVar2;
    }
    (*(float *)(gen_frame + 0x1c)) = (float)fVar2;
    puVar1 = (undefined4 *)F_00b66e50(*(int *)(param_1 + 0x60),((undefined1 *)(gen_frame + 0x0)),(float)fVar2);
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
  param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
  param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
  return (uint)param_2;
}

/* ref: FUN_005d89f0 */
uint F_005d89f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d89f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    fVar1 = (float10)param_3;
    if ((char)param_4 != '\0') {
      fVar1 = (float10)1 - fVar1;
    }
    (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
    F_00b66f40(*(int *)(param_1 + 0x60),&(*(uint *)(gen_frame + 0x0)),(float)fVar1);
    F_004bd580(&(*(uint *)(gen_frame + 0x0)));
    if ((char)param_4 != '\0') {
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) ^ REFG(uint, 0x10920d0);
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) ^ REFG(uint, 0x10920d0);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) ^ REFG(uint, 0x10920d0);
    }
    F_004bdda0(param_2,&REFG(float, 0x1302c90),&(*(uint *)(gen_frame + 0x0)));
    return (uint)param_2;
  }
  *param_2 = REFG(undefined4, 0x1302cf0);
  param_2[1] = REFG(undefined4, 0x1302cf4);
  param_2[2] = REFG(undefined4, 0x1302cf8);
  param_2[3] = REFG(undefined4, 0x1302cfc);
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf7 */
uint F_005d8b50(void)
{
  GEN_ENTER(0x5d8b50u, 0u, 0u, 0u, 0u);
  return 0x10a27ea;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf27 */
unsigned int F_005d8b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d8b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf28 */
unsigned int F_005d8b70(void)
{
  GEN_ENTER(0x5d8b70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf65 */
uint F_005d8b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  uVar2 = REFG(float, 0x1087f04);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar1 = puVar3[2];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  if (*(int *)(this + 0x60) != 0) {
    iVar5 = 0;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60));
    if (0 < (int)uVar4) {
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10a27e4);
      do {
        puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 4))))(*(int * PTR32 *)(this + 0x60),((undefined1 *)(gen_frame + 0x0)),iVar5)));
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
        F_005ff0f0(param_1,&(*(undefined4 *)(gen_frame + 0x10)));
        iVar5 = iVar5 + 1;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60));
      } while (iVar5 < (int)uVar4);
    }
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf67 */
uint F_005d8c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,((undefined1 *)(gen_frame + 0x0)));
  F_005fede0(param_1,&REFG(float, 0x1302d00),uVar1);
  return (uint)param_1;
}

/* ref: FUN_005d8cb0 */
unsigned int F_005d8cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return 0;
}

/* ref: FUN_005d8ce0 */
uint F_005d8ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_005d8d00 */
unsigned int F_005d8d00(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return 0;
}

/* ref: FUN_005d8d30 */
uint F_005d8d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_005d8d70 */
byte F_005d8d70(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8d70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    puVar1 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_005d8e00 */
unsigned int F_005d8e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  short sVar2;
  
  sVar2 = 0;
  *(undefined4 *)this = 0;
  *(short *)((int)this + 4) = (short)param_1;
  *(undefined2 *)((int)this + 6) = 0;
  uVar1 = param_1;
  if (1 < param_1) {
    do {
      uVar1 = uVar1 >> 1;
      sVar2 = sVar2 + 1;
    } while (1 < uVar1);
    *(short *)((int)this + 6) = sVar2;
  }
  return 0;
}

/* ref: FUN_005d8e30 */
uint F_005d8e30(unsigned int gen_a0)
{
  GEN_ENTER(0x5d8e30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if ((uint)(byte)param_1 == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (uint)(&REFG(undefined4, 0x10a2810) + iVar2 * 10);
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return 0x10a2810;
}

/* ref: FUN_005d8e70 */
uint F_005d8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    if ((uint)*(byte *)((int)this + 0x10) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar2)) {
      puVar4 = &REFG(undefined4, 0x10a2810) + iVar3 * 10;
      goto LAB_005d8e98;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  puVar4 = &REFG(undefined4, 0x10a2810);
LAB_005d8e98: ;
  uVar2 = (uint)((char)param_1 == '\0');
  uVar1 = puVar4[uVar2 + 4];
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = puVar4[uVar2 + 6];
  *(undefined4 *)((int)this + 0x30) = puVar4[uVar2 + 8];
  *(undefined4 *)((int)this + 0x20) = puVar4[3];
  return uVar2;
}

/* ref: FUN_005d8fa0 */
byte F_005d8fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5d8fa0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  code * pcVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = param_2[1];
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = param_2[2];
  (*(float *)(gen_frame + 0x8)) = fVar3;
  pcVar4 = *(gen_code32 *)(*param_1 + 0x34);
  fVar1 = (float)((float10)fVar1 - (float10)*param_3);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)param_3[1]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_3[2]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  *param_5 = ((float)GEN_TOF(((fVar6 * fVar6 + fVar7 * fVar7) + fVar8 * fVar8)));
  (*pcVar4)(param_1,&(*(float *)(gen_frame + 0x0)));
  fVar1 = ((float)GEN_TOF((((float10)param_4 + (float10)(*(float *)(gen_frame + 0xc))) * ((float10)param_4 + (float10)(*(float *)(gen_frame + 0xc))))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (((float10)*param_5 < (float10)fVar1) &&
     (uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x30))
                        (param_1,param_3,(undefined4)gen_fl2bits(param_4),param_5),
     (char)uVar5 != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005d9070 */
byte F_005d9070(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d9070u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  byte bVar1;
  
  bVar1 = F_005d8fa0((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[2]),&(*(float *)&gen_args[2]));
  *(byte *)((*(int *)&gen_args[0]) + 0x20) =
       (*(byte *)((*(int *)&gen_args[0]) + 0x20) & 2 | bVar1 & 1) * '\x02' | *(byte *)((*(int *)&gen_args[0]) + 0x20) & 0xf9;
  return bVar1 & 1;
}

/* ref: FUN_005d90f0 */
uint F_005d90f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d90f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  in_ecx[1] = param_2;
  in_ecx[2] = 0xffffffff;
  *(undefined1 *)(in_ecx + 3) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005d9120 */
uint F_005d9120(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x137104c);
  if ((*(char *)(REFG(undefined4, 0x137104c) + 8) == '\0') && (REFG(int * PTR32, 0x1379cb0) != (int *)0x0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 0xc))))(REFG(int * PTR32, 0x1379cb0),param_1);
  }
  return uVar1;
}

/* ref: FUN_005d9150 */
byte F_005d9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00c472af((*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),"bg/%s.lvb",(*(undefined4 *)&gen_args[0]));
  F_004ff470(&(*(undefined4 *)&gen_args[0]),uVar1,0,0);
  *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(undefined4 *)&gen_args[0]);
  return 1;
}

/* ref: FUN_005d9190 */
uint F_005d9190(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar2 = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)),param_1,REFG(undefined4, 0x108cc50));
  F_004fe9f0(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  uVar1 = F_0042b790(((undefined1 *)(gen_frame + 0x54)));
  if (3 < uVar1) {
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
    if (*(char *)(uVar1 + 2) == 't') {
      uVar2 = 1;
    }
    else if (*(char *)(uVar1 + 2) == 'f') {
      uVar2 = 2;
    }
  }
  F_004e8550(REFG(void * PTR32, 0x1375a64),uVar2);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)uVar3;
}

/* ref: FUN_005d92a0 */
byte F_005d92a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d92a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(char *)((int)this + 0x52) == '\0') && (5 < *(int *)((int)this + 0x10))) {
    bVar1 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0));
    return bVar1 == 0;
  }
  return 0;
}

/* ref: FUN_005d9330 */
byte F_005d9330(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0xdc) == *(int *)((int)this + 0xe0)) {
    return 1;
  }
  uVar2 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))) + 0x88)));
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if (iVar1 != 2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 1;
}

/* ref: FUN_005d9380 */
uint F_005d9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * psVar1;
  
  psVar1 = param_1;
  if (((((*(short *)((int)this + 0x32) != *param_1) || (*(short *)((int)this + 0x34) != param_1[1]))
       || (*(short *)((int)this + 0x36) != param_1[2])) ||
      (*(short *)((int)this + 0x38) != param_1[3])) &&
     ((*(int *)((int)this + 0x14) != 6 &&
      ((*(int *)((int)this + 0x2c) == 0 || (*(int *)((int)this + 0x2c) == 5)))))) {
    *(undefined4 *)((int)this + 0x32) = *(undefined4 *)param_1;
    psVar1 = *(short * PTR32 *)(param_1 + 2);
    *(short * PTR32 *)((int)this + 0x36) = psVar1;
    *(undefined4 *)((int)this + 0x2c) = 1;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return (uint)psVar1;
}

/* ref: FUN_005d93f0 */
uint F_005d93f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d93f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint3 uVar2;
  uint uVar1;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if ((*(short *)(param_2 + 0x18) != 0) || (*(char *)(param_2 + 0x1c) != '\0')) {
    return param_2 & 0xffffff00;
  }
  uVar2 = (uint3)(param_2 >> 8);
  if (param_1 == (int *)0x0) {
    return CONCAT31(uVar2,1);
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(param_2 + 0x14) + param_2)));
  iVar3 = *(int *)(param_2 + 0x14) + param_2;
  uVar1 = (uint)uVar2 << 8;
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      iVar5 = 0;
      if (*(int *)(iVar3 + 8) < 1) {
        return uVar1;
      }
      piVar4 = ((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar3)));
      while (*piVar4 != *param_1) {
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        if (*(int *)(iVar3 + 8) <= iVar5) {
          return uVar1;
        }
      }
    }
    else {
      if (iVar5 != 2) {
        return uVar1;
      }
      iVar5 = 0;
      if (*(int *)(iVar3 + 8) < 1) {
        return uVar1;
      }
      piVar4 = ((int *)GEN_TOP((*(int *)(iVar3 + 4) + iVar3)));
      while (*piVar4 == *param_1) {
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        if (*(int *)(iVar3 + 8) <= iVar5) {
          return uVar1;
        }
      }
    }
  }
  return CONCAT31(uVar2,1);
}

/* ref: FUN_005d9480 */
float10 F_005d9480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  F_004f4130(((float *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),in_eax);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x0))[0];
  F_0054ca80(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)0);
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)0);
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar2 = F_00c4d1fa((float10)fVar1);
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  *param_2 = (float)fVar2;
  return extraout_ST1;
}

/* ref: FUN_005d9500 */
unsigned int F_005d9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *(int *)((int)this + 400) - *(int *)((int)this + 0x18c) >> 2;
  if (uVar2 != 0) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + uVar1 * 4))) + 0x24))))(*param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

/* ref: FUN_005d9550 */
unsigned int F_005d9550(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort * puVar2;
  undefined4 uVar3;
  int local_c;
  int local_8;
  
  local_8 = 0;
  puVar2 = (ushort *)((int)this + 0x1ca);
  local_c = 0x4a;
  do {
    uVar1 = (uint)*puVar2;
    if (*puVar2 == 0) goto LAB_005d97a1;
    switch((unsigned int)(uintptr_t)(local_8)) {
    case 0: ;
      F_00604550(*(undefined4 *)(puVar2 + -5),uVar1);
      F_006045a0(*(undefined4 *)((int)this + 0x540),(uint)*puVar2);
      *(undefined4 *)((int)this + 0x540) = 0;
      *(undefined4 *)((int)this + 0x538) = 0;
      break;
    case 2: ;
      F_00604690(*(undefined4 *)(puVar2 + -5),uVar1);
      F_006046e0(*(undefined4 *)((int)this + 0x544),(uint)*puVar2);
      *(undefined4 *)((int)this + 0x544) = 0;
      *(undefined4 *)((int)this + 0x53c) = 0;
      break;
    case 3: ;
      F_00604780(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 4: ;
      F_00604aa0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 5: ;
      uVar3 = *(undefined4 *)(puVar2 + -5);
      goto LAB_005d9790;
    case 6: ;
      F_00604af0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 7: ;
      F_006045f0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 8: ;
      F_00604640(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0xb: ;
      F_006047d0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0xc: ;
      F_00604910(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0xd: ;
      F_00604870(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0xe: ;
      uVar3 = *(undefined4 *)(puVar2 + -5);
LAB_005d9790: ;
      F_00604fa0(uVar3,uVar1);
      break;
    case 0xf: ;
      F_00604820(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x26: ;
      F_00604730(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x27: ;
      F_006049b0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x28: ;
      F_00604a00(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x2a: ;
      F_00604b40(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x2b: ;
      F_00604b90(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x2c: ;
      F_006048c0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x2e: ;
      F_00604960(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x30: ;
      F_00604be0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x32: ;
      F_00604c30(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x38: ;
      F_00604cd0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x39: ;
      F_00604d20(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x3a: ;
      F_00604c80(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x40: ;
      F_00604f00(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x41: ;
      F_00604f50(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x42: ;
      F_00604d70(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x43: ;
      F_00604dc0(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x44: ;
      F_00604e10(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x45: ;
      F_00604e60(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x46: ;
      F_00604a50(*(undefined4 *)(puVar2 + -5),uVar1);
      break;
    case 0x47: ;
      F_00604eb0(*(undefined4 *)(puVar2 + -5),uVar1);
    }
    puVar2[-0xffffffff00000005] = 0;
    puVar2[-0xffffffff00000004] = 0;
    puVar2[-0xffffffff00000003] = 0;
    puVar2[-0xffffffff00000002] = 0;
LAB_005d97a1: ;
    local_8 = local_8 + 1;
    puVar2 = puVar2 + 6;
    local_c = local_c + -1;
    if (local_c == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_005d9890 */
uint F_005d9890(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9890u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
  if ((undefined *)param_1[2] == &REFG(undefined, 0x6c7662)) {
    uVar3 = 0;
    do {
      if (*(char *)(uVar2 + uVar3) != (&REFG(undefined1, 0x10a2a28))[uVar3]) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  else if (((undefined *)param_1[2] != (undefined *)0x736762) ||
          (bVar1 = F_005d5de0(uVar2), bVar1 == 0)) {
    return 0;
  }
  iVar5 = uVar2 + 0xc;
  uVar3 = 0;
  if (*(uint *)(uVar2 + 8) == 0) {
    return 0;
  }
  do {
    uVar4 = 0;
    while (*(char *)(iVar5 + uVar4) == (&REFG(undefined1, 0x10a2a20))[uVar4]) {
      uVar4 = uVar4 + 1;
      if (3 < uVar4) {
        uVar2 = iVar5 + 8;
        if (*((char *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x3b + uVar2))) != '\0') {
          return 0;
        }
        if (*((int *)GEN_TOP((*(int *)(iVar5 + 0x10) + 0x44 + uVar2))) != 0) {
          return 0;
        }
        return uVar2;
      }
    }
    iVar5 = iVar5 + *(int *)(iVar5 + 4);
    uVar3 = uVar3 + 1;
    if (*(uint *)(uVar2 + 8) <= uVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_005d9950 */
uint F_005d9950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5d9950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_4 + 0xc)) {
    iVar4 = *(int *)(param_4 + 8) + param_4;
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)(iVar4 + iVar5 * 4) + iVar4)));
      if (((ushort)param_2 == 0) || (*puVar1 == (uint)(ushort)param_2)) {
        iVar3 = 0;
        if (0 < (int)puVar1[3]) {
          do {
            uVar2 = (int)puVar1 + *(int *)((int)puVar1 + iVar3 * 4 + puVar1[2]) + puVar1[2];
            if (*(int *)(uVar2 + 4) == param_3) {
              return uVar2;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)puVar1[3]);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_4 + 0xc));
  }
  return 0;
}

/* ref: FUN_005d99c0 */
byte F_005d99c0(void)
{
  GEN_ENTER(0x5d99c0u, 0u, 0u, 0u, 0u);
  if (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0) {
    return 4 < *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x10)));
  }
  return 0;
}

/* ref: FUN_005d99e0 */
byte F_005d99e0(void)
{
  GEN_ENTER(0x5d99e0u, 0u, 0u, 0u, 0u);
  if (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0) {
    return *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x10))) == 7;
  }
  return 0;
}

/* ref: FUN_005d9a00 */
unsigned int F_005d9a00(void)
{
  GEN_ENTER(0x5d9a00u, 0u, 0u, 0u, 0u);
  if (*(int *)(REFG(int, 0x1379cb0) + 0x28) != 1) {
    *(undefined4 *)(REFG(int, 0x1379cb0) + 0x28) = 1;
    *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) & 0xfffffffe;
    F_00516740(REFG(void * PTR32, 0x1375aec),4);
  }
  return 0;
}

/* ref: FUN_005d9a30 */
uint F_005d9a30(void)
{
  GEN_ENTER(0x5d9a30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (*(int *)(REFG(undefined4, 0x1379cb0) + 0x28) != 2) {
    *(undefined4 *)(REFG(undefined4, 0x1379cb0) + 0x28) = 2;
    *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 1;
    F_004ff5f0(REFG(void * PTR32, 0x1375aec));
    uVar1 = F_0050fb20(REFG(void * PTR32, 0x1375aec));
    return uVar1;
  }
  return REFG(undefined4, 0x1379cb0);
}

/* ref: FUN_005d9a70 */
uint F_005d9a70(void)
{
  GEN_ENTER(0x5d9a70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (*(int *)(REFG(undefined4, 0x1379cb0) + 0x28) != 2) {
    *(undefined4 *)(REFG(undefined4, 0x1379cb0) + 0x28) = 2;
    *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) | 1;
    F_004ff5f0(REFG(void * PTR32, 0x1375aec));
    F_0050fb20(REFG(void * PTR32, 0x1375aec));
  }
  uVar1 = REFG(undefined4, 0x1379cb0);
  *(undefined4 *)(REFG(undefined4, 0x1379cb0) + 0x28) = 0;
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf4 */
uint F_005d9af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: FUN_005d9b60 */
byte F_005d9b60(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (((*(byte *)(in_ecx + 0x2b) & 0x40) != 0) &&
     ((iVar1 = *(int *)(in_ecx + 8), iVar1 == 0 ||
      (((*(int *)(iVar1 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(iVar1 + 4) + 0x50))) != '\0')) &&
       ((iVar1 == 0 || ((*(byte *)(iVar1 + 0x16) & 1) != 0)))))))) {
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf9 */
uint F_005d9b90(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
  if (uVar1 != 0) {
    return *(uint *)(uVar1 + 0x20);
  }
  return 0;
}

/* ref: FUN_005d9bb0 */
uint F_005d9bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5d9bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  return param_2 << (('\x04' - (char)param_1) * '\b' & 0x1fU) | *(uint *)((int)this + 0x18);
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf17 */
uint F_005d9be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  return (uint)param_1;
}

/* ref: FUN_005d9c60 */
byte F_005d9c60(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  
  cVar1 = *(char *)((int)this + 0x11);
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x28) & 0xf)) {
  case 4: ;
    return cVar1 != '\f';
  case 5: ;
    return cVar1 != '\x10';
  case 6: ;
    return cVar1 != '-';
  case 7: ;
    return cVar1 != '\x0e';
  case 8: ;
    return cVar1 != '\t';
  case 9: ;
    return cVar1 != '\b';
  case 10: ;
    return cVar1 != '\x0f';
  default: ;
    return 0;
  }
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf22 */
byte F_005d9cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x65) != '\x04')) {
    return *(char *)(uVar1 + 0x65) == '\x03';
  }
  return 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf57 */
uint F_005d9cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if (uVar1 != 0) {
    return uVar1 + 0x30;
  }
  return 0x1375ac0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf59 */
uint F_005d9d10(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if (uVar1 != 0) {
    return uVar1 + 0x40;
  }
  return 0x1302cf0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf61 */
uint F_005d9d30(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if (uVar1 != 0) {
    return uVar1 + 0x50;
  }
  return 0x1302c60;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf63 */
uint F_005d9d50(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if (uVar1 != 0) {
    return uVar1 + 0x30;
  }
  return 0x1302df0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf65 */
uint F_005d9d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5d9d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  undefined4 * puVar5;
  float * pfVar6;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x60))(this)));
  if ((piVar3 != (int *)0x0) && (*(char *)((int)piVar3 + 0x65) == '\x03')) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3,param_1);
    return (uint)param_1;
  }
  pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  fVar2 = *pfVar4;
  fVar1 = pfVar4[2];
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = pfVar4[1];
  pfVar6 = ((float *)(gen_frame + 0x0)) + 1;
  if (!((float10)fVar2 < (float10)pfVar4[1])) {
    pfVar6 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar6 < (float10)fVar1) {
    pfVar6 = ((float *)(gen_frame + 0x0)) + 2;
  }
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  param_1[2] = puVar5[2];
  param_1[3] = (undefined4)gen_fl2bits(*pfVar6);
  return (uint)param_1;
}

/* ref: FUN_005d9ec0 */
uint F_005d9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9ec0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar4 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),3);
  }
  else {
    this = (undefined *)F_00406b90(0x48,0,0);
    if (this == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_005d74f0(this);
    }
  }
  ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(piVar4,uVar5);
    return (uint)piVar4;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar2 + 0x30);
  ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar4;
}

/* ref: FUN_005d9f70 */
uint F_005d9f70(unsigned int gen_a0)
{
  GEN_ENTER(0x5d9f70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar4 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x27);
  }
  else {
    this = (undefined *)F_00406b90(0x38,0,0);
    if (this == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_005d7ac0(this);
    }
  }
  ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(piVar4,uVar5);
    return (uint)piVar4;
  }
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_00a1bd10(((undefined1 *)(gen_frame + 0xc)),iVar2 + 0x30);
  (*(int * PTR32 *)&gen_args[0]) = (int *)((undefined1 *)(gen_frame + 0xc));
  ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar4;
}

/* ref: FUN_005da030 */
uint F_005da030(unsigned int gen_a0)
{
  GEN_ENTER(0x5da030u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar4 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0xd);
  }
  else {
    this = (undefined *)F_00406b90(0x38,0,0);
    if (this == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_005d73b0(this);
    }
  }
  ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(piVar4,uVar5);
    return (uint)piVar4;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int *)(iVar2 + 0x30) + iVar2)));
  ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar4;
}

/* ref: FUN_005da0e0 */
uint F_005da0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5da0e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *(*(int * PTR32 *)&gen_args[1]);
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[1])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[1])[2] != '\0' && ((*(int * PTR32 *)&gen_args[1])[3] == 0)))) {
    piVar4 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x2f);
  }
  else {
    this = (undefined *)F_00406b90(0x38,0,0);
    if (this == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_005d7450(this);
    }
  }
  ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(piVar4,uVar5);
    return (uint)piVar4;
  }
  iVar1 = piVar3[5];
  pcVar2 = *(gen_code32 *)(*piVar4 + 0x6c);
  (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  (*pcVar2)(piVar4,iVar1,&(*(int * PTR32 *)&gen_args[1]));
  return (uint)piVar4;
}

/* ref: FUN_005da190 */
uint F_005da190(unsigned int gen_a0)
{
  GEN_ENTER(0x5da190u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),5);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x60,0,0);
  if (piVar2 != (int *)0x0) {
    F_005d83a0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a33e4));
    piVar2[0x14] = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da240 */
uint F_005da240(unsigned int gen_a0)
{
  GEN_ENTER(0x5da240u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x33);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x60,0,0);
  if (piVar2 != (int *)0x0) {
    F_005d83a0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a34fc));
    piVar2[0x14] = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da2f0 */
uint F_005da2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5da2f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x44);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x60,0,0);
  if (piVar2 != (int *)0x0) {
    F_005d83a0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a3614));
    piVar2[0x14] = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da3a0 */
uint F_005da3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5da3a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x45);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x60,0,0);
  if (piVar2 != (int *)0x0) {
    F_005d83a0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a372c));
    *(undefined1 *)(piVar2 + 0x14) = 1;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005da450 */
unsigned int F_005da450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5da450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  return 0;
}

/* ref: FUN_005da4e0 */
uint F_005da4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5da4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c472af(param_1,param_2,
                     "%x:%x:%x:P%.3f,%.3f,%.3f:R%.3f,%.3f,%.3f,%.3f:S%.3f,%.3f,%.3f:M%.3f,%.3f,%.3f:M%.3f,%.3f,%.3f"
                     ,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),
                     *(undefined4 *)((int)this + 0x10),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x20)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x20)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x24)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x24)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x28)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x28)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x30)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x30)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x34)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x34)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x38)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x38)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x3c)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x3c)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x40)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x40)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x44)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x44)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x48)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x48)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x50)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x50)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x54)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x54)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x58)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x58)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x60)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x60)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 100)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 100)) >> 0x20),
                     (int)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x68)),
                     (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x68)) >> 0x20));
  return uVar1;
}

/* ref: FUN_005da590 */
byte F_005da590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5da590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte * pbVar8;
  float10 fVar9;
  double dVar10;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (param_1 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  ((float *)(gen_frame + 0x8))[0] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x8)) + 1,0,0x7c);
  bVar6 = 0;
  ((byte *)(gen_frame + 0x87))[1] = 0;
  ((byte *)(gen_frame + 0x87))[2] = 0;
  ((byte *)(gen_frame + 0x87))[3] = 0;
  ((byte *)(gen_frame + 0x87))[4] = 0;
  ((byte *)(gen_frame + 0x87))[5] = 0;
  ((byte *)(gen_frame + 0x87))[6] = 0;
  ((byte *)(gen_frame + 0x87))[7] = 0;
  ((byte *)(gen_frame + 0x87))[8] = 0;
  ((byte *)(gen_frame + 0x87))[9] = 0;
  ((byte *)(gen_frame + 0x87))[10] = 0;
  ((byte *)(gen_frame + 0x87))[0xb] = 0;
  ((byte *)(gen_frame + 0x87))[0xc] = 0;
  ((byte *)(gen_frame + 0x87))[0xd] = 0;
  ((byte *)(gen_frame + 0x87))[0xe] = 0;
  ((byte *)(gen_frame + 0x87))[0xf] = 0;
  ((byte *)(gen_frame + 0x87))[0x10] = 0;
  ((byte *)(gen_frame + 0x87))[0x11] = 0;
  ((byte *)(gen_frame + 0x87))[0x12] = 0;
  ((byte *)(gen_frame + 0x87))[0x13] = 0;
  ((byte *)(gen_frame + 0x87))[0x14] = 0;
  ((byte *)(gen_frame + 0x87))[0x15] = 0;
  ((byte *)(gen_frame + 0x87))[0x16] = 0;
  ((byte *)(gen_frame + 0x87))[0x17] = 0;
  ((byte *)(gen_frame + 0x87))[0x18] = 0;
  ((byte *)(gen_frame + 0x87))[0x19] = 0;
  ((byte *)(gen_frame + 0x87))[0x1a] = 0;
  ((byte *)(gen_frame + 0x87))[0x1b] = 0;
  ((byte *)(gen_frame + 0x87))[0x1c] = 0;
  ((byte *)(gen_frame + 0x87))[0x1d] = 0;
  ((byte *)(gen_frame + 0x87))[0x1e] = 0;
  ((byte *)(gen_frame + 0x87))[0x1f] = 0;
  ((byte *)(gen_frame + 0x87))[0x20] = 0;
  uVar7 = 1;
  pbVar8 = (byte *)(param_1 + 0x2d);
  (*(float *)(gen_frame + 0x0)) = 5.60519e-45;
  do {
    bVar2 = pbVar8[-1];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = *pbVar8;
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[1];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[2];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[3];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[4];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[5];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    bVar2 = pbVar8[6];
    (*(byte *)(gen_frame + 0x7)) = bVar2;
    if (bVar2 != 0) {
      bVar3 = bVar2;
      if (bVar6 != 0) {
        pbVar4 = ((byte *)(gen_frame + 0x87)) + 1;
        if (bVar2 <= bVar6) {
          pbVar4 = &(*(byte *)(gen_frame + 0x7));
        }
        bVar3 = *pbVar4;
      }
      bVar6 = bVar3;
      ((byte *)(gen_frame + 0x87))[1] = bVar6;
      if (((char)param_2 != '\0') && ((byte)(bVar2 - 1) < 0x12)) {
        ((byte *)(gen_frame + 0x87))[(int)(uVar7 + 1)] = bVar2;
        uVar7 = uVar7 + 1;
        *((float *)GEN_TOP(((gen_frame + 0x4) + uVar7 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x10a3990) + (uint)bVar2 * 4) +
                    ((float10)GEN_TOD((&(*(float *)(gen_frame + 0x0)))[uVar7])))));
      }
    }
    pbVar8 = pbVar8 + 8;
    fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x0))) + -1);
    (*(float *)(gen_frame + 0x0)) = fVar1;
  } while (fVar1 != 0.0);
  dVar10 = F_004a4fe0();
  bVar2 = ((byte *)(gen_frame + 0x87))[(int)(uVar7)];
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)bVar2);
  fVar1 = (float)((float10)bVar2 * (float10)dVar10);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  if (((char)param_2 != '\0') && (uVar5 = 1, 1 < uVar7)) {
    fVar9 = (float10)fVar1;
    do {
      if ((!GEN_ISNAN((float10)((float *)(gen_frame + 0x8))[(int)(uVar5)]) && !GEN_ISNAN(fVar9)) && !((float10)((float *)(gen_frame + 0x8))[(int)(uVar5)] <= fVar9)) {
        bVar6 = ((byte *)(gen_frame + 0x87))[(int)(uVar5 + 1)];
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return bVar6;
}

/* ref: FUN_005da920 */
byte F_005da920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5da920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined * pvVar6;
  uint uVar7;
  char * pcVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined1 * puVar11;
  undefined4 * puVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  
  iVar5 = *(int *)(param_1 + 8) + param_1;
  (*(int *)(gen_frame + 0x34)) = iVar5;
  if (8 < *(int *)(iVar5 + 0xc)) {
    return 0;
  }
  pvVar6 = (undefined *)F_00406b90(0x5b0,0,0);
  if (pvVar6 == (undefined *)0x0) {
    pvVar6 = (undefined *)0x0;
  }
  else {
    pvVar6 = (undefined *)F_00698050(pvVar6);
  }
  *(undefined * PTR32 *)((int)this + 8) = pvVar6;
  puVar10 = &REFG(undefined4, 0x1322a14);
  puVar12 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  ((undefined4 *)(gen_frame + 0x0))[0] = 0x100;
  ((undefined4 *)(gen_frame + 0x0))[1] = 0x20;
  bVar4 = F_006989e0(pvVar6,((undefined4 *)(gen_frame + 0x0)));
  if (bVar4 == 0) {
    puVar10 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar10 == (undefined4 *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
    *(undefined4 *)((int)this + 8) = 0;
    return 0;
  }
  lVar3 = (ulonglong)*(uint *)((*(int *)(gen_frame + 0x34)) + 0xc) * 4;
  *(uint *)((int)this + 0x10) = *(uint *)((*(int *)(gen_frame + 0x34)) + 0xc);
  uVar7 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
  *(uint *)((int)this + 0xc) = uVar7;
  (*(uint *)(gen_frame + 0x30)) = 0;
  iVar5 = (*(int *)(gen_frame + 0x34));
  if (*(int *)((int)this + 0x10) != 0) {
    (*(int *)(gen_frame + 0x38)) = 0;
    do {
      iVar5 = (*(int *)(gen_frame + 0x34));
      iVar13 = *(int *)((*(int *)(gen_frame + 0x34)) + 8) + (*(int *)(gen_frame + 0x38));
      uVar7 = *(uint *)(iVar13 + 4 + (*(int *)(gen_frame + 0x34)));
      iVar14 = iVar13 + (*(int *)(gen_frame + 0x34));
      pcVar8 = ((char *)GEN_TOP((*(int *)(iVar13 + (*(int *)(gen_frame + 0x34))) + iVar14)));
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar8;
      (*(char * PTR32 *)(gen_frame + 0x28)) = ((char *)GEN_TOP((*(int *)(iVar14 + 0xc) + iVar14)));
      uVar9 = (*(uint *)(gen_frame + 0x30));
      if (uVar7 < 8) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x30)) * 4))) = *(undefined4 *)(iVar14 + 8);
        if ((((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) &&
            (bVar4 = F_006a4d60(*(undefined * PTR32 *)((int)this + 8),uVar7,pcVar8), bVar4 == 0)) ||
           ((((*(char * PTR32 *)(gen_frame + 0x28)) != (char *)0x0 && (*(*(char * PTR32 *)(gen_frame + 0x28)) != '\0')) &&
            (bVar4 = F_006a4d90(*(undefined * PTR32 *)((int)this + 8),uVar7,(*(char * PTR32 *)(gen_frame + 0x28))), bVar4 == 0)))) {
          F_0068fa50(*(undefined * PTR32 *)((int)this + 8));
          puVar10 = *(undefined4 * PTR32 *)((int)this + 8);
          if (puVar10 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
            *(undefined4 *)((int)this + 8) = 0;
          }
          if (*(int *)((int)this + 0xc) == 0) {
            return 0;
          }
          F_00406b30(*(int *)((int)this + 0xc));
          *(undefined4 *)((int)this + 0xc) = 0;
          return 0;
        }
        *((undefined4 *)GEN_TOP((uVar7 * 0xa0 + 0x10c + *(int *)((int)this + 8)))) =
             *(undefined4 *)(iVar14 + 0x10);
        *((undefined4 *)GEN_TOP((uVar7 * 0xa0 + 0x110 + *(int *)((int)this + 8)))) =
             *(undefined4 *)(iVar14 + 0x14);
        uVar9 = (*(uint *)(gen_frame + 0x30));
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x18;
      (*(uint *)(gen_frame + 0x30)) = uVar9 + 1;
    } while (uVar9 + 1 < *(uint *)((int)this + 0x10));
  }
  *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x4c))) = (float)*(int *)(iVar5 + 0x10);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x50))) = *(undefined4 *)(iVar5 + 0x1c);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x54))) = *(undefined4 *)(iVar5 + 0x20);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x58))) = *(undefined4 *)(iVar5 + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x5c))) = *(undefined4 *)(iVar5 + 0x24);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) = *(undefined4 *)(iVar5 + 0x28);
  iVar13 = *(int *)(iVar5 + 0x30);
  bVar4 = *(byte *)(iVar13 + 1 + iVar5);
  bVar2 = *(byte *)(iVar13 + 2 + iVar5);
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1088100);
  iVar14 = *(int *)((int)this + 8);
  fVar1 = ((float)GEN_TOF(((float10)*(byte *)(iVar13 + iVar5) / fVar15)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  *(float *)(iVar14 + 100) = fVar1;
  fVar1 = (float)((float10)bVar4 / fVar15);
  (*(float *)(gen_frame + 0x20)) = fVar1;
  *(float *)(iVar14 + 0x68) = fVar1;
  fVar1 = (float)((float10)bVar2 / fVar15);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  *(float *)(iVar14 + 0x6c) = fVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x70))) = *(undefined4 *)(iVar5 + 0x2c);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x74))) = *(undefined4 *)(iVar5 + 0x3c);
  *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) = *(char *)(iVar5 + 2) != '\0';
  *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x79))) = *(char *)(iVar5 + 0x3a) != '\0';
  *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x7a))) = *(char *)(iVar5 + 0x38) != '\0';
  *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x7b))) = *(char *)(iVar5 + 0x39) != '\0';
  uVar7 = 0;
  puVar11 = ((undefined1 *)GEN_TOP((iVar5 + *(int *)(iVar5 + 0x40) + 4)));
  do {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x2c + uVar7))) = puVar11[-4];
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x2d + uVar7))) = puVar11[-2];
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x2e + uVar7))) = *puVar11;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x2f + uVar7))) = puVar11[2];
    uVar7 = uVar7 + 4;
    puVar11 = puVar11 + 8;
  } while (uVar7 < 0x20);
  return 1;
}

/* ref: FUN_005dac00 */
uint F_005dac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a39e0));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  F_00c48350((undefined *)((int)this + 0x18),0,0x104);
  return (uint)this;
}

/* ref: FUN_005dac60 */
unsigned int F_005dac60(unsigned int gen_a0)
{
  GEN_ENTER(0x5dac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)((int)this + 0x14),0);
    F_00c9da30(*(undefined4 *)((int)this + 0x14),0);
    F_00551ae0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),*(undefined4 *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_005daca0 */
uint F_005daca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5daca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 8);
    do {
      if (*((int *)GEN_TOP((*(uint *)(*piVar1 + 0x10) + 0x18))) == param_1) {
        return *(uint *)(*piVar1 + 0x10);
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005dace0 */
unsigned int F_005dace0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dace0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005dad10 */
unsigned int F_005dad10(unsigned int gen_a0)
{
  GEN_ENTER(0x5dad10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xfc))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8) + uVar4 * 4)));
      (*(int *)(gen_frame + 0x34)) = iVar1;
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,(*(uint *)(gen_frame + 0x38)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x34)) + 0x10) + 0x100))))(*(int * PTR32 *)((*(int *)(gen_frame + 0x34)) + 0x10),((undefined1 *)(gen_frame + 0x0)));
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_005dada0 */
unsigned int F_005dada0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dada0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(uint *)(gen_frame + 0x38)) = uVar3;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8) + uVar4 * 4)));
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,param_1);
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      ((code *)*(gen_code32 *)(*piVar2 + 0x100))(piVar2,((undefined1 *)(gen_frame + 0x0)));
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)(gen_frame + 0x38)));
  }
  return 0;
}

/* ref: FUN_005dae20 */
uint F_005dae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dae20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar5 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(uint *)(gen_frame + 0x34)) = uVar3;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8) + uVar5 * 4)));
      F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),iVar1 + 0x20,param_1);
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      ((code *)*(gen_code32 *)(*piVar2 + 0x100))(piVar2,((undefined1 *)(gen_frame + 0x0)));
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 8) + uVar5 * 4))) + 0x10)));
      (*(int *)(gen_frame + 0x38)) = *piVar2;
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
      uVar4 = ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x38)) + 0x48))(piVar2,uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)(gen_frame + 0x34)));
  }
  return uVar4;
}

/* ref: FUN_005daec0 */
unsigned int F_005daec0(unsigned int gen_a0)
{
  GEN_ENTER(0x5daec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005daef0 */
unsigned int F_005daef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5daef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005daf30 */
byte F_005daf30(unsigned int gen_a0)
{
  GEN_ENTER(0x5daf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) + 0x10)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
      if ((char)uVar2 != '\0') {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_005daf70 */
byte F_005daf70(unsigned int gen_a0)
{
  GEN_ENTER(0x5daf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) + 0x10)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 1;
}

/* ref: FUN_005dafb0 */
unsigned int F_005dafb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dafb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x90))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005daff0 */
unsigned int F_005daff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5daff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005db030 */
unsigned int F_005db030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xe0))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005db070 */
uint F_005db070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x34) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x38) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x3c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302e18);
  return (uint)this;
}

/* ref: FUN_005db100 */
uint F_005db100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5db100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x30) = param_1[4];
  *(undefined4 *)((int)this + 0x34) = param_1[5];
  *(undefined4 *)((int)this + 0x38) = param_1[6];
  *(undefined4 *)((int)this + 0x3c) = param_1[7];
  *(undefined4 *)((int)this + 0x40) = param_1[8];
  *(undefined4 *)((int)this + 0x44) = param_1[9];
  *(undefined4 *)((int)this + 0x48) = param_1[10];
  F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x100))))(*(int * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_005db190 */
unsigned int F_005db190(unsigned int gen_a0)
{
  GEN_ENTER(0x5db190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a39fc));
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x60) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf5 */
unsigned int F_005db260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 8) = param_1;
  uVar2 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar3 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005db2a0 */
uint F_005db2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  int local_8;
  
  if (*(int *)((int)this + 0xa0) != 0) {
    F_00406b30(*(int *)((int)this + 0xa0));
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  *(undefined1 *)((int)this + 0xc0) = 0;
  cVar1 = *(char *)(param_1 + 0x3c);
  uVar2 = CONCAT31((int3)((uint)param_1 >> 8),cVar1);
  *(char *)((int)this + 0xc0) = cVar1;
  if (cVar1 != '\0') {
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)(uint)(int)cVar1 * 0x28 >> 0x20) != 0) |
                         (uint)((ulonglong)(uint)(int)cVar1 * 0x28),0,0);
    *(uint *)((int)this + 0xa0) = uVar2;
    local_8 = 0;
    if ('\0' < *(char *)((int)this + 0xc0)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x38) + param_1;
        iVar5 = *(int *)(iVar3 + local_8 * 4);
        piVar7 = (int *)(iVar5 + iVar3);
        *((uint *)GEN_TOP((iVar6 + *(int *)((int)this + 0xa0)))) =
             CONCAT31(CONCAT21(CONCAT11((char)piVar7[1],*(undefined1 *)(iVar5 + 5 + iVar3)),
                               *(undefined1 *)((int)piVar7 + 6)),*(undefined1 *)((int)piVar7 + 7));
        *((char *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0xa0)))) = (char)*piVar7;
        iVar5 = *piVar7;
        if (iVar5 == 1) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0xa0))));
LAB_005db39b: ;
          *piVar4 = *piVar7;
          piVar4[1] = piVar7[1];
          piVar4[2] = piVar7[2];
          piVar4[3] = piVar7[3];
        }
        else if (iVar5 == 3) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0xa0))));
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar4 = *piVar7;
            piVar7 = piVar7 + 1;
            piVar4 = piVar4 + 1;
          }
        }
        else if (iVar5 == 4) {
          piVar4 = ((int *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0xa0))));
          goto LAB_005db39b;
        }
        uVar2 = (uint)*(char *)((int)this + 0xc0);
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 0x28;
      } while (local_8 < (int)uVar2);
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf7 */
uint F_005db3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5db3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a256e;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260((undefined *)0x14c,this + 0x38);
  return uVar1;
}

/* ref: FUN_005db410 */
unsigned int F_005db410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5db410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  
  uVar2 = *(ushort *)(param_1 + 2);
  uVar3 = *(undefined4 *)(param_1 + 4);
  (*(uint *)(gen_frame + 0x18)) = (uint)uVar2;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x6fe;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = uVar2;
  (*(uint *)(gen_frame + 0xc)) = CONCAT22(uVar2,0x6fe);
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(uint *)((int)this + 0x10) = (*(uint *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x14)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
  uVar4 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
  param_1 = 0;
  if (uVar4 != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + param_1 * 4))) + 0x10)));
      bVar1 = *(byte *)((int)this_00 + 0x11);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (ushort)bVar1 << 8 | 0xfe;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = (undefined2)(*(uint *)(gen_frame + 0x18));
      (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT21((undefined2)(*(uint *)(gen_frame + 0x18)),bVar1) << 8 | 0xfe;
      (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x14));
      if (bVar1 == 6) {
        F_005db410(this_00,(uint)&(*(uint *)(gen_frame + 0xc)),param_2);
      }
      else {
        *(uint *)((int)this_00 + 0x10) = (*(uint *)(gen_frame + 0xc));
        *(byte *)((int)this_00 + 0x28) =
             *(byte *)((int)this_00 + 0x28) ^ (*(byte *)((int)this_00 + 0x28) ^ (byte)param_2) & 0xf
        ;
        *(undefined4 *)((int)this_00 + 0x14) = (*(undefined4 *)(gen_frame + 0x14));
      }
      param_1 = param_1 + 1;
    } while (param_1 < uVar4);
  }
  return 0;
}

/* ref: FUN_005db4d0 */
byte F_005db4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5db4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x9c));
    if ((char)uVar1 != '\0') {
      return *((int *)GEN_TOP((*(int *)((int)this + 0x9c) + 0xc))) == 8;
    }
  }
  return 0;
}

/* ref: FUN_005db510 */
unsigned int F_005db510(unsigned int gen_a0)
{
  GEN_ENTER(0x5db510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x9c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x9c));
    if ((char)uVar1 != '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,*(int *)((int)this + 0x9c) + 0x40);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf18 */
uint F_005db550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  bool bVar2;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c)),
      (char)uVar1 == '\0')) ||
     (bVar2 = *((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) == 8,
     uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x9c) >> 8),bVar2), !bVar2)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
    uVar1 = F_005dae20(this + 0x70,param_1);
    if ((*(int *)(this + 0x9c) != 0) &&
       (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c)),
       (char)uVar1 != '\0')) {
      uVar1 = *(uint *)(this + 0x9c);
      *(undefined4 *)(uVar1 + 0x40) = *param_1;
      *(undefined4 *)(uVar1 + 0x44) = param_1[1];
      *(undefined4 *)(uVar1 + 0x48) = param_1[2];
      *(undefined4 *)(uVar1 + 0x50) = param_1[4];
      *(undefined4 *)(uVar1 + 0x54) = param_1[5];
      *(undefined4 *)(uVar1 + 0x58) = param_1[6];
      *(undefined4 *)(uVar1 + 0x5c) = param_1[7];
      *(undefined4 *)(uVar1 + 0x60) = param_1[8];
      *(undefined4 *)(uVar1 + 100) = param_1[9];
      *(undefined4 *)(uVar1 + 0x68) = param_1[10];
    }
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf19 */
unsigned int F_005db600(unsigned int gen_a0)
{
  GEN_ENTER(0x5db600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c)),
      (char)uVar2 == '\0')) || (*((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) != 8)) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf20 */
unsigned int F_005db660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5db660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(int *)(this + 0x9c) == 0) ||
      (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x1c))))(*(int * PTR32 *)(this + 0x9c)),
      (char)uVar2 == '\0')) || (*((int *)GEN_TOP((*(int *)(this + 0x9c) + 0xc))) != 8)) {
    uVar2 = 0;
    uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
    if (uVar3 != 0) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1,param_2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf21 */
byte F_005db6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5db6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(this + 0xa8) << 0x1c) >> 0x1c;
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      return 1;
    }
    if (iVar2 == 2) {
      bVar1 = F_005daf30(this + 0x70);
      return bVar1;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf22 */
byte F_005db700(unsigned int gen_a0)
{
  GEN_ENTER(0x5db700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  
  iVar2 = (*(int *)(this + 0xa8) << 0x1c) >> 0x1c;
  if (-1 < iVar2) {
    if (iVar2 < 2) {
      return 0;
    }
    if (iVar2 == 2) {
      bVar1 = F_005daf70(this + 0x70);
      return bVar1;
    }
  }
  return 1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf46 */
unsigned int F_005db730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5db730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x9c) + 0x14))))(*(int * PTR32 *)(param_1 + 0x9c));
    if ((char)uVar1 != '\0') {
      *((float *)GEN_TOP((*(int *)(param_1 + 0x9c) + 0x14))) = param_2;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf47 */
byte F_005db770(unsigned int gen_a0)
{
  GEN_ENTER(0x5db770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar4 * 4))) + 0x10)));
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc0))(piVar1);
        if ((char)uVar2 != '\0') {
          return 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf48 */
byte F_005db7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  byte bVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(int *)(this + 0x90) - *(int *)(this + 0x8c) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + uVar5 * 4)));
      if (((iVar1 != 0) && (puVar3 = (uint *)(iVar1 + 0x30), (*puVar3 & 0xc0000000) != 0)) &&
         (bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84),puVar3), bVar2 != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return (byte)uVar4;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf50 */
unsigned int F_005db820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar3 * 4))) + 0x10)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 200))(piVar1,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf52 */
unsigned int F_005db860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 4 ^ (byte)this[0x2b]) & 0x10);
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf53 */
unsigned int F_005db8b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5db8b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x78) + uVar3 * 4))) + 0x10)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xd4))((undefined4)gen_fl2bits(param_2));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf54 */
unsigned int F_005db900(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5db900u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  if (uVar2 != 0) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x78) + uVar1 * 4))) + 0x10))) + 0xd8))))
                ((undefined4)gen_fl2bits(param_2));
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf56 */
unsigned int F_005db940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 * '\b' ^ (byte)this[0x2b]) & 8);
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xe0))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005db9a0 */
byte F_005db9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5db9a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(char *)(param_1 + 0x11) != '\x03') && (*(char *)(param_1 + 0x11) != '\a')) {
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf65 */
uint F_005db9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5db9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  float * pfVar2;
  undefined4 * puVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)pfVar2[2] +
                    ((float10)*pfVar2 * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)pfVar2[1]))))
  ;
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  fVar7 = (float10)(*(float *)(gen_frame + 0x1c));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(SQRT(fVar7)));
  param_1[3] = (undefined4)gen_fl2bits(((float)GEN_TOF(SQRT(fVar7))));
  (*(float *)(gen_frame + 0x1c)) = 0.0;
  uVar6 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar6 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) * 4))) + 0x10)));
      fVar5 = (*(float *)(gen_frame + 0x1c));
      if ((*(char *)((int)piVar1 + 0x11) != '\x03') && (*(char *)((int)piVar1 + 0x11) != '\a')) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1,((undefined1 *)(gen_frame + 0x0)));
        F_005ff0f0(param_1,uVar4);
        fVar5 = (*(float *)(gen_frame + 0x1c));
      }
      (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)gen_fl2bits(fVar5) + 1U);
    } while ((int)gen_fl2bits(fVar5) + 1U < uVar6);
  }
  return (uint)param_1;
}

/* ref: FUN_005dba90 */
uint F_005dba90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dba90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x78);
  uVar2 = 0;
  uVar1 = *(int *)((int)this + 0x7c) - (int)((int)(uintptr_t)piVar3) >> 2;
  if (uVar1 != 0) {
    do {
      if ((*(int *)(param_1 + 4) <<
           (('\x04' - ((*(byte *)((int)this + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
          *(uint *)((int)this + 0x18)) == *((uint *)GEN_TOP((*(uint *)(*piVar3 + 0x10) + 0x18)))) {
        return *(uint *)(*piVar3 + 0x10);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_005dbaf0 */
byte F_005dbaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5dbaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool local_5;
  
  if (*(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c)) {
    local_5 = false;
    *(uint *)((int)this + 0xb0) =
         *(uint *)((int)this + 0xb0) ^
         ((((byte)param_1 == 0) + 1) * 8 ^ *(uint *)((int)this + 0xb0)) & 0x38;
    piVar1 = *(int * PTR32 *)((int)this + 0x9c);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      bVar4 = (char)uVar3 != '\0';
      if (bVar4) {
        *(uint *)((int)this + 0xa8) =
             *(uint *)((int)this + 0xa8) ^
             ((((byte)param_1 != 0) + 2) * 0x10 ^ *(uint *)((int)this + 0xa8)) & 0xff0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))
                  (*(int * PTR32 *)((int)this + 0x9c),(*(int *)((int)this + 0xa8) << 0x14) >> 0x18,param_2)
        ;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x14))))(*(int * PTR32 *)((int)this + 0x9c));
      bVar5 = (char)uVar3 != '\0';
      if (bVar5) {
        *(uint *)((int)this + 0xa8) =
             *(uint *)((int)this + 0xa8) ^
             ((((byte)param_1 == 0) + 4) * 0x1000 ^ *(uint *)((int)this + 0xa8)) & 0xff000;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))
                  (*(int * PTR32 *)((int)this + 0x9c),(*(int *)((int)this + 0xa8) << 0xc) >> 0x18,param_2);
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x18))))(*(int * PTR32 *)((int)this + 0x9c));
      bVar6 = (char)uVar3 != '\0';
      if (bVar6) {
        bVar2 = ((byte)param_2 & 1) * '\x02' | *(byte *)((int)this + 0xac) & 0xfc |
                (byte)param_1 & 1;
        *(byte *)((int)this + 0xac) = bVar2;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))
                  (*(int * PTR32 *)((int)this + 0x9c),(byte)~bVar2 & 1 | 6,param_2);
      }
      local_5 = bVar6 || (bVar5 || bVar4);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x1c))))(*(int * PTR32 *)((int)this + 0x9c));
      if ((char)uVar3 != '\0') {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))
                  (*(int * PTR32 *)((int)this + 0x9c),((byte)param_1 == 0) + 8,param_2);
      }
    }
    return local_5;
  }
  *(undefined1 *)((int)this + 0xd8) = 1;
  *(byte *)((int)this + 0xdc) =
       ((byte)param_2 & 1) * '\x02' | *(byte *)((int)this + 0xdc) & 0xfc | (byte)param_1 & 1;
  return 1;
}

/* ref: FUN_005dbc90 */
byte F_005dbc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dbc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 < 0x10) && (*(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c))) {
    return *(char *)(param_1 + 0xc5 + (int)this) != '\0';
  }
  return 0;
}

/* ref: FUN_005dbcc0 */
unsigned int F_005dbcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dbcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar3 * 4))) + 0x10)));
      if ((*(byte *)((int)piVar1 + 0x2b) & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1,param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005dbd00 */
uint F_005dbd00(unsigned int gen_a0)
{
  GEN_ENTER(0x5dbd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a3b14));
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(byte *)((int)this + 0x44) = *(byte *)((int)this + 0x44) & 0xfc;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xc00000ff;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf2 */
byte F_005dbd80(unsigned int gen_a0)
{
  GEN_ENTER(0x5dbd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pTVar2;
  
  if ((*(uint *)(this + 0x30) & 0xc0000000) != 0) {
    F_00b5b550(REFG(void * PTR32, 0x14c4e84),this + 0x30);
    *(undefined4 *)(this + 0x30) = 0;
  }
  pTVar2 = this + 0x38;
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) != 0) {
      bVar1 = F_00507740(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),pTVar2);
      return bVar1;
    }
    bVar1 = F_00507740((undefined *)0x14c,pTVar2);
    pTVar2 = (undefined *)(uint)bVar1;
  }
  return (byte)pTVar2;
}

/* ref: FUN_005dbde0 */
uint F_005dbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dbde0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int * piVar9;
  int iVar10;
  ulonglong uVar11;
  int local_10;
  
  iVar10 = (*(int *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) == 0) {
    puVar2 = (uint *)F_00b5bee0(REFG(void * PTR32, 0x14c4e84),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    uVar5 = *puVar2;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = uVar5;
    return uVar5;
  }
  uVar5 = *(uint *)((*(int *)&gen_args[1]) + 0xc);
  puVar3 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 8),0,0);
  puVar8 = ((undefined4 *)GEN_TOP((*(int *)(iVar10 + 8) + iVar10)));
  local_10 = 0;
  puVar6 = puVar3;
  if (0 < (int)uVar5) {
    do {
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
      piVar9 = *(int * PTR32 *)(iVar1 + 0x78);
      uVar7 = 0;
      uVar4 = *(int *)(iVar1 + 0x7c) - (int)((int)(uintptr_t)piVar9) >> 2;
      iVar10 = (*(int *)&gen_args[1]);
      if (uVar4 == 0) goto LAB_005dbebe;
      while ((puVar8[1] << (('\x04' - ((*(byte *)(iVar1 + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
             *(uint *)(iVar1 + 0x18)) != *((uint *)GEN_TOP((*(int *)(*piVar9 + 0x10) + 0x18)))) {
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 1;
        if (uVar4 <= uVar7) goto LAB_005dbebe;
      }
      puVar8[1] = *((undefined4 *)GEN_TOP((*(int *)(*piVar9 + 0x10) + 0x18)));
      local_10 = local_10 + 1;
      puVar8 = puVar8 + 2;
      puVar6 = puVar6 + 2;
    } while (local_10 < (int)uVar5);
  }
  puVar6 = (undefined4 *)F_00b5bee0(REFG(void * PTR32, 0x14c4e84),&(*(int *)&gen_args[1]),iVar10,(*(undefined4 *)&gen_args[2]));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = *puVar6;
LAB_005dbebe: ;
  uVar11 = F_00c46aa0(*(int *)(iVar10 + 8) + iVar10,puVar3,uVar5 * 8);
  uVar5 = (uint)uVar11;
  if (puVar3 != (undefined4 *)0x0) {
    uVar11 = F_00406b30(puVar3);
    uVar5 = (uint)uVar11;
  }
  return uVar5;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf7 */
uint F_005dbf30(unsigned int gen_a0)
{
  GEN_ENTER(0x5dbf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a256f;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260((undefined *)0x14c,this + 0x38);
  return uVar1;
}

/* ref: FUN_005dbf70 */
unsigned int F_005dbf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dbf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint * puVar2;
  float10 fVar3;
  
  *(byte *)((int)param_1 + 0x44) = *(byte *)((int)param_1 + 0x44) & 0xfe;
  if ((*(char *)((int)param_1 + 0x48) == '\x05') || (*(char *)((int)param_1 + 0x48) == '\x06')) {
    if ((*(uint *)((int)param_1 + 0x30) & 0xc0000000) != 0) {
      F_00b5b550(REFG(void * PTR32, 0x14c4e84),(undefined4 *)((int)param_1 + 0x30));
      *(undefined4 *)((int)param_1 + 0x30) = 0;
    }
    F_005dbde0(param_1,*(undefined4 *)((int)param_1 + 0x3c),*(undefined4 *)((int)param_1 + 0x40));
  }
  uVar1 = param_2;
  if (param_2 == 0xffffffff) {
    uVar1 = ~(uint)(*(byte *)((int)param_1 + 0x44) >> 1) & 1;
  }
  *(char *)((int)param_1 + 0x48) = (uVar1 == 0) + '\x01';
  puVar2 = (uint *)((int)param_1 + 0x30);
  if ((*puVar2 & 0xc0000000) != 0) {
    F_00b5b3e0(REFG(void * PTR32, 0x14c4e84),puVar2,uVar1,0xffffffff);
    if (param_3 != 0) {
      fVar3 = (float10)param_3;
      if (param_3 < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      F_00b5bcc0(REFG(void * PTR32, 0x14c4e84),puVar2,
                   ((float)GEN_TOF(((fVar3 * (float10)*(double *)&REFG(undefined, 0x1088070)) /
                          (float10)*(double *)&REFG(undefined, 0x10912a8)))));
    }
  }
  return 0;
}

/* ref: FUN_005dc030 */
uint F_005dc030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dc030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    puVar1 = *(uint * PTR32 *)((int)this + 4);
    do {
      if (*(int *)(*puVar1 + 0x18) == param_1) {
        return *puVar1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005dc070 */
unsigned int F_005dc070(unsigned int gen_a0)
{
  GEN_ENTER(0x5dc070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: FUN_005dc0a0 */
uint F_005dc0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dc0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x78))) +
                          (uint)*(byte *)((int)param_1 + 0x2a) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this_00 + 0x20);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_00 + 0x28);
      piVar1 = *(int * PTR32 *)((int)this + 4);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x30);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x34);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this_00 + 0x38);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this_00 + 0x3c);
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this_00 + 0x40);
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this_00 + 0x44);
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this_00 + 0x48);
      (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1);
      uVar2 = F_005db100(this_00,&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
      return uVar2;
    }
    in_EAX = ((code *)*(gen_code32 *)(*param_1 + 0xe8))(param_1,param_2);
  }
  return in_EAX;
}

/* ref: FUN_005dc190 */
uint F_005dc190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dc190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x78))) +
                          (uint)*(byte *)((int)param_1 + 0x2a) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this_00 + 0x20);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_00 + 0x28);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x30);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x34);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this_00 + 0x38);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this_00 + 0x3c);
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this_00 + 0x40);
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this_00 + 0x44);
      (*(undefined4 *)(gen_frame + 0x10)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x14)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_2[3];
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this_00 + 0x48);
      (*(undefined4 *)(gen_frame + 0x18)) = param_2[2];
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xfc))))(*(int * PTR32 *)((int)this + 4));
      uVar1 = F_005db100(this_00,&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
      return uVar1;
    }
    in_EAX = ((code *)*(gen_code32 *)(*param_1 + 0xf0))(param_1,param_2);
  }
  return in_EAX;
}

/* ref: FUN_005dc350 */
uint F_005dc350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dc350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      piVar1 = *(int * PTR32 *)((int)this + 4);
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar1[0x1e] + (uint)*(byte *)((int)param_1 + 0x2a) * 4)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1);
      uVar2 = F_005db100(this_00,param_2,uVar2);
      return uVar2;
    }
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x100))(param_1,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_005dc3a0 */
unsigned int F_005dc3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dc3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int * piVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = *(int * PTR32 *)((int)this + 4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x104))(piVar2,&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)*param_1);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_1[1]);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_1[2]);
    fVar4 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)param_1[1]);
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)*param_1);
    fVar6 = (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_1[2]);
    fVar1 = ((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4))));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    pfVar3 = &(*(float *)(gen_frame + 0x28));
    fVar1 = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar3 = &(*(float *)(gen_frame + 0x2c));
    }
    *(float *)((int)this + 0x18) = *pfVar3;
  }
  return 0;
}

/* ref: FUN_005dc450 */
uint F_005dc450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dc450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c28));
  F_00c48350((undefined *)((int)this + 0x6c),0,0x48);
  return (uint)this;
}

/* ref: FUN_005dc4a0 */
uint F_005dc4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dc4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c28));
  F_00c48350((undefined *)((int)this + 0x6c),0,0x48);
  return (uint)this;
}

/* ref: FUN_005dc4f0 */
uint F_005dc4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dc4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int in_ecx;
  int iVar2;
  
  F_00c48350((undefined *)((int)this + 0x1c),0,0x50);
  in_ecx = (int)this + 0x6c;
  iVar2 = 4;
  do {
    F_006036d0(in_ecx,REFG(float, 0x1302df0),REFG(float, 0x1302df4),REFG(float, 0x1302df8));
    F_00a1e0f0(&(*(float *)(gen_frame + 0x0)),&REFG(undefined4, 0x1302e00));
    F_00603830(in_ecx,(*(float *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x8)));
    uVar1 = F_00603920(in_ecx,REFG(float, 0x1302e10),REFG(float, 0x1302e14),REFG(float, 0x1302e18));
    in_ecx = in_ecx + 0x12;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_005dc5c0 */
uint F_005dc5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dc5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0xfc))(param_2)));
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x78))) +
                    (uint)*(byte *)((int)param_2 + 0x2a) * 4)));
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar1 + 0x3c);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(iVar1 + 0x40);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar1 + 0x44);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar1 + 0x48);
    puVar2 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  uVar3 = F_006039f0(((undefined *)GEN_TOP(((int)this + (param_1 * 9 + 0x36) * 2))),puVar2);
  return uVar3;
}

/* ref: FUN_005dc670 */
uint F_005dc670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dc670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  byte * pbVar11;
  byte * pbVar12;
  int iVar13;
  ushort * puVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  iVar13 = *(int *)((int)this + 0x24);
  if (iVar13 == 2) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8);
    (*(float *)(gen_frame + 0x84)) = 0.0;
    goto LAB_005dc714;
  }
  fVar19 = REFG(float, 0x1088138);
  if (iVar13 == 3) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8);
    if ((char)param_1 == '\0') {
LAB_005dc6ee: ;
      fVar19 = REFG(float, 0x10a3c50);
    }
  }
  else {
    if (iVar13 != 4) {
      (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 1;
      (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3),1)));
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1088138);
      goto LAB_005dc714;
    }
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x80)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((uint)GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x80)), 1, 3) << 8);
    if ((char)param_1 != '\0') goto LAB_005dc6ee;
  }
  (*(float *)(gen_frame + 0x84)) = fVar19;
  if (*(char *)((int)this + 0x2c) != '\0') {
    (*(float *)(gen_frame + 0x84)) = gen_bits2f((uint)gen_fl2bits(fVar19) ^ REFG(uint, 0x10920d0));
  }
LAB_005dc714: ;
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x80));
  iVar13 = *(int *)((int)this + 0x20);
  if (iVar13 == 0) {
    iVar13 = *(int *)((int)this + 0x28);
    fVar19 = *(float *)((int)this + 0x34);
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
    if (iVar13 == 0) {
      F_0054cf80(&(*(float *)(gen_frame + 0x70)),fVar19);
    }
    else if (iVar13 == 1) {
      F_005fe650(&(*(float *)(gen_frame + 0x70)),fVar19);
    }
    else if (iVar13 == 2) {
      (*(float *)(gen_frame + 0x70)) = 0.0;
      (*(float *)(gen_frame + 0x74)) = 0.0;
      fVar19 = (float)((float10)fVar19 * (float10)REFG(double, 0x1088108));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
      fVar16 = ((float10)GEN_TOD(fsin((float10)fVar19)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
      (*(float *)(gen_frame + 0x78)) = (float)fVar16;
      fVar16 = ((float10)GEN_TOD(fcos((float10)fVar19)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
      (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
    }
    pfVar9 = (float *)F_00a1dab0(((undefined1 *)(gen_frame + 0x40)),&REFG(undefined4, 0x1302cf0),&(*(float *)(gen_frame + 0x70)),*(float *)((int)this + 0x10),
                                   *(float *)((int)this + 0x30),(*(float *)(gen_frame + 0x84)),(uint)(*(float * PTR32 *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0xb0)) = *pfVar9;
    fVar19 = pfVar9[1];
    (*(float *)(gen_frame + 0xb4)) = fVar19;
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x131f3dc) - (float10)*(float *)((int)this + 0x34)))))));
    fVar1 = pfVar9[2];
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    fVar2 = pfVar9[3];
    iVar13 = *(int *)((int)this + 0x3c);
    (*(float *)(gen_frame + 0xbc)) = fVar2;
    ((float *)(gen_frame + 0x90))[0] = *pfVar9;
    ((float *)(gen_frame + 0x90))[1] = fVar19;
    ((float *)(gen_frame + 0x90))[2] = fVar1;
    ((float *)(gen_frame + 0x90))[3] = fVar2;
    if (((iVar13 != 0) && (*(int *)((int)this + 0x40) != 0)) && (*(int *)((int)this + 0x28) == 2)) {
      (*(int * PTR32 *)(gen_frame + 0x8c)) = *(int * PTR32 *)((int)this + 0x3c);
      pbVar11 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x1c))))
                                  (*(int * PTR32 *)((int)this + 0x40))));
      pbVar12 = ((byte *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8c)))));
      do {
        bVar4 = *pbVar12;
        bVar15 = bVar4 < *pbVar11;
        if (bVar4 != *pbVar11) {
LAB_005dcb64: ;
          iVar13 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_005dcb69;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar12[1];
        bVar15 = bVar4 < pbVar11[1];
        if (bVar4 != pbVar11[1]) goto LAB_005dcb64;
        pbVar12 = pbVar12 + 2;
        pbVar11 = pbVar11 + 2;
      } while (bVar4 != 0);
      iVar13 = 0;
LAB_005dcb69: ;
      if (iVar13 == 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 0x34))));
      }
    }
    iVar13 = *(int *)((int)this + 0x28);
    if (iVar13 == 0) {
      F_0054cf80(&(*(float *)(gen_frame + 0x70)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))));
    }
    else if (iVar13 == 1) {
      F_005fe650(&(*(float *)(gen_frame + 0x70)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))));
    }
    else if (iVar13 == 2) {
      (*(float *)(gen_frame + 0x70)) = 0.0;
      (*(float *)(gen_frame + 0x74)) = 0.0;
      fVar19 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x88))))) * (float10)REFG(double, 0x1088108));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
      fVar16 = ((float10)GEN_TOD(fsin((float10)fVar19)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
      (*(float *)(gen_frame + 0x78)) = (float)fVar16;
      fVar16 = ((float10)GEN_TOD(fcos((float10)fVar19)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
      (*(int * PTR32 *)(gen_frame + 0x7c)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
    }
    pfVar9 = (float *)F_00a1dab0(((undefined1 *)(gen_frame + 0x20)),&REFG(undefined4, 0x1302cf0),&(*(float *)(gen_frame + 0x70)),*(float *)((int)this + 0x10),
                                   *(float *)((int)this + 0x30),(*(float *)(gen_frame + 0x84)),(uint)(*(float * PTR32 *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0xc0)) = *pfVar9;
    (*(float *)(gen_frame + 0xc4)) = pfVar9[1];
    (*(float *)(gen_frame + 0xc8)) = pfVar9[2];
    (*(float *)(gen_frame + 0xcc)) = pfVar9[3];
    (*(float *)(gen_frame + 0xac)) = pfVar9[3];
    (*(float * PTR32 *)(gen_frame + 0x80)) = ((float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0xa8)) = pfVar9[2];
    ((float *)(gen_frame + 0x90))[4] = *pfVar9;
    ((float *)(gen_frame + 0x90))[5] = pfVar9[1];
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (undefined4 *)((int)this + 0x3c);
    puVar14 = (ushort *)((int)this + 0x74);
    (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
    do {
      fVar18 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar17 = (float10)*(double *)&REFG(undefined, 0x10a3968);
      fVar16 = (float10)*(double *)&REFG(undefined, 0x1080228);
      uVar5 = *puVar14;
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)puVar14[-1];
      uVar6 = puVar14[1];
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar5;
      (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((float10)puVar14[-1] * fVar17) * fVar18 - fVar16)));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar6;
      (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((float10)uVar5 * fVar17) * fVar18 - fVar16)));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((float10)(int)(uint)uVar6 * fVar17) * fVar18 - fVar16)));
      F_00a1e0d0(((undefined1 *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x60)));
      F_004f6eb0((*(float * PTR32 *)(gen_frame + 0x80)),(uint)((undefined1 *)(gen_frame + 0x50)));
      uVar8 = F_005dc190(this,*(*(undefined4 * PTR32 *)(gen_frame + 0x88)),(*(float * PTR32 *)(gen_frame + 0x80)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x80)) = (*(float * PTR32 *)(gen_frame + 0x80)) + 4;
      puVar14 = puVar14 + 9;
      fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x84))) + -1);
      (*(float *)(gen_frame + 0x84)) = fVar19;
    } while (fVar19 != 0.0);
  }
  else if (iVar13 == 1) {
    (*(float *)(gen_frame + 0x74)) = REFG(float, 0x1375ac4);
    fVar19 = *(float *)((int)this + 0x30);
    fVar1 = *(float *)((int)this + 0x10);
    (*(float *)(gen_frame + 0x78)) = REFG(float, 0x1375ac8);
    (*(float *)(gen_frame + 0x70)) = gen_bits2f(*(uint *)((int)this + 0x38) ^ REFG(uint, 0x10920d0));
    pfVar10 = (float *)F_00a1da10(((undefined1 *)(gen_frame + 0x30)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x70)),fVar1,fVar19,(*(float *)(gen_frame + 0x84)),(*(float * PTR32 *)(gen_frame + 0x80)))
    ;
    (*(float *)(gen_frame + 0xb0)) = *pfVar10;
    fVar19 = pfVar10[1];
    fVar2 = *(float *)((int)this + 0x30);
    fVar3 = *(float *)((int)this + 0x10);
    (*(float *)(gen_frame + 0xb4)) = fVar19;
    fVar1 = pfVar10[2];
    ((float *)(gen_frame + 0x90))[0] = *pfVar10;
    (*(float *)(gen_frame + 0xb8)) = fVar1;
    ((float *)(gen_frame + 0x90))[1] = fVar19;
    ((float *)(gen_frame + 0x90))[2] = fVar1;
    (*(float *)(gen_frame + 0x70)) = *(float *)((int)this + 0x38);
    pfVar9 = (float *)F_00a1da10(((undefined1 *)(gen_frame + 0x10)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x70)),fVar3,fVar2,(*(float *)(gen_frame + 0x84)),pfVar9);
    (*(float *)(gen_frame + 0xc0)) = *pfVar9;
    (*(float *)(gen_frame + 0xc4)) = pfVar9[1];
    (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((int)this + 0x70);
    (*(float *)(gen_frame + 0xc8)) = pfVar9[2];
    ((float *)(gen_frame + 0x90))[4] = *pfVar9;
    ((float *)(gen_frame + 0x90))[5] = pfVar9[1];
    (*(float *)(gen_frame + 0xa8)) = pfVar9[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (undefined4 *)((int)this + 0x3c);
    pfVar9 = ((float *)(gen_frame + 0x90)) + 2;
    (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
    do {
      fVar18 = (float10)*(double *)&REFG(undefined, 0x10a3960);
      fVar17 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
      uVar5 = *(ushort *)((int)(*(float * PTR32 *)(gen_frame + 0x80)) + -2);
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)*(ushort *)((*(float * PTR32 *)(gen_frame + 0x80)) + -1);
      uVar6 = *(ushort *)(*(float * PTR32 *)(gen_frame + 0x80));
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar5;
      pfVar10 = pfVar9 + -2;
      fVar19 = ((float)GEN_TOF((((float10)*(ushort *)((*(float * PTR32 *)(gen_frame + 0x80)) + -1) * fVar18) * fVar17 - fVar16)));
      (*(float *)(gen_frame + 0x60)) = fVar19;
      (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar6;
      fVar1 = ((float)GEN_TOF((((float10)uVar5 * fVar18) * fVar17 - fVar16)));
      (*(float *)(gen_frame + 0x64)) = fVar1;
      fVar2 = ((float)GEN_TOF((((float10)(int)(uint)uVar6 * fVar18) * fVar17 - fVar16)));
      (*(float *)(gen_frame + 0x68)) = fVar2;
      *pfVar10 = (float)((float10)*pfVar10 + (float10)fVar19);
      uVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x88));
      pfVar9[-1] = (float)((float10)pfVar9[-1] + (float10)fVar1);
      *pfVar9 = (float)((float10)*pfVar9 + (float10)fVar2);
      uVar8 = F_005dc0a0(this,uVar7,pfVar10);
      (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x80)) + 0x12);
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
      pfVar9 = pfVar9 + 4;
      fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x84))) + -1);
      (*(float *)(gen_frame + 0x84)) = fVar19;
    } while (fVar19 != 0.0);
  }
  else {
    uVar8 = iVar13 - 2;
    if (uVar8 == 0) {
      fVar19 = *(float *)((int)this + 0x30);
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1375ac8);
      (*(float *)(gen_frame + 0x64)) = *(float *)((int)this + 0x38);
      pfVar9 = (float *)F_00a1da10(((undefined1 *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x60)),*(float *)((int)this + 0x10),
                                     fVar19,(*(float *)(gen_frame + 0x84)),(*(float * PTR32 *)(gen_frame + 0x80)));
      fVar19 = *pfVar9;
      (*(float *)(gen_frame + 0xc0)) = fVar19;
      fVar1 = pfVar9[1];
      (*(float *)(gen_frame + 0xc4)) = fVar1;
      fVar2 = pfVar9[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (undefined4 *)((int)this + 0x3c);
      (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((int)this + 0x70);
      (*(float *)(gen_frame + 0xc8)) = fVar2;
      (*(float *)(gen_frame + 0xb0)) = fVar19;
      (*(float *)(gen_frame + 0xb4)) = fVar1;
      (*(float *)(gen_frame + 0xb8)) = fVar2;
      ((float *)(gen_frame + 0x90))[4] = fVar19;
      ((float *)(gen_frame + 0x90))[5] = fVar1;
      (*(float *)(gen_frame + 0xa8)) = fVar2;
      ((float *)(gen_frame + 0x90))[0] = fVar19;
      ((float *)(gen_frame + 0x90))[1] = fVar1;
      ((float *)(gen_frame + 0x90))[2] = fVar2;
      pfVar9 = ((float *)(gen_frame + 0x90)) + 2;
      (*(float *)(gen_frame + 0x84)) = 5.60519e-45;
      do {
        fVar18 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        fVar17 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        uVar5 = *(ushort *)((int)(*(float * PTR32 *)(gen_frame + 0x80)) + -2);
        (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)*(ushort *)((*(float * PTR32 *)(gen_frame + 0x80)) + -1);
        uVar6 = *(ushort *)(*(float * PTR32 *)(gen_frame + 0x80));
        (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar5;
        uVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x88));
        fVar19 = ((float)GEN_TOF((((float10)*(ushort *)((*(float * PTR32 *)(gen_frame + 0x80)) + -1) * fVar18) * fVar17 - fVar16)));
        (*(float *)(gen_frame + 0x70)) = fVar19;
        (*(int * PTR32 *)(gen_frame + 0x8c)) = (int *)(uint)uVar6;
        pfVar10 = pfVar9 + -2;
        fVar1 = ((float)GEN_TOF((((float10)uVar5 * fVar18) * fVar17 - fVar16)));
        (*(float *)(gen_frame + 0x74)) = fVar1;
        fVar2 = ((float)GEN_TOF((((float10)(int)(uint)uVar6 * fVar18) * fVar17 - fVar16)));
        (*(float *)(gen_frame + 0x78)) = fVar2;
        *pfVar10 = (float)((float10)fVar19 + (float10)*pfVar10);
        pfVar9[-1] = (float)((float10)fVar1 + (float10)pfVar9[-1]);
        *pfVar9 = (float)((float10)fVar2 + (float10)*pfVar9);
        uVar8 = F_005dc0a0(this,uVar7,pfVar10);
        (*(float * PTR32 *)(gen_frame + 0x80)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x80)) + 0x12);
        (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 *)(gen_frame + 0x88)) + 1;
        pfVar9 = pfVar9 + 4;
        fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x84))) + -1);
        (*(float *)(gen_frame + 0x84)) = fVar19;
      } while (fVar19 != 0.0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return uVar8;
}

/* ref: FUN_005dcd10 */
uint F_005dcd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5dcd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x78))) +
                    (uint)*(byte *)((int)param_2 + 0x2a) * 4)));
    puVar3 = ((undefined4 *)GEN_TOP(((param_1 + 5) * 0x10 + (int)this)));
    *puVar3 = *(undefined4 *)(iVar1 + 0x30);
    puVar3[1] = *(undefined4 *)(iVar1 + 0x34);
    puVar3[2] = *(undefined4 *)(iVar1 + 0x38);
    puVar3[3] = *(undefined4 *)(iVar1 + 0x3c);
    return (uint)puVar3;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0xec))(param_2)));
  puVar4 = ((undefined4 *)GEN_TOP(((param_1 + 5) * 0x10 + (int)this)));
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  puVar4[2] = puVar3[2];
  uVar2 = puVar3[3];
  puVar4[3] = uVar2;
  return uVar2;
}

/* ref: FUN_005dcd90 */
uint F_005dcd90(unsigned int gen_a0)
{
  GEN_ENTER(0x5dcd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar1 = *(float *)((int)this + 0x30);
  bVar3 = GEN_ISNAN(fVar1);
  bVar5 = bVar3 || fVar1 == 0.0;
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if (bVar3 != bVar5) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),
                    CONCAT11(bVar5 << 6 | bVar3 << 2 | 2U | !(0.0 <= fVar1),(char)in_EAX));
  }
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)((int)this + 0x2c))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  *(float *)((int)this + 0x2c) = fVar1;
  if ((float10)*(float *)&REFG(undefined, 0x131f3dc) < (float10)fVar1) {
    *(float *)((int)this + 0x2c) = (float)((float10)fVar1 - (float10)*(float *)&REFG(undefined, 0x131f3dc));
  }
  iVar2 = *(int *)((int)this + 0x20);
  if (iVar2 == 0) {
    (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0x2c);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2c) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x10)) = (float)fVar6;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  else if (iVar2 == 1) {
    fVar1 = *(float *)((int)this + 0x2c);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x14)) = (float)fVar6;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  else {
    if (iVar2 != 2) goto LAB_005dcec0;
    fVar1 = *(float *)((int)this + 0x2c);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    (*(float *)(gen_frame + 0x18)) = (float)fVar6;
    fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = (float)fVar6;
    fVar6 = (float10)(float)fVar6;
  }
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
LAB_005dcec0: ;
  F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x50);
  uVar4 = F_005dc190(this,*(undefined4 *)((int)this + 0x38),((undefined1 *)(gen_frame + 0x0)));
  if (*(char *)((int)this + 0x35) != '\0') {
    F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x60);
    uVar4 = F_005dc190(this,*(undefined4 *)((int)this + 0x3c),((undefined1 *)(gen_frame + 0x0)));
  }
  if (*(char *)((int)this + 0x36) != '\0') {
    F_004f6d80(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x70);
    uVar4 = F_005dc190(this,*(undefined4 *)((int)this + 0x40),((undefined1 *)(gen_frame + 0x0)));
  }
  return uVar4;
}

/* ref: FUN_005dcf40 */
uint F_005dcf40(unsigned int gen_a0)
{
  GEN_ENTER(0x5dcf40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2c) = 0;
  uVar1 = F_005dc190(this,*(undefined4 *)((int)this + 0x38),(int)this + 0x50);
  if (*(char *)((int)this + 0x35) != '\0') {
    uVar1 = F_005dc190(this,*(undefined4 *)((int)this + 0x3c),(int)this + 0x60);
  }
  if (*(char *)((int)this + 0x36) != '\0') {
    uVar1 = F_005dc190(this,*(undefined4 *)((int)this + 0x40),(int)this + 0x70);
  }
  return uVar1;
}

/* ref: FUN_005dcf90 */
byte F_005dcf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dcf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined1 * puVar2;
  uint uVar3;
  uint _Size;
  
  *(undefined4 *)((int)this + 0xc) = 7;
  *(undefined4 *)((int)this + 0x1c) = 1;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)((int)this + 0x21) = bVar1;
  if (8 < bVar1) {
    *(undefined1 *)((int)this + 0x21) = 8;
  }
  bVar1 = 0;
  uVar3 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (*(char *)((int)this + 0x21) != '\0') {
    do {
      puVar2 = ((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + uVar3 * 2 + param_1)));
      (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),*puVar2);
      _Size = (byte)puVar2[1] / 10;
      if (_Size < 0xb) {
        if (_Size != 0) goto LAB_005dd005;
      }
      else {
        _Size = 10;
LAB_005dd005: ;
        F_00c48350((undefined *)((*(int *)(gen_frame + 0x8)) + 0x28 + (int)this),(*(int *)(gen_frame + 0x4)),_Size);
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + _Size;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)((int)this + 0x21));
    bVar1 = (byte)(*(int *)(gen_frame + 0x8));
  }
  *(byte *)((int)this + 0x22) = bVar1;
  return bVar1;
}

/* ref: FUN_005dd040 */
uint F_005dd040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c58));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302e18);
  F_005d6e90(this);
  return ((uint)(uint)(this));
}

/* ref: FUN_005dd120 */
uint F_005dd120(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5dd120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = F_00427e30();
  uVar2 = F_00c4f2cb((int)uVar4);
  param_1[1] = 0;
  *param_1 = 0;
  if ((float10)param_2 < (float10)param_3) {
    uVar3 = F_00c4f2dd();
    iVar1 = (int)(((float10)param_3 - (float10)param_2) * (float10)*(double *)&REFG(undefined, 0x10912a8));
    uVar2 = (int)uVar3 / iVar1;
    param_1[2] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)param_2 +
                                    (float10)((int)uVar3 % iVar1) /
                                    (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  }
  else {
    param_1[2] = (undefined4)gen_fl2bits(param_3);
  }
  if ((float10)param_4 < (float10)param_5) {
    uVar2 = F_00c4f2dd();
    iVar1 = (int)(((float10)param_5 - (float10)param_4) * (float10)*(double *)&REFG(undefined, 0x10912a8));
    param_1[3] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)param_4 +
                                    (float10)((int)uVar2 % iVar1) /
                                    (float10)*(double *)&REFG(undefined, 0x10912a8)))));
    return (int)uVar2 / iVar1;
  }
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  return uVar2;
}

/* ref: FUN_005dd1f0 */
unsigned int F_005dd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3c84));
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf4 */
uint F_005dd2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x30);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf23 */
uint F_005dd350(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if ((uVar1 == 0xffffffff) || (*((int *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))) == 0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
    if (uVar1 != 0xffffffff) {
      return *((uint *)GEN_TOP((*(int *)(this + 0x30) + 0xec)));
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf19 */
uint F_005dd390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5dd390u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *(int * PTR32 *)(uVar2 + 0xf0);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf20 */
uint F_005dd3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5dd3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *(int * PTR32 *)(uVar2 + 0xf0);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf22 */
byte F_005dd3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5dd3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  char cVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar3 != 0xffffffff) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
    if ((uVar3 != 0xffffffff) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar2 != (int *)0x0)) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x58))
                        (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return (byte)uVar3;
    }
    if ((*((int *)GEN_TOP((*(int *)(this + 0x30) + 0xec))) != 0) &&
       (cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x30) + 0xec))) + 0x65))), cVar1 != '\x04')) {
      return cVar1 == '\x03';
    }
  }
  return 1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf65 */
uint F_005dd450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if ((uVar2 != 0xffffffff) &&
     (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1,param_1);
    return param_1;
  }
  F_005d9d70((undefined *)this,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf66 */
uint F_005dd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if ((uVar1 == 0xffffffff) ||
     (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar2 == (int *)0x0)) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x60))(this)));
    if ((piVar2 == (int *)0x0) || (*(char *)((int)piVar2 + 0x65) != '\x03')) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,((undefined1 *)(gen_frame + 0x20)));
      F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
      *param_1 = (*(undefined4 *)(gen_frame + 0x0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
      param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
      param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
      param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
    }
    else {
      ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2,param_1);
    }
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 0x108))(piVar2,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: FUN_005dd590 */
uint F_005dd590(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd1f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
  return (uint)this;
}

/* ref: FUN_005dd5b0 */
uint F_005dd5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd1f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BattleNpcLayoutInstance::vf4 */
uint F_005dd5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  *(uint *)(this + 0x70) = uVar2;
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x74) = uVar1;
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    uVar2 = F_00a607e0(*(undefined * PTR32 *)(this + 0x30),0,uVar1,2);
  }
  return uVar2;
}

/* ref: FUN_005dd660 */
unsigned int F_005dd660(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4014));
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x42) = 0;
  *(undefined2 *)((int)this + 0x46) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x60) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 100) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x68) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x6c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x74) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x78) = REFG(float, 0x1302e18);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf4 */
uint F_005dd750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(this + 0x30) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: FUN_005dd7e0 */
uint F_005dd7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x38) != -1) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)((int)this + 0x11));
    uVar1 = F_00a1b870(local_8,*(int *)((int)this + 0x38));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005dd810 */
uint F_005dd810(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x38) != -1) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)((int)this + 0x11));
    uVar1 = F_00a1b870(local_8,*(int *)((int)this + 0x38));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x7c) == 0)) {
      return *(uint *)(uVar1 + 0xf0);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf23 */
uint F_005dd850(unsigned int gen_a0)
{
  GEN_ENTER(0x5dd850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x38) != -1) {
    gen_piece_set(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),this[0x11])));
    uVar1 = F_00a1b870((*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x38));
    if (((uVar1 != 0) && (*(int *)(uVar1 + 0x7c) == 0)) && (*(int *)(uVar1 + 0xf0) != 0)) {
      return 0;
    }
  }
  if (*(int *)(this + 0x38) != -1) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),this[0x11])));
    uVar1 = F_00a1b870((*(undefined * PTR32 *)(gen_frame + 0x8)),*(int *)(this + 0x38));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x7c) == 0)) {
      return *(uint *)(uVar1 + 0xec);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf53 */
uint F_005dd8c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5dd8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x5c))()));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits(param_2));
  }
  uVar2 = param_1[0xe];
  if (uVar2 != 0xffffffff) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)param_1) >> 8),*(undefined1 *)((int)param_1 + 0x11));
    uVar2 = F_00a1b870(local_8,uVar2);
    if (((uVar2 != 0) && (*(int *)(uVar2 + 0x7c) == 0)) &&
       (piVar1 = *(int * PTR32 *)(uVar2 + 0xf0), uVar2 = 0, piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd4))(piVar1,(undefined4)gen_fl2bits(param_2));
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf58 */
uint F_005dd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd930u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (uVar3 != 0xffffffff) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11])));
    piVar2 = (int *)F_00a1b870((*(undefined4 * PTR32 *)&gen_args[1]),uVar3);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2);
    }
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *puVar1;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = puVar1[1];
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = puVar1[2];
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf60 */
uint F_005dd990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x38);
  if (iVar1 != -1) {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*(undefined1 *)((*(int *)&gen_args[0]) + 0x11));
    piVar4 = (int *)F_00a1b870((*(uint *)&gen_args[1]),iVar1);
    if (piVar4 != (int *)0x0) {
      F_00a1e160(&(*(uint *)&gen_args[1]),uVar3);
      ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
    }
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x60) = *(undefined4 *)uVar3;
  *(undefined4 *)((*(int *)&gen_args[0]) + 100) = *(undefined4 *)(uVar3 + 4);
  uVar2 = *(uint *)(uVar3 + 8);
  *(uint *)((*(int *)&gen_args[0]) + 0x68) = uVar2;
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x6c) = *(undefined4 *)(uVar3 + 0xc);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf62 */
uint F_005dda00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dda00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (uVar3 != 0xffffffff) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11])));
    piVar2 = (int *)F_00a1b870((*(undefined4 * PTR32 *)&gen_args[1]),uVar3);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,*puVar1);
    }
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = *puVar1;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = puVar1[1];
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = puVar1[2];
  return uVar3;
}

/* ref: FUN_005dda50 */
uint F_005dda50(unsigned int gen_a0)
{
  GEN_ENTER(0x5dda50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd660(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4134));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::AetheryteLayoutInstance::vf4 */
uint F_005dda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dda70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return uVar1;
}

/* ref: FUN_005ddaf0 */
uint F_005ddaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd660(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4254));
  return (uint)this;
}

/* ref: FUN_005ddb10 */
uint F_005ddb10(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd660(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4374));
  return (uint)this;
}

/* ref: FUN_005ddb30 */
uint F_005ddb30(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dd660(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4494));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventObjectLayoutInstance::vf4 */
uint F_005ddb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ddb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  return uVar1;
}

/* ref: FUN_005ddbd0 */
uint F_005ddbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a45b4));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf8 */
uint F_005ddc40(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x30) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x70)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf27 */
uint F_005ddc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ddc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  if (*(int *)(this + 0x1c) != -1) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    iVar2 = *(int *)(this + 0x1c) * 0xa0 + *(int *)(iVar2 + 0x538);
  }
  uVar3 = F_00a1e520(*param_2,"Client.LayoutEngine.Layer.BgPartsLayoutInstance",iVar2);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x100);
  *(uint *)(this + 0x30) = uVar3;
  uVar3 = (*pcVar1)(this,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar3 = *(uint *)(this + 8), uVar3 == 0 ||
      (((*(int *)(uVar3 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar3 + 4) + 0x50))) != '\0')) &&
       ((uVar3 == 0 || ((*(byte *)(uVar3 + 0x16) & 1) != 0)))))))) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,CONCAT31((int3)(uVar3 >> 8),1));
      return uVar3;
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar3 & 0xffffff00);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf30 */
uint F_005ddd00(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a258b;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260((undefined *)0x14c,this + 0x38);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf32 */
unsigned int F_005ddd40(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x34) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)(this + 0x34),0);
    F_00c9da30(*(undefined4 *)(this + 0x34),0);
    F_00551ae0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),*(undefined4 *)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_005ddd80 */
uint F_005ddd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ddd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),param_1);
  uVar1 = F_00551c70(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),param_2,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
  *(uint *)((int)this + 0x34) = uVar1;
  return uVar1;
}

/* ref: FUN_005dde00 */
uint F_005dde00(unsigned int gen_a0)
{
  GEN_ENTER(0x5dde00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x30) != 0) {
    return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x8c)));
  }
  return 0;
}

/* ref: FUN_005dde30 */
uint F_005dde30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dde30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    uVar1 = F_006027f0(*(undefined * PTR32 *)((int)this + 0x30),param_1);
    return uVar1;
  }
  if ((*(uint *)&REFG(undefined, 0x1379d40) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379d40) = *(uint *)&REFG(undefined, 0x1379d40) | 1;
    REFG(float, 0x1379d30) = 0;
    REFG(float, 0x1379d34) = 0;
    REFG(float, 0x1379d38) = 0;
    REFG(float, 0x1379d3c) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1379d30));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1379d34));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1379d38));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1379d3c));
  return (uint)param_1;
}

/* ref: FUN_005ddea0 */
unsigned int F_005ddea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ddea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    uVar1 = F_006026a0(*(undefined * PTR32 *)((int)this + 0x30),3);
    if (uVar1 != 0) {
      F_00637ca0(uVar1,param_1);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf66 */
uint F_005dded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dded0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if ((piVar1 == (int *)0x0) || (*(char *)((int)piVar1 + 0x65) != '\x03')) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,((undefined1 *)(gen_frame + 0x20)));
    F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf8 */
uint F_005ddf80(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x70) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x70);
    }
    if (*(uint *)(iVar1 + 0x74) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x74);
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf22 */
byte F_005ddfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ddfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf27 */
byte F_005ddfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ddfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1e2e0("Client.LayoutEngine.Layer.EnvSpaceLayoutInstance");
  *(uint *)(this + 0x30) = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*(int *)(uVar2 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*(byte *)(uVar2 + 0x16) & 1) != 0)))))))) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de010;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de010: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar2);
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_00698c50(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))),
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_00698c50(*(undefined * PTR32 *)(REFG(int, 0x00000048) + 8),*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf4 */
uint F_005de060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5de060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf22 */
byte F_005de0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5de0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf27 */
byte F_005de0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5de0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1e380("Client.LayoutEngine.Layer.EnvLocationLayoutInstance");
  *(uint *)(this + 0x30) = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*(int *)(uVar2 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*(byte *)(uVar2 + 0x16) & 1) != 0)))))))) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de140;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de140: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar2);
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_0068b4a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))),
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_0068b4a0(*(undefined * PTR32 *)(REFG(int, 0x00000048) + 8),*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf27 */
uint F_005de190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5de190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(this + 0x1c) != -1) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    iVar2 = *(int *)(this + 0x1c) * 0x80 + *(int *)(iVar2 + 0x53c);
  }
  uVar1 = F_00a1e3e0(*param_2,"Client.LayoutEngine.Layer.LightLayoutInstance",iVar2);
  *(uint *)(this + 0x30) = uVar1;
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar1 = *(uint *)(this + 8), uVar1 == 0 ||
      (((*(int *)(uVar1 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar1 + 4) + 0x50))) != '\0')) &&
       ((uVar1 == 0 || ((*(byte *)(uVar1 + 0x16) & 1) != 0)))))))) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    if ((char)uVar1 != '\0') {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,CONCAT31((int3)(uVar1 >> 8),1));
      return uVar1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar1 & 0xffffff00);
  return uVar1;
}

/* ref: FUN_005de230 */
uint F_005de230(unsigned int gen_a0)
{
  GEN_ENTER(0x5de230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x30) != 0) {
    return *((int *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x70))) + 0x14;
  }
  return 0x1302e54;
}

/* ref: FUN_005de250 */
uint F_005de250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5de250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar1 = *(int *)((int)this + 0x30);
  uVar5 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x70);
    bVar6 = GEN_ISNAN((float10)*param_1) || GEN_ISNAN((float10)*(float *)(iVar2 + 0x14));
    if ((bVar6 != (bVar6 || (float10)*param_1 == (float10)*(float *)(iVar2 + 0x14))) &&
       (bVar6 = GEN_ISNAN((float10)param_1[1]) || GEN_ISNAN((float10)*(float *)(iVar2 + 0x18)),
       bVar6 != (bVar6 || (float10)param_1[1] == (float10)*(float *)(iVar2 + 0x18)))) {
      fVar8 = (float10)*(float *)(iVar2 + 0x1c);
      fVar9 = (float10)param_1[2];
      bVar6 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8);
      bVar7 = bVar6 || fVar9 == fVar8;
      if (bVar6 != bVar7) {
        return CONCAT22((short)((uint)iVar1 >> 0x10),
                        CONCAT11(bVar7 << 6 | bVar6 << 2 | 2U | !(fVar8 <= fVar9),(char)iVar1));
      }
    }
    fVar3 = param_1[2];
    fVar4 = param_1[1];
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 0x70)));
    *(float *)(iVar1 + 0x14) = *param_1;
    *(float *)(iVar1 + 0x18) = fVar4;
    *(float *)(iVar1 + 0x1c) = fVar3;
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    uVar5 = F_0068b3c0(*(undefined * PTR32 *)((int)this + 0x30),0);
  }
  return uVar5;
}

/* ref: FUN_005de2e0 */
uint F_005de2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5de2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a46cc));
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x84) = uVar1;
  uVar1 = REFG(undefined4, 0x1302e24);
  *(byte *)((int)this + 0x8c) = *(byte *)((int)this + 0x8c) & 0xf0;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffe00;
  *(undefined4 *)((int)this + 0x88) = uVar1;
  *(undefined2 *)((int)this + 0x8e) = 0xffff;
  return (uint)this;
}

/* ref: FUN_005de400 */
unsigned int F_005de400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5de400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_2 != 0) {
    fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
    F_0068b780(param_2,((float)GEN_TOF(((float10)*(byte *)(param_1 + 0x88) / fVar1))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_1 + 0x89) / fVar1))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_1 + 0x8a) / fVar1))),
                 ((float)GEN_TOF(((float10)*(byte *)(param_1 + 0x8b) / fVar1))));
    F_0068b950(param_2,*(float *)(param_1 + 0x80));
    F_0068b7e0(param_2,*(float *)(param_1 + 0x7c));
    fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    F_0068ffe0(param_2,((float)GEN_TOF((fVar2 * ((float10)*(ushort *)(param_1 + 0x74) * fVar1) - fVar3))),
                 ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 0x76) * fVar1) * fVar2 - fVar3))),
                 ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 0x78) * fVar1) * fVar2 - fVar3))),
                 ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 0x7a) * fVar1) * fVar2 - fVar3))));
    F_0068b970(param_2,*(float *)(param_1 + 0x84));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf7 */
uint F_005de540(unsigned int gen_a0)
{
  GEN_ENTER(0x5de540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    return 0x10a2697;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),this + 0x70);
    return uVar1;
  }
  uVar1 = F_00507260((undefined *)0x14c,this + 0x70);
  return uVar1;
}

/* ref: FUN_005de580 */
uint F_005de580(unsigned int gen_a0)
{
  GEN_ENTER(0x5de580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x7a);
}

/* ref: FUN_005de5b0 */
uint F_005de5b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5de5b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar7 = (float10)(*(float *)&gen_args[1]);
  fVar1 = (float)(fVar7 - (float10)REFG(double, 0x1088130));
  (*(float *)&gen_args[1]) = fVar1;
  (*(int *)(gen_frame + 0x8)) = (*(int *)&gen_args[0]);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094884);
  pfVar2 = &(*(float *)(gen_frame + 0x4));
  if (!((double)fVar1 < REFG(double, 0x1094800))) {
    pfVar2 = &(*(float *)&gen_args[1]);
  }
  fVar1 = *pfVar2;
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  uVar6 = (uint)((((float10)0 + fVar8) * fVar9) / fVar10);
  if ((int)uVar6 < 0x10000) {
    uVar4 = uVar6;
    if ((int)uVar6 < 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xffff;
  }
  *(short *)((*(int *)&gen_args[0]) + 0x74) = (short)uVar4;
  if ((int)uVar6 < 0x10000) {
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffff;
  }
  *(short *)((*(int *)&gen_args[0]) + 0x76) = (short)uVar6;
  uVar5 = (uint)((((float10)fVar1 + fVar8) * fVar9) / fVar10);
  if ((int)uVar5 < 0x10000) {
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xffff;
  }
  *(short *)((*(int *)&gen_args[0]) + 0x78) = (short)uVar5;
  uVar3 = (uint)(((fVar7 + fVar8) * fVar9) / fVar10);
  if ((int)uVar3 < 0x10000) {
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  *(short *)((*(int *)&gen_args[0]) + 0x7a) = (short)uVar3;
  if (*(int *)((*(int *)&gen_args[0]) + 0x30) != 0) {
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    (*(float *)&gen_args[1]) = ((float)GEN_TOF((fVar7 * ((float10)(uVar4 & 0xffff) * fVar10) - fVar8)));
    uVar6 = F_0068ffe0(*(int *)((*(int *)&gen_args[0]) + 0x30),(*(float *)&gen_args[1]),
                         ((float)GEN_TOF((((float10)(uVar6 & 0xffff) * fVar10) * fVar7 - fVar8))),
                         ((float)GEN_TOF((((float10)(uVar5 & 0xffff) * fVar10) * fVar7 - fVar8))),
                         ((float)GEN_TOF((((float10)(uVar3 & 0xffff) * fVar10) * fVar7 - fVar8))));
    return uVar6;
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf39 */
unsigned int F_005de740(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5de740u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  code * pcVar1;
  
  if ((char)param_2 == '\0') {
    if ((param_1[0xc] != 0) && ((*(byte *)(param_1 + 0x23) & 1) != 0)) {
      F_0068b730(param_1[0xc],param_3);
    }
    *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfe;
  }
  else {
    pcVar1 = *(gen_code32 *)(*param_1 + 0xe0);
    *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
    (*pcVar1)(param_1,1);
    if (param_1[0xc] != 0) {
      F_0068b7c0(param_1[0xc],(float)(float10)1);
      F_00699cb0(param_1[0xc],param_3);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf65 */
uint F_005de7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5de7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  if (*(int *)(this + 0x30) == 0) {
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    fVar2 = *pfVar4;
    fVar1 = pfVar4[2];
    (*(float *)(gen_frame + 0x0)) = fVar2;
    fVar3 = pfVar4[1];
    ((float *)(gen_frame + 0x8))[0] = fVar1;
    (*(float *)(gen_frame + 0x4)) = fVar3;
    pfVar4 = &(*(float *)(gen_frame + 0x4));
    if (!((float10)fVar2 < (float10)fVar3)) {
      pfVar4 = &(*(float *)(gen_frame + 0x0));
    }
    if ((float10)*pfVar4 < (float10)fVar1) {
      pfVar4 = ((float *)(gen_frame + 0x8));
    }
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar4;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
    *param_1 = *puVar5;
    param_1[1] = puVar5[1];
    param_1[2] = puVar5[2];
    pfVar4 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x1c)))));
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x34))))(*(int * PTR32 *)(this + 0x30),((undefined1 *)(gen_frame + 0x20)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x50));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x54));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x58));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x68)) +
                   ((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x60)) + (float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x64))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    pfVar4 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar1))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar4;
  }
  param_1[3] = pfVar4;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf4 */
uint F_005de8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5de8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(*(char *)(param_1 + 0x38) != '\0') << 4 ^ (byte)this[0x2b]) &
          0xffffff10;
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ (byte)uVar2);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*(int *)(uVar2 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*(byte *)(uVar2 + 0x16) & 1) != 0)))))))) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de96c;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de96c: ;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar2);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf27 */
uint F_005de990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5de990u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a1e5a0(in_ebx,*param_4,"Client.LayoutEngine.Layer.WeaponLayoutInstance");
  in_ecx[0xc] = uVar1;
  if (((*(byte *)((int)in_ecx + 0x2b) & 0x40) != 0) &&
     ((uVar1 = in_ecx[2], uVar1 == 0 ||
      (((*(int *)(uVar1 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar1 + 4) + 0x50))) != '\0')) &&
       ((uVar1 == 0 || ((*(byte *)(uVar1 + 0x16) & 1) != 0)))))))) {
    uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0xcc))(in_ecx);
    if ((char)uVar1 != '\0') {
      uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0xe0))(in_ecx,CONCAT31((int3)(uVar1 >> 8),1));
      return uVar1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0xe0))(in_ecx,uVar1 & 0xffffff00);
  return uVar1;
}

/* ref: FUN_005dea10 */
unsigned int F_005dea10(unsigned int gen_a0)
{
  GEN_ENTER(0x5dea10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a47e4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302e18);
  *(byte *)((int)this + 0x78) = *(byte *)((int)this + 0x78) & 0xfe;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(uint *)((int)this + 0x74) = *(uint *)((int)this + 0x74) & 0xfffffff1 | 1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf4 */
uint F_005deaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5deaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  *(undefined2 *)(this + 0x70) = *(undefined2 *)(param_1 + 0x34);
  this[0x78] = (undefined1)
               ((byte)this[0x78] ^ (*(char *)(param_1 + 0x36) != '\0' ^ (byte)this[0x78]) & 1);
  if (((byte)this[0x78] & 1) == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  }
  else {
    if ((*(int *)(this + 0x74) << 0x1c) >> 0x1c != *(int *)(param_1 + 0x30)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
    }
    if (*(int *)(this + 0x30) == 0) {
      (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(param_1 + 0x30);
      (*(int *)(gen_frame + 0x38)) = *(int *)this;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,&(*(undefined4 *)(gen_frame + 0x3c)));
      ((code *)*(gen_code32 *)((*(int *)(gen_frame + 0x38)) + 0x6c))(this,uVar1);
    }
  }
  *(uint *)(this + 0x74) =
       *(uint *)(this + 0x74) ^ (*(uint *)(param_1 + 0x30) ^ *(uint *)(this + 0x74)) & 0xf;
  uVar1 = (int)(*(uint *)(this + 0x74) << 0x1c) >> 0x1c;
  if (((int)uVar1 < 1) || (3 < (int)uVar1)) {
    *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf27 */
uint F_005debf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5debf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) ^ (*(uint *)(this + 0x74) ^ *param_2) & 0xf;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),param_1);
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 1: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar2 = F_00551cd0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar2);
    break;
  case 2: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar2 = F_00551da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar2);
    break;
  case 3: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar2 = F_00551d20(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar2);
    break;
  case 4: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar2 = F_00551e10(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar2);
    break;
  default: ;
    goto switchD_005dec68_default;
  }
  *(uint *)(this + 0x30) = uVar2;
switchD_005dec68_default: ;
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(uint *)(this + 0x30);
  *(undefined4 *)(uVar2 + 0x38) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(uVar2 + 0x3c) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x30) + 0x40))) = 0x3000;
  if ((((byte)this[0x2b] & 0x40) == 0) ||
     (((uVar2 = *(uint *)(this + 8), uVar2 != 0 &&
       (((*(int *)(uVar2 + 4) != 0 && (*((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x50))) == '\0')) ||
        ((uVar2 != 0 && ((*(byte *)(uVar2 + 0x16) & 1) == 0)))))) ||
      (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this), (char)uVar2 == '\0')))) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar2);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf28 */
unsigned int F_005ded80(unsigned int gen_a0)
{
  GEN_ENTER(0x5ded80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x30) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)(this + 0x30),0);
    F_00c9da30(*(undefined4 *)(this + 0x30),0);
    F_00551ae0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),*(undefined4 *)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf36 */
unsigned int F_005dedc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dedc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((char)(*(int *)&gen_args[1]) == '\0') {
    if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x78] & 1) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))))((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  else if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == 0) {
    (*(int *)&gen_args[1]) = (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x74))) << 0x1c) >> 0x1c;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]) + 0x40,&(*(int *)&gen_args[1]));
  }
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))) != (undefined *)0x0) {
    F_00c9f290(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30))),iVar1);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf65 */
uint F_005dee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  switch((unsigned int)(uintptr_t)((*(int *)(this + 0x74) << 0x1c) >> 0x1c)) {
  case 1: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)pfVar4[2] * (float10)pfVar4[2] +
                               ((float10)*pfVar4 * (float10)*pfVar4 +
                               (float10)pfVar4[1] * (float10)pfVar4[1])))))));
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    param_1[2] = pfVar4[2];
    fVar5 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT(fVar5))))));
    param_1[3] = ((float)GEN_TOF(SQRT(fVar5)));
    return (uint)param_1;
  case 2: ;
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar4)));
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    fVar7 = pfVar4[2];
    param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))));
    param_1[2] = fVar7;
    return (uint)param_1;
  case 3: ;
  case 4: ;
    pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    pfVar4 = pfVar3 + 1;
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar3)));
    (*(float *)(gen_frame + 0x48)) = *pfVar4;
    fVar5 = (float10)*pfVar3;
    (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar4;
    fVar6 = (float10)*pfVar4;
    if (!(fVar5 < fVar6)) {
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar3;
    }
    if (fVar6 < fVar5) {
      pfVar3 = pfVar4;
    }
    (*(float *)(gen_frame + 0x48)) = (float)((float10)*pfVar3 * (float10)REFG(double, 0x1088108) + (float10)*(*(float * PTR32 *)(gen_frame + 0x4c)));
    pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    param_1[2] = pfVar4[2];
    param_1[3] = (*(float *)(gen_frame + 0x48));
    return (uint)param_1;
  case 5: ;
    if (*(int *)(this + 0x30) == 0) {
      pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
      iVar2 = *(int *)this;
      (*(float *)(gen_frame + 0x20)) = *pfVar4;
      (*(float *)(gen_frame + 0x24)) = pfVar4[1];
      (*(float *)(gen_frame + 0x28)) = pfVar4[2];
      pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(iVar2 + 0xf4))(this)));
      (*(float *)(gen_frame + 0x30)) = *pfVar4;
      (*(float *)(gen_frame + 0x34)) = pfVar4[1];
      (*(float *)(gen_frame + 0x38)) = pfVar4[2];
      fVar7 = (*(float *)(gen_frame + 0x20));
      fVar8 = (*(float *)(gen_frame + 0x24));
      fVar9 = (*(float *)(gen_frame + 0x28));
    }
    else {
      piVar1 = *(int * PTR32 *)(this + 0x30);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,&(*(undefined4 *)(gen_frame + 0x8)));
      (*(float *)(gen_frame + 0x34)) = 0.0;
      (*(float *)(gen_frame + 0x38)) = 0.0;
      (*(float *)(gen_frame + 0x3c)) = 0.0;
      (*(float *)(gen_frame + 0x24)) = 0.0;
      (*(float *)(gen_frame + 0x28)) = 0.0;
      (*(float *)(gen_frame + 0x2c)) = 0.0;
      F_005fde10(&(*(undefined4 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x34)),&(*(float *)(gen_frame + 0x24)));
      fVar8 = (*(float *)(gen_frame + 0x38));
      fVar7 = (*(float *)(gen_frame + 0x34));
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x24));
      (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x28));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x2c));
      fVar9 = (*(float *)(gen_frame + 0x3c));
    }
    *param_1 = fVar7;
    param_1[1] = fVar8;
    param_1[2] = fVar9;
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)) +
                   ((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34))))));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)(gen_frame + 0x48)) = fVar7;
    param_1[3] = fVar7;
  }
  return (uint)param_1;
}

/* ref: FUN_005df0d0 */
uint F_005df0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5df0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dea10(this);
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a48fc));
  *(undefined4 *)((int)this + 0x80) = 1;
  *(undefined4 *)((int)this + 0x94) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf4 */
uint F_005df120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_005deaf0((undefined *)this,param_1);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined2 *)(this + 0x84) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(this + 0x86) = *(undefined2 *)(param_1 + 0x42);
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x50);
  return uVar1;
}

/* ref: FUN_005df180 */
uint F_005df180(unsigned int gen_a0)
{
  GEN_ENTER(0x5df180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dea10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf4 */
uint F_005df1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_005deaf0((undefined *)this,param_1);
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: FUN_005df1c0 */
uint F_005df1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5df1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dea10(this);
  *(byte *)((int)this + 0x96) = *(byte *)((int)this + 0x96) & 0xfe;
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xffff8000;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4b2c));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf4 */
byte F_005df210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 MVar1;
  byte bVar2;
  
  F_005deaf0((undefined *)this,param_1);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x48);
  this[0x94] = *(undefined *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x4c);
  this[0x95] = (undefined1)
               ((byte)this[0x95] ^ (*(char *)(param_1 + 0x5b) != '\0' ^ (byte)this[0x95]) & 1);
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 0x5d) != '\0') * '\x02' ^ (byte)this[0x95]) & 2 ^ (byte)this[0x95])
  ;
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 0x5e) != '\0') * '\x04' ^ (byte)MVar1) & 4 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 0x5f) != '\0') * '\b' ^ (byte)MVar1) & 8 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 0x60) != '\0') << 4 ^ (byte)MVar1) & 0x10 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 99) != '\0') << 5 ^ (byte)MVar1) & 0x20 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*(char *)(param_1 + 0x61) != '\0') << 6 ^ (byte)MVar1) & 0x40 ^ (byte)MVar1);
  this[0x95] = MVar1;
  bVar2 = (byte)MVar1 & 0x7f;
  this[0x95] = (undefined1)((*(char *)(param_1 + 0x62) != '\0') << 7 | bVar2);
  this[0x96] = (undefined1)
               ((byte)this[0x96] ^ (*(char *)(param_1 + 100) != '\0' ^ (byte)this[0x96]) & 1);
  return bVar2;
}

/* ref: FUN_005df330 */
uint F_005df330(unsigned int gen_a0)
{
  GEN_ENTER(0x5df330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dea10(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf4 */
uint F_005df350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005deaf0((undefined *)this,param_1);
  return uVar1;
}

/* ref: FUN_005df360 */
uint F_005df360(unsigned int gen_a0)
{
  GEN_ENTER(0x5df360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005dea10(this);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4d5c));
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined1 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf4 */
uint F_005df390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  *(uint *)(this + 0x74) =
       *(uint *)(this + 0x74) ^ (*(uint *)(param_1 + 0x30) ^ *(uint *)(this + 0x74)) & 0xf;
  *(undefined2 *)(this + 0x70) = *(undefined2 *)(param_1 + 0x34);
  this[0x78] = (undefined1)
               ((byte)this[0x78] ^ (*(char *)(param_1 + 0x36) != '\0' ^ (byte)this[0x78]) & 1);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x3c);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  this[0x8c] = (undefined1)(*(char *)(param_1 + 0x44) != '\0');
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,*(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x84));
  }
  iVar4 = (*(int *)(this + 0x74) << 0x1c) >> 0x1c;
  if (iVar4 == 4) {
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    pcVar2 = *(gen_code32 *)(*(int *)this + 0xf8);
    (*(undefined4 *)(gen_frame + 0x30)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x34)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10947f8);
    (*pcVar2)(this,&(*(undefined4 *)(gen_frame + 0x30)));
  }
  else if (iVar4 == 5) {
    if (*(int *)(this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    puVar5 = (undefined4 *)F_00509330((undefined *)(iVar4 + 0x14c),*(int *)(param_1 + 0x48) + param_1);
    *(undefined4 *)(this + 0x88) = *puVar5;
  }
  if (((byte)this[0x78] & 1) == 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  }
  else {
    uVar3 = (*(int *)(this + 0x74) << 0x1c) >> 0x1c;
    if (uVar3 != *(uint *)(param_1 + 0x30)) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
    }
    if (*(int *)(this + 0x30) == 0) {
      iVar4 = *(int *)this;
      pcVar2 = *(gen_code32 *)(iVar4 + 0xfc);
      (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(param_1 + 0x30);
      uVar3 = (*pcVar2)(this,&(*(undefined4 *)(gen_frame + 0x4c)));
      uVar3 = ((code *)*(gen_code32 *)(iVar4 + 0x6c))(this,uVar3);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf27 */
uint F_005df530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5df530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),param_1);
  switch((unsigned int)(uintptr_t)((*(int *)(this + 0x74) << 0x1c) >> 0x1c)) {
  case 1: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar4 = F_00551cd0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar4);
    break;
  case 2: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar4 = F_00551da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar4);
    break;
  case 3: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar4 = F_00551d20(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar4);
    break;
  case 4: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar4 = F_00551e10(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar4);
    break;
  case 5: ;
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    uVar4 = F_00507260((undefined *)(iVar2 + 0x14c),this + 0x88);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this);
    uVar4 = F_00551c70(this_00,uVar4,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar3);
    break;
  default: ;
    goto switchD_005df5a0_default;
  }
  *(uint *)(this + 0x30) = uVar4;
switchD_005df5a0_default: ;
  uVar1 = *(undefined4 *)(this + 0x18);
  iVar2 = *(int *)(this + 0x30);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(iVar2 + 0x3c) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x30) + 0x40))) = 0x3000;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x30),*(undefined4 *)(this + 0x80),
                     *(undefined4 *)(this + 0x84));
  if ((((byte)this[0x2b] & 0x40) == 0) ||
     (((uVar4 = *(uint *)(this + 8), uVar4 != 0 &&
       (((*(int *)(uVar4 + 4) != 0 && (*((char *)GEN_TOP((*(int *)(uVar4 + 4) + 0x50))) == '\0')) ||
        ((uVar4 != 0 && ((*(byte *)(uVar4 + 0x16) & 1) == 0)))))) ||
      (uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this), (char)uVar4 == '\0')))) {
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,uVar4);
  return uVar4;
}

/* ref: FUN_005df720 */
unsigned int F_005df720(unsigned int gen_a0)
{
  GEN_ENTER(0x5df720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a4e74));
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x60) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf65 */
uint F_005df7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df7f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  uint uVar7;
  float * pfVar8;
  float * pfVar9;
  undefined4 * puVar10;
  
  uVar7 = param_2;
  switch((unsigned int)(uintptr_t)(param_1[0x18])) {
  case 1: ;
    pfVar8 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xf4))(param_1)));
    fVar4 = pfVar8[1];
    fVar5 = *pfVar8;
    fVar2 = pfVar8[2];
    puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xe4))(param_1)));
    *(undefined4 *)param_2 = *puVar10;
    *(undefined4 *)(param_2 + 4) = puVar10[1];
    *(undefined4 *)(param_2 + 8) = puVar10[2];
    *(float *)(param_2 + 0xc) =
         ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                                     ((float10)fVar5 * (float10)fVar5 +
                                     (float10)fVar4 * (float10)fVar4)))))));
    return param_2;
  case 2: ;
    puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xf4))(param_1)));
    uVar1 = *puVar10;
    puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xe4))(param_1)));
    *(undefined4 *)param_2 = *puVar10;
    *(undefined4 *)(param_2 + 4) = puVar10[1];
    uVar3 = puVar10[2];
    *(undefined4 *)(param_2 + 0xc) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar3;
    return param_2;
  case 3: ;
  case 4: ;
    pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xf4))(param_1)));
    pfVar8 = pfVar9 + 1;
    param_2 = (uint)pfVar8;
    if (!((float10)*pfVar9 < (float10)*pfVar8)) {
      param_2 = (uint)pfVar9;
    }
    if ((float10)*pfVar8 < (float10)*pfVar9) {
      pfVar9 = pfVar8;
    }
    fVar4 = *pfVar9;
    fVar6 = (float10)REFG(double, 0x1088108);
    fVar5 = *(float *)param_2;
    puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xe4))(param_1)));
    *(undefined4 *)uVar7 = *puVar10;
    *(undefined4 *)(uVar7 + 4) = puVar10[1];
    *(undefined4 *)(uVar7 + 8) = puVar10[2];
    *(float *)(uVar7 + 0xc) = (float)((float10)fVar4 * fVar6 + (float10)fVar5);
  }
  return uVar7;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf4 */
uint F_005df950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: FUN_005df9c0 */
uint F_005df9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5df9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
  *(undefined4 *)((int)this + 0x70) = 0;
  F_00994550((undefined *)((int)this + 0x74),this);
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf4 */
uint F_005df9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5df9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  *(undefined4 *)(this + 0x60) = 4;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x30);
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xf8);
  (*(undefined4 *)(gen_frame + 0x30)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10947f8);
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x30)));
  return uVar2;
}

/* ref: FUN_005dfab0 */
uint F_005dfab0(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * this_00;
  float fVar3;
  
  bVar1 = *(byte *)((int)this + 0x20);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) == 0) {
      return CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
    }
    if (*(int *)((int)this + 8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    if (*(char *)(uVar2 + 0x52) != '\0') {
      return uVar2;
    }
    if (*(int *)(uVar2 + 0x10) < 6) {
      return uVar2;
    }
    bVar1 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0));
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  if (*(int *)((int)this + 0x70) == 1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xff1535ff;
    fVar3 = REFG(float, 0x10a509c);
  }
  else if (*(int *)((int)this + 0x70) == 2) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffc03113;
    fVar3 = REFG(float, 0x10a0d00);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(undefined4, 0x1302e40);
    fVar3 = REFG(float, 0x1094880);
  }
  this_00 = (undefined *)((int)this + 0x74);
  F_009945e0(this_00);
  uVar2 = F_009849c0(this_00,&(*(undefined4 *)(gen_frame + 0x8)));
  F_009849d0(this_00,fVar3);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf26 */
uint F_005dfb60(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00984a30(this + 0x74);
  if (bVar1 == 0) {
    uVar2 = F_005dfab0(this);
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005dfb80 */
uint F_005dfb80(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf4 */
unsigned int F_005dfba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dfba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x30))) {
  case 1: ;
    *(undefined4 *)(this + 0x60) = 1;
    return 0;
  case 2: ;
    *(undefined4 *)(this + 0x60) = 2;
    return 0;
  case 3: ;
    *(undefined4 *)(this + 0x60) = 3;
    return 0;
  case 4: ;
    *(undefined4 *)(this + 0x60) = 4;
  }
  return 0;
}

/* ref: FUN_005dfc70 */
uint F_005dfc70(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(byte *)((int)this + 0x74) = *(byte *)((int)this + 0x74) & 0xfe;
  *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) & 0xfffffff0;
  *(uint *)((int)this + 0x80) = *(uint *)((int)this + 0x80) & 0xfffff800;
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a51bc));
  *(undefined4 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf4 */
uint F_005dfcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dfcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x30))) {
  case 1: ;
    *(undefined4 *)(this + 0x60) = 1;
    break;
  case 2: ;
    *(undefined4 *)(this + 0x60) = 2;
    break;
  case 3: ;
    *(undefined4 *)(this + 0x60) = 3;
    break;
  case 4: ;
    *(undefined4 *)(this + 0x60) = 4;
  }
  this[0x74] = (undefined1)
               ((byte)this[0x74] ^ (*(char *)(param_1 + 0x36) != '\0' ^ (byte)this[0x74]) & 1);
  *(undefined2 *)(this + 0x7c) = *(undefined2 *)(param_1 + 0x34);
  *(uint *)(this + 0x78) =
       *(uint *)(this + 0x78) ^ (*(uint *)(param_1 + 0x3c) ^ *(uint *)(this + 0x78)) & 0xf;
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_005dfd90 */
uint F_005dfd90(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf4 */
unsigned int F_005dfdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dfdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x30))) {
  case 1: ;
    *(undefined4 *)(this + 0x60) = 1;
    return 0;
  case 2: ;
    *(undefined4 *)(this + 0x60) = 2;
    return 0;
  case 3: ;
    *(undefined4 *)(this + 0x60) = 3;
    return 0;
  case 4: ;
    *(undefined4 *)(this + 0x60) = 4;
  }
  return 0;
}

/* ref: FUN_005dfe80 */
uint F_005dfe80(unsigned int gen_a0)
{
  GEN_ENTER(0x5dfe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
  *(undefined4 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf4 */
uint F_005dfea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dfea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(this + 0x60) = 3;
      }
      uVar2 = *(uint *)(param_1 + 0x3c);
      *(uint *)(this + 0x70) = uVar2;
      return uVar2;
    }
    *(undefined4 *)(this + 0x60) = 2;
    *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x3c);
    return 0;
  }
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x3c);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf66 */
uint F_005dff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5dff60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float10 extraout_ST0;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x110))(this);
  dVar10 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  pfVar7 = (float *)(ulonglong)gen_d2bits(dVar10);
  fVar1 = *pfVar7;
  fVar8 = (float10)(float)extraout_ST0;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  dVar10 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  pfVar7 = (float *)(ulonglong)gen_d2bits(dVar10);
  fVar4 = *pfVar7;
  fVar9 = (float10)(float)extraout_ST0;
  fVar5 = pfVar7[1];
  fVar6 = pfVar7[2];
  *param_1 = (float)((float10)fVar1 - fVar8);
  param_1[1] = (float)((float10)fVar2 - fVar8);
  param_1[2] = (float)((float10)fVar3 - fVar8);
  param_1[4] = (float)(fVar9 + (float10)fVar4);
  param_1[5] = (float)((float10)fVar5 + fVar9);
  param_1[6] = (float)(fVar9 + (float10)fVar6);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf4 */
uint F_005e0020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf66 */
unsigned int F_005e00b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e00b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x110))(this);
  pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  fVar1 = *pfVar4;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  fVar5 = (float10)(float)extraout_ST0;
  *param_1 = (float)((float10)fVar1 - fVar5);
  param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar5 + (float10)fVar2) - fVar5)));
  param_1[2] = (float)((float10)fVar3 - fVar5);
  param_1[4] = (float)(fVar5 + (float10)fVar1);
  param_1[5] = ((float)GEN_TOF(((float10)(float)(fVar5 + (float10)fVar2) + fVar5)));
  param_1[6] = (float)((float10)fVar3 + fVar5);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf4 */
uint F_005e0180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *(uint *)(param_1 + 0x30);
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf4 */
uint F_005e0210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *(uint *)(param_1 + 0x34);
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x34);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf4 */
byte F_005e02a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e02a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 CVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  this[0x50] = (undefined1)0x1;
  CVar1 = (undefined1)((*(char *)(param_1 + 0x31) != '\0') * '\x02' | 1);
  this[0x50] = CVar1;
  CVar1 = (undefined1)((*(char *)(param_1 + 0x32) != '\0') * '\x04' | (byte)CVar1);
  this[0x50] = CVar1;
  CVar1 = (undefined1)((*(char *)(param_1 + 0x30) != '\0') * '\b' | (byte)CVar1);
  this[0x50] = CVar1;
  return (byte)CVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf58 */
uint F_005e0340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(in_ecx + 0x3c) = *(undefined4 *)(in_ecx + 0x3c);
  *(undefined4 *)(in_ecx + 0x38) = uVar1;
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf64 */
uint F_005e0370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf7 */
uint F_005e03a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e03a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x90] == (undefined1)0xd) {
    return 0x10a27ec;
  }
  switch((unsigned int)(uintptr_t)(this[0x90])) {
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xb: ;
  case (undefined1)0xc: ;
    return 0x10a2800;
  }
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a27e9;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))),this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260((undefined *)0x14c,this + 0x38);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf12 */
byte F_005e0420(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e0420u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  
  fVar1 = F_004e8f80(*(undefined4 *)(param_1 + 0x88),*(float *)param_2,*(float *)(param_2 + 4),
                       *(float *)(param_2 + 8));
  if ((float10)(float)fVar1 <= (float10)param_3) {
    *param_4 = ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10a5500) - (float10)*(float *)(param_1 + 0x84)) +
                      (float10)(float)fVar1)));
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf3 */
unsigned int F_005e0490(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0xa4) - *(int *)(this + 0xa0) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xa0) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf21 */
byte F_005e04d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e04d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x34) != 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf26 */
unsigned int F_005e04e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x34) == 0) && (((byte)this[0x94] & 0x10) == 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,((undefined1 *)(gen_frame + 0x0)));
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x1c);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    uVar2 = (*pcVar1)(this);
    (*(uint *)(gen_frame + 0x3c)) = uVar2;
    ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x3c)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf56 */
unsigned int F_005e0550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 * '\b' ^ (byte)this[0x2b]) & 8);
  uVar2 = 0;
  uVar3 = *(int *)(this + 0xa4) - *(int *)(this + 0xa0) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xa0) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xe0))(piVar1,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf65 */
uint F_005e05b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e05b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  code * pcVar5;
  float * PTR32 * ppfVar6;
  undefined4 * puVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float * pfVar12;
  float fVar13;
  
  switch((unsigned int)(uintptr_t)(this[0x90])) {
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    if ((*(int *)(this + 0x88) != 0) && ((*((byte *)GEN_TOP((*(int *)(this + 0x88) + 4))) >> 2 & 1) == 0)) {
      pfVar12 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      pfVar12 = (float *)F_00606230(pfVar12,pfVar12 + 1);
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
      pfVar12 = (float *)F_00606210((*(float * PTR32 *)(gen_frame + 0x4c)),(*(float * PTR32 *)(gen_frame + 0x4c)) + 1);
      pcVar5 = *(gen_code32 *)(*(int *)this + 0xe4);
      (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(*(float * PTR32 *)(gen_frame + 0x44)) * (float10)REFG(double, 0x1088108) + (float10)*pfVar12))));
      pfVar12 = ((float *)GEN_TOP((*pcVar5)(this)));
      *param_1 = *pfVar12;
      param_1[1] = pfVar12[1];
      param_1[2] = pfVar12[2];
      param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
      return (uint)param_1;
    }
    pfVar12 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    if (((byte)this[0x94] & 2) == 0) {
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar12[2])));
    }
    else {
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar12)));
    }
    pcVar5 = *(gen_code32 *)(*(int *)this + 0xe4);
    (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
    pfVar12 = ((float *)GEN_TOP((*pcVar5)(this)));
    *param_1 = *pfVar12;
    param_1[1] = pfVar12[1];
    fVar13 = pfVar12[2];
    param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c)))));
    param_1[2] = fVar13;
    return (uint)param_1;
  case (undefined1)0x5: ;
  case (undefined1)0xd: ;
    iVar4 = *(int *)(this + 0x88);
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *(float *)(iVar4 + 0x44);
    }
    else {
      fVar13 = *(float *)(iVar4 + 0x40);
    }
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    *param_1 = *(float *)(iVar4 + 0x20);
    param_1[1] = *(float *)(iVar4 + 0x24);
    fVar2 = *(float *)(iVar4 + 0x28);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    (*(float *)(gen_frame + 0x20)) = *(float *)(iVar4 + 0x30);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(undefined4 *)(iVar4 + 0x34));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(undefined4 *)(iVar4 + 0x38));
    F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
    break;
  case (undefined1)0x6: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *(byte *)(iVar4 + 0x144);
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *(float *)(iVar4 + 0x124);
    }
    else {
      fVar13 = *(float *)(iVar4 + 0x120);
    }
    *param_1 = *(float *)(iVar4 + 0x20);
    param_1[1] = *(float *)(iVar4 + 0x24);
    fVar2 = *(float *)(iVar4 + 0x28);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      puVar7 = (undefined4 *)(iVar4 + 0x38);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)(bVar3 - 1);
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + -1);
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar12 != (float *)0x0);
      return (uint)param_1;
    }
    break;
  case (undefined1)0x7: ;
    iVar4 = *(int *)(this + 0x88);
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *(float *)(iVar4 + 100);
    }
    else {
      fVar13 = *(float *)(iVar4 + 0x60);
    }
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    *param_1 = *(float *)(iVar4 + 0x20);
    puVar7 = (undefined4 *)(iVar4 + 0x38);
    fVar2 = *(float *)(iVar4 + 0x24);
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)0x3;
    param_1[1] = fVar2;
    fVar2 = *(float *)(iVar4 + 0x28);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    do {
      (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
      F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
      puVar7 = puVar7 + 4;
      pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + -1);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
    } while (pfVar12 != (float *)0x0);
    return (uint)param_1;
  case (undefined1)0x8: ;
    iVar4 = *(int *)this;
    (*(float * PTR32 *)(gen_frame + 0x44)) = *(float * PTR32 *)(this + 0x88);
    ((code *)*(gen_code32 *)(iVar4 + 0x108))(this,((undefined1 *)(gen_frame + 0x0)));
    F_005feaa0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)0x0;
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x44)) + 10;
    (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)0x4;
    do {
      fVar13 = pfVar8[-2];
      (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
      fVar9 = (float10)(float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
      fVar10 = (float10)(float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
      fVar11 = (float10)(float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9)))))));
      (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)))))))));
      (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
      ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x4c));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))))) {
        ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x48));
      }
      pfVar12 = *ppfVar6;
      pfVar8 = pfVar8 + 4;
      pfVar1 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x44)) + -1);
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar1;
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
    } while (pfVar1 != (float *)0x0);
    goto LAB_005e0abc;
  case (undefined1)0x9: ;
    iVar4 = *(int *)(this + 0x88);
    fVar13 = *(float *)(iVar4 + 0x60);
    *param_1 = *(float *)(iVar4 + 0x20);
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    puVar7 = (undefined4 *)(iVar4 + 0x38);
    param_1[1] = *(float *)(iVar4 + 0x24);
    (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)0x3;
    fVar2 = *(float *)(iVar4 + 0x28);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    do {
      (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
      F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
      puVar7 = puVar7 + 4;
      pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x44)) + -1);
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
    } while (pfVar12 != (float *)0x0);
    return (uint)param_1;
  case (undefined1)0xb: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *(byte *)(iVar4 + 0x131);
    fVar13 = *(float *)(iVar4 + 0x134);
    *param_1 = *(float *)(iVar4 + 0x20);
    param_1[1] = *(float *)(iVar4 + 0x24);
    fVar2 = *(float *)(iVar4 + 0x28);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      puVar7 = (undefined4 *)(iVar4 + 0x38);
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(bVar3 - 1);
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x44)) + -1);
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
      } while (pfVar12 != (float *)0x0);
      return (uint)param_1;
    }
    break;
  case (undefined1)0xc: ;
    pfVar12 = *(float * PTR32 *)(this + 0x88);
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x108);
    (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
    (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uint)*(byte *)((int)pfVar12 + 0x229);
    (*pcVar5)(this,((undefined1 *)(gen_frame + 0x0)));
    F_005feaa0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)));
    pfVar12 = (float *)0x0;
    (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)0x0;
    if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x44))) {
      pfVar8 = (*(float * PTR32 *)(gen_frame + 0x48)) + 10;
      (*(float * PTR32 *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x44));
      do {
        fVar13 = pfVar8[-2];
        (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
        fVar9 = (float10)(float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
        fVar10 = (float10)(float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
        fVar11 = (float10)(float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
        pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9)))))));
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
        pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)))))))));
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
        ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x4c));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))))) {
          ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x44));
        }
        pfVar12 = *ppfVar6;
        pfVar8 = pfVar8 + 4;
        pfVar1 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x48)) - 1);
        (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar1;
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar1 != (float *)0x0);
    }
LAB_005e0abc: ;
    *param_1 = (*(float *)(gen_frame + 0x30));
    param_1[1] = (*(float *)(gen_frame + 0x34));
    param_1[2] = (*(float *)(gen_frame + 0x38));
    param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
    return (uint)param_1;
  case (undefined1)0xe: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *(byte *)(iVar4 + 0x4e);
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *(float *)(iVar4 + 0x24);
    }
    else {
      fVar13 = *(float *)(iVar4 + 0x20);
    }
    *param_1 = *(float *)(iVar4 + 0x60);
    param_1[1] = *(float *)(iVar4 + 100);
    fVar2 = *(float *)(iVar4 + 0x68);
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      puVar7 = (undefined4 *)(iVar4 + 0x78);
      (*(float * PTR32 *)(gen_frame + 0x4c)) = (float *)(bVar3 - 1);
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x4c)) + -1);
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar12 != (float *)0x0);
      return (uint)param_1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_005e0b90 */
unsigned int F_005e0b90(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  float * pfVar16;
  int local_14;
  
  local_14 = 0;
  iVar15 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  if (0 < iVar15) {
    do {
      uVar14 = REFG(float, 0x1302e18);
      uVar13 = REFG(float, 0x1302e14);
      uVar12 = REFG(float, 0x1302e10);
      uVar11 = REFG(undefined4, 0x1302e0c);
      uVar10 = REFG(undefined4, 0x1302e08);
      uVar9 = REFG(undefined4, 0x1302e04);
      uVar8 = REFG(undefined4, 0x1302e00);
      iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0xa0) + local_14 * 4)));
      pfVar16 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar7 + 0x10) + 0xe4))))(*(int * PTR32 *)(iVar7 + 0x10))));
      fVar1 = *pfVar16;
      fVar2 = *(float *)((int)this + 0x40);
      fVar3 = pfVar16[1];
      fVar4 = *(float *)((int)this + 0x44);
      fVar5 = pfVar16[2];
      fVar6 = *(float *)((int)this + 0x48);
      *(undefined4 *)(iVar7 + 0x30) = uVar8;
      *(undefined4 *)(iVar7 + 0x34) = uVar9;
      *(undefined4 *)(iVar7 + 0x38) = uVar10;
      *(undefined4 *)(iVar7 + 0x3c) = uVar11;
      *(float *)(iVar7 + 0x20) = (float)((float10)fVar1 - (float10)fVar2);
      local_14 = local_14 + 1;
      *(float *)(iVar7 + 0x24) = (float)((float10)fVar3 - (float10)fVar4);
      *(float *)(iVar7 + 0x28) = (float)((float10)fVar5 - (float10)fVar6);
      *(undefined4 *)(iVar7 + 0x40) = uVar12;
      *(undefined4 *)(iVar7 + 0x44) = uVar13;
      *(undefined4 *)(iVar7 + 0x48) = uVar14;
    } while (local_14 < iVar15);
  }
  return 0;
}

/* ref: FUN_005e0cb0 */
byte F_005e0cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x90))) {
  case 6: ;
    return (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x144))) !=
           *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  case 0xb: ;
    return (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x131))) !=
           *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  case 0xc: ;
    bVar1 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x229))) !=
            *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    break;
  case 0xe: ;
    return (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x4e))) !=
           *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
  }
  return bVar1;
}

/* ref: FUN_005e0dc0 */
uint F_005e0dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e0dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  
  sVar1 = *(short *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x90) = *param_1;
  *(undefined2 *)((int)this + 0x8c) = *(undefined2 *)(param_1 + 0xc);
  *(byte *)((int)this + 0x94) =
       *(byte *)((int)this + 0x94) ^
       ((param_1[4] != '\0') * '\x04' ^ *(byte *)((int)this + 0x94)) & 4;
  *(byte *)((int)this + 0x2b) =
       *(byte *)((int)this + 0x2b) ^
       ((param_1[4] != '\0') << 4 ^ *(byte *)((int)this + 0x2b)) & 0x10;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0x10);
  if ((sVar1 != *(short *)((int)this + 0x8c)) && (*(int *)((int)this + 0x88) != 0)) {
    F_00406b30(*(int *)((int)this + 0x88));
    *(undefined4 *)((int)this + 0x88) = 0;
  }
  if (*(int *)((int)this + 0x88) == 0) {
    uVar2 = F_00406bb0((int)*(short *)((int)this + 0x8c),0,0);
    *(uint *)((int)this + 0x88) = uVar2;
  }
  uVar3 = F_00c46aa0(*(undefined4 *)((int)this + 0x88),param_1 + *(int *)(param_1 + 8),
                     (int)*(short *)((int)this + 0x8c));
  return (uint)uVar3;
}

/* ref: FUN_005e0e90 */
byte F_005e0e90(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if ((*(byte *)((int)this + 0x94) & 0x10) != 0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x90))) {
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
    break;
  default: ;
    if (*(char *)((int)this + 0x90) != '\r') {
      if (*(int *)((int)this + 0x3c) == 0) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x88)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar1 != 2) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x8c)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (7 < iVar1) {
        return 0;
      }
    }
  }
  if ((*(byte *)((int)this + 0x20) & 3) == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005e0f00 */
byte F_005e0f00(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  bVar1 = F_005e0e90(this);
  if (bVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))();
    if ((char)uVar2 != '\0') {
      piVar3 = (int *)F_004e8110(REFG(void * PTR32, 0x1375a64),*(undefined4 *)((int)this + 0x3c),
                                   *(undefined4 *)((int)this + 0x88),
                                   (int)*(short *)((int)this + 0x8c));
      *(int * PTR32 *)((int)this + 0x34) = piVar3;
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,500);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005e0f60 */
uint F_005e0f60(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  bVar2 = F_005d9c60(this);
  if (((bVar2 == 0) && (*(int *)((int)this + 8) != 0)) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar1 != 0)) {
    return *(uint *)(iVar1 + 0x20);
  }
  return 0;
}

/* ref: FUN_005e0f90 */
uint F_005e0f90(unsigned int gen_a0)
{
  GEN_ENTER(0x5e0f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_005d9c60(this);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = 0;
    if ((*(int *)((int)this + 8) != 0) &&
       (uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar4 != 0)) {
      cVar1 = *(char *)((int)this + 0x90);
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case '\b': ;
      case '\t': ;
      case '\v': ;
      case '\f': ;
        bVar2 = true;
        break;
      default: ;
        bVar2 = false;
      }
      *(int *)(uVar4 + 0x20) = *(int *)(uVar4 + 0x20) + 1;
      if (bVar2) {
        *(int *)(uVar4 + 0x24) = *(int *)(uVar4 + 0x24) + 1;
      }
      if (cVar1 == '\r') {
        *(int *)(uVar4 + 0x28) = *(int *)(uVar4 + 0x28) + 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005e1000 */
uint F_005e1000(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_005d9c60(this);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = 0;
    if ((*(int *)((int)this + 8) != 0) &&
       (uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar4 != 0)) {
      cVar1 = *(char *)((int)this + 0x90);
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case '\b': ;
      case '\t': ;
      case '\v': ;
      case '\f': ;
        bVar2 = true;
        break;
      default: ;
        bVar2 = false;
      }
      *(int *)(uVar4 + 0x20) = *(int *)(uVar4 + 0x20) + -1;
      if (bVar2) {
        *(int *)(uVar4 + 0x24) = *(int *)(uVar4 + 0x24) + -1;
      }
      if (cVar1 == '\r') {
        *(int *)(uVar4 + 0x28) = *(int *)(uVar4 + 0x28) + -1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005e1070 */
uint F_005e1070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  
  bVar2 = *(byte *)((int)this + 100);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (((bVar2 & 0x10) != 0) && (*(int *)((int)this + 0xc) == param_1)) {
    *(byte *)((int)this + 100) = bVar2 & 0xef;
    piVar4 = (int *)(param_1 + 0x8c);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (7 < iVar1) {
      uVar3 = F_005e1000((undefined *)((int)this + -0x30));
      return uVar3;
    }
    bVar2 = F_005e0f00((undefined *)((int)this + -0x30));
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_005e1000((undefined *)((int)this + -0x30));
    }
  }
  return uVar3;
}

/* ref: FUN_005e10c0 */
uint F_005e10c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e10c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005db190(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a550c));
  *(undefined4 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: FUN_005e10e0 */
unsigned int F_005e10e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e10e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302e18);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_005e11b0 */
float10 F_005e11b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e11b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_005d89f0(param_1,((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  F_005d9480(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x1c)));
  return (float10)(*(float *)(gen_frame + 0x1c));
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf66 */
uint F_005e1200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  param_1[5] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1];
  param_1[6] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2];
  if (*(int *)(this + 0x60) != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)0x0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60));
    if (0 < (int)uVar2) {
      do {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 4))))(*(int * PTR32 *)(this + 0x60),((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))
        ;
        F_006076f0(param_1,uVar2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60));
      } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) < (int)uVar2);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_005e12c0 */
uint F_005e12c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e12c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005e10e0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a5624));
  return (uint)this;
}

/* ref: FUN_005e12e0 */
uint F_005e12e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e12e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005e10e0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a573c));
  return (uint)this;
}

/* ref: FUN_005e1330 */
unsigned int F_005e1330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005d9380(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_005e13a0 */
byte F_005e13a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e13a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  uint local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x1b0) != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_1 + 0x18);
    iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0xa0)));
    uVar7 = *(uint *)(iVar6 + 8);
    local_c = 0;
    if (uVar7 != 0) {
      local_8 = 0;
      do {
        piVar10 = ((int *)GEN_TOP((*(int *)(iVar6 + 4) + local_8 + iVar6)));
        if ((iVar4 == *piVar10) && (uVar9 = F_00a1b6b0(piVar10 + 1), uVar5 == uVar9)) {
          iVar4 = piVar10[5];
          iVar6 = piVar10[6];
          iVar1 = piVar10[7];
          iVar2 = piVar10[3];
          iVar3 = piVar10[4];
          if (*(int *)(param_1 + 0x30) != 0) {
            iVar8 = *((int *)GEN_TOP((*(int *)(param_1 + 0x30) + 0x70)));
            *(int *)(iVar8 + 0x30) = piVar10[2];
            *(int *)(iVar8 + 0x34) = iVar2;
            *(int *)(iVar8 + 0x38) = iVar3;
            *(int *)(iVar8 + 0x40) = iVar4;
            *(int *)(iVar8 + 0x44) = iVar6;
            *(int *)(iVar8 + 0x48) = iVar1;
          }
          return 1;
        }
        local_8 = local_8 + 0x20;
        local_c = local_c + 1;
      } while (local_c < uVar7);
    }
  }
  return 0;
}

/* ref: FUN_005e1470 */
unsigned int F_005e1470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e1470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = *(int *)((int)this + 400) - *(int *)((int)this + 0x18c) >> 2;
  if ((uVar2 != 0) &&
     (((char)param_2 != '\0' ||
      (fVar3 = (float10)((float)GEN_TOF(((float10)*param_1 - (float10)*(float *)((int)this + 0x80)))),
      fVar4 = (float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 0x84)))),
      fVar5 = (float10)((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 0x88)))),
      (float10)1 < (float10)((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3)))))))) {
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        F_005dc3a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + uVar1 * 4))),param_1);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    *(float *)((int)this + 0x80) = *param_1;
    *(float *)((int)this + 0x84) = param_1[1];
    *(float *)((int)this + 0x88) = param_1[2];
  }
  return 0;
}

/* ref: FUN_005e1540 */
uint F_005e1540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e1540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < param_4[1]) {
    piVar1 = (int *)(*param_4 + 8 + (int)param_4);
    do {
      iVar5 = 0;
      if (0 < piVar1[1]) {
        do {
          puVar2 = ((uint *)GEN_TOP(((int)piVar1 +
                           *(int *)((int)piVar1 + iVar5 * 4 + *piVar1 + -8) + *piVar1 + -8)));
          if (((ushort)param_2 == 0) || (*puVar2 == (uint)(ushort)param_2)) {
            iVar4 = 0;
            if (0 < (int)puVar2[3]) {
              do {
                uVar3 = (int)puVar2 + *(int *)((int)puVar2 + iVar4 * 4 + puVar2[2]) + puVar2[2];
                if (*(int *)(uVar3 + 4) == param_3) {
                  return uVar3;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)puVar2[3]);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar1[1]);
      }
      local_8 = local_8 + 1;
      piVar1 = piVar1 + 4;
    } while (local_8 < param_4[1]);
  }
  return 0;
}

/* ref: FUN_005e15e0 */
uint F_005e15e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e15e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1379cb0);
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    uVar1 = F_005d9380(*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14),param_1);
  }
  return uVar1;
}

/* ref: FUN_005e1600 */
byte F_005e1600(void)
{
  GEN_ENTER(0x5e1600u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x52) == '\0')) && (5 < *(int *)(iVar1 + 0x10))) {
    bVar2 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0));
    return bVar2 == 0;
  }
  return 0;
}

/* ref: FUN_005e1640 */
byte F_005e1640(void)
{
  GEN_ENTER(0x5e1640u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  int * piVar3;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == 7)) && (iVar1 != 0)) &&
     ((*(char *)(iVar1 + 0x52) == '\0' && (5 < *(int *)(iVar1 + 0x10))))) {
    bVar2 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0));
    if (bVar2 == 0) {
      piVar3 = (int *)(REFG(int, 0x1375aec) + 0xc6c);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      return iVar1 == 0;
    }
  }
  return 0;
}

/* ref: FUN_005e16a0 */
byte F_005e16a0(void)
{
  GEN_ENTER(0x5e16a0u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x52) == '\0')) && (5 < *(int *)(iVar1 + 0x10))) {
    bVar2 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0));
    return bVar2 == 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf54 */
uint F_005e1740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5e1740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float * pfVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  
  bVar2 = GEN_ISNAN((*(float *)&gen_args[1]));
  bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar4 = (*(float *)&gen_args[1]) != *(float *)&REFG(undefined, 0x1088114);
  bVar5 = (*(float *)&gen_args[1]) < *(float *)&REFG(undefined, 0x1088114);
  bVar8 = (!bVar2 && !bVar3) && (!bVar5 && bVar4);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xe0)));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = bVar8;
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x8)), 1, 3),bVar8));
  (*pcVar1)((*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))));
  if ((!bVar2 && !bVar3) && (!bVar5 && bVar4)) {
    fVar9 = (float10)(*(float *)&gen_args[1]);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[1]);
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar9);
    if (!((float10)(float)((float10)1 - fVar9) < (float10)1)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar9 = (float10)*pfVar6;
  }
  else {
    fVar9 = (float10)0;
  }
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xd4))))((*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((float)fVar9));
  return uVar7;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf58 */
uint F_005e17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e17d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    piVar1[0xc] = *(*(int * PTR32 *)&gen_args[1]);
    piVar1[0xd] = (*(int * PTR32 *)&gen_args[1])[1];
    piVar1[0xe] = (*(int * PTR32 *)&gen_args[1])[2];
    piVar1[9] = piVar1[9] | 2;
    if (*(char *)((int)piVar1 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3) << 8)));
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]))));
    }
  }
  return (uint)piVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf60 */
uint F_005e1840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar2 != (int *)0x0) {
    piVar2[0x10] = *(*(int * PTR32 *)&gen_args[1]);
    piVar2[0x11] = (*(int * PTR32 *)&gen_args[1])[1];
    piVar2[0x12] = (*(int * PTR32 *)&gen_args[1])[2];
    iVar1 = (*(int * PTR32 *)&gen_args[1])[3];
    piVar2[9] = piVar2[9] | 2;
    piVar2[0x13] = iVar1;
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3) << 8)));
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,(*(int * PTR32 *)&gen_args[1]));
        return uVar3;
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,(*(int * PTR32 *)&gen_args[1]))));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf62 */
uint F_005e18b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e18b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    piVar1[0x14] = *(*(int * PTR32 *)&gen_args[1]);
    piVar1[0x15] = (*(int * PTR32 *)&gen_args[1])[1];
    piVar1[0x16] = (*(int * PTR32 *)&gen_args[1])[2];
    piVar1[9] = piVar1[9] | 2;
    if (*(char *)((int)piVar1 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3) << 8)));
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]))));
    }
  }
  return (uint)piVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf64 */
uint F_005e1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]))));
  if (piVar1 != (int *)0x0) {
    piVar1[0xc] = *(*(int * PTR32 *)&gen_args[1]);
    piVar1[0xd] = (*(int * PTR32 *)&gen_args[1])[1];
    piVar1[0xe] = (*(int * PTR32 *)&gen_args[1])[2];
    piVar1[0x10] = (*(int * PTR32 *)&gen_args[1])[4];
    piVar1[0x11] = (*(int * PTR32 *)&gen_args[1])[5];
    piVar1[0x12] = (*(int * PTR32 *)&gen_args[1])[6];
    piVar1[0x13] = (*(int * PTR32 *)&gen_args[1])[7];
    piVar1[0x14] = (*(int * PTR32 *)&gen_args[1])[8];
    piVar1[0x15] = (*(int * PTR32 *)&gen_args[1])[9];
    piVar1[0x16] = (*(int * PTR32 *)&gen_args[1])[10];
    piVar1[9] = piVar1[9] | 2;
    if (*(char *)((int)piVar1 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3) << 8)));
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[1]))));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_005e19c0 */
uint F_005e19c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e19c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar2;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),8);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar2;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd1f0(this);
      *this = (int)(*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *this;
    uVar4 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(this,uVar4);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar2 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1a80 */
uint F_005e1a80(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1a80u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar2;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),9);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar2;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd1f0(this);
      *this = (int)(*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar3,0);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *this;
    uVar4 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(this,uVar4);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar2 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1b40 */
uint F_005e1b40(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1b40u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  uint uVar5;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar4 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),4);
  }
  else {
    this = (undefined *)F_00406b90(0xa0,0,0);
    if (this == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_005de2e0(this);
    }
  }
  ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,piVar3,*(int *)(iVar2 + 0x30) + iVar2);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *piVar4;
    uVar5 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(piVar4,uVar5);
    return (uint)piVar4;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int *)(iVar2 + 0x30) + iVar2)));
  ((code *)*(gen_code32 *)(*piVar4 + 0x6c))(piVar4,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar4;
}

/* ref: FUN_005e1bf0 */
uint F_005e1bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1bf0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  int * this;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar4 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar4 == 0) || (*(short *)(iVar4 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar4 + 4),0xc);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd660(this);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4134));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar2,0);
  this[0xd] = *(int *)(iVar1 + 0x34);
  if (piVar2[3] != 0) {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar4 = piVar2[5];
    iVar1 = *this;
    uVar3 = F_00a1b550(piVar2[3]);
    ((code *)*(gen_code32 *)(iVar1 + 0x114))(this,uVar3,iVar4,uVar5);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar1 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar2[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1cb0 */
uint F_005e1cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1cb0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  int * this;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar4 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar4 == 0) || (*(short *)(iVar4 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar4 + 4),0x10);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd660(this);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4374));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar2,0);
  if (piVar2[3] != 0) {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar4 = piVar2[5];
    iVar1 = *this;
    uVar3 = F_00a1b550(piVar2[3]);
    ((code *)*(gen_code32 *)(iVar1 + 0x114))(this,uVar3,iVar4,uVar5);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar1 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar2[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1d70 */
uint F_005e1d70(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1d70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  int * this;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar4 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar4 == 0) || (*(short *)(iVar4 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar4 + 4),0xe);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd660(this);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4254));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar2,0);
  if (piVar2[3] != 0) {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar4 = piVar2[5];
    iVar1 = *this;
    uVar3 = F_00a1b550(piVar2[3]);
    ((code *)*(gen_code32 *)(iVar1 + 0x114))(this,uVar3,iVar4,uVar5);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar1 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar2[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1e30 */
uint F_005e1e30(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1e30u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int * piVar2;
  int * this;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar4 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar4 == 0) || (*(short *)(iVar4 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar4 + 4),0x2d);
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = (int *)iVar1;
    this = (int *)F_00406b90(0x80,0,0);
    if (this == (int *)0x0) {
      this = (int *)0x0;
    }
    else {
      F_005dd660(this);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4494));
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar2,0);
  this[0xd] = *(int *)(iVar1 + 0x34);
  if (piVar2[3] != 0) {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar4 = piVar2[5];
    iVar1 = *this;
    uVar3 = F_00a1b550(piVar2[3]);
    ((code *)*(gen_code32 *)(iVar1 + 0x114))(this,uVar3,iVar4,uVar5);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *(int * PTR32 *)(iVar1 + 0x30);
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar2[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1ef0 */
uint F_005e1ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1ef0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x29);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0xa0,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005df0d0(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e1fa0 */
uint F_005e1fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1fa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x47);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x90,0,0);
  if (piVar2 != (int *)0x0) {
    F_005dea10(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2050 */
uint F_005e2050(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2050u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x2b);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0xa0,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005df1c0(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2100 */
uint F_005e2100(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2100u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x2c);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x70,0,0);
  if (piVar2 != (int *)0x0) {
    F_005df720(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a4f8c));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e21b0 */
uint F_005e21b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e21b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x31);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x80,0,0);
  if (piVar2 != (int *)0x0) {
    F_005dea10(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2260 */
uint F_005e2260(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2260u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x3b);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x90,0,0);
  if (piVar2 != (int *)0x0) {
    F_005df720(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
    piVar2[0x1c] = 0;
    F_00994550(piVar2 + 0x1d,piVar2);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2320 */
uint F_005e2320(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2320u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x39);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005df360(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e23d0 */
uint F_005e23d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e23d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x3a);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x70,0,0);
  if (piVar2 != (int *)0x0) {
    F_005df720(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2480 */
uint F_005e2480(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2480u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x43);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005dfc70(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2530 */
uint F_005e2530(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2530u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x46);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x70,0,0);
  if (piVar2 != (int *)0x0) {
    F_005df720(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e25e0 */
uint F_005e25e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e25e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x48);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x80,0,0);
  if (piVar2 != (int *)0x0) {
    F_005df720(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
    piVar2[0x1c] = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2690 */
uint F_005e2690(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2690u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x41);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x70,0,0);
  if (piVar2 != (int *)0x0) {
    F_005e10e0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a5624));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2740 */
uint F_005e2740(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2740u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x42);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = (int *)F_00406b90(0x70,0,0);
  if (piVar2 != (int *)0x0) {
    F_005e10e0(piVar2);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a573c));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e27f0 */
uint F_005e27f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e27f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_005da4e0(this,((char *)(gen_frame + 0x8)),0x100);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_005e2870 */
byte F_005e2870(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    F_004bae60(REFG(void * PTR32, 0x1371290),*(int *)((int)this + 8));
    uVar3 = F_006b8c00();
    if (*(char *)(uVar3 + 0x1d3) == '\0') {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 100))(piVar4);
      if ((char)uVar3 == '\0') {
        bVar2 = F_00b7c1b0(&REFG(undefined, 0x133e5c0));
      }
      else {
        bVar2 = F_005da590(*(undefined4 *)((int)this + 8),0);
      }
    }
    else {
      bVar2 = F_005da590(*(undefined4 *)((int)this + 8),1);
    }
    pvVar1 = REFG(void * PTR32, 0x1371290);
    *((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 0x23))) = bVar2;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0;
  }
  return bVar2;
}

/* ref: FUN_005e28f0 */
uint F_005e28f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e28f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  if (*((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 4))) == uVar2) {
    uVar2 = F_004bae60(REFG(void * PTR32, 0x1371290),0);
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_0068fa50(*(undefined * PTR32 *)((int)this + 8));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
    uVar2 = 0;
    if (*(int *)((int)this + 0xc) != 0) {
      uVar3 = F_00406b30(*(int *)((int)this + 0xc));
      uVar2 = (uint)uVar3;
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf2 */
unsigned int F_005e2950(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)(this + 0x11c) = 4;
  if (*(undefined * PTR32 *)(this + 0x14) != (undefined *)0x0) {
    F_00c9f290(*(undefined * PTR32 *)(this + 0x14),0);
    F_00c9da30(*(undefined4 *)(this + 0x14),0);
    F_00551ae0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),*(undefined4 *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf67 */
uint F_005e29c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e29c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  fVar1 = (float10)0;
  ((float *)(gen_frame + 0x10))[0] = pfVar2[8];
  ((float *)(gen_frame + 0x10))[1] = 0.0;
  ((float *)(gen_frame + 0x10))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x24)) = pfVar2[9];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(float *)(gen_frame + 0x38)) = pfVar2[10];
  F_004efe70(((float *)(gen_frame + 0x10)),(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = (float *)F_005fe770(((float *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf3 */
unsigned int F_005e2af0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e2af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = *(int *)(this + 0x90) - *(int *)(this + 0x8c) >> 2;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x8c) + uVar3 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e2b50 */
uint F_005e2b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e2b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  
  if (this == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 0x30;
  }
  ((int *)(gen_frame + 0x4))[1] = 0;
  ((int *)(gen_frame + 0x4))[3] = 0;
  ((int *)(gen_frame + 0x4))[2] = 0;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  ((int *)(gen_frame + 0x4))[0] = iVar2;
  ((int *)(gen_frame + 0x4))[4] = 5;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  uVar1 = F_00513dc0(param_1,((int *)(gen_frame + 0x4)),0,0);
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: FUN_005e2bd0 */
uint F_005e2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e2bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xa4);
  if ((uVar1 != 0) && (*(char *)(param_2 + 0x11) == '\x06')) {
    *(uint *)(param_2 + 0xa4) = uVar1;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf66 */
uint F_005e2bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e2bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  float10 fVar7;
  float * pfVar8;
  undefined4 * puVar9;
  float fVar10;
  float * pfVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  pfVar8 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  fVar7 = (float10)0;
  ((float *)(gen_frame + 0x60))[0] = pfVar8[8];
  ((float *)(gen_frame + 0x60))[1] = 0.0;
  ((float *)(gen_frame + 0x60))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(float *)(gen_frame + 0x74)) = pfVar8[9];
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(float *)(gen_frame + 0x90)) = (float)fVar7;
  (*(float *)(gen_frame + 0x94)) = (float)fVar7;
  (*(float *)(gen_frame + 0x98)) = (float)fVar7;
  (*(float *)(gen_frame + 0x88)) = pfVar8[10];
  F_004efe70(((float *)(gen_frame + 0x60)),(uint)(pfVar8 + 4));
  (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)*pfVar8);
  fVar10 = pfVar8[1];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x98)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x98)));
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  fVar10 = pfVar8[1];
  fVar14 = pfVar8[2];
  (*(float *)(gen_frame + 0x30)) = *pfVar8;
  (*(float *)(gen_frame + 0xa0)) = *pfVar8;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x34)) = fVar10;
  (*(float *)(gen_frame + 0x38)) = fVar14;
  (*(float *)(gen_frame + 0xa4)) = fVar10;
  (*(float *)(gen_frame + 0xa8)) = fVar14;
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  fVar10 = pfVar8[1];
  fVar14 = pfVar8[2];
  ((float *)(gen_frame + 0xb0))[0] = *pfVar8;
  ((float *)(gen_frame + 0xb0))[1] = fVar10;
  ((float *)(gen_frame + 0xb0))[2] = fVar14;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  ((float *)(gen_frame + 0xb0))[4] = gen_bits2f(*puVar9);
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xb0))[5] = gen_bits2f(uVar1);
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar2;
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar9;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xd4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xd8)) = uVar2;
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar9;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar9[1];
  (*(undefined4 *)(gen_frame + 0xe8)) = puVar9[2];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar9;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xf4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xf8)) = uVar2;
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  (*(undefined4 *)(gen_frame + 0x100)) = *puVar9;
  (*(undefined4 *)(gen_frame + 0x104)) = puVar9[1];
  (*(undefined4 *)(gen_frame + 0x108)) = puVar9[2];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)));
  fVar15 = (*(float *)(gen_frame + 0x38));
  fVar14 = (*(float *)(gen_frame + 0x34));
  fVar10 = (*(float *)(gen_frame + 0x30));
  (*(undefined4 *)(gen_frame + 0x110)) = *puVar9;
  (*(undefined4 *)(gen_frame + 0x114)) = puVar9[1];
  (*(undefined4 *)(gen_frame + 0x118)) = puVar9[2];
  (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x38));
  pfVar8 = ((float *)(gen_frame + 0xb0)) + 2;
  iVar13 = 7;
  fVar16 = fVar15;
  fVar17 = fVar14;
  fVar18 = fVar10;
  do {
    fVar3 = pfVar8[-2];
    (*(float *)(gen_frame + 0x48)) = fVar3;
    if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x30))) {
      (*(float *)(gen_frame + 0x30)) = fVar3;
      fVar10 = fVar3;
    }
    fVar4 = pfVar8[-1];
    (*(float *)(gen_frame + 0x4c)) = fVar4;
    if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0x34))) {
      (*(float *)(gen_frame + 0x34)) = fVar4;
      fVar14 = fVar4;
    }
    fVar5 = *pfVar8;
    (*(float *)(gen_frame + 0x4c)) = fVar5;
    if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x38))) {
      (*(float *)(gen_frame + 0x38)) = fVar5;
      fVar15 = fVar5;
    }
    if ((float10)(*(float *)(gen_frame + 0x50)) < (float10)fVar3) {
      (*(float *)(gen_frame + 0x50)) = fVar3;
      fVar18 = fVar3;
    }
    if ((float10)(*(float *)(gen_frame + 0x54)) < (float10)fVar4) {
      (*(float *)(gen_frame + 0x54)) = fVar4;
      fVar17 = fVar4;
    }
    if ((float10)(*(float *)(gen_frame + 0x58)) < (float10)fVar5) {
      (*(float *)(gen_frame + 0x58)) = fVar5;
      fVar16 = fVar5;
    }
    pfVar8 = pfVar8 + 4;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  *param_1 = fVar10;
  param_1[1] = fVar14;
  param_1[2] = fVar15;
  param_1[4] = fVar18;
  param_1[5] = fVar17;
  param_1[6] = fVar16;
  fVar10 = gen_bits2f(*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x7c) - *(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x78) >> 2);
  (*(float *)(gen_frame + 0x48)) = fVar10;
  (*(float *)(gen_frame + 0x4c)) = 0.0;
  if (fVar10 != 0.0) {
    do {
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x78) + (int)gen_fl2bits((*(float *)(gen_frame + 0x4c))) * 4))) +
                        0x10)));
      if ((*(char *)((int)piVar6 + 0x11) != '\x03') && (*(char *)((int)piVar6 + 0x11) != '\a')) {
        ((code *)*(gen_code32 *)(*piVar6 + 0x108))(piVar6,&(*(float *)(gen_frame + 0x0)));
        pfVar8 = param_1;
        if (!((float10)*param_1 < (float10)(*(float *)(gen_frame + 0x0)))) {
          pfVar8 = &(*(float *)(gen_frame + 0x0));
        }
        pfVar11 = param_1 + 1;
        if (!((float10)param_1[1] < (float10)(*(float *)(gen_frame + 0x4)))) {
          pfVar11 = &(*(float *)(gen_frame + 0x4));
        }
        fVar10 = *pfVar11;
        pfVar11 = param_1 + 2;
        if (!((float10)param_1[2] < (float10)((float *)(gen_frame + 0x8))[0])) {
          pfVar11 = ((float *)(gen_frame + 0x8));
        }
        fVar14 = *pfVar11;
        *param_1 = *pfVar8;
        param_1[1] = fVar10;
        param_1[2] = fVar14;
        pfVar8 = param_1 + 4;
        if (!((float10)(*(float *)(gen_frame + 0x10)) < (float10)param_1[4])) {
          pfVar8 = &(*(float *)(gen_frame + 0x10));
        }
        pfVar11 = param_1 + 5;
        if (!((float10)(*(float *)(gen_frame + 0x14)) < (float10)param_1[5])) {
          pfVar11 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = *pfVar11;
        pfVar11 = param_1 + 6;
        if (!((float10)((float *)(gen_frame + 0x18))[0] < (float10)param_1[6])) {
          pfVar11 = ((float *)(gen_frame + 0x18));
        }
        fVar14 = *pfVar11;
        param_1[4] = *pfVar8;
        param_1[5] = fVar10;
        param_1[6] = fVar14;
        fVar10 = (*(float *)(gen_frame + 0x48));
      }
      uVar12 = (int)gen_fl2bits((*(float *)(gen_frame + 0x4c))) + 1;
      (*(float *)(gen_frame + 0x4c)) = gen_bits2f(uVar12);
    } while (uVar12 < (uint)gen_fl2bits(fVar10));
  }
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return (uint)param_1;
}

/* ref: FUN_005e3290 */
uint F_005e3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
  local_8 = 0;
  if (uVar3 != 0) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + local_8 * 4))) + 0x10)));
      if ((*(char *)((int)this + 0xc1) == '\0') ||
         (*(char *)((int)this + 0xc1) ==
          (char)((uint)piVar2[6] >> (('\x04' - (*(byte *)(piVar2 + 10) >> 4)) * '\b' & 0x1f)))) {
        if (*(char *)((int)piVar2 + 0x11) == '\x06') {
          uVar1 = F_005e3290(piVar2,param_1);
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        else if (((*(char *)((int)piVar2 + 0x11) != '\x04') &&
                 (piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2))), piVar2 != (int *)0x0)) &&
                (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2,param_1), (char)uVar1 != '\0')) {
          return (uint)piVar2;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar3);
  }
  return 0;
}

/* ref: FUN_005e3350 */
uint F_005e3350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x78) + uVar4 * 4)));
      this_00 = *(undefined * PTR32 *)(uVar3 + 0x10);
      if (*(char *)((int)this_00 + 0x11) == 'D') {
        iVar1 = *(int *)((int)this_00 + 0x50);
        switch((unsigned int)(uintptr_t)(param_1)) {
        case 1: ;
          if (iVar1 == 2) {
            return uVar3;
          }
          break;
        case 0x1e: ;
          if (iVar1 == 3) {
            return uVar3;
          }
          break;
        case 0x2d: ;
          if (iVar1 == 1) {
            return uVar3;
          }
          break;
        case 0x2e: ;
          if (iVar1 == 0) {
            return uVar3;
          }
          break;
        case 0x47: ;
          if (iVar1 == 4) {
            return uVar3;
          }
        }
      }
      else if ((((*(char *)((int)this + 0xc1) == '\0') ||
                (*(char *)((int)this + 0xc1) ==
                 (char)(*(uint *)((int)this_00 + 0x18) >>
                       (('\x04' - (*(byte *)((int)this_00 + 0x28) >> 4)) * '\b' & 0x1f)))) &&
               (*(char *)((int)this_00 + 0x11) == '\x06')) &&
              (uVar3 = F_005e3350(this_00,param_1), uVar3 != 0)) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3480 */
uint F_005e3480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e3480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005dbaf0(this,param_1,param_2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e34a0 */
byte F_005e34a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e34a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if (param_1 < 0x10) {
    if (*(int *)((int)this + 0x78) == *(int *)((int)this + 0x7c)) {
      *(char *)((int)this + 0xe1) = (char)param_1;
      *(undefined1 *)((int)this + 0xd8) = 3;
      *(undefined4 *)((int)this + 0xe8) = param_2;
      return 1;
    }
    bVar1 = *(byte *)(param_1 + 0xc5 + (int)this);
    if (bVar1 != 0) {
      uVar2 = F_005dc030((undefined *)((int)this + 0x88),
                           (uint)bVar1 <<
                           (('\x04' - ((*(byte *)((int)this + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
                           *(uint *)((int)this + 0x18));
      if (uVar2 != 0) {
        F_005dbf70(uVar2,0xffffffff,param_2);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005e3530 */
byte F_005e3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if ((param_1 < 0x10) && (bVar1 = *(byte *)(param_1 + 0xc5 + (int)this), bVar1 != 0)) {
    uVar3 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
    uVar4 = 0;
    if (uVar3 != 0) {
      piVar5 = *(int * PTR32 *)((int)this + 0x8c);
      do {
        iVar2 = *piVar5;
        if (*(uint *)(iVar2 + 0x18) ==
            ((uint)bVar1 << (('\x04' - ((*(byte *)((int)this + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
            *(uint *)((int)this + 0x18))) {
          *(undefined1 *)(iVar2 + 0x48) = 3;
          if ((*(uint *)(iVar2 + 0x30) & 0xc0000000) != 0) {
            F_00b5b440(REFG(void * PTR32, 0x14c4e84),(uint *)(iVar2 + 0x30),0);
          }
          return 1;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < uVar3);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_005e35d0 */
uint F_005e35d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e35d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  
  uVar3 = param_1;
  if (param_1 < 0x10) {
    bVar2 = *(byte *)(param_1 + 0xc5 + (int)this);
    uVar3 = CONCAT31((int3)(param_1 >> 8),bVar2);
    if (bVar2 != 0) {
      uVar3 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
      uVar4 = 0;
      if (uVar3 != 0) {
        piVar5 = *(int * PTR32 *)((int)this + 0x8c);
        do {
          iVar1 = *piVar5;
          if (*(uint *)(iVar1 + 0x18) ==
              ((uint)bVar2 << (('\x04' - ((*(byte *)((int)this + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
              *(uint *)((int)this + 0x18))) {
            uVar3 = iVar1 + 0x30;
            if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) != 0) {
              bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84),uVar3);
              return CONCAT31(extraout_var,bVar2);
            }
            break;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 < uVar3);
      }
      return uVar3 & 0xffffff00;
    }
  }
  return uVar3 & 0xffffff00;
}

/* ref: FUN_005e3670 */
byte F_005e3670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e3670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x78) == *(int *)((int)this + 0x7c)) {
    *(int *)((int)this + 0xe4) = param_1;
    *(undefined1 *)((int)this + 0xe0) = (undefined1)param_2;
    *(undefined1 *)((int)this + 0xd8) = 4;
    *(undefined4 *)((int)this + 0xe8) = param_3;
    return 1;
  }
  uVar1 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      if (*(int *)(*piVar2 + 0x18) == param_1) {
        F_005dbf70(*piVar2,param_2,param_3);
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_005e3700 */
byte F_005e3700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x18) == param_1) {
        *(undefined1 *)(iVar1 + 0x48) = 3;
        if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) != 0) {
          F_00b5b440(REFG(void * PTR32, 0x14c4e84),iVar1 + 0x30,0);
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3760 */
byte F_005e3760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x18) == param_1) {
        *(undefined1 *)(iVar1 + 0x48) = 5;
        if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) != 0) {
          F_00b5b950(REFG(void * PTR32, 0x14c4e84),iVar1 + 0x30);
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e37c0 */
byte F_005e37c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e37c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x18) == param_1) {
        *(undefined1 *)(iVar1 + 0x48) = 6;
        if (((*(byte *)(iVar1 + 0x44) & 2) != 0) && ((*(uint *)(iVar1 + 0x30) & 0xc0000000) != 0)) {
          F_00b5b9b0(REFG(void * PTR32, 0x14c4e84),iVar1 + 0x30);
        }
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3830 */
uint F_005e3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x18) == param_1) {
        if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) {
          return 0;
        }
        return (int)*(char *)(iVar1 + 0x48);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3880 */
uint F_005e3880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  uint uVar5;
  
  uVar3 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
  uVar5 = 0;
  if (uVar3 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x8c);
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x18) == param_1) {
        uVar3 = iVar1 + 0x30;
        if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) != 0) {
          bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84),uVar3);
          return CONCAT31(extraout_var,bVar2);
        }
        break;
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar3);
  }
  return uVar3 & 0xffffff00;
}

/* ref: FUN_005e38e0 */
unsigned int F_005e38e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5e38e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x78) + uVar3 * 4))) + 0x10)));
      if ((*(byte *)((int)piVar1 + 0x2b) & 2) == 0) {
        if (*(char *)((int)piVar1 + 0x11) == '\x01') {
          ((code *)*(gen_code32 *)(*piVar1 + 0x98))(param_2,(undefined4)gen_fl2bits(param_3));
        }
      }
      else {
        ((code *)*(gen_code32 *)(*piVar1 + 0x98))(param_2,(undefined4)gen_fl2bits(param_3));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3950 */
byte F_005e3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  uVar2 = CONCAT31((int3)(param_2 >> 8),bVar1);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088070);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xbc) + (float10)*(float *)param_2 * fVar3)));
  fVar4 = (float10)fVar5;
  *(float *)(param_1 + 0xbc) = fVar5;
  if (!(fVar4 < fVar3)) {
    fVar5 = REFG(float, 0x1087f04);
    if ((bVar1 & 1) == 0) {
      fVar5 = 0.0;
    }
    F_005e38e0(param_1,uVar2 & 0xffffff01,fVar5);
    return 1;
  }
  param_2 = (uint)gen_fl2bits((float)(fVar4 / fVar3));
  if ((bVar1 & 1) == 0) {
    param_2 = (uint)gen_fl2bits((float)((float10)1 - ((float10)GEN_TOD(gen_bits2f(param_2)))));
  }
  F_005e38e0(param_1,uVar2 & 0xffffff01,GEN_TOF(gen_bits2f(param_2)));
  return 0;
}

/* ref: FUN_005e39e0 */
uint F_005e39e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e39e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18) >> (('\x04' - (*(byte *)(param_1 + 0x28) >> 4)) * '\b' & 0x1f)
            & 0xff;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 0x11))) {
  case 1: ;
    if (uVar2 == *(byte *)(param_2 + 1)) {
      *(int *)((int)this + 0x3c) = param_1;
      uVar2 = F_005dc5c0(this,0,param_1);
      return uVar2;
    }
    if (uVar2 == *(byte *)(param_2 + 2)) {
      *(int *)((int)this + 0x40) = param_1;
      uVar2 = F_005dc5c0(this,1,param_1);
      return uVar2;
    }
    if (uVar2 == *(byte *)(param_2 + 0x16)) {
      *(int *)((int)this + 0x44) = param_1;
      uVar2 = F_005dc5c0(this,2,param_1);
      return uVar2;
    }
    if (uVar2 == *(byte *)(param_2 + 0x17)) {
      *(int *)((int)this + 0x48) = param_1;
      uVar2 = F_005dc5c0(this,3,param_1);
      return uVar2;
    }
    break;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x37: ;
  case 0x38: ;
    break;
  case 7: ;
    if (uVar2 == *(byte *)(param_2 + 0x14)) {
      *(int *)((int)this + 0x54) = param_1;
      return uVar2;
    }
    if (uVar2 == *(byte *)(param_2 + 0x15)) {
      *(int *)((int)this + 0x58) = param_1;
      return uVar2;
    }
    bVar1 = F_005d8820(param_1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(int *)((int)this + 0x50) == 0)) {
      *(int *)((int)this + 0x50) = param_1;
      return uVar2;
    }
    break;
  case 0x39: ;
    uVar2 = 0;
    piVar3 = (int *)((int)this + 0x5c);
    while (*piVar3 != 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if (3 < uVar2) {
        return uVar2;
      }
    }
    *(int *)((int)this + uVar2 * 4 + 0x5c) = param_1;
    break;
  case 0x3a: ;
    if (*(int *)((int)this + 0x4c) == 0) {
      *(int *)((int)this + 0x4c) = param_1;
      return uVar2;
    }
    break;
  default: ;
    goto switchD_005e3a29_default;
  }
switchD_005e3a29_default: ;
  return uVar2;
}

/* ref: FUN_005e3b70 */
uint F_005e3b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e3b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  cVar1 = *(char *)(param_1 + 0x11);
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x18) >> (('\x04' - (*(byte *)(param_1 + 0x28) >> 4)) * '\b' & 0x1f)
            & 0xff;
  }
  if (cVar1 == '\x01') {
    if (uVar3 == *(byte *)(param_2 + 1)) {
      *(uint *)((int)this + 0x38) = param_1;
      uVar2 = F_005dcd10(this,0,param_1);
      return uVar2;
    }
  }
  else if (cVar1 == '\x04') {
    if (uVar3 == *(byte *)(param_2 + 0x10)) {
      *(uint *)((int)this + 0x3c) = param_1;
      uVar2 = F_005dcd10(this,1,param_1);
    }
    else if (uVar3 == *(byte *)(param_2 + 0x15)) {
      *(uint *)((int)this + 0x40) = param_1;
      uVar2 = F_005dcd10(this,2,param_1);
      return uVar2;
    }
  }
  else if (cVar1 == '\a') {
    if (uVar3 == *(byte *)(param_2 + 0x12)) {
      *(uint *)((int)this + 0x44) = param_1;
      return uVar2;
    }
    if (uVar3 == *(byte *)(param_2 + 0x13)) {
      *(uint *)((int)this + 0x48) = param_1;
      return uVar2;
    }
    if (uVar3 == *(byte *)(param_2 + 0x14)) {
      *(uint *)((int)this + 0x4c) = param_1;
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005e3c50 */
uint F_005e3c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *(undefined1 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined2 *)((int)this + 0x21) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x50);
  bVar1 = F_005dcf90(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e3ca0 */
uint F_005e3ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined2 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x50);
  if (*param_1 == '\0') {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)param_1;
  }
  bVar1 = F_005dcf90(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e3cf0 */
uint F_005e3cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)((int)this + 0x1c);
  uVar1 = *(undefined4 *)((int)this + 0x10);
  uVar3 = *(undefined4 *)((int)this + 0x24);
  uVar4 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined2 *)((int)this + 0x20) = 1;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_00c48350((undefined *)((int)this + 0x28),0,0x50);
  if (*param_1 == '\0') {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    F_005dcf90(this,param_1);
  }
  *(undefined4 *)((int)this + 0xc) = uVar4;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(uint *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  return uVar2;
}

/* ref: FUN_005e3d80 */
uint F_005e3d80(unsigned int gen_a0)
{
  GEN_ENTER(0x5e3d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x1c) != 1) {
    in_EAX = *(uint *)((int)this + 0x24);
    if (in_EAX == 0) {
      uVar2 = F_00c4f2dd();
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      in_EAX = (int)uVar2 / (int)(uint)*(byte *)((int)this + 0x22);
      if (this_00 != (undefined *)0x0) {
        uVar2 = (uint)*((byte *)GEN_TOP(((int)uVar2 % (int)(uint)*(byte *)((int)this + 0x22) + 0x28 +
                               (int)this))) <<
                (('\x04' - ((*(byte *)((int)this_00 + 0x28) >> 4) + 1)) * '\b' & 0x1f) |
                *(uint *)((int)this_00 + 0x18);
        *(uint *)((int)this + 0x24) = uVar2;
        bVar1 = F_005e3670(this_00,uVar2,0xffffffff,0);
        in_EAX = CONCAT31(extraout_var,bVar1);
      }
    }
    else if (((*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) &&
             (in_EAX = F_005e3880(*(undefined * PTR32 *)((int)this + 4),in_EAX), (char)in_EAX == '\0')) &&
            (*(undefined4 *)((int)this + 0x24) = 0, *(char *)((int)this + 0x20) == '\0')) {
      *(undefined4 *)((int)this + 0x1c) = 1;
      return in_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_005e3e00 */
uint F_005e3e00(unsigned int gen_a0)
{
  GEN_ENTER(0x5e3e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x24);
  if (uVar2 != 0) {
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      bVar1 = F_005e3700(*(undefined * PTR32 *)((int)this + 4),uVar2);
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x1c) = 1;
  }
  return uVar2;
}

/* ref: FUN_005e3e30 */
unsigned int F_005e3e30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5e3e30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar5 = REFG(float, 0x1087f04);
  if (*(int *)((*(int *)&gen_args[0]) + 0xc) == 8) {
    fVar7 = (float10)(*(float *)&gen_args[1]);
    fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x2c);
    fVar2 = ((float)GEN_TOF((fVar7 + (float10)*(float *)((*(int *)&gen_args[0]) + 0x34))));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar8 = (float10)fVar2;
    (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    *(float *)((*(int *)&gen_args[0]) + 0x34) = fVar2;
    fVar4 = (float10)1;
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && (fVar8 < (float10)fVar1)) {
      (*(float *)(gen_frame + 0x8)) = fVar5;
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar6 = &(*(float *)&gen_args[1]);
      fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * fVar8)));
      (*(float *)&gen_args[1]) = fVar1;
      if (!((float10)fVar1 < fVar4)) {
        pfVar6 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar6)) {
        pfVar6 = &(*(float *)(gen_frame + 0x4));
      }
      (*(float *)&gen_args[1]) = *pfVar6;
    }
    fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x30);
    (*(float *)(gen_frame + 0x4)) = fVar1;
    if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
      fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x28);
      (*(float *)(gen_frame + 0x8)) = fVar2;
      fVar3 = *(float *)((*(int *)&gen_args[0]) + 0x34);
      (*(float *)(gen_frame + 0x0)) = fVar3;
      fVar8 = (float10)fVar2;
      fVar9 = (float10)fVar3;
      if (fVar8 - (float10)fVar1 < fVar9) {
        (*(float *)(gen_frame + 0x0)) = fVar5;
        (*(float *)(gen_frame + 0x4)) = 0.0;
        pfVar6 = &(*(float *)&gen_args[1]);
        fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (fVar8 - fVar9))));
        (*(float *)&gen_args[1]) = fVar1;
        if (!((float10)fVar1 < fVar4)) {
          pfVar6 = &(*(float *)(gen_frame + 0x0));
        }
        if (!(0.0 < *pfVar6)) {
          pfVar6 = &(*(float *)(gen_frame + 0x4));
        }
        (*(float *)&gen_args[1]) = *pfVar6;
      }
    }
    fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x28);
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar1 = (float)(fVar7 / fVar8);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)((*(int *)&gen_args[0]) + 0x14))));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar7 = (float10)fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x38) * fVar7 +
                   (float10)((float)GEN_TOF((fVar7 * (float10)(*(float *)&gen_args[1]) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x24)))))));
    *(float *)((*(int *)&gen_args[0]) + 0x24) = fVar1;
    if ((((!GEN_ISNAN((float10)fVar1) && !GEN_ISNAN(fVar4)) && !((float10)fVar1 <= fVar4)) ||
        (!GEN_ISNAN(fVar1) && !(0.0 <= fVar1))) || (fVar8 < (float10)*(float *)((*(int *)&gen_args[0]) + 0x34))) {
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x34) = 0;
      if (*(char *)((*(int *)&gen_args[0]) + 0x1c) != '\0') {
        if (!(fVar1 < 0.0)) {
          *(undefined4 *)((*(int *)&gen_args[0]) + 0x24) = 0;
          return 0;
        }
        *(float *)((*(int *)&gen_args[0]) + 0x24) = fVar5;
        return 0;
      }
      *(undefined4 *)((*(int *)&gen_args[0]) + 0xc) = 9;
      pfVar6 = (float *)((*(int *)&gen_args[0]) + 0x24);
      fVar1 = *pfVar6;
      fVar2 = *pfVar6;
      fVar3 = *pfVar6;
      (*(float *)&gen_args[1]) = fVar5;
      (*(float *)(gen_frame + 0x0)) = 0.0;
      pfVar6 = (float *)((*(int *)&gen_args[0]) + 0x24);
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar1)) || (fVar5 < fVar3 || fVar5 == fVar2)) {
        pfVar6 = &(*(float *)&gen_args[1]);
      }
      if (!(0.0 < *pfVar6)) {
        pfVar6 = &(*(float *)(gen_frame + 0x0));
      }
      *(float *)((*(int *)&gen_args[0]) + 0x24) = *pfVar6;
    }
  }
  return 0;
}

/* ref: FUN_005e3ff0 */
unsigned int F_005e3ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e3ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_005dd120((int)this + 0x98,*(float *)((int)this + 0x70),*(float *)((int)this + 0x84),
                 *(float *)((int)this + 0x78),*(float *)((int)this + 0x8c));
  }
  if ((param_1 & 2) != 0) {
    F_005dd120((int)this + 0xa8,*(float *)((int)this + 0x74),*(float *)((int)this + 0x88),
                 *(float *)((int)this + 0x78),*(float *)((int)this + 0x8c));
  }
  if ((param_1 & 4) != 0) {
    F_005dd120((int)this + 0xb8,*(float *)((int)this + 0x7c),*(float *)((int)this + 0x90),
                 *(float *)((int)this + 0x80),*(float *)((int)this + 0x94));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf19 */
uint F_005e40b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e40b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x11]);
    uVar2 = F_00a1b870(local_8,uVar2);
    if (((uVar2 != 0) && (*(int *)(uVar2 + 0x7c) == 0)) &&
       (piVar1 = *(int * PTR32 *)(uVar2 + 0xf0), uVar2 = 0, piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1);
    }
  }
  return uVar2;
}

